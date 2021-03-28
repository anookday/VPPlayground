// Fill out your copyright notice in the Description page of Project Settings.


#include "Launchable.h"



#include "EffectPlayer.h"
#include "Launcher.h"
#include "Animation/SkeletalMeshActor.h"
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

	GetOwner()->OnActorBeginOverlap.AddDynamic(this, &ULaunchable::OnBeginOverlap);
}

void ULaunchable::OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (!HasLaunched && OverlappedActor != OtherActor && OtherActor->GetComponentByClass(ULauncher::StaticClass()))
	{
		Launch();
		HasLaunched = true;
	}
	
}

FVector ULaunchable::GetImpulse(AActor* ActorToLaunch) const
{
	FVector Impulse {0, 0, 0};
	if (ACharacter* Character = Cast<ACharacter>(ActorToLaunch))
	{
		// calculate forward trajectory
		FRotator const MeshRotationOffset = Character->GetBaseRotationOffsetRotator();
		Impulse = MeshRotationOffset.GetInverse().RotateVector(Character->GetMesh()->GetForwardVector());
		// rotate vector based on given launch angle
		Impulse = Impulse.RotateAngleAxis(LaunchAngle, Character->GetMesh()->GetUpVector());
	}
	else if (AStaticMeshActor* StaticMesh = Cast<AStaticMeshActor>(ActorToLaunch))
	{
		Impulse = StaticMesh->GetStaticMeshComponent()->GetForwardVector();
		Impulse = Impulse.RotateAngleAxis(LaunchAngle, StaticMesh->GetStaticMeshComponent()->GetUpVector());
	}
	else if (ASkeletalMeshActor* SkeletalMesh = Cast<ASkeletalMeshActor>(ActorToLaunch))
	{
		FRotator const MeshRotationOffset = SkeletalMesh->GetSkeletalMeshComponent()->GetRelativeRotation();
		Impulse = MeshRotationOffset.GetInverse().RotateVector(SkeletalMesh->GetSkeletalMeshComponent()->GetForwardVector());
		Impulse = Impulse.RotateAngleAxis(LaunchAngle, SkeletalMesh->GetSkeletalMeshComponent()->GetUpVector());
	}
	Impulse = Impulse * Velocity;
	Impulse.Z += UpwardForce;

	return Impulse;
}

void ULaunchable::Launch() const
{
	AActor* ActorToLaunch = GetOwner();
	if (!ActorToLaunch) return;
	// calculate launch impulse
	FVector const Impulse = GetImpulse(ActorToLaunch);
	// launch logic for ACharacter
	if (ACharacter* Character = Cast<ACharacter>(ActorToLaunch))
	{
		if (EnableRagdoll)
		{
			// enable ragdoll physics
			Character->GetCharacterMovement()->DisableMovement();
			Character->GetMesh()->SetCollisionProfileName(TEXT("Ragdoll"));
			Character->GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			Character->GetMesh()->SetAllBodiesSimulatePhysics(true);
			// launch mesh to trajectory
			Character->GetMesh()->AddImpulse(Impulse * Character->GetMesh()->GetMass());
			// disable capsule collision after launch
			Character->GetCapsuleComponent()->SetSimulatePhysics(false);
			Character->GetCapsuleComponent()->SetCollisionProfileName(TEXT("NoCollision"));
		}
		else
		{
			Character->GetCapsuleComponent()->AddImpulse(Impulse * Character->GetCapsuleComponent()->GetMass());
		}
	}
	// launch logic for AStaticMeshActor
	else if (AStaticMeshActor* StaticMesh = Cast<AStaticMeshActor>(ActorToLaunch))
	{
		StaticMesh->GetStaticMeshComponent()->AddImpulse(Impulse * StaticMesh->GetStaticMeshComponent()->GetMass());
	}
	// launch logic for ASkeletalMeshActor
	else if (ASkeletalMeshActor* SkeletalMesh = Cast<ASkeletalMeshActor>(ActorToLaunch))
	{
		if (EnableRagdoll)
		{
			// enable ragdoll physics
			SkeletalMesh->GetSkeletalMeshComponent()->SetCollisionProfileName(TEXT("Ragdoll"));
			SkeletalMesh->GetSkeletalMeshComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		}
		// launch mesh to trajectory
		SkeletalMesh->GetSkeletalMeshComponent()->SetAllBodiesSimulatePhysics(true);
		SkeletalMesh->GetSkeletalMeshComponent()->AddImpulse(Impulse * SkeletalMesh->GetSkeletalMeshComponent()->GetMass());
	}
	// remove actor from game after launch
	if (RemoveActorAfterLaunch)
	{
		ActorToLaunch->SetLifeSpan(RemoveDelay);
	}
}
