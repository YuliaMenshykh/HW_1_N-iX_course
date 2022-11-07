// Fill out your copyright notice in the Description page of Project Settings.


#include "Disappearing.h"

// Sets default values
ADisappearing::ADisappearing()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SampleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SampleMesh"));
}

// Called when the game starts or when spawned
void ADisappearing::BeginPlay()
{
	InitialLifeSpan = spawnTime;
	Super::BeginPlay();
	
}

// Called every frame
void ADisappearing::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

