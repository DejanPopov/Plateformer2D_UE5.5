// Fill out your copyright notice in the Description page of Project Settings.


#include "Plateformer2DCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

APlateformer2DCharacter::APlateformer2DCharacter()
{
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComponent->SetupAttachment(RootComponent);

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(SpringArmComponent);

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SceneComponent->SetupAttachment(RootComponent);
}

void APlateformer2DCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APlateformer2DCharacter::EnhancedMove(const FInputActionValue& Value)
{
}

void APlateformer2DCharacter::EnhancedJump(const FInputActionValue& Value)
{
}
