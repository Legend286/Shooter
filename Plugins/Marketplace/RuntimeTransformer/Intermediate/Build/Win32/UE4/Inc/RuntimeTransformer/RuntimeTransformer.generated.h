// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RUNTIMETRANSFORMER_RuntimeTransformer_generated_h
#error "RuntimeTransformer.generated.h already included, missing '#pragma once' in RuntimeTransformer.h"
#endif
#define RUNTIMETRANSFORMER_RuntimeTransformer_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RuntimeTransformer_Source_RuntimeTransformer_Public_RuntimeTransformer_h


#define FOREACH_ENUM_ETRANSFORMATIONDOMAIN(op) \
	op(ETransformationDomain::TD_None) \
	op(ETransformationDomain::TD_X_Axis) \
	op(ETransformationDomain::TD_Y_Axis) \
	op(ETransformationDomain::TD_Z_Axis) \
	op(ETransformationDomain::TD_XY_Plane) \
	op(ETransformationDomain::TD_YZ_Plane) \
	op(ETransformationDomain::TD_XZ_Plane) \
	op(ETransformationDomain::TD_XYZ) 

enum class ETransformationDomain : uint8;
template<> RUNTIMETRANSFORMER_API UEnum* StaticEnum<ETransformationDomain>();

#define FOREACH_ENUM_ESPACETYPE(op) \
	op(ESpaceType::ST_None) \
	op(ESpaceType::ST_Local) \
	op(ESpaceType::ST_World) 

enum class ESpaceType : uint8;
template<> RUNTIMETRANSFORMER_API UEnum* StaticEnum<ESpaceType>();

#define FOREACH_ENUM_ETRANSFORMATIONTYPE(op) \
	op(ETransformationType::TT_NoTransform) \
	op(ETransformationType::TT_Translation) \
	op(ETransformationType::TT_Rotation) \
	op(ETransformationType::TT_Scale) 

enum class ETransformationType : uint8;
template<> RUNTIMETRANSFORMER_API UEnum* StaticEnum<ETransformationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
