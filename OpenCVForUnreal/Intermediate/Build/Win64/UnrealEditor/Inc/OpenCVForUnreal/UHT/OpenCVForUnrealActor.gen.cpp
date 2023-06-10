// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCVForUnrealActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenCVForUnrealActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	OPENCVFORUNREAL_API UClass* Z_Construct_UClass_AOpenCVForUnrealActor();
	OPENCVFORUNREAL_API UClass* Z_Construct_UClass_AOpenCVForUnrealActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OpenCVForUnreal();
// End Cross Module References
	struct OpenCVForUnrealActor_eventShowCutImage_Parms
	{
		UTexture2D* outRGB;
	};
	struct OpenCVForUnrealActor_eventShowDNNFaceImageArr_Parms
	{
		TArray<UTexture2D*> RGBArr;
	};
	struct OpenCVForUnrealActor_eventShowFaceCount_Parms
	{
		int32 Count;
	};
	struct OpenCVForUnrealActor_eventShowFaceImageArr_Parms
	{
		TArray<UTexture2D*> RGBArr;
	};
	struct OpenCVForUnrealActor_eventShowImage_Parms
	{
		UTexture2D* outRGB;
		int32 Width;
		int32 Height;
	};
	struct OpenCVForUnrealActor_eventShowNativeImage_Parms
	{
		UTexture2D* outRGB;
	};
	struct OpenCVForUnrealActor_eventShowPerson_Parms
	{
		int32 findCount;
	};
	static FName NAME_AOpenCVForUnrealActor_ShowCutImage = FName(TEXT("ShowCutImage"));
	void AOpenCVForUnrealActor::ShowCutImage(UTexture2D* outRGB)
	{
		OpenCVForUnrealActor_eventShowCutImage_Parms Parms;
		Parms.outRGB=outRGB;
		ProcessEvent(FindFunctionChecked(NAME_AOpenCVForUnrealActor_ShowCutImage),&Parms);
	}
	static FName NAME_AOpenCVForUnrealActor_ShowDNNFaceImageArr = FName(TEXT("ShowDNNFaceImageArr"));
	void AOpenCVForUnrealActor::ShowDNNFaceImageArr(TArray<UTexture2D*> const& RGBArr)
	{
		OpenCVForUnrealActor_eventShowDNNFaceImageArr_Parms Parms;
		Parms.RGBArr=RGBArr;
		ProcessEvent(FindFunctionChecked(NAME_AOpenCVForUnrealActor_ShowDNNFaceImageArr),&Parms);
	}
	static FName NAME_AOpenCVForUnrealActor_ShowFaceCount = FName(TEXT("ShowFaceCount"));
	void AOpenCVForUnrealActor::ShowFaceCount(int32 Count)
	{
		OpenCVForUnrealActor_eventShowFaceCount_Parms Parms;
		Parms.Count=Count;
		ProcessEvent(FindFunctionChecked(NAME_AOpenCVForUnrealActor_ShowFaceCount),&Parms);
	}
	static FName NAME_AOpenCVForUnrealActor_ShowFaceImageArr = FName(TEXT("ShowFaceImageArr"));
	void AOpenCVForUnrealActor::ShowFaceImageArr(TArray<UTexture2D*> const& RGBArr)
	{
		OpenCVForUnrealActor_eventShowFaceImageArr_Parms Parms;
		Parms.RGBArr=RGBArr;
		ProcessEvent(FindFunctionChecked(NAME_AOpenCVForUnrealActor_ShowFaceImageArr),&Parms);
	}
	static FName NAME_AOpenCVForUnrealActor_ShowImage = FName(TEXT("ShowImage"));
	void AOpenCVForUnrealActor::ShowImage(UTexture2D* outRGB, int32 Width, int32 Height)
	{
		OpenCVForUnrealActor_eventShowImage_Parms Parms;
		Parms.outRGB=outRGB;
		Parms.Width=Width;
		Parms.Height=Height;
		ProcessEvent(FindFunctionChecked(NAME_AOpenCVForUnrealActor_ShowImage),&Parms);
	}
	static FName NAME_AOpenCVForUnrealActor_ShowNativeImage = FName(TEXT("ShowNativeImage"));
	void AOpenCVForUnrealActor::ShowNativeImage(UTexture2D* outRGB)
	{
		OpenCVForUnrealActor_eventShowNativeImage_Parms Parms;
		Parms.outRGB=outRGB;
		ProcessEvent(FindFunctionChecked(NAME_AOpenCVForUnrealActor_ShowNativeImage),&Parms);
	}
	static FName NAME_AOpenCVForUnrealActor_ShowPerson = FName(TEXT("ShowPerson"));
	void AOpenCVForUnrealActor::ShowPerson(int32 findCount)
	{
		OpenCVForUnrealActor_eventShowPerson_Parms Parms;
		Parms.findCount=findCount;
		ProcessEvent(FindFunctionChecked(NAME_AOpenCVForUnrealActor_ShowPerson),&Parms);
	}
	void AOpenCVForUnrealActor::StaticRegisterNativesAOpenCVForUnrealActor()
	{
	}
	struct Z_Construct_UFunction_AOpenCVForUnrealActor_ShowCutImage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_outRGB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowCutImage_Statics::NewProp_outRGB = { "outRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVForUnrealActor_eventShowCutImage_Parms, outRGB), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenCVForUnrealActor_ShowCutImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenCVForUnrealActor_ShowCutImage_Statics::NewProp_outRGB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenCVForUnrealActor_ShowCutImage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//DNN \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/OpenCVForUnrealActor.h" },
		{ "ToolTip", "DNN \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowCutImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenCVForUnrealActor, nullptr, "ShowCutImage", nullptr, nullptr, sizeof(OpenCVForUnrealActor_eventShowCutImage_Parms), Z_Construct_UFunction_AOpenCVForUnrealActor_ShowCutImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowCutImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowCutImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowCutImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenCVForUnrealActor_ShowCutImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOpenCVForUnrealActor_ShowCutImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RGBArr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RGBArr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RGBArr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr_Statics::NewProp_RGBArr_Inner = { "RGBArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr_Statics::NewProp_RGBArr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr_Statics::NewProp_RGBArr = { "RGBArr", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVForUnrealActor_eventShowDNNFaceImageArr_Parms, RGBArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr_Statics::NewProp_RGBArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr_Statics::NewProp_RGBArr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr_Statics::NewProp_RGBArr_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr_Statics::NewProp_RGBArr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/OpenCVForUnrealActor.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenCVForUnrealActor, nullptr, "ShowDNNFaceImageArr", nullptr, nullptr, sizeof(OpenCVForUnrealActor_eventShowDNNFaceImageArr_Parms), Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceCount_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVForUnrealActor_eventShowFaceCount_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceCount_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenCVForUnrealActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenCVForUnrealActor, nullptr, "ShowFaceCount", nullptr, nullptr, sizeof(OpenCVForUnrealActor_eventShowFaceCount_Parms), Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RGBArr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RGBArr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RGBArr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr_Statics::NewProp_RGBArr_Inner = { "RGBArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr_Statics::NewProp_RGBArr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr_Statics::NewProp_RGBArr = { "RGBArr", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVForUnrealActor_eventShowFaceImageArr_Parms, RGBArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr_Statics::NewProp_RGBArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr_Statics::NewProp_RGBArr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr_Statics::NewProp_RGBArr_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr_Statics::NewProp_RGBArr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenCVForUnrealActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenCVForUnrealActor, nullptr, "ShowFaceImageArr", nullptr, nullptr, sizeof(OpenCVForUnrealActor_eventShowFaceImageArr_Parms), Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_outRGB;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage_Statics::NewProp_outRGB = { "outRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVForUnrealActor_eventShowImage_Parms, outRGB), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVForUnrealActor_eventShowImage_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVForUnrealActor_eventShowImage_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage_Statics::NewProp_outRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage_Statics::NewProp_Height,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenCVForUnrealActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenCVForUnrealActor, nullptr, "ShowImage", nullptr, nullptr, sizeof(OpenCVForUnrealActor_eventShowImage_Parms), Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenCVForUnrealActor_ShowNativeImage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_outRGB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowNativeImage_Statics::NewProp_outRGB = { "outRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVForUnrealActor_eventShowNativeImage_Parms, outRGB), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenCVForUnrealActor_ShowNativeImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenCVForUnrealActor_ShowNativeImage_Statics::NewProp_outRGB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenCVForUnrealActor_ShowNativeImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenCVForUnrealActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowNativeImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenCVForUnrealActor, nullptr, "ShowNativeImage", nullptr, nullptr, sizeof(OpenCVForUnrealActor_eventShowNativeImage_Parms), Z_Construct_UFunction_AOpenCVForUnrealActor_ShowNativeImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowNativeImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowNativeImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowNativeImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenCVForUnrealActor_ShowNativeImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOpenCVForUnrealActor_ShowNativeImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenCVForUnrealActor_ShowPerson_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_findCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowPerson_Statics::NewProp_findCount = { "findCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVForUnrealActor_eventShowPerson_Parms, findCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenCVForUnrealActor_ShowPerson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenCVForUnrealActor_ShowPerson_Statics::NewProp_findCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenCVForUnrealActor_ShowPerson_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenCVForUnrealActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenCVForUnrealActor_ShowPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenCVForUnrealActor, nullptr, "ShowPerson", nullptr, nullptr, sizeof(OpenCVForUnrealActor_eventShowPerson_Parms), Z_Construct_UFunction_AOpenCVForUnrealActor_ShowPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowPerson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowPerson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVForUnrealActor_ShowPerson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenCVForUnrealActor_ShowPerson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOpenCVForUnrealActor_ShowPerson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOpenCVForUnrealActor);
	UClass* Z_Construct_UClass_AOpenCVForUnrealActor_NoRegister()
	{
		return AOpenCVForUnrealActor::StaticClass();
	}
	struct Z_Construct_UClass_AOpenCVForUnrealActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTCP_MetaData[];
#endif
		static void NewProp_bUseTCP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTCP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenFace_MetaData[];
#endif
		static void NewProp_OpenFace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OpenFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenBody_MetaData[];
#endif
		static void NewProp_OpenBody_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OpenBody;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOpenCVForUnrealActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCVForUnreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOpenCVForUnrealActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOpenCVForUnrealActor_ShowCutImage, "ShowCutImage" }, // 661515996
		{ &Z_Construct_UFunction_AOpenCVForUnrealActor_ShowDNNFaceImageArr, "ShowDNNFaceImageArr" }, // 1078583599
		{ &Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceCount, "ShowFaceCount" }, // 1633968005
		{ &Z_Construct_UFunction_AOpenCVForUnrealActor_ShowFaceImageArr, "ShowFaceImageArr" }, // 3887917707
		{ &Z_Construct_UFunction_AOpenCVForUnrealActor_ShowImage, "ShowImage" }, // 4213057248
		{ &Z_Construct_UFunction_AOpenCVForUnrealActor_ShowNativeImage, "ShowNativeImage" }, // 2776647378
		{ &Z_Construct_UFunction_AOpenCVForUnrealActor_ShowPerson, "ShowPerson" }, // 3836353019
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCVForUnrealActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OpenCVForUnrealActor.h" },
		{ "ModuleRelativePath", "Public/OpenCVForUnrealActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_bUseTCP_MetaData[] = {
		{ "Category", "OpenCVForUnrealActor" },
		{ "ModuleRelativePath", "Public/OpenCVForUnrealActor.h" },
	};
#endif
	void Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_bUseTCP_SetBit(void* Obj)
	{
		((AOpenCVForUnrealActor*)Obj)->bUseTCP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_bUseTCP = { "bUseTCP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AOpenCVForUnrealActor), &Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_bUseTCP_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_bUseTCP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_bUseTCP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_OpenFace_MetaData[] = {
		{ "Category", "OpenCVForUnrealActor" },
		{ "ModuleRelativePath", "Public/OpenCVForUnrealActor.h" },
	};
#endif
	void Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_OpenFace_SetBit(void* Obj)
	{
		((AOpenCVForUnrealActor*)Obj)->OpenFace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_OpenFace = { "OpenFace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AOpenCVForUnrealActor), &Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_OpenFace_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_OpenFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_OpenFace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_OpenBody_MetaData[] = {
		{ "Category", "OpenCVForUnrealActor" },
		{ "Comment", "//\xe8\xbf\x9b\xe8\xa1\x8c\xe4\xba\xba\xe8\x84\xb8\xe8\xaf\x86\xe5\x88\xab\n" },
		{ "ModuleRelativePath", "Public/OpenCVForUnrealActor.h" },
		{ "ToolTip", "\xe8\xbf\x9b\xe8\xa1\x8c\xe4\xba\xba\xe8\x84\xb8\xe8\xaf\x86\xe5\x88\xab" },
	};
#endif
	void Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_OpenBody_SetBit(void* Obj)
	{
		((AOpenCVForUnrealActor*)Obj)->OpenBody = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_OpenBody = { "OpenBody", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AOpenCVForUnrealActor), &Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_OpenBody_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_OpenBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_OpenBody_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOpenCVForUnrealActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_bUseTCP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_OpenFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCVForUnrealActor_Statics::NewProp_OpenBody,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOpenCVForUnrealActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOpenCVForUnrealActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOpenCVForUnrealActor_Statics::ClassParams = {
		&AOpenCVForUnrealActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOpenCVForUnrealActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVForUnrealActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOpenCVForUnrealActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVForUnrealActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOpenCVForUnrealActor()
	{
		if (!Z_Registration_Info_UClass_AOpenCVForUnrealActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOpenCVForUnrealActor.OuterSingleton, Z_Construct_UClass_AOpenCVForUnrealActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOpenCVForUnrealActor.OuterSingleton;
	}
	template<> OPENCVFORUNREAL_API UClass* StaticClass<AOpenCVForUnrealActor>()
	{
		return AOpenCVForUnrealActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOpenCVForUnrealActor);
	AOpenCVForUnrealActor::~AOpenCVForUnrealActor() {}
	struct Z_CompiledInDeferFile_FID_UnrealPro_MyProject_Plugins_OpenCVForUnreal_Source_OpenCVForUnreal_Public_OpenCVForUnrealActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPro_MyProject_Plugins_OpenCVForUnreal_Source_OpenCVForUnreal_Public_OpenCVForUnrealActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOpenCVForUnrealActor, AOpenCVForUnrealActor::StaticClass, TEXT("AOpenCVForUnrealActor"), &Z_Registration_Info_UClass_AOpenCVForUnrealActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOpenCVForUnrealActor), 3149378633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealPro_MyProject_Plugins_OpenCVForUnreal_Source_OpenCVForUnreal_Public_OpenCVForUnrealActor_h_538435125(TEXT("/Script/OpenCVForUnreal"),
		Z_CompiledInDeferFile_FID_UnrealPro_MyProject_Plugins_OpenCVForUnreal_Source_OpenCVForUnreal_Public_OpenCVForUnrealActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealPro_MyProject_Plugins_OpenCVForUnreal_Source_OpenCVForUnreal_Public_OpenCVForUnrealActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
