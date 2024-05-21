// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ViewModelCppUE5 : ModuleRules
{
	public ViewModelCppUE5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
