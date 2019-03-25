// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NetRepPlayerController.generated.h"

UCLASS()
class ANetRepPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ANetRepPlayerController();

protected:
	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
};


