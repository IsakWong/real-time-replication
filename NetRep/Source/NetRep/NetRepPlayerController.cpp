// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "NetRepPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Engine/World.h"

ANetRepPlayerController::ANetRepPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void ANetRepPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}

void ANetRepPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}
