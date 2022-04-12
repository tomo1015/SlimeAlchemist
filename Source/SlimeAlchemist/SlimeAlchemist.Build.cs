// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SlimeAlchemist : ModuleRules
{
	public SlimeAlchemist(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
