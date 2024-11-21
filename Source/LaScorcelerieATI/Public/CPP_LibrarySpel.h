// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "CPP_LibrarySpel.generated.h"

/**
 *
 */
UCLASS()
class LASCORCELERIEATI_API ULibrarySpel : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    // Fonction accessible dans les Blueprints
    UFUNCTION(BlueprintCallable, Category = "Abilities")
    static void CastAbility(
        FName AbilityName,
        FVector StartLocation,
        FVector EndLocation,
        float TimeCharging,
        UObject* Caster
    );
};