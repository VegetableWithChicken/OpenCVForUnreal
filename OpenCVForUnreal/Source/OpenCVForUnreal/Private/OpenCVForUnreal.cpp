// Copyright Epic Games, Inc. All Rights Reserved.

#include "OpenCVForUnreal.h"
#include "Interfaces/IPluginManager.h"





void FOpenCVForUnrealModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	//FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("OpenColorIO"))->GetBaseDir(), TEXT("Shaders"));

}

void FOpenCVForUnrealModule::ShutdownModule()
{

}



#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FOpenCVForUnrealModule,OpenCVForUnreal)