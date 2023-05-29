// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
using System;
using System.Collections.Generic;



public class OpenCV_470 : ModuleRules
{
    public OpenCV_470(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        // string str = Environment.GetEnvironmentVariable("EpicSourceDir");
       Type = ModuleType.External;
        PublicSystemIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));
  
        string PlatformDir = Target.Platform.ToString();
        string BinaryPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../../Binaries/ThirdParty", PlatformDir));
        string OPENCVDLLNAME = "opencv_world470.dll";
        string FFMPEGDDLName = "opencv_videoio_ffmpeg470_64.dll";
        string MSMFDDLName = "opencv_videoio_msmf470_64.dll";
        string HashDDLName = "opencv_img_hash470.dll";

        List<string> Dlls = new List<string>();

        Dlls.Add(OPENCVDLLNAME);
        Dlls.Add(MSMFDDLName);
        Dlls.Add(FFMPEGDDLName);

        PublicDelayLoadDLLs.AddRange(Dlls);


        PublicIncludePaths.AddRange(
            new string[] {
				// ... add public include paths required here ...
                 Path.Combine(ModuleDirectory, "include")
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
        


        //Child File
        // string HCNetSDKComPath = Path.Combine(HiKVisionPath, "Library", "HCNetSDKCom");

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            // Lib
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib", "x64", "opencv_world470.lib"));


            // Ensure that the DLLs are staged along with the executable
            // RuntimeDependencies.Add("$(PluginDir)/ThirdParty/OpenCVLibrary/dll/opencv_world470.dll");
            //PublicLibraryPaths.Add(OpenCVPath + "/dll/");

            
            
            foreach (string Dll in Dlls)
            {
                RuntimeDependencies.Add(Path.Combine(BinaryPath, Dll));
            }

            PublicDefinitions.AddRange(new[]
            {
                "WITH_OPENCV=1",
                "OPENCV_PLATFORM_PATH=Binaries/" + PlatformDir,
                "OPENCV_DLL_NAME=" + OPENCVDLLNAME,
                "OPENCV_FFMPEG_DLL_NAME=" + FFMPEGDDLName,
                "OPENCV_MSMF_DLL_NAME=" + MSMFDDLName,
            });

        }


    }
}
