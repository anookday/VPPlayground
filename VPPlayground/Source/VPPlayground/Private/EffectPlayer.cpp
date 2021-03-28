// Fill out your copyright notice in the Description page of Project Settings.


#include "EffectPlayer.h"

#include "Kismet/GameplayStatics.h"


// Sets default values for this component's properties
UEffectPlayer::UEffectPlayer()
{
}


// Called when the game starts
void UEffectPlayer::BeginPlay()
{
	Super::BeginPlay();

	if (!VisualEffect)
	{
		UE_LOG(LogTemp, Warning, TEXT("No visual effect assigned to %s"), *GetName());
	}
	if (!AudioEffect)
	{
		UE_LOG(LogTemp, Warning, TEXT("No audio effect assigned to %s"), *GetName());
	}
}

void UEffectPlayer::PlayEffects()
{
	if (VisualEffect)
	{
		if (FollowTarget)
		{
			UGameplayStatics::SpawnEmitterAttached(VisualEffect, this);
		}
		else
		{
			UGameplayStatics::SpawnEmitterAtLocation(this, VisualEffect, GetComponentLocation(), GetComponentRotation());
		}
	}
	if (AudioEffect)
	{
		UGameplayStatics::PlaySoundAtLocation(this, AudioEffect, GetComponentLocation());
	}
}
