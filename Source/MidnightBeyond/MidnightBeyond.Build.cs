// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MidnightBeyond : ModuleRules
{
	public MidnightBeyond(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
