// Fill out your copyright notice in the Description page of Project Settings.


#include "newActor.h"

// Sets default values
AnewActor::AnewActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AnewActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AnewActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT(" test "));
	GEngine->AddOnScreenDebugMessage(0, 1.f, FColor::Red, TEXT("This is a test"));
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("This is a test"));

}

