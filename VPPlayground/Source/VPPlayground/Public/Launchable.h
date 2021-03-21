// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Launchable.generated.h"


UCLASS(Blueprintable)
class VPPLAYGROUND_API ULaunchable : public UActorComponent
{
	GENERATED_BODY()
	
private:
	// VARIABLES
	bool HasLaunched = false;
	// CONFIGURABLE PROPERTIES
	UPROPERTY(EditAnywhere, Category = "General")
	bool RemoveActorAfterLaunch = false;
	UPROPERTY(EditAnywhere, Category = "General")
	float RemoveDelay = 0.f;
	UPROPERTY(EditAnywhere, Category = "General")
	bool EnableRagdoll = true;
	UPROPERTY(EditAnywhere, Category = "Direction", meta = (ClampMin = "0.0", ClampMax = "360.0", UMin = "0.0", Umax = "360.0"))
	float LaunchAngle = 180.f;
	UPROPERTY(EditAnywhere, Category = "Direction")
	float Velocity = 500.f;
	UPROPERTY(EditAnywhere, Category = "Direction")
	float UpwardForce = 1000.f;
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* HitParticle = nullptr;
	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* HitSound = nullptr;
	// FUNCTIONS	
	void InitOwnerConfig();
	UFUNCTION()
	void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
	UFUNCTION(BlueprintCallable, Category = "Launch Effects")
	void PlayEffects() const;
	FVector GetImpulse(AActor* ActorToLaunch) const;
	UFUNCTION(BlueprintCallable, Category = "Launch Owner")
	void Launch() const;

public:	
	// Sets default values for this component's properties
	ULaunchable();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
		
};
