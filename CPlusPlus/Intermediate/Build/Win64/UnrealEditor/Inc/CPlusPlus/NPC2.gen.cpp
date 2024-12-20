// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPlusPlus/NPC2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC2() {}
// Cross Module References
	CPLUSPLUS_API UClass* Z_Construct_UClass_ANPC2_NoRegister();
	CPLUSPLUS_API UClass* Z_Construct_UClass_ANPC2();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CPlusPlus();
// End Cross Module References
	void ANPC2::StaticRegisterNativesANPC2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPC2);
	UClass* Z_Construct_UClass_ANPC2_NoRegister()
	{
		return ANPC2::StaticClass();
	}
	struct Z_Construct_UClass_ANPC2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPC2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CPlusPlus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC2_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC2.h" },
		{ "ModuleRelativePath", "NPC2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPC2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPC2_Statics::ClassParams = {
		&ANPC2::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ANPC2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPC2()
	{
		if (!Z_Registration_Info_UClass_ANPC2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPC2.OuterSingleton, Z_Construct_UClass_ANPC2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPC2.OuterSingleton;
	}
	template<> CPLUSPLUS_API UClass* StaticClass<ANPC2>()
	{
		return ANPC2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC2);
	struct Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_NPC2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_NPC2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPC2, ANPC2::StaticClass, TEXT("ANPC2"), &Z_Registration_Info_UClass_ANPC2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPC2), 1624141370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_NPC2_h_2039873202(TEXT("/Script/CPlusPlus"),
		Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_NPC2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_NPC2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
