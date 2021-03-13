// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "Grabber.generated.h"

UCLASS(Blueprintable)
class VPPLAYGROUND_API UGrabber : public USphereComponent
{
	GENERATED_BODY()

private:
	// VARIABLES
	float InitialGrabRadius = 10.f;
	bool Grabbed = false;
	// FUNCTIONS
	UFUNCTION()	
	void OnGrab(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:	
	// Sets default values for this component's properties
	UGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
		
};
