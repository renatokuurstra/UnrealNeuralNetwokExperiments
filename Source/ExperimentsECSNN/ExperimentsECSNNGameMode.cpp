// Copyright (c) 2025 Renato Kuurstra. Licensed under the MIT License. See LICENSE file in the project root for details.

#include "ExperimentsECSNNGameMode.h"
#include "ExperimentsECSNNPlayerController.h"

AExperimentsECSNNGameMode::AExperimentsECSNNGameMode()
{
	PlayerControllerClass = AExperimentsECSNNPlayerController::StaticClass();
}
