

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h" // Necessary base class for BPLibrary
#include "UnrealDBLibrary.generated.h"

// --- 1. DATA STRUCTURE ---
USTRUCT(BlueprintType)
struct FNoSQLDocument
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Category="UnrealDB")
	FString DocumentId;
	UPROPERTY(BlueprintReadWrite, Category="UnrealDB")
	TMap<FString, FString> Fields;
	FNoSQLDocument() : DocumentId(TEXT("")), Fields() {}
};

// --- 2. ASYNC CALLBACK DELEGATES ---
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDocumentFound, const FNoSQLDocument&, ResultDocument);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnQueryFailed, const FString&, ErrorMessage);

// --- 3. BLUEPRINT FUNCTION LIBRARY ---
UCLASS()
class UNREALDB_API UUnrealDBLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static void FindSingleDocument(
	UObject* WorldContextObject,
	const FString& CollectionName,
	const FString& QueryField,
	const FString& QueryValue,
	struct FLatentActionInfo LatentInfo, // Don't forget this required latent parameter
	FOnDocumentFound OnSuccess,
	FOnQueryFailed OnFailure);
};