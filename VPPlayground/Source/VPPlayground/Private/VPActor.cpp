// Fill out your copyright notice in the Description page of Project Settings.


#include "VPActor.h"
#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"

// Sets default values
AVPActor::AVPActor()
{
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	RootComponent = Root;
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Forward Direction"));
	Arrow->SetupAttachment(Root);
	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collision"));
	Capsule->SetupAttachment(Root);
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Capsule);
}
