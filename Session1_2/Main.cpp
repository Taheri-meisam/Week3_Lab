// Fill out your copyright notice in the Description page of Project Settings.


#include "Main.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
AMain::AMain()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the Mesh 
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	// Set the mesh as root component
	RootComponent = Mesh;

	// Create a SpringArm
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	// Attach to root component
	SpringArm->SetupAttachment(GetRootComponent());
	// Length of the springarm
	SpringArm->TargetArmLength = 1000.f;
	// Relative Rotation of the springarm
	SpringArm->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));

	// Create Camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	// Attach Camera to the socket of SpringArm
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void AMain::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMain::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("ChangeColor", IE_Pressed, this, &AMain::ChangeColor);
}


void AMain::ChangeColor()
{
	UE_LOG(LogTemp, Warning, TEXT("Enter Function"));
	Mesh->SetMaterial(0, Red);
}

