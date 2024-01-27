// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ChickenPawn.generated.h"

class AWeaponBase;

UCLASS()
class CHICKENGUN_API AChickenPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AChickenPawn();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float health;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	TSubclassOf<AWeaponBase> initialWeapon;
	
	//AWeaponBase* currentWeapon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	TSubclassOf<AWeaponBase> currentWeapon;
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Default")
	void HandleShot();

	UFUNCTION(BlueprintCallable, Category = "Default")
	void Gazoomba();

	// Events
	UFUNCTION(BlueprintImplementableEvent, Category = "Default")
	void Shoot();
};
