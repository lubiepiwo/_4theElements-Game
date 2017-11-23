// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Runtime/Online/HTTP/Public/Http.h"

#include "EpicLeaderboardObject.generated.h"


USTRUCT(BlueprintType)
struct FEpicLeaderboardEntry
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString username;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString score;
};
 

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEpicLeaderboardResponse, UEpicLeaderboardObject*, Leaderboard);

UCLASS(BlueprintType)
class UEpicLeaderboardObject : public UObject
{
	GENERATED_BODY()

public:
	UEpicLeaderboardObject(const FObjectInitializer& ObjectInitializer);


	//Utilities
	UFUNCTION(BlueprintCallable, Category = "EpicLeaderboard|Utilities")
	static FString CleanupName(FString name);

	//Delegates
	UPROPERTY(BlueprintAssignable, Category = "EpicLeaderboard|Delegates")
	FEpicLeaderboardResponse OnSuccess;

	UPROPERTY(BlueprintAssignable, Category = "EpicLeaderboard|Delegates")
	FEpicLeaderboardResponse OnFailure;


	//Properties
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EpicLeaderboard|Properties")
	FString ID;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EpicLeaderboard|Properties")
	FString Key;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "EpicLeaderboard|Properties")
	TArray<FEpicLeaderboardEntry> LeaderboardEntries;


	//methods
	UFUNCTION(BlueprintCallable, Category = "EpicLeaderboard|Leaderboard")
	void UpdateLeaderboard();

	UFUNCTION(BlueprintCallable, Category = "EpicLeaderboard|Leaderboard")
	void SubmitScore(FString username, float score);

	//leaderboard access
	UFUNCTION(BlueprintCallable, Category = "EpicLeaderboard|Leaderboard")
	static UEpicLeaderboardObject* GetEpicLeaderboard(FString leaderboardID, FString leaderboardKey);

private:

	//callbacks
	void OnHighscoreResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	void OnScoreSubmitResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
