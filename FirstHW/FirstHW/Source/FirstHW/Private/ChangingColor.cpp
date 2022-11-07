// Fill out your copyright notice in the Description page of Project Settings.


#include "ChangingColor.h"

// Sets default values
AChangingColor::AChangingColor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshForChangeColors = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshForChangingColors"));
}

// Called when the game starts or when spawned
void AChangingColor::BeginPlay()
{
	Super::BeginPlay();
	auto Material = MeshForChangeColors->GetMaterial(0);
	//MeshForChangeColors->SetMaterial(0, Material);
		
}

// Called every frame
void AChangingColor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	float blend = 0.5f + FMath::Cos(GetWorld()->TimeSeconds) / 2;
	
}

