// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacters.h"

// Sets default values
AMainCharacters::AMainCharacters()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainCharacters::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainCharacters::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacters::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMainCharacters::MoveForward(float AxisVal)
{
}

void AMainCharacters::MoveRight(float AxisVal)
{
}

