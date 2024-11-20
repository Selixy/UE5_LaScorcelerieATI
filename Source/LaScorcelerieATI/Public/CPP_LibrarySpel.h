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
class LASCORCELERIEATI_API UCPP_LibrarySpel : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "DataTable")
	static bool GetRowFromDataTable(UDataTable* DataTable, FName RowName, FTableRowBase& OutRow);
};

