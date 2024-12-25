// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "LaserWorldSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class SLEIMAN_TD_THESIS_API ULaserWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
    // Array to store references to actor classes
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laser Actors")
    TArray<TSubclassOf<AActor>> LaserActorClasses;
};
