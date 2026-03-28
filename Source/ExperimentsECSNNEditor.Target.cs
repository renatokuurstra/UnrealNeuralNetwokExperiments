// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ExperimentsECSNNEditorTarget : TargetRules
{
	public ExperimentsECSNNEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V6;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_6;
		//bOverrideBuildEnvironment = true; 
		ExtraModuleNames.Add("ExperimentsECSNN");
	}
}
