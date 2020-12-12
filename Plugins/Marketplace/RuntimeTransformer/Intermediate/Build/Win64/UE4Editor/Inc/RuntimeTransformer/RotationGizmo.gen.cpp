// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeTransformer/Public/Gizmos/RotationGizmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotationGizmo() {}
// Cross Module References
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ARotationGizmo_NoRegister();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ARotationGizmo();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ABaseGizmo();
	UPackage* Z_Construct_UPackage__Script_RuntimeTransformer();
// End Cross Module References
	void ARotationGizmo::StaticRegisterNativesARotationGizmo()
	{
	}
	UClass* Z_Construct_UClass_ARotationGizmo_NoRegister()
	{
		return ARotationGizmo::StaticClass();
	}
	struct Z_Construct_UClass_ARotationGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARotationGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeTransformer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotationGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Gizmos/RotationGizmo.h" },
		{ "ModuleRelativePath", "Public/Gizmos/RotationGizmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARotationGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotationGizmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARotationGizmo_Statics::ClassParams = {
		&ARotationGizmo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARotationGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARotationGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARotationGizmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARotationGizmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARotationGizmo, 2787090499);
	template<> RUNTIMETRANSFORMER_API UClass* StaticClass<ARotationGizmo>()
	{
		return ARotationGizmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARotationGizmo(Z_Construct_UClass_ARotationGizmo, &ARotationGizmo::StaticClass, TEXT("/Script/RuntimeTransformer"), TEXT("ARotationGizmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotationGizmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
