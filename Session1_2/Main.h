// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Main.generated.h"


class USpringArmComponent;
class UCameraComponent;
class UMaterial;

UCLASS()
class SESSION1_2_API AMain : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;

	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
	UMaterial* Red;


	void ChangeColor();

};
