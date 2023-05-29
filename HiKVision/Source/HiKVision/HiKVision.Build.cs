// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
using System;
using System.Collections.Generic;



public class HiKVision : ModuleRules
{
    public HiKVision(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        // string str = Environment.GetEnvironmentVariable("EpicSourceDir");
      //  Type = ModuleType.External;
        PublicIncludePaths.AddRange(
            new string[] {
				// ... add public include paths required here ...

                Path.Combine(ModuleDirectory, "Public"),
                Path.Combine(ModuleDirectory,"../../ThirdParty/OpenCVLibrary/include"),

            }
            );


        PrivateIncludePaths.AddRange(
            new string[] {
				// ... add other private include paths required here ...
                Path.Combine(ModuleDirectory, "Private")

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
				"OpenCV_470"
				// ... add private dependencies that you statically link with here ...	
			}
            );

     

    }
}
