// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPLUSPLUS_NPC_generated_h
#error "NPC.generated.h already included, missing '#pragma once' in NPC.h"
#endif
#define CPLUSPLUS_NPC_generated_h

#define FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_SPARSE_DATA
#define FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_RPC_WRAPPERS
#define FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend struct Z_Construct_UClass_ANPC_Statics; \
public: \
	DECLARE_CLASS(ANPC, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPlusPlus"), NO_API) \
	DECLARE_SERIALIZER(ANPC)


#define FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_INCLASS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend struct Z_Construct_UClass_ANPC_Statics; \
public: \
	DECLARE_CLASS(ANPC, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPlusPlus"), NO_API) \
	DECLARE_SERIALIZER(ANPC)


#define FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public:


#define FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPC)


#define FID_CPlusPlus_Source_CPlusPlus_NPC_h_10_PROLOG
#define FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_SPARSE_DATA \
	FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_RPC_WRAPPERS \
	FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_INCLASS \
	FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_SPARSE_DATA \
	FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_INCLASS_NO_PURE_DECLS \
	FID_CPlusPlus_Source_CPlusPlus_NPC_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPLUSPLUS_API UClass* StaticClass<class ANPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPlusPlus_Source_CPlusPlus_NPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
