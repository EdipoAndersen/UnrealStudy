// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPlusPlus/NPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC() {}
// Cross Module References
	CPLUSPLUS_API UClass* Z_Construct_UClass_ANPC_NoRegister();
	CPLUSPLUS_API UClass* Z_Construct_UClass_ANPC();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CPlusPlus();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void ANPC::StaticRegisterNativesANPC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPC);
	UClass* Z_Construct_UClass_ANPC_NoRegister()
	{
		return ANPC::StaticClass();
	}
	struct Z_Construct_UClass_ANPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CPlusPlus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC.h" },
		{ "ModuleRelativePath", "NPC.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Statics::NewProp_Tree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "NPC.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_Statics::NewProp_Tree = { "Tree", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC, Tree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPC_Statics::NewProp_Tree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::NewProp_Tree_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Statics::NewProp_Tree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPC_Statics::ClassParams = {
		&ANPC::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANPC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPC()
	{
		if (!Z_Registration_Info_UClass_ANPC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPC.OuterSingleton, Z_Construct_UClass_ANPC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPC.OuterSingleton;
	}
	template<> CPLUSPLUS_API UClass* StaticClass<ANPC>()
	{
		return ANPC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC);
	struct Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_NPC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_NPC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPC, ANPC::StaticClass, TEXT("ANPC"), &Z_Registration_Info_UClass_ANPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPC), 2929127450U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_NPC_h_164287555(TEXT("/Script/CPlusPlus"),
		Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_NPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_NPC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
