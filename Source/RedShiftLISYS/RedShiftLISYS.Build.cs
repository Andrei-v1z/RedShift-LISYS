// Copyright Andrei / RedShift. All Rights Reserved.

using UnrealBuildTool;

public class RedShiftLISYS : ModuleRules
{
	public RedShiftLISYS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"HTTP",
			"Json",
			"JsonUtilities"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });
	}
}
