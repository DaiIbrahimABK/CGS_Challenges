// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DOORPROJECT_InteractDoor_generated_h
#error "InteractDoor.generated.h already included, missing '#pragma once' in InteractDoor.h"
#endif
#define DOORPROJECT_InteractDoor_generated_h

#define DoorProject_Source_DoorProject_Public_InteractDoor_h_13_SPARSE_DATA
#define DoorProject_Source_DoorProject_Public_InteractDoor_h_13_RPC_WRAPPERS
#define DoorProject_Source_DoorProject_Public_InteractDoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DoorProject_Source_DoorProject_Public_InteractDoor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractDoor(); \
	friend struct Z_Construct_UClass_AInteractDoor_Statics; \
public: \
	DECLARE_CLASS(AInteractDoor, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DoorProject"), NO_API) \
	DECLARE_SERIALIZER(AInteractDoor)


#define DoorProject_Source_DoorProject_Public_InteractDoor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAInteractDoor(); \
	friend struct Z_Construct_UClass_AInteractDoor_Statics; \
public: \
	DECLARE_CLASS(AInteractDoor, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DoorProject"), NO_API) \
	DECLARE_SERIALIZER(AInteractDoor)


#define DoorProject_Source_DoorProject_Public_InteractDoor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractDoor(AInteractDoor&&); \
	NO_API AInteractDoor(const AInteractDoor&); \
public:


#define DoorProject_Source_DoorProject_Public_InteractDoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractDoor(AInteractDoor&&); \
	NO_API AInteractDoor(const AInteractDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractDoor)


#define DoorProject_Source_DoorProject_Public_InteractDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DoorInteractComponent() { return STRUCT_OFFSET(AInteractDoor, DoorInteractComponent); }


#define DoorProject_Source_DoorProject_Public_InteractDoor_h_10_PROLOG
#define DoorProject_Source_DoorProject_Public_InteractDoor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DoorProject_Source_DoorProject_Public_InteractDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	DoorProject_Source_DoorProject_Public_InteractDoor_h_13_SPARSE_DATA \
	DoorProject_Source_DoorProject_Public_InteractDoor_h_13_RPC_WRAPPERS \
	DoorProject_Source_DoorProject_Public_InteractDoor_h_13_INCLASS \
	DoorProject_Source_DoorProject_Public_InteractDoor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DoorProject_Source_DoorProject_Public_InteractDoor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DoorProject_Source_DoorProject_Public_InteractDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	DoorProject_Source_DoorProject_Public_InteractDoor_h_13_SPARSE_DATA \
	DoorProject_Source_DoorProject_Public_InteractDoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DoorProject_Source_DoorProject_Public_InteractDoor_h_13_INCLASS_NO_PURE_DECLS \
	DoorProject_Source_DoorProject_Public_InteractDoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DOORPROJECT_API UClass* StaticClass<class AInteractDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DoorProject_Source_DoorProject_Public_InteractDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
