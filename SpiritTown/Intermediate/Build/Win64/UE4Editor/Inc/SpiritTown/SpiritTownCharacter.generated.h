// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPIRITTOWN_SpiritTownCharacter_generated_h
#error "SpiritTownCharacter.generated.h already included, missing '#pragma once' in SpiritTownCharacter.h"
#endif
#define SPIRITTOWN_SpiritTownCharacter_generated_h

#define SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_SPARSE_DATA
#define SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_RPC_WRAPPERS
#define SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpiritTownCharacter(); \
	friend struct Z_Construct_UClass_ASpiritTownCharacter_Statics; \
public: \
	DECLARE_CLASS(ASpiritTownCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpiritTown"), NO_API) \
	DECLARE_SERIALIZER(ASpiritTownCharacter)


#define SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpiritTownCharacter(); \
	friend struct Z_Construct_UClass_ASpiritTownCharacter_Statics; \
public: \
	DECLARE_CLASS(ASpiritTownCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpiritTown"), NO_API) \
	DECLARE_SERIALIZER(ASpiritTownCharacter)


#define SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpiritTownCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpiritTownCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpiritTownCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpiritTownCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpiritTownCharacter(ASpiritTownCharacter&&); \
	NO_API ASpiritTownCharacter(const ASpiritTownCharacter&); \
public:


#define SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpiritTownCharacter(ASpiritTownCharacter&&); \
	NO_API ASpiritTownCharacter(const ASpiritTownCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpiritTownCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpiritTownCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpiritTownCharacter)


#define SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASpiritTownCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ASpiritTownCharacter, FollowCamera); }


#define SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_9_PROLOG
#define SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_SPARSE_DATA \
	SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_RPC_WRAPPERS \
	SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_INCLASS \
	SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_SPARSE_DATA \
	SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_INCLASS_NO_PURE_DECLS \
	SpiritTown_Source_SpiritTown_SpiritTownCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPIRITTOWN_API UClass* StaticClass<class ASpiritTownCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpiritTown_Source_SpiritTown_SpiritTownCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
