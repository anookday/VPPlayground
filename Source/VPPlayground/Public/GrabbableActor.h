// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GrabbableActor.generated.h"

class UBoxComponent;

UCLASS()
class VPPLAYGROUND_API AGrabbableActor : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;
	UPROPERTY(EditAnywhere)
	UBoxComponent* Collision;
	UPROPERTY(EditAnywhere, Category = "Components")
	UStaticMeshComponent* Mesh;
	
public:	
	// Sets default values for this actor's properties
	AGrabbableActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
