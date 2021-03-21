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
	UPROPERTY(EditAnywhere, Category = "Physics")
	float Velocity = 2000.f;
	UPROPERTY(EditAnywhere, Category = "Physics")
	float UpwardForce = 2.f;
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* HitParticle = nullptr;
	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* HitSound = nullptr;
	// FUNCTIONS	
	void InitOwnerConfig();
	UFUNCTION()
	void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
	void PlayEffects() const;
	void Launch(AActor* ActorToLaunch, FVector Impulse) const;

public:	
	// Sets default values for this component's properties
	ULaunchable();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
		
};
