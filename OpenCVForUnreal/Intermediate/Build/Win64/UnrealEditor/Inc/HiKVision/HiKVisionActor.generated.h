// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef HIKVISION_HiKVisionActor_generated_h
#error "HiKVisionActor.generated.h already included, missing '#pragma once' in HiKVisionActor.h"
#endif
#define HIKVISION_HiKVisionActor_generated_h

#define FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_SPARSE_DATA
#define FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_RPC_WRAPPERS
#define FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_EVENT_PARMS \
	struct HikVisionActor_eventShowCutImage_Parms \
	{ \
		UTexture2D* outRGB; \
	}; \
	struct HikVisionActor_eventShowDNNFaceImageArr_Parms \
	{ \
		TArray<UTexture2D*> RGBArr; \
	}; \
	struct HikVisionActor_eventShowFaceCount_Parms \
	{ \
		int32 Count; \
	}; \
	struct HikVisionActor_eventShowFaceImageArr_Parms \
	{ \
		TArray<UTexture2D*> RGBArr; \
	}; \
	struct HikVisionActor_eventShowImage_Parms \
	{ \
		UTexture2D* outRGB; \
		int32 Width; \
		int32 Height; \
	}; \
	struct HikVisionActor_eventShowNativeImage_Parms \
	{ \
		UTexture2D* outRGB; \
	}; \
	struct HikVisionActor_eventShowPerson_Parms \
	{ \
		int32 findCount; \
	};


#define FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_CALLBACK_WRAPPERS
#define FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHikVisionActor(); \
	friend struct Z_Construct_UClass_AHikVisionActor_Statics; \
public: \
	DECLARE_CLASS(AHikVisionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HiKVision"), NO_API) \
	DECLARE_SERIALIZER(AHikVisionActor)


#define FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAHikVisionActor(); \
	friend struct Z_Construct_UClass_AHikVisionActor_Statics; \
public: \
	DECLARE_CLASS(AHikVisionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HiKVision"), NO_API) \
	DECLARE_SERIALIZER(AHikVisionActor)


#define FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHikVisionActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHikVisionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHikVisionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHikVisionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHikVisionActor(AHikVisionActor&&); \
	NO_API AHikVisionActor(const AHikVisionActor&); \
public:


#define FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHikVisionActor(AHikVisionActor&&); \
	NO_API AHikVisionActor(const AHikVisionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHikVisionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHikVisionActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHikVisionActor)


#define FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_22_PROLOG \
	FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_EVENT_PARMS


#define FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_SPARSE_DATA \
	FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_RPC_WRAPPERS \
	FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_CALLBACK_WRAPPERS \
	FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_INCLASS \
	FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_SPARSE_DATA \
	FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_CALLBACK_WRAPPERS \
	FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HIKVISION_API UClass* StaticClass<class AHikVisionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Plugins_HiKVision_Source_HiKVision_Public_HiKVisionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
