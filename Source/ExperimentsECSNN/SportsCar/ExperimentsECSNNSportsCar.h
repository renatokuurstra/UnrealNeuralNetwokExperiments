// Copyright (c) 2025 Renato Kuurstra. Licensed under the MIT License. See LICENSE file in the project root for details.

#pragma once

#include "CoreMinimal.h"
#include "ExperimentsECSNNPawn.h"
#include "ExperimentsECSNNSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class AExperimentsECSNNSportsCar : public AExperimentsECSNNPawn
{
	GENERATED_BODY()
	
public:

	AExperimentsECSNNSportsCar();
};
