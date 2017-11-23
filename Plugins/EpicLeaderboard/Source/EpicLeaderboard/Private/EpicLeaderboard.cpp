// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "EpicLeaderboardPrivatePCH.h"

#include "EpicLeaderboardObject.h"



class FEpicLeaderboard : public IEpicLeaderboard
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FEpicLeaderboard, EpicLeaderboard )


void FEpicLeaderboard::StartupModule()
{
	UEpicLeaderboardObject::StaticClass();
}


void FEpicLeaderboard::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}



