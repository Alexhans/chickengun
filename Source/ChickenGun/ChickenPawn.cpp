// Fill out your copyright notice in the Description page of Project Settings.


#include "ChickenPawn.h"
#include "WeaponBase.h"

// Sets default values
AChickenPawn::AChickenPawn() : health(100.0f)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// FVector pos(0, 0, 0);
	// FRotator rotation(0.0f);
	//AWeaponBase *some = world->SpawnActor<AWeaponBase>(initialWeapon, GetActorLocation(), GetActorRotation());;
	// UWorld* world = GetWorld();
		
	UE_LOG(LogTemp, Warning, TEXT("constructor"));


	//currentWeapon = NewObject<AWeaponBase>(this, initialWeapon->StaticClass());

}

// Called when the game starts or when spawned
void AChickenPawn::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("AChickenPawn says Hello World"));

	if (initialWeapon != nullptr) {
		// auto a = NewObject<AWeaponBase>(this, initialWeapon->StaticClass());
		currentWeapon = initialWeapon;
	}
	else {

		UE_LOG(LogTemp, Warning, TEXT("empty"));
	}
}

// Called every frame
void AChickenPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	this->health -= 0.10f;

}

// Called to bind functionality to input
void AChickenPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AChickenPawn::HandleShot()
{
}


