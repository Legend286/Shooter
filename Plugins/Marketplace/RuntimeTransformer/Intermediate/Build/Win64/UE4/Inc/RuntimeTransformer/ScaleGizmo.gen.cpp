// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeTransformer/Public/Gizmos/ScaleGizmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScaleGizmo() {}
// Cross Module References
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_AScaleGizmo_NoRegister();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_AScaleGizmo();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ABaseGizmo();
	UPackage* Z_Construct_UPackage__Script_RuntimeTransformer();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AScaleGizmo::StaticRegisterNativesAScaleGizmo()
	{
	}
	UClass* Z_Construct_UClass_AScaleGizmo_NoRegister()
	{
		return AScaleGizmo::StaticClass();
	}
	struct Z_Construct_UClass_AScaleGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XYZ_Sphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XYZ_Sphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XZ_PlaneBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XZ_PlaneBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YZ_PlaneBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YZ_PlaneBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XY_PlaneBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XY_PlaneBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScaleGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeTransformer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaleGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Gizmos/ScaleGizmo.h" },
		{ "ModuleRelativePath", "Public/Gizmos/ScaleGizmo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaleGizmo_Statics::NewProp_XYZ_Sphere_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "// The Hit Box for the\x09XYZ Free Translation\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gizmos/ScaleGizmo.h" },
		{ "ToolTip", "The Hit Box for the    XYZ Free Translation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScaleGizmo_Statics::NewProp_XYZ_Sphere = { "XYZ_Sphere", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScaleGizmo, XYZ_Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScaleGizmo_Statics::NewProp_XYZ_Sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScaleGizmo_Statics::NewProp_XYZ_Sphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaleGizmo_Statics::NewProp_XZ_PlaneBox_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "// The Hit Box for the\x09XZ-Plane Translation\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gizmos/ScaleGizmo.h" },
		{ "ToolTip", "The Hit Box for the    XZ-Plane Translation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScaleGizmo_Statics::NewProp_XZ_PlaneBox = { "XZ_PlaneBox", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScaleGizmo, XZ_PlaneBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScaleGizmo_Statics::NewProp_XZ_PlaneBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScaleGizmo_Statics::NewProp_XZ_PlaneBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaleGizmo_Statics::NewProp_YZ_PlaneBox_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "// The Hit Box for the YZ-Plane Translation\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gizmos/ScaleGizmo.h" },
		{ "ToolTip", "The Hit Box for the YZ-Plane Translation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScaleGizmo_Statics::NewProp_YZ_PlaneBox = { "YZ_PlaneBox", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScaleGizmo, YZ_PlaneBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScaleGizmo_Statics::NewProp_YZ_PlaneBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScaleGizmo_Statics::NewProp_YZ_PlaneBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaleGizmo_Statics::NewProp_XY_PlaneBox_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "// The Hit Box for the XY-Plane Translation\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gizmos/ScaleGizmo.h" },
		{ "ToolTip", "The Hit Box for the XY-Plane Translation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScaleGizmo_Statics::NewProp_XY_PlaneBox = { "XY_PlaneBox", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScaleGizmo, XY_PlaneBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScaleGizmo_Statics::NewProp_XY_PlaneBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScaleGizmo_Statics::NewProp_XY_PlaneBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScaleGizmo_Statics::NewProp_ScalingFactor_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "//To see how much an Unreal Unit affects Scaling (e.g. how powerful the mouse scales the object!)\n" },
		{ "ModuleRelativePath", "Public/Gizmos/ScaleGizmo.h" },
		{ "ToolTip", "To see how much an Unreal Unit affects Scaling (e.g. how powerful the mouse scales the object!)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScaleGizmo_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScaleGizmo, ScalingFactor), METADATA_PARAMS(Z_Construct_UClass_AScaleGizmo_Statics::NewProp_ScalingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScaleGizmo_Statics::NewProp_ScalingFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScaleGizmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaleGizmo_Statics::NewProp_XYZ_Sphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaleGizmo_Statics::NewProp_XZ_PlaneBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaleGizmo_Statics::NewProp_YZ_PlaneBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaleGizmo_Statics::NewProp_XY_PlaneBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScaleGizmo_Statics::NewProp_ScalingFactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScaleGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScaleGizmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScaleGizmo_Statics::ClassParams = {
		&AScaleGizmo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AScaleGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AScaleGizmo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AScaleGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScaleGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScaleGizmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScaleGizmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScaleGizmo, 1294238890);
	template<> RUNTIMETRANSFORMER_API UClass* StaticClass<AScaleGizmo>()
	{
		return AScaleGizmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScaleGizmo(Z_Construct_UClass_AScaleGizmo, &AScaleGizmo::StaticClass, TEXT("/Script/RuntimeTransformer"), TEXT("AScaleGizmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScaleGizmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
