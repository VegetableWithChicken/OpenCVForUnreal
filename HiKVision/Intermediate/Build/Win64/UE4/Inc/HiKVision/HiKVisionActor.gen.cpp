// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HiKVision/Public/HiKVisionActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHiKVisionActor() {}
// Cross Module References
	HIKVISION_API UClass* Z_Construct_UClass_AHikVisionActor_NoRegister();
	HIKVISION_API UClass* Z_Construct_UClass_AHikVisionActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HiKVision();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FName NAME_AHikVisionActor_ShowCutImage = FName(TEXT("ShowCutImage"));
	void AHikVisionActor::ShowCutImage(UTexture2D* outRGB)
	{
		HikVisionActor_eventShowCutImage_Parms Parms;
		Parms.outRGB=outRGB;
		ProcessEvent(FindFunctionChecked(NAME_AHikVisionActor_ShowCutImage),&Parms);
	}
	static FName NAME_AHikVisionActor_ShowDNNFaceImageArr = FName(TEXT("ShowDNNFaceImageArr"));
	void AHikVisionActor::ShowDNNFaceImageArr(TArray<UTexture2D*> const& RGBArr)
	{
		HikVisionActor_eventShowDNNFaceImageArr_Parms Parms;
		Parms.RGBArr=RGBArr;
		ProcessEvent(FindFunctionChecked(NAME_AHikVisionActor_ShowDNNFaceImageArr),&Parms);
	}
	static FName NAME_AHikVisionActor_ShowFaceCount = FName(TEXT("ShowFaceCount"));
	void AHikVisionActor::ShowFaceCount(int32 Count)
	{
		HikVisionActor_eventShowFaceCount_Parms Parms;
		Parms.Count=Count;
		ProcessEvent(FindFunctionChecked(NAME_AHikVisionActor_ShowFaceCount),&Parms);
	}
	static FName NAME_AHikVisionActor_ShowFaceImageArr = FName(TEXT("ShowFaceImageArr"));
	void AHikVisionActor::ShowFaceImageArr(TArray<UTexture2D*> const& RGBArr)
	{
		HikVisionActor_eventShowFaceImageArr_Parms Parms;
		Parms.RGBArr=RGBArr;
		ProcessEvent(FindFunctionChecked(NAME_AHikVisionActor_ShowFaceImageArr),&Parms);
	}
	static FName NAME_AHikVisionActor_ShowImage = FName(TEXT("ShowImage"));
	void AHikVisionActor::ShowImage(UTexture2D* outRGB, int32 Width, int32 Height)
	{
		HikVisionActor_eventShowImage_Parms Parms;
		Parms.outRGB=outRGB;
		Parms.Width=Width;
		Parms.Height=Height;
		ProcessEvent(FindFunctionChecked(NAME_AHikVisionActor_ShowImage),&Parms);
	}
	static FName NAME_AHikVisionActor_ShowPerson = FName(TEXT("ShowPerson"));
	void AHikVisionActor::ShowPerson(int32 findCount)
	{
		HikVisionActor_eventShowPerson_Parms Parms;
		Parms.findCount=findCount;
		ProcessEvent(FindFunctionChecked(NAME_AHikVisionActor_ShowPerson),&Parms);
	}
	void AHikVisionActor::StaticRegisterNativesAHikVisionActor()
	{
	}
	struct Z_Construct_UFunction_AHikVisionActor_ShowCutImage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outRGB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHikVisionActor_ShowCutImage_Statics::NewProp_outRGB = { "outRGB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HikVisionActor_eventShowCutImage_Parms, outRGB), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHikVisionActor_ShowCutImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHikVisionActor_ShowCutImage_Statics::NewProp_outRGB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHikVisionActor_ShowCutImage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//DNN ????????????\n" },
		{ "ModuleRelativePath", "Public/HiKVisionActor.h" },
		{ "ToolTip", "DNN ????????????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHikVisionActor_ShowCutImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHikVisionActor, nullptr, "ShowCutImage", nullptr, nullptr, sizeof(HikVisionActor_eventShowCutImage_Parms), Z_Construct_UFunction_AHikVisionActor_ShowCutImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHikVisionActor_ShowCutImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHikVisionActor_ShowCutImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHikVisionActor_ShowCutImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHikVisionActor_ShowCutImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHikVisionActor_ShowCutImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RGBArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RGBArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RGBArr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr_Statics::NewProp_RGBArr_Inner = { "RGBArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr_Statics::NewProp_RGBArr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr_Statics::NewProp_RGBArr = { "RGBArr", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HikVisionActor_eventShowDNNFaceImageArr_Parms, RGBArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr_Statics::NewProp_RGBArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr_Statics::NewProp_RGBArr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr_Statics::NewProp_RGBArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr_Statics::NewProp_RGBArr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//?????????\xc3\xbc?\n" },
		{ "ModuleRelativePath", "Public/HiKVisionActor.h" },
		{ "ToolTip", "?????????\xc3\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHikVisionActor, nullptr, "ShowDNNFaceImageArr", nullptr, nullptr, sizeof(HikVisionActor_eventShowDNNFaceImageArr_Parms), Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHikVisionActor_ShowFaceCount_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AHikVisionActor_ShowFaceCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HikVisionActor_eventShowFaceCount_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHikVisionActor_ShowFaceCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHikVisionActor_ShowFaceCount_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHikVisionActor_ShowFaceCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HiKVisionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHikVisionActor_ShowFaceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHikVisionActor, nullptr, "ShowFaceCount", nullptr, nullptr, sizeof(HikVisionActor_eventShowFaceCount_Parms), Z_Construct_UFunction_AHikVisionActor_ShowFaceCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHikVisionActor_ShowFaceCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHikVisionActor_ShowFaceCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHikVisionActor_ShowFaceCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHikVisionActor_ShowFaceCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHikVisionActor_ShowFaceCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RGBArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RGBArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RGBArr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr_Statics::NewProp_RGBArr_Inner = { "RGBArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr_Statics::NewProp_RGBArr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr_Statics::NewProp_RGBArr = { "RGBArr", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HikVisionActor_eventShowFaceImageArr_Parms, RGBArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr_Statics::NewProp_RGBArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr_Statics::NewProp_RGBArr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr_Statics::NewProp_RGBArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr_Statics::NewProp_RGBArr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HiKVisionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHikVisionActor, nullptr, "ShowFaceImageArr", nullptr, nullptr, sizeof(HikVisionActor_eventShowFaceImageArr_Parms), Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHikVisionActor_ShowImage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outRGB;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHikVisionActor_ShowImage_Statics::NewProp_outRGB = { "outRGB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HikVisionActor_eventShowImage_Parms, outRGB), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AHikVisionActor_ShowImage_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HikVisionActor_eventShowImage_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AHikVisionActor_ShowImage_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HikVisionActor_eventShowImage_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHikVisionActor_ShowImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHikVisionActor_ShowImage_Statics::NewProp_outRGB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHikVisionActor_ShowImage_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHikVisionActor_ShowImage_Statics::NewProp_Height,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHikVisionActor_ShowImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HiKVisionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHikVisionActor_ShowImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHikVisionActor, nullptr, "ShowImage", nullptr, nullptr, sizeof(HikVisionActor_eventShowImage_Parms), Z_Construct_UFunction_AHikVisionActor_ShowImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHikVisionActor_ShowImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHikVisionActor_ShowImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHikVisionActor_ShowImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHikVisionActor_ShowImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHikVisionActor_ShowImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHikVisionActor_ShowPerson_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_findCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AHikVisionActor_ShowPerson_Statics::NewProp_findCount = { "findCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HikVisionActor_eventShowPerson_Parms, findCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHikVisionActor_ShowPerson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHikVisionActor_ShowPerson_Statics::NewProp_findCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHikVisionActor_ShowPerson_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HiKVisionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHikVisionActor_ShowPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHikVisionActor, nullptr, "ShowPerson", nullptr, nullptr, sizeof(HikVisionActor_eventShowPerson_Parms), Z_Construct_UFunction_AHikVisionActor_ShowPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHikVisionActor_ShowPerson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHikVisionActor_ShowPerson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHikVisionActor_ShowPerson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHikVisionActor_ShowPerson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHikVisionActor_ShowPerson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHikVisionActor_NoRegister()
	{
		return AHikVisionActor::StaticClass();
	}
	struct Z_Construct_UClass_AHikVisionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTCP_MetaData[];
#endif
		static void NewProp_bUseTCP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTCP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHikVisionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HiKVision,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHikVisionActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHikVisionActor_ShowCutImage, "ShowCutImage" }, // 3716928345
		{ &Z_Construct_UFunction_AHikVisionActor_ShowDNNFaceImageArr, "ShowDNNFaceImageArr" }, // 126766900
		{ &Z_Construct_UFunction_AHikVisionActor_ShowFaceCount, "ShowFaceCount" }, // 3730250433
		{ &Z_Construct_UFunction_AHikVisionActor_ShowFaceImageArr, "ShowFaceImageArr" }, // 1438226769
		{ &Z_Construct_UFunction_AHikVisionActor_ShowImage, "ShowImage" }, // 3540718101
		{ &Z_Construct_UFunction_AHikVisionActor_ShowPerson, "ShowPerson" }, // 1505964789
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHikVisionActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HiKVisionActor.h" },
		{ "ModuleRelativePath", "Public/HiKVisionActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHikVisionActor_Statics::NewProp_bUseTCP_MetaData[] = {
		{ "Category", "HikVisionActor" },
		{ "ModuleRelativePath", "Public/HiKVisionActor.h" },
	};
#endif
	void Z_Construct_UClass_AHikVisionActor_Statics::NewProp_bUseTCP_SetBit(void* Obj)
	{
		((AHikVisionActor*)Obj)->bUseTCP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHikVisionActor_Statics::NewProp_bUseTCP = { "bUseTCP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHikVisionActor), &Z_Construct_UClass_AHikVisionActor_Statics::NewProp_bUseTCP_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHikVisionActor_Statics::NewProp_bUseTCP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHikVisionActor_Statics::NewProp_bUseTCP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHikVisionActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHikVisionActor_Statics::NewProp_bUseTCP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHikVisionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHikVisionActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHikVisionActor_Statics::ClassParams = {
		&AHikVisionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHikVisionActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHikVisionActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHikVisionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHikVisionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHikVisionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHikVisionActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHikVisionActor, 3631654376);
	template<> HIKVISION_API UClass* StaticClass<AHikVisionActor>()
	{
		return AHikVisionActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHikVisionActor(Z_Construct_UClass_AHikVisionActor, &AHikVisionActor::StaticClass, TEXT("/Script/HiKVision"), TEXT("AHikVisionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHikVisionActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
