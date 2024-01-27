// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

UCLASS()
class CHICKENGUN_API AWeaponBase : public AActor
{
	GENERATED_BODY()


public:	
	// Sets default values for this actor's properties
	AWeaponBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float damage = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float knockback = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	TSubclassOf<AActor> bullet;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	//Sound

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
