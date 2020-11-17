// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PawnBase.h"
#include "PawnTurret.generated.h"

class APawnTank;

UCLASS()
class TOONTANKS_API APawnTurret : public APawnBase
{
	GENERATED_BODY()

	private:
	void CheckFireCondition();

	float ReturnDistanceToPlayer();

	FTimerHandle FireRateTimerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat", meta = (AllowPrivateAccess = "true"))
	float FireRate = 2.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat", meta = (AllowPrivateAccess = "true"))
	float AttackRange = 500.f;
	
	APawnTank* PlayerPawn;

	public:
	//called every frame
	virtual void Tick(float DeltaSeconds) override;

	protected:
	//called at start or when spawned
	virtual void BeginPlay() override;
};
