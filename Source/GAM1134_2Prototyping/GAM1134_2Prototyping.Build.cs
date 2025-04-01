// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GAM1134_2Prototyping : ModuleRules
{
	public GAM1134_2Prototyping(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "ChaosVehicles", "PhysicsCore" });
	}
}
