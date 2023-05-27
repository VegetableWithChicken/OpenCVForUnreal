// Copyright Epic Games, Inc. All Rights Reserved.

#include "HiKVision.h"
#include "Interfaces/IPluginManager.h"


#define LOCTEXT_NAMESPACE "FHiKVisionModule"

void FHiKVisionModule::StartupModule()
{
	
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	//FString ShaderDirectory = FPaths::Combine(FPaths::ProfilingDir(), TEXT("Shaders"));
	FString OpenCVPath = FPaths::ProjectPluginsDir() + "HiKVision/Source/ThirdParty/OpenCVLibrary/dll/";
	OpenCvDllHandle = FPlatformProcess::GetDllHandle(*(OpenCVPath + "opencv_world470.dll"));
	OpenCvffmpegDllHandle= FPlatformProcess::GetDllHandle(*(OpenCVPath + "opencv_videoio_ffmpeg470_64.dll"));
	OpenCvMsmfDllHandle= FPlatformProcess::GetDllHandle(*(OpenCVPath + "opencv_videoio_msmf470_64.dll"));
}

void FHiKVisionModule::ShutdownModule()
{
	if (OpenCvDllHandle)
	{
		FPlatformProcess::FreeDllHandle(OpenCvDllHandle);
		OpenCvDllHandle = nullptr;
	}
	else if (OpenCvffmpegDllHandle) {
		FPlatformProcess::FreeDllHandle(OpenCvffmpegDllHandle);
		OpenCvffmpegDllHandle = nullptr;
	}
	else if (OpenCvMsmfDllHandle) {
		FPlatformProcess::FreeDllHandle(OpenCvMsmfDllHandle);
		OpenCvMsmfDllHandle = nullptr;
	}
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
    //Search project plugins folder for Dll
    

}



#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FHiKVisionModule, HiKVision)