// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EffectPlayer.generated.h"


UCLASS(Blueprintable)
class VPPLAYGROUND_API UEffectPlayer : public USceneComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* VisualEffect = nullptr;
	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* AudioEffect = nullptr;
	UPROPERTY(EditAnywhere, Category = "Location")
	bool FollowTarget = false;

public:	
	// Sets default values for this component's properties
	UEffectPlayer();
	UFUNCTION(BlueprintCallable, Category = "Effects")
	void PlayEffects();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
		
};
