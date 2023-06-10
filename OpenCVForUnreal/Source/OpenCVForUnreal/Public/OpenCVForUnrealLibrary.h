// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"



#if PLATFORM_WINDOWS
#define OPENCVFORUNREAL_INCLUDES_START THIRD_PARTY_INCLUDES_START \
__pragma(warning(disable: 4190))  // 'identifier1' has C-linkage specified, but returns UDT 'identifier2' which is incompatible with C
__pragma(warning(disable: 6297))  // Arithmetic overflow:  32-bit value is shifted, then cast to 64-bit value.  Results might not be an expected value.
__pragma(warning(disable: 6294))  // Ill-defined for-loop:  initial condition does not satisfy test.  Loop body not executed.
__pragma(warning(disable: 6201))  // Index '<x>' is out of valid index range '<a>' to '<b>' for possibly stack allocated buffer '<variable>'.
__pragma(warning(disable: 4005))
UE_PUSH_MACRO("check")
#else
	// TODO: when adding support for other platforms, this definition may require updating
#define OPENCVFORUNREAL_INCLUDES_START THIRD_PARTY_INCLUDES_START UE_PUSH_MACRO(check)
#endif

#define OPENCVFORUNREAL_INCLUDES_END THIRD_PARTY_INCLUDES_END UE_POP_MACRO("check")

	OPENCVFORUNREAL_INCLUDES_START
#include "Runtime/Core/Public/Windows/AllowWindowsPlatformTypes.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Runtime/Core/Public/Windows/HideWindowsPlatformTypes.h"

		OPENCVFORUNREAL_INCLUDES_END
