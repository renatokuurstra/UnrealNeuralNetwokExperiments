// Copyright (c) 2025 Renato Kuurstra. Licensed under the MIT License. See LICENSE file in the project root for details.


#include "TimeTrialGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "TimeTrialTrackGate.h"
#include "Engine/World.h"

void ATimeTrialGameMode::BeginPlay()
{
	Super::BeginPlay();

	// get the finish line marker
	TArray<AActor*> ActorList;

	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ATimeTrialTrackGate::StaticClass(), FinishTag, ActorList);

	if (ActorList.Num() > 0)
	{
		// get the first returned track marker that matches the tag
		FinishLineMarker = Cast<ATimeTrialTrackGate>(ActorList[0]);
	}

}

ATimeTrialTrackGate* ATimeTrialGameMode::GetFinishLine() const
{
	return FinishLineMarker;
}
