// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Triiodide_Interview/CPP_MazeGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_MazeGenerator() {}
// Cross Module References
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_MazeGenerator_NoRegister();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_MazeGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Triiodide_Interview();
// End Cross Module References
	void ACPP_MazeGenerator::StaticRegisterNativesACPP_MazeGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_MazeGenerator);
	UClass* Z_Construct_UClass_ACPP_MazeGenerator_NoRegister()
	{
		return ACPP_MazeGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_MazeGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_MazeGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Triiodide_Interview,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_MazeGenerator.h" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_MazeGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_MazeGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::ClassParams = {
		&ACPP_MazeGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_MazeGenerator()
	{
		if (!Z_Registration_Info_UClass_ACPP_MazeGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_MazeGenerator.OuterSingleton, Z_Construct_UClass_ACPP_MazeGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_MazeGenerator.OuterSingleton;
	}
	template<> TRIIODIDE_INTERVIEW_API UClass* StaticClass<ACPP_MazeGenerator>()
	{
		return ACPP_MazeGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_MazeGenerator);
	struct Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_MazeGenerator, ACPP_MazeGenerator::StaticClass, TEXT("ACPP_MazeGenerator"), &Z_Registration_Info_UClass_ACPP_MazeGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_MazeGenerator), 801957650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_3878516322(TEXT("/Script/Triiodide_Interview"),
		Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
