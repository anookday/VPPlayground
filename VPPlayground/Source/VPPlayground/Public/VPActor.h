// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VPActor.generated.h"

class USceneComponent;
class UCapsuleComponent;
class USkeletalMeshComponent;
class UArrowComponent;

UCLASS(Blueprintable)
class VPPLAYGROUND_API AVPActor : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	USceneComponent* Root;
	UPROPERTY()
	UArrowComponent* Arrow;
	UPROPERTY(EditAnywhere)
	UCapsuleComponent* Capsule;
	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* Mesh;
	
	
public:	
	AVPActor();
	USceneComponent* GetRoot() const { return Root; }
	UCapsuleComponent* GetCapsule() const { return Capsule; }
	USkeletalMeshComponent* GetMesh() const { return Mesh; }

};
