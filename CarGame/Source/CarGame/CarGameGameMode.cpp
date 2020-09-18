// Copyright Epic Games, Inc. All Rights Reserved.

#include "CarGameGameMode.h"
#include "CarGamePawn.h"
#include "CarGameHud.h"

ACarGameGameMode::ACarGameGameMode()
{
	DefaultPawnClass = ACarGamePawn::StaticClass();
	HUDClass = ACarGameHud::StaticClass();
}
