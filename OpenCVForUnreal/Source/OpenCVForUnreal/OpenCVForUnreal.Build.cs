// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
using System;
using System.Collections.Generic;



public class OpenCVForUnreal : ModuleRules
{
    public OpenCVForUnreal(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[] {
				// ... add public include paths required here ...

                Path.Combine(ModuleDirectory, "Public"),

            }
            );


        PrivateIncludePaths.AddRange(
            new string[] {

            }
            );


        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                
				// ... add other public dependencies that you statically link with here ...
			}
            );


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "RenderCore",
                "Renderer",
                "RHI",
                "Projects",
                "UMG",
                "Json",
				"OpenCV"
				// ... add private dependencies that you statically link with here ...	
			}
            );

     

    }
}
