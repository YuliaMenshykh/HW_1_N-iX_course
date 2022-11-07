// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Disappearing.generated.h"

UCLASS()
class FIRSTHW_API ADisappearing : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADisappearing();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* SampleMesh;
	UPROPERTY(EditAnywhere)
	float spawnTime = 5.0f;
};
