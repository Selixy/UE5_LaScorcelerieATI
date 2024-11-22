// CPP_LibrarySpel.h

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpelDefinitions.h"
#include "CPP_LibrarySpel.generated.h"

/**
 * Classe qui contient des fonctions utilitaires pour les capacités, accessible dans les Blueprints
 */
UCLASS()
class LASCORCELERIEATI_API ULibrarySpel : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    // Fonction accessible dans les Blueprints
    UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Abilities")
    static void CastAbility(
        const FAbilityData AbilityData,
        const FVector StartLocation,
        const FVector EndLocation,
        float TimeCharging,
        UObject* Caster
    );

};
