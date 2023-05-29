// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FHiKVisionModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;


	void* OpenCvDllHandle;
	void* OpenCvffmpegDllHandle;
	void* OpenCvMsmfDllHandle;

};
