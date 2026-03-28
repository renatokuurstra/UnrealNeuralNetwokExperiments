// Copyright (c) 2025 Renato Kuurstra. Licensed under the MIT License. See LICENSE file in the project root for details.

#include "ExperimentsECSNNWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UExperimentsECSNNWheelFront::UExperimentsECSNNWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}
