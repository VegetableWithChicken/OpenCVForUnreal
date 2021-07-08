// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
using System;



public class HiKVision : ModuleRules
{
    public HiKVision(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs; 
       // string str = Environment.GetEnvironmentVariable("EpicSourceDir");

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
                "UMG"
				// ... add private dependencies that you statically link with here ...	
			}
            );


        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
				// ... add any modules that your module loads dynamically here ...
			}
            );

        // Include Azure Kinect Sensor and Body Tracking SDKs
        string ThirdPartyPath = Path.Combine(ModuleDirectory, "../../ThirdParty");  //ModuleDirectory = Project/Plugins/AzureKinectUnreal/Source/AzureKinectUnreal
        string OpenCVPath = Path.Combine(ThirdPartyPath, "OpenCVLibrary");
   


        //Child File
       // string HCNetSDKComPath = Path.Combine(HiKVisionPath, "Library", "HCNetSDKCom");


        // Lib
        PublicAdditionalLibraries.AddRange(
            new string[]
            {
                Path.Combine(OpenCVPath,"lib","x64","opencv_world430.lib"),
 
            });

        // Ensure that the DLLs are staged along with the executable

        RuntimeDependencies.Add("$(PluginDir)/ThirdParty/OpenCVLibrary/dll/opencv_world430.dll");
        //First Main dll
    }
}
