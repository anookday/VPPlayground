// Fill out your copyright notice in the Description page of Project Settings.


#include "Launchable.h"


#include "Launcher.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/StaticMeshActor.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
ULaunchable::ULaunchable()
{
	PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void ULaunchable::BeginPlay()
{
	Super::BeginPlay();

	InitOwnerConfig();
}

void ULaunchable::InitOwnerConfig()
{
	UE_LOG(LogTemp, Warning, TEXT("InitOwner called"));
	// enable launch on hit event
	GetOwner()->OnActorHit.AddDynamic(this, &ULaunchable::OnHit);

	// set ACharacter-specific settings
	if (ACharacter* Character = Cast<ACharacter>(GetOwner()))
	{
		Character->GetCapsuleComponent()->SetSimulatePhysics(true);
		Character->GetCapsuleComponent()->SetNotifyRigidBodyCollision(true);
		Character->GetMesh()->SetCollisionProfileName(TEXT("Ragdoll"));
	}
	// set AStaticMeshActor-specific settings
	else if (AStaticMeshActor* StaticMesh = Cast<AStaticMeshActor>(GetOwner()))
	{
		StaticMesh->GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
		StaticMesh->GetStaticMeshComponent()->SetSimulatePhysics(true);
		StaticMesh->GetStaticMeshComponent()->SetNotifyRigidBodyCollision(true);
	}

}

void ULaunchable::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	// check if OtherActor is allowed to trigger launch event
	if (!HasLaunched && OtherActor->GetComponentByClass(ULauncher::StaticClass()))
	{
		PlayEffects();
		Launch(SelfActor, NormalImpulse);
		HasLaunched = true;
	}
}

void ULaunchable::PlayEffects() const
{
	if (HitParticle)
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, HitParticle, GetOwner()->GetActorLocation());
	}
	if (HitSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, HitSound, GetOwner()->GetActorLocation());
	}
}

void ULaunchable::Launch(AActor* ActorToLaunch, FVector Impulse) const
{
	// calculate launch trajectory
	Impulse.Normalize();
	Impulse.Z += UpwardForce;
	Impulse = Impulse * Velocity;
	// launch logic for ACharacter
	if (ACharacter* Character = Cast<ACharacter>(ActorToLaunch))
	{
		// enable ragdoll physics
		Character->GetCharacterMovement()->DisableMovement();
		Character->GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		Character->GetMesh()->SetAllBodiesSimulatePhysics(true);
		// launch mesh to trajectory
		float Mass = Character->GetMesh()->GetMass();
		Character->GetMesh()->AddImpulse(Impulse * Mass);
		// disable capsule collision after launch
		Character->GetCapsuleComponent()->SetSimulatePhysics(false);
		Character->GetCapsuleComponent()->SetCollisionProfileName(TEXT("NoCollision"));
	}
	// launch logic for AStaticMeshActor
	else if (AStaticMeshActor* StaticMesh = Cast<AStaticMeshActor>(ActorToLaunch))
	{
		float Mass = StaticMesh->GetStaticMeshComponent()->GetMass();
		StaticMesh->GetStaticMeshComponent()->AddImpulse(Impulse * Mass);
	}
	// remove actor from game after launch
	if (RemoveActorAfterLaunch)
	{
		ActorToLaunch->SetLifeSpan(RemoveDelay);
	}
}
