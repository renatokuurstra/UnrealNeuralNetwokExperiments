// Copyright (c) 2025 Renato Kuurstra. Licensed under the MIT License. See LICENSE file in the project root for details.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "OffroadGameMode.generated.h"

/**
 *  Simple GameMode for an offroad vehicle game
 */
UCLASS(abstract)
class AOffroadGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	/** Constructor */
	AOffroadGameMode();
};
