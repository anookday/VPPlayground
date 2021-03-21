// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"

#include "Grabbable.h"
#include "Animation/SkeletalMeshActor.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	PrimaryComponentTick.bCanEverTick = false;

}

// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	OnComponentBeginOverlap.AddDynamic(this, &UGrabber::OnGrab);	
}

void UGrabber::OnGrab(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!Grabbed && OtherActor->GetComponentByClass(UGrabbable::StaticClass()))
	{
		if (ACharacter* Character = Cast<ACharacter>(OtherActor))
		{
			Character->GetCharacterMovement()->DisableMovement();
		}
		OtherActor->SetOwner(GetOwner());
		OtherActor->AttachToComponent(this, FAttachmentTransformRules::KeepWorldTransform);
		Grabbed = true;
	}
}

