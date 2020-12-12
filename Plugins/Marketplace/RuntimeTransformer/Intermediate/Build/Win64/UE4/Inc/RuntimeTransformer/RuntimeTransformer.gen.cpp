// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeTransformer/Public/RuntimeTransformer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeTransformer() {}
// Cross Module References
	RUNTIMETRANSFORMER_API UEnum* Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain();
	UPackage* Z_Construct_UPackage__Script_RuntimeTransformer();
	RUNTIMETRANSFORMER_API UEnum* Z_Construct_UEnum_RuntimeTransformer_ESpaceType();
	RUNTIMETRANSFORMER_API UEnum* Z_Construct_UEnum_RuntimeTransformer_ETransformationType();
// End Cross Module References
	static UEnum* ETransformationDomain_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain, Z_Construct_UPackage__Script_RuntimeTransformer(), TEXT("ETransformationDomain"));
		}
		return Singleton;
	}
	template<> RUNTIMETRANSFORMER_API UEnum* StaticEnum<ETransformationDomain>()
	{
		return ETransformationDomain_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransformationDomain(ETransformationDomain_StaticEnum, TEXT("/Script/RuntimeTransformer"), TEXT("ETransformationDomain"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain_Hash() { return 2508482732U; }
	UEnum* Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeTransformer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransformationDomain"), 0, Get_Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETransformationDomain::TD_None", (int64)ETransformationDomain::TD_None },
				{ "ETransformationDomain::TD_X_Axis", (int64)ETransformationDomain::TD_X_Axis },
				{ "ETransformationDomain::TD_Y_Axis", (int64)ETransformationDomain::TD_Y_Axis },
				{ "ETransformationDomain::TD_Z_Axis", (int64)ETransformationDomain::TD_Z_Axis },
				{ "ETransformationDomain::TD_XY_Plane", (int64)ETransformationDomain::TD_XY_Plane },
				{ "ETransformationDomain::TD_YZ_Plane", (int64)ETransformationDomain::TD_YZ_Plane },
				{ "ETransformationDomain::TD_XZ_Plane", (int64)ETransformationDomain::TD_XZ_Plane },
				{ "ETransformationDomain::TD_XYZ", (int64)ETransformationDomain::TD_XYZ },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/RuntimeTransformer.h" },
				{ "TD_None.DisplayName", "None" },
				{ "TD_None.Name", "ETransformationDomain::TD_None" },
				{ "TD_X_Axis.DisplayName", "X Axis" },
				{ "TD_X_Axis.Name", "ETransformationDomain::TD_X_Axis" },
				{ "TD_XY_Plane.DisplayName", "XY Plane" },
				{ "TD_XY_Plane.Name", "ETransformationDomain::TD_XY_Plane" },
				{ "TD_XYZ.DisplayName", "XYZ" },
				{ "TD_XYZ.Name", "ETransformationDomain::TD_XYZ" },
				{ "TD_XZ_Plane.DisplayName", "XZ Plane" },
				{ "TD_XZ_Plane.Name", "ETransformationDomain::TD_XZ_Plane" },
				{ "TD_Y_Axis.DisplayName", "Y Axis" },
				{ "TD_Y_Axis.Name", "ETransformationDomain::TD_Y_Axis" },
				{ "TD_YZ_Plane.DisplayName", "YZ Plane" },
				{ "TD_YZ_Plane.Name", "ETransformationDomain::TD_YZ_Plane" },
				{ "TD_Z_Axis.DisplayName", "Z Axis" },
				{ "TD_Z_Axis.Name", "ETransformationDomain::TD_Z_Axis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeTransformer,
				nullptr,
				"ETransformationDomain",
				"ETransformationDomain",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpaceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeTransformer_ESpaceType, Z_Construct_UPackage__Script_RuntimeTransformer(), TEXT("ESpaceType"));
		}
		return Singleton;
	}
	template<> RUNTIMETRANSFORMER_API UEnum* StaticEnum<ESpaceType>()
	{
		return ESpaceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpaceType(ESpaceType_StaticEnum, TEXT("/Script/RuntimeTransformer"), TEXT("ESpaceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeTransformer_ESpaceType_Hash() { return 215653278U; }
	UEnum* Z_Construct_UEnum_RuntimeTransformer_ESpaceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeTransformer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpaceType"), 0, Get_Z_Construct_UEnum_RuntimeTransformer_ESpaceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpaceType::ST_None", (int64)ESpaceType::ST_None },
				{ "ESpaceType::ST_Local", (int64)ESpaceType::ST_Local },
				{ "ESpaceType::ST_World", (int64)ESpaceType::ST_World },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/RuntimeTransformer.h" },
				{ "ST_Local.DisplayName", "Local Space" },
				{ "ST_Local.Name", "ESpaceType::ST_Local" },
				{ "ST_None.DisplayName", "None" },
				{ "ST_None.Name", "ESpaceType::ST_None" },
				{ "ST_World.DisplayName", "World Space" },
				{ "ST_World.Name", "ESpaceType::ST_World" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeTransformer,
				nullptr,
				"ESpaceType",
				"ESpaceType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETransformationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeTransformer_ETransformationType, Z_Construct_UPackage__Script_RuntimeTransformer(), TEXT("ETransformationType"));
		}
		return Singleton;
	}
	template<> RUNTIMETRANSFORMER_API UEnum* StaticEnum<ETransformationType>()
	{
		return ETransformationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransformationType(ETransformationType_StaticEnum, TEXT("/Script/RuntimeTransformer"), TEXT("ETransformationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeTransformer_ETransformationType_Hash() { return 4184687470U; }
	UEnum* Z_Construct_UEnum_RuntimeTransformer_ETransformationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeTransformer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransformationType"), 0, Get_Z_Construct_UEnum_RuntimeTransformer_ETransformationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETransformationType::TT_NoTransform", (int64)ETransformationType::TT_NoTransform },
				{ "ETransformationType::TT_Translation", (int64)ETransformationType::TT_Translation },
				{ "ETransformationType::TT_Rotation", (int64)ETransformationType::TT_Rotation },
				{ "ETransformationType::TT_Scale", (int64)ETransformationType::TT_Scale },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/RuntimeTransformer.h" },
				{ "TT_NoTransform.DisplayName", "None" },
				{ "TT_NoTransform.Name", "ETransformationType::TT_NoTransform" },
				{ "TT_Rotation.DisplayName", "Rotation" },
				{ "TT_Rotation.Name", "ETransformationType::TT_Rotation" },
				{ "TT_Scale.DisplayName", "Scale" },
				{ "TT_Scale.Name", "ETransformationType::TT_Scale" },
				{ "TT_Translation.DisplayName", "Translation" },
				{ "TT_Translation.Name", "ETransformationType::TT_Translation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeTransformer,
				nullptr,
				"ETransformationType",
				"ETransformationType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
