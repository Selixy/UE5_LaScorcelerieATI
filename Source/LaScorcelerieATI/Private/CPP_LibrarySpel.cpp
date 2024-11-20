// Fill out your copyright notice in the Description page of Project Settings.

#include "CPP_LibrarySpel.h"

bool UCPP_LibrarySpel::GetRowFromDataTable(UDataTable* DataTable, FName RowName, FTableRowBase& OutRow)
{
	if (!DataTable)
	{
		UE_LOG(LogTemp, Warning, TEXT("DataTable is null"));
		return false;
	}

	FTableRowBase* FoundRow = DataTable->FindRow<FTableRowBase>(RowName, TEXT(""));
	if (FoundRow)
	{
		OutRow = *FoundRow;
		return true;
	}

	UE_LOG(LogTemp, Warning, TEXT("Row not found in DataTable"));
	return false;
}