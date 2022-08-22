// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoorProject/Public/DoorInteractionActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorInteractionActorComponent() {}
// Cross Module References
	DOORPROJECT_API UClass* Z_Construct_UClass_UDoorInteractionActorComponent_NoRegister();
	DOORPROJECT_API UClass* Z_Construct_UClass_UDoorInteractionActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DoorProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	void UDoorInteractionActorComponent::StaticRegisterNativesUDoorInteractionActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UDoorInteractionActorComponent_NoRegister()
	{
		return UDoorInteractionActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDoorInteractionActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToRotate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToRotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OpenCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorInteractionActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DoorProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorInteractionActorComponent.h" },
		{ "ModuleRelativePath", "Public/DoorInteractionActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_DesiredRotation_MetaData[] = {
		{ "Category", "DoorInteractionActorComponent" },
		{ "ModuleRelativePath", "Public/DoorInteractionActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_DesiredRotation = { "DesiredRotation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorInteractionActorComponent, DesiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_DesiredRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_DesiredRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_TimeToRotate_MetaData[] = {
		{ "Category", "DoorInteractionActorComponent" },
		{ "ModuleRelativePath", "Public/DoorInteractionActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_TimeToRotate = { "TimeToRotate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorInteractionActorComponent, TimeToRotate), METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_TimeToRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_TimeToRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "DoorInteractionActorComponent" },
		{ "ModuleRelativePath", "Public/DoorInteractionActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorInteractionActorComponent, TriggerBox), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_TriggerBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_OpenCurve_MetaData[] = {
		{ "Category", "DoorInteractionActorComponent" },
		{ "ModuleRelativePath", "Public/DoorInteractionActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_OpenCurve = { "OpenCurve", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorInteractionActorComponent, OpenCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_OpenCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_OpenCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorInteractionActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_DesiredRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_TimeToRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_TriggerBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionActorComponent_Statics::NewProp_OpenCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorInteractionActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorInteractionActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoorInteractionActorComponent_Statics::ClassParams = {
		&UDoorInteractionActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoorInteractionActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorInteractionActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoorInteractionActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoorInteractionActorComponent, 2711432217);
	template<> DOORPROJECT_API UClass* StaticClass<UDoorInteractionActorComponent>()
	{
		return UDoorInteractionActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorInteractionActorComponent(Z_Construct_UClass_UDoorInteractionActorComponent, &UDoorInteractionActorComponent::StaticClass, TEXT("/Script/DoorProject"), TEXT("UDoorInteractionActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorInteractionActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
