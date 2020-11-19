// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnTurret.h"

#include "PawnTank.h"
#include "Kismet/GameplayStatics.h"

void APawnTurret::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!PlayerPawn || ReturnDistanceToPlayer() > AttackRange)
    {
        return;
    }

    RotateTurret(PlayerPawn->GetActorLocation());
}

void APawnTurret::BeginPlay()
{
    Super::BeginPlay();

    GetWorldTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireCondition, FireRate, true);

    PlayerPawn = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this,0));
}

void APawnTurret::CheckFireCondition()
{
    // If Player == nulll || is Dead THEN BAIL!!
    if(!PlayerPawn)
    {
        return;
    }

    //If Player IS in range THEN FIRE!!
    if(ReturnDistanceToPlayer() <= AttackRange)
    {
        Fire();
    }
}

float APawnTurret::ReturnDistanceToPlayer()
{
    if(!PlayerPawn)
    {
        return 0.f;
    }
    
    return FVector::Dist(PlayerPawn->GetActorLocation(), GetActorLocation());
}

void APawnTurret::HandleDestruction()
{
    Super::HandleDestruction();
    Destroy();
}

