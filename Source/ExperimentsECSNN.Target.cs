// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ExperimentsECSNNTarget : TargetRules
{
	public ExperimentsECSNNTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_7;
		DefaultBuildSettings = BuildSettingsVersion.V6;
		ExtraModuleNames.Add("ExperimentsECSNN");
	}
}
