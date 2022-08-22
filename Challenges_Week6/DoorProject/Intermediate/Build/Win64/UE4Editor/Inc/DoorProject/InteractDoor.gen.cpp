// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoorProject/Public/InteractDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractDoor() {}
// Cross Module References
	DOORPROJECT_API UClass* Z_Construct_UClass_AInteractDoor_NoRegister();
	DOORPROJECT_API UClass* Z_Construct_UClass_AInteractDoor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_DoorProject();
	DOORPROJECT_API UClass* Z_Construct_UClass_UDoorInteractionActorComponent_NoRegister();
// End Cross Module References
	void AInteractDoor::StaticRegisterNativesAInteractDoor()
	{
	}
	UClass* Z_Construct_UClass_AInteractDoor_NoRegister()
	{
		return AInteractDoor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorInteractComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorInteractComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DoorProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractDoor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "InteractDoor.h" },
		{ "ModuleRelativePath", "Public/InteractDoor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractDoor_Statics::NewProp_DoorInteractComponent_MetaData[] = {
		{ "Category", "InteractDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractDoor_Statics::NewProp_DoorInteractComponent = { "DoorInteractComponent", nullptr, (EPropertyFlags)0x0020080002080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractDoor, DoorInteractComponent), Z_Construct_UClass_UDoorInteractionActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractDoor_Statics::NewProp_DoorInteractComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractDoor_Statics::NewProp_DoorInteractComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractDoor_Statics::NewProp_DoorInteractComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractDoor_Statics::ClassParams = {
		&AInteractDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInteractDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractDoor, 2350431598);
	template<> DOORPROJECT_API UClass* StaticClass<AInteractDoor>()
	{
		return AInteractDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractDoor(Z_Construct_UClass_AInteractDoor, &AInteractDoor::StaticClass, TEXT("/Script/DoorProject"), TEXT("AInteractDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
