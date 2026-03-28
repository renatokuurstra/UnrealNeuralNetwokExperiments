// Copyright (c) 2025 Renato Kuurstra. Licensed under the MIT License. See LICENSE file in the project root for details.

using UnrealBuildTool;

public class ExperimentsECSNN : ModuleRules
{
	public ExperimentsECSNN(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"ChaosVehicles",
			"PhysicsCore",
			"UMG",
			"Slate",
			"SimpleMLInterfaces"
		});

		PublicIncludePaths.AddRange(new string[] {
			"ExperimentsECSNN",
			"ExperimentsECSNN/SportsCar",
			"ExperimentsECSNN/OffroadCar",
			"ExperimentsECSNN/Variant_Offroad",
			"ExperimentsECSNN/Variant_TimeTrial",
			"ExperimentsECSNN/Variant_TimeTrial/UI"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
