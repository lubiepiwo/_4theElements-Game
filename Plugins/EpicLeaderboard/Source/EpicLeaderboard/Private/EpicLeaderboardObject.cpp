// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "EpicLeaderboardPrivatePCH.h"
#include "EpicLeaderboardObject.h"

UEpicLeaderboardObject::UEpicLeaderboardObject(const FObjectInitializer& ObjectInitializer)
	: Super( ObjectInitializer )
{
	LeaderboardEntries = TArray<FEpicLeaderboardEntry>();
}

FString UEpicLeaderboardObject::CleanupName(FString name)
{
	//name limited to 20 chars
	name = name.Left(20);

	std::string s(TCHAR_TO_UTF8(*name));

	//remove special characters
	std::regex e("[^A-Za-z0-9]");

	std::string clean = std::regex_replace(s, e, std::string(""));

	return FString(clean.c_str());
}

void UEpicLeaderboardObject::UpdateLeaderboard()
{
	//setup the request
	FString url = FString::Printf(TEXT("http://EpicLeaderboard.com/api/getScores.php?accessID=%s"), *ID);

	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &UEpicLeaderboardObject::OnHighscoreResponseReceived);
	
	Request->SetURL(url);
	Request->SetVerb("GET");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-EpicLeaderboard");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	Request->ProcessRequest();
}

void UEpicLeaderboardObject::SubmitScore(FString username, float score)
{
	//cleanup the name
	username = CleanupName(username);

	//generate the key
	FString hashSource = FString::Printf(TEXT("%s%.3f%s"), *username, score, *Key);
	FString generatedKey = FMD5::HashAnsiString(*hashSource);

	//setup the request
	FString url = FString::Printf(TEXT("http://EpicLeaderboard.com/api/submitScore.php?accessID=%s&username=%s&score=%.3f&hash=%s"), *ID, *username, score, *generatedKey);

	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &UEpicLeaderboardObject::OnScoreSubmitResponseReceived);
	
	Request->SetURL(url);
	Request->SetVerb("GET");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-EpicLeaderboard");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	Request->ProcessRequest();
}

UEpicLeaderboardObject* UEpicLeaderboardObject::UEpicLeaderboardObject::GetEpicLeaderboard(FString ID, FString Key)
{
	UEpicLeaderboardObject* EpicLeaderboard = nullptr;

	EpicLeaderboard = NewObject<UEpicLeaderboardObject>();
	EpicLeaderboard->ID = ID;
	EpicLeaderboard->Key = Key;

	return EpicLeaderboard;
}

void UEpicLeaderboardObject::OnHighscoreResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (!bWasSuccessful)
	{
		OnFailure.Broadcast(this);
		return;
	}

	//decode highscores to array
	FJsonObjectConverter::JsonArrayStringToUStruct(Response->GetContentAsString(), &LeaderboardEntries, 0, 0);

	OnSuccess.Broadcast(this);
}

void UEpicLeaderboardObject::OnScoreSubmitResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (!bWasSuccessful)
	{
		OnFailure.Broadcast(this);
		return;
	}

	//score submitted now update the leaderboard
	UpdateLeaderboard();
}
