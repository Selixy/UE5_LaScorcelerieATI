// Fill out your copyright notice in the Description page of Project Settings.

#include "CPP_LibrarySpel.h"

void ULibrarySpel::CastAbility(
    FName AbilityName,
    FVector StartLocation,
    FVector EndLocation,
    float TimeCharging,
    UObject* Caster
)
{
    // Vérification de validité du Caster
    if (!Caster)
    {
        UE_LOG(LogTemp, Warning, TEXT("ExecuteAbility: Caster is null!"));
        return;
    }

    // Log des paramètres reçus pour vérification
    UE_LOG(LogTemp, Log, TEXT("Ability: %s, Start: %s, End: %s, TimeCharging: %f"),
        *AbilityName.ToString(),
        *StartLocation.ToString(),
        *EndLocation.ToString(),
        TimeCharging
    );
}
