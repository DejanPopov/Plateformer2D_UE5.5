// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Plateformer2DCharacter.generated.h"

/**
 * 
 */
UCLASS()
class PLATEFORMER2D_UE5_5_API APlateformer2DCharacter : public APaperCharacter
{
	GENERATED_BODY()

	// Constructor of the player
	APlateformer2DCharacter();

public:

	virtual void BeginPlay() override;

private:

	// This component tries to maintain its children at fixed distance from the parent
	// It is going to be attached to the camera
	UPROPERTY(VisibleAnywhere, Category = "Plateformer2D|Actor Component")
	class USpringArmComponent* SpringArmComponent;

	UPROPERTY(VisibleAnywhere, Category = "Plateformer2D|Actor Component")
	class UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, Category = "Plateformer2D|Actor Component")
	USceneComponent* SceneComponent;
};
