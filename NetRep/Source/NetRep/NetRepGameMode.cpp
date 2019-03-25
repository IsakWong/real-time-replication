// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "NetRepGameMode.h"
#include "NetRepPlayerController.h"
#include "UObject/ConstructorHelpers.h"

ANetRepGameMode::ANetRepGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ANetRepPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}