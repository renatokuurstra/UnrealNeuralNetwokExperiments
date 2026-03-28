// Copyright (c) 2025 Renato Kuurstra. Licensed under the MIT License. See LICENSE file in the project root for details.

#include "ExperimentsECSNNWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UExperimentsECSNNWheelRear::UExperimentsECSNNWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}
