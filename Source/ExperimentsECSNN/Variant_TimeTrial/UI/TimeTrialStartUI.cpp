// Copyright (c) 2025 Renato Kuurstra. Licensed under the MIT License. See LICENSE file in the project root for details.


#include "TimeTrialStartUI.h"

void UTimeTrialStartUI::StartCountdown()
{
	// pass control to BP
	BP_StartCountdown();
}

void UTimeTrialStartUI::FinishCountdown()
{
	// broadcast the delegate
	OnCountdownFinished.Broadcast();
}
