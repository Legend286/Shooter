// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeTransformer/Public/TransformerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformerPawn() {}
// Cross Module References
	RUNTIMETRANSFORMER_API UEnum* Z_Construct_UEnum_RuntimeTransformer_EGizmoPlacement();
	UPackage* Z_Construct_UPackage__Script_RuntimeTransformer();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ATransformerPawn_NoRegister();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ATransformerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	RUNTIMETRANSFORMER_API UEnum* Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	RUNTIMETRANSFORMER_API UEnum* Z_Construct_UEnum_RuntimeTransformer_ESpaceType();
	RUNTIMETRANSFORMER_API UEnum* Z_Construct_UEnum_RuntimeTransformer_ETransformationType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ABaseGizmo_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_AScaleGizmo_NoRegister();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ARotationGizmo_NoRegister();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ATranslationGizmo_NoRegister();
// End Cross Module References
	static UEnum* EGizmoPlacement_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeTransformer_EGizmoPlacement, Z_Construct_UPackage__Script_RuntimeTransformer(), TEXT("EGizmoPlacement"));
		}
		return Singleton;
	}
	template<> RUNTIMETRANSFORMER_API UEnum* StaticEnum<EGizmoPlacement>()
	{
		return EGizmoPlacement_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGizmoPlacement(EGizmoPlacement_StaticEnum, TEXT("/Script/RuntimeTransformer"), TEXT("EGizmoPlacement"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeTransformer_EGizmoPlacement_Hash() { return 3550655565U; }
	UEnum* Z_Construct_UEnum_RuntimeTransformer_EGizmoPlacement()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeTransformer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGizmoPlacement"), 0, Get_Z_Construct_UEnum_RuntimeTransformer_EGizmoPlacement_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGizmoPlacement::GP_None", (int64)EGizmoPlacement::GP_None },
				{ "EGizmoPlacement::GP_OnFirstSelection", (int64)EGizmoPlacement::GP_OnFirstSelection },
				{ "EGizmoPlacement::GP_OnLastSelection", (int64)EGizmoPlacement::GP_OnLastSelection },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GP_None.DisplayName", "None" },
				{ "GP_None.Name", "EGizmoPlacement::GP_None" },
				{ "GP_OnFirstSelection.DisplayName", "On First Selection" },
				{ "GP_OnFirstSelection.Name", "EGizmoPlacement::GP_OnFirstSelection" },
				{ "GP_OnLastSelection.DisplayName", "On Last Selection" },
				{ "GP_OnLastSelection.Name", "EGizmoPlacement::GP_OnLastSelection" },
				{ "ModuleRelativePath", "Public/TransformerPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeTransformer,
				nullptr,
				"EGizmoPlacement",
				"EGizmoPlacement",
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
	DEFINE_FUNCTION(ATransformerPawn::execMulticastSetSelectedComponents)
	{
		P_GET_TARRAY(USceneComponent*,Z_Param_Components);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetSelectedComponents_Implementation(Z_Param_Components);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execServerSyncSelectedComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSyncSelectedComponents_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerSyncSelectedComponents_Validate"));
			return;
		}
		P_THIS->ServerSyncSelectedComponents_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execMulticastSetDomain)
	{
		P_GET_ENUM(ETransformationDomain,Z_Param_Domain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetDomain_Implementation(ETransformationDomain(Z_Param_Domain));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execServerSetDomain)
	{
		P_GET_ENUM(ETransformationDomain,Z_Param_Domain);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetDomain_Validate(ETransformationDomain(Z_Param_Domain)))
		{
			RPC_ValidateFailed(TEXT("ServerSetDomain_Validate"));
			return;
		}
		P_THIS->ServerSetDomain_Implementation(ETransformationDomain(Z_Param_Domain));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execServerCloneSelected)
	{
		P_GET_UBOOL(Z_Param_bSelectNewClones);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerCloneSelected_Validate(Z_Param_bSelectNewClones,Z_Param_bAppendToList))
		{
			RPC_ValidateFailed(TEXT("ServerCloneSelected_Validate"));
			return;
		}
		P_THIS->ServerCloneSelected_Implementation(Z_Param_bSelectNewClones,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execMulticastSetRotateOnLocalAxis)
	{
		P_GET_UBOOL(Z_Param_bRotateLocalAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetRotateOnLocalAxis_Implementation(Z_Param_bRotateLocalAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execServerSetRotateOnLocalAxis)
	{
		P_GET_UBOOL(Z_Param_bRotateLocalAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetRotateOnLocalAxis_Validate(Z_Param_bRotateLocalAxis))
		{
			RPC_ValidateFailed(TEXT("ServerSetRotateOnLocalAxis_Validate"));
			return;
		}
		P_THIS->ServerSetRotateOnLocalAxis_Implementation(Z_Param_bRotateLocalAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execMulticastSetComponentBased)
	{
		P_GET_UBOOL(Z_Param_bIsComponentBased);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetComponentBased_Implementation(Z_Param_bIsComponentBased);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execServerSetComponentBased)
	{
		P_GET_UBOOL(Z_Param_bIsComponentBased);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetComponentBased_Validate(Z_Param_bIsComponentBased))
		{
			RPC_ValidateFailed(TEXT("ServerSetComponentBased_Validate"));
			return;
		}
		P_THIS->ServerSetComponentBased_Implementation(Z_Param_bIsComponentBased);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execMulticastSetTransformationType)
	{
		P_GET_ENUM(ETransformationType,Z_Param_Transformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetTransformationType_Implementation(ETransformationType(Z_Param_Transformation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execServerSetTransformationType)
	{
		P_GET_ENUM(ETransformationType,Z_Param_Transformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetTransformationType_Validate(ETransformationType(Z_Param_Transformation)))
		{
			RPC_ValidateFailed(TEXT("ServerSetTransformationType_Validate"));
			return;
		}
		P_THIS->ServerSetTransformationType_Implementation(ETransformationType(Z_Param_Transformation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execMulticastSetSpaceType)
	{
		P_GET_ENUM(ESpaceType,Z_Param_Space);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetSpaceType_Implementation(ESpaceType(Z_Param_Space));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execServerSetSpaceType)
	{
		P_GET_ENUM(ESpaceType,Z_Param_Space);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetSpaceType_Validate(ESpaceType(Z_Param_Space)))
		{
			RPC_ValidateFailed(TEXT("ServerSetSpaceType_Validate"));
			return;
		}
		P_THIS->ServerSetSpaceType_Implementation(ESpaceType(Z_Param_Space));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execMulticastDeselectAll)
	{
		P_GET_UBOOL(Z_Param_bDestroySelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastDeselectAll_Implementation(Z_Param_bDestroySelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execServerDeselectAll)
	{
		P_GET_UBOOL(Z_Param_bDestroySelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerDeselectAll_Validate(Z_Param_bDestroySelected))
		{
			RPC_ValidateFailed(TEXT("ServerDeselectAll_Validate"));
			return;
		}
		P_THIS->ServerDeselectAll_Implementation(Z_Param_bDestroySelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execReplicateFinishTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplicateFinishTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execMulticastApplyTransform)
	{
		P_GET_STRUCT(FTransform,Z_Param_DeltaTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastApplyTransform_Implementation(Z_Param_DeltaTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execServerApplyTransform)
	{
		P_GET_STRUCT(FTransform,Z_Param_DeltaTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerApplyTransform_Validate(Z_Param_DeltaTransform))
		{
			RPC_ValidateFailed(TEXT("ServerApplyTransform_Validate"));
			return;
		}
		P_THIS->ServerApplyTransform_Implementation(Z_Param_DeltaTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execMulticastClearDomain)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastClearDomain_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execServerClearDomain)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerClearDomain_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerClearDomain_Validate"));
			return;
		}
		P_THIS->ServerClearDomain_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execServerTraceByProfile)
	{
		P_GET_STRUCT(FVector,Z_Param_StartLocation);
		P_GET_STRUCT(FVector,Z_Param_EndLocation);
		P_GET_PROPERTY(FNameProperty,Z_Param_ProfileName);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerTraceByProfile_Validate(Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_ProfileName,Z_Param_bAppendToList))
		{
			RPC_ValidateFailed(TEXT("ServerTraceByProfile_Validate"));
			return;
		}
		P_THIS->ServerTraceByProfile_Implementation(Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_ProfileName,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execServerTraceByChannel)
	{
		P_GET_STRUCT(FVector,Z_Param_StartLocation);
		P_GET_STRUCT(FVector,Z_Param_EndLocation);
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerTraceByChannel_Validate(Z_Param_StartLocation,Z_Param_EndLocation,ECollisionChannel(Z_Param_TraceChannel),Z_Param_bAppendToList))
		{
			RPC_ValidateFailed(TEXT("ServerTraceByChannel_Validate"));
			return;
		}
		P_THIS->ServerTraceByChannel_Implementation(Z_Param_StartLocation,Z_Param_EndLocation,ECollisionChannel(Z_Param_TraceChannel),Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execServerTraceByObjectTypes)
	{
		P_GET_STRUCT(FVector,Z_Param_StartLocation);
		P_GET_STRUCT(FVector,Z_Param_EndLocation);
		P_GET_TARRAY(TEnumAsByte<ECollisionChannel>,Z_Param_CollisionChannels);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerTraceByObjectTypes_Validate(Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_CollisionChannels,Z_Param_bAppendToList))
		{
			RPC_ValidateFailed(TEXT("ServerTraceByObjectTypes_Validate"));
			return;
		}
		P_THIS->ServerTraceByObjectTypes_Implementation(Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_CollisionChannels,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execLogSelectedComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogSelectedComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execReplicatedMouseTraceByProfile)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TraceDistance);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProfileName);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplicatedMouseTraceByProfile(Z_Param_TraceDistance,Z_Param_Out_ProfileName,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execReplicatedMouseTraceByChannel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TraceDistance);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionChannel);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplicatedMouseTraceByChannel(Z_Param_TraceDistance,ECollisionChannel(Z_Param_CollisionChannel),Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execReplicatedMouseTraceByObjectTypes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TraceDistance);
		P_GET_TARRAY(TEnumAsByte<ECollisionChannel>,Z_Param_CollisionChannels);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplicatedMouseTraceByObjectTypes(Z_Param_TraceDistance,Z_Param_CollisionChannels,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execDeselectAll)
	{
		P_GET_UBOOL(Z_Param_bDestroyDeselected);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USceneComponent*>*)Z_Param__Result=P_THIS->DeselectAll(Z_Param_bDestroyDeselected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execDeselectActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeselectActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execDeselectComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeselectComponent(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execSelectMultipleActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectMultipleActors(Z_Param_Out_Actors,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execSelectMultipleComponents)
	{
		P_GET_TARRAY_REF(USceneComponent*,Z_Param_Out_Components);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectMultipleComponents(Z_Param_Out_Components,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execSelectActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectActor(Z_Param_Actor,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execSelectComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectComponent(Z_Param_Component,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execCloneSelected)
	{
		P_GET_UBOOL(Z_Param_bSelectNewClones);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloneSelected(Z_Param_bSelectNewClones,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execGetSelectedComponents)
	{
		P_GET_TARRAY_REF(USceneComponent*,Z_Param_Out_outComponentList);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_outGizmoPlacedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSelectedComponents(Z_Param_Out_outComponentList,Z_Param_Out_outGizmoPlacedComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execSetSnappingValue)
	{
		P_GET_ENUM(ETransformationType,Z_Param_TransformationType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SnappingValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSnappingValue(ETransformationType(Z_Param_TransformationType),Z_Param_SnappingValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execSetSnappingEnabled)
	{
		P_GET_ENUM(ETransformationType,Z_Param_TransformationType);
		P_GET_UBOOL(Z_Param_bSnappingEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSnappingEnabled(ETransformationType(Z_Param_TransformationType),Z_Param_bSnappingEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execSetTransformationType)
	{
		P_GET_ENUM(ETransformationType,Z_Param_TransformationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTransformationType(ETransformationType(Z_Param_TransformationType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execSetRotateOnLocalAxis)
	{
		P_GET_UBOOL(Z_Param_bRotateLocalAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotateOnLocalAxis(Z_Param_bRotateLocalAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execSetComponentBased)
	{
		P_GET_UBOOL(Z_Param_bIsComponentBased);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetComponentBased(Z_Param_bIsComponentBased);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execOnComponentSelectionChange)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_UBOOL(Z_Param_bSelected);
		P_GET_UBOOL(Z_Param_bImplementsUFocusable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentSelectionChange_Implementation(Z_Param_Component,Z_Param_bSelected,Z_Param_bImplementsUFocusable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execOnGizmoStateChanged)
	{
		P_GET_ENUM(ETransformationType,Z_Param_GizmoType);
		P_GET_UBOOL(Z_Param_bTransformInProgress);
		P_GET_ENUM(ETransformationDomain,Z_Param_Domain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGizmoStateChanged_Implementation(ETransformationType(Z_Param_GizmoType),Z_Param_bTransformInProgress,ETransformationDomain(Z_Param_Domain));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execHandleTracedObjects)
	{
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_HitResults);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleTracedObjects(Z_Param_Out_HitResults,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execApplyDeltaTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DeltaTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDeltaTransform(Z_Param_Out_DeltaTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execUpdateTransform)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LookingVector);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->UpdateTransform(Z_Param_Out_LookingVector,Z_Param_Out_RayOrigin,Z_Param_Out_RayDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execTraceByProfile)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndLocation);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProfileName);
		P_GET_TARRAY(AActor*,Z_Param_IgnoredActors);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TraceByProfile(Z_Param_Out_StartLocation,Z_Param_Out_EndLocation,Z_Param_Out_ProfileName,Z_Param_IgnoredActors,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execTraceByChannel)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndLocation);
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_TARRAY(AActor*,Z_Param_IgnoredActors);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TraceByChannel(Z_Param_Out_StartLocation,Z_Param_Out_EndLocation,ECollisionChannel(Z_Param_TraceChannel),Z_Param_IgnoredActors,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execTraceByObjectTypes)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndLocation);
		P_GET_TARRAY(TEnumAsByte<ECollisionChannel>,Z_Param_CollisionChannels);
		P_GET_TARRAY(AActor*,Z_Param_IgnoredActors);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TraceByObjectTypes(Z_Param_Out_StartLocation,Z_Param_Out_EndLocation,Z_Param_CollisionChannels,Z_Param_IgnoredActors,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execMouseTraceByProfile)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TraceDistance);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProfileName);
		P_GET_TARRAY(AActor*,Z_Param_IgnoredActors);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MouseTraceByProfile(Z_Param_TraceDistance,Z_Param_Out_ProfileName,Z_Param_IgnoredActors,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execMouseTraceByChannel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TraceDistance);
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_TARRAY(AActor*,Z_Param_IgnoredActors);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MouseTraceByChannel(Z_Param_TraceDistance,ECollisionChannel(Z_Param_TraceChannel),Z_Param_IgnoredActors,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execMouseTraceByObjectTypes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TraceDistance);
		P_GET_TARRAY(TEnumAsByte<ECollisionChannel>,Z_Param_CollisionChannels);
		P_GET_TARRAY(AActor*,Z_Param_IgnoredActors);
		P_GET_UBOOL(Z_Param_bAppendToList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MouseTraceByObjectTypes(Z_Param_TraceDistance,Z_Param_CollisionChannels,Z_Param_IgnoredActors,Z_Param_bAppendToList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execClearDomain)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearDomain();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execGetCurrentDomain)
	{
		P_GET_UBOOL_REF(Z_Param_Out_TransformInProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETransformationDomain*)Z_Param__Result=P_THIS->GetCurrentDomain(Z_Param_Out_TransformInProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execSetSpaceType)
	{
		P_GET_ENUM(ESpaceType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpaceType(ESpaceType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATransformerPawn::execShouldSelect)
	{
		P_GET_OBJECT(AActor,Z_Param_OwnerActor);
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldSelect_Implementation(Z_Param_OwnerActor,Z_Param_Component);
		P_NATIVE_END;
	}
	static FName NAME_ATransformerPawn_MulticastApplyTransform = FName(TEXT("MulticastApplyTransform"));
	void ATransformerPawn::MulticastApplyTransform(FTransform const& DeltaTransform)
	{
		TransformerPawn_eventMulticastApplyTransform_Parms Parms;
		Parms.DeltaTransform=DeltaTransform;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_MulticastApplyTransform),&Parms);
	}
	static FName NAME_ATransformerPawn_MulticastClearDomain = FName(TEXT("MulticastClearDomain"));
	void ATransformerPawn::MulticastClearDomain()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_MulticastClearDomain),NULL);
	}
	static FName NAME_ATransformerPawn_MulticastDeselectAll = FName(TEXT("MulticastDeselectAll"));
	void ATransformerPawn::MulticastDeselectAll(bool bDestroySelected)
	{
		TransformerPawn_eventMulticastDeselectAll_Parms Parms;
		Parms.bDestroySelected=bDestroySelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_MulticastDeselectAll),&Parms);
	}
	static FName NAME_ATransformerPawn_MulticastSetComponentBased = FName(TEXT("MulticastSetComponentBased"));
	void ATransformerPawn::MulticastSetComponentBased(bool bIsComponentBased)
	{
		TransformerPawn_eventMulticastSetComponentBased_Parms Parms;
		Parms.bIsComponentBased=bIsComponentBased ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_MulticastSetComponentBased),&Parms);
	}
	static FName NAME_ATransformerPawn_MulticastSetDomain = FName(TEXT("MulticastSetDomain"));
	void ATransformerPawn::MulticastSetDomain(ETransformationDomain Domain)
	{
		TransformerPawn_eventMulticastSetDomain_Parms Parms;
		Parms.Domain=Domain;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_MulticastSetDomain),&Parms);
	}
	static FName NAME_ATransformerPawn_MulticastSetRotateOnLocalAxis = FName(TEXT("MulticastSetRotateOnLocalAxis"));
	void ATransformerPawn::MulticastSetRotateOnLocalAxis(bool bRotateLocalAxis)
	{
		TransformerPawn_eventMulticastSetRotateOnLocalAxis_Parms Parms;
		Parms.bRotateLocalAxis=bRotateLocalAxis ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_MulticastSetRotateOnLocalAxis),&Parms);
	}
	static FName NAME_ATransformerPawn_MulticastSetSelectedComponents = FName(TEXT("MulticastSetSelectedComponents"));
	void ATransformerPawn::MulticastSetSelectedComponents(TArray<USceneComponent*> const& Components)
	{
		TransformerPawn_eventMulticastSetSelectedComponents_Parms Parms;
		Parms.Components=Components;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_MulticastSetSelectedComponents),&Parms);
	}
	static FName NAME_ATransformerPawn_MulticastSetSpaceType = FName(TEXT("MulticastSetSpaceType"));
	void ATransformerPawn::MulticastSetSpaceType(ESpaceType Space)
	{
		TransformerPawn_eventMulticastSetSpaceType_Parms Parms;
		Parms.Space=Space;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_MulticastSetSpaceType),&Parms);
	}
	static FName NAME_ATransformerPawn_MulticastSetTransformationType = FName(TEXT("MulticastSetTransformationType"));
	void ATransformerPawn::MulticastSetTransformationType(ETransformationType Transformation)
	{
		TransformerPawn_eventMulticastSetTransformationType_Parms Parms;
		Parms.Transformation=Transformation;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_MulticastSetTransformationType),&Parms);
	}
	static FName NAME_ATransformerPawn_OnComponentSelectionChange = FName(TEXT("OnComponentSelectionChange"));
	void ATransformerPawn::OnComponentSelectionChange(USceneComponent* Component, bool bSelected, bool bImplementsUFocusable)
	{
		TransformerPawn_eventOnComponentSelectionChange_Parms Parms;
		Parms.Component=Component;
		Parms.bSelected=bSelected ? true : false;
		Parms.bImplementsUFocusable=bImplementsUFocusable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_OnComponentSelectionChange),&Parms);
	}
	static FName NAME_ATransformerPawn_OnGizmoStateChanged = FName(TEXT("OnGizmoStateChanged"));
	void ATransformerPawn::OnGizmoStateChanged(ETransformationType GizmoType, bool bTransformInProgress, ETransformationDomain Domain)
	{
		TransformerPawn_eventOnGizmoStateChanged_Parms Parms;
		Parms.GizmoType=GizmoType;
		Parms.bTransformInProgress=bTransformInProgress ? true : false;
		Parms.Domain=Domain;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_OnGizmoStateChanged),&Parms);
	}
	static FName NAME_ATransformerPawn_ServerApplyTransform = FName(TEXT("ServerApplyTransform"));
	void ATransformerPawn::ServerApplyTransform(FTransform const& DeltaTransform)
	{
		TransformerPawn_eventServerApplyTransform_Parms Parms;
		Parms.DeltaTransform=DeltaTransform;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_ServerApplyTransform),&Parms);
	}
	static FName NAME_ATransformerPawn_ServerClearDomain = FName(TEXT("ServerClearDomain"));
	void ATransformerPawn::ServerClearDomain()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_ServerClearDomain),NULL);
	}
	static FName NAME_ATransformerPawn_ServerCloneSelected = FName(TEXT("ServerCloneSelected"));
	void ATransformerPawn::ServerCloneSelected(bool bSelectNewClones, bool bAppendToList)
	{
		TransformerPawn_eventServerCloneSelected_Parms Parms;
		Parms.bSelectNewClones=bSelectNewClones ? true : false;
		Parms.bAppendToList=bAppendToList ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_ServerCloneSelected),&Parms);
	}
	static FName NAME_ATransformerPawn_ServerDeselectAll = FName(TEXT("ServerDeselectAll"));
	void ATransformerPawn::ServerDeselectAll(bool bDestroySelected)
	{
		TransformerPawn_eventServerDeselectAll_Parms Parms;
		Parms.bDestroySelected=bDestroySelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_ServerDeselectAll),&Parms);
	}
	static FName NAME_ATransformerPawn_ServerSetComponentBased = FName(TEXT("ServerSetComponentBased"));
	void ATransformerPawn::ServerSetComponentBased(bool bIsComponentBased)
	{
		TransformerPawn_eventServerSetComponentBased_Parms Parms;
		Parms.bIsComponentBased=bIsComponentBased ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_ServerSetComponentBased),&Parms);
	}
	static FName NAME_ATransformerPawn_ServerSetDomain = FName(TEXT("ServerSetDomain"));
	void ATransformerPawn::ServerSetDomain(ETransformationDomain Domain)
	{
		TransformerPawn_eventServerSetDomain_Parms Parms;
		Parms.Domain=Domain;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_ServerSetDomain),&Parms);
	}
	static FName NAME_ATransformerPawn_ServerSetRotateOnLocalAxis = FName(TEXT("ServerSetRotateOnLocalAxis"));
	void ATransformerPawn::ServerSetRotateOnLocalAxis(bool bRotateLocalAxis)
	{
		TransformerPawn_eventServerSetRotateOnLocalAxis_Parms Parms;
		Parms.bRotateLocalAxis=bRotateLocalAxis ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_ServerSetRotateOnLocalAxis),&Parms);
	}
	static FName NAME_ATransformerPawn_ServerSetSpaceType = FName(TEXT("ServerSetSpaceType"));
	void ATransformerPawn::ServerSetSpaceType(ESpaceType Space)
	{
		TransformerPawn_eventServerSetSpaceType_Parms Parms;
		Parms.Space=Space;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_ServerSetSpaceType),&Parms);
	}
	static FName NAME_ATransformerPawn_ServerSetTransformationType = FName(TEXT("ServerSetTransformationType"));
	void ATransformerPawn::ServerSetTransformationType(ETransformationType Transformation)
	{
		TransformerPawn_eventServerSetTransformationType_Parms Parms;
		Parms.Transformation=Transformation;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_ServerSetTransformationType),&Parms);
	}
	static FName NAME_ATransformerPawn_ServerSyncSelectedComponents = FName(TEXT("ServerSyncSelectedComponents"));
	void ATransformerPawn::ServerSyncSelectedComponents()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_ServerSyncSelectedComponents),NULL);
	}
	static FName NAME_ATransformerPawn_ServerTraceByChannel = FName(TEXT("ServerTraceByChannel"));
	void ATransformerPawn::ServerTraceByChannel(FVector const& StartLocation, FVector const& EndLocation, ECollisionChannel TraceChannel, bool bAppendToList)
	{
		TransformerPawn_eventServerTraceByChannel_Parms Parms;
		Parms.StartLocation=StartLocation;
		Parms.EndLocation=EndLocation;
		Parms.TraceChannel=TraceChannel;
		Parms.bAppendToList=bAppendToList ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_ServerTraceByChannel),&Parms);
	}
	static FName NAME_ATransformerPawn_ServerTraceByObjectTypes = FName(TEXT("ServerTraceByObjectTypes"));
	void ATransformerPawn::ServerTraceByObjectTypes(FVector const& StartLocation, FVector const& EndLocation, TArray<TEnumAsByte<ECollisionChannel> > const& CollisionChannels, bool bAppendToList)
	{
		TransformerPawn_eventServerTraceByObjectTypes_Parms Parms;
		Parms.StartLocation=StartLocation;
		Parms.EndLocation=EndLocation;
		Parms.CollisionChannels=CollisionChannels;
		Parms.bAppendToList=bAppendToList ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_ServerTraceByObjectTypes),&Parms);
	}
	static FName NAME_ATransformerPawn_ServerTraceByProfile = FName(TEXT("ServerTraceByProfile"));
	void ATransformerPawn::ServerTraceByProfile(FVector const& StartLocation, FVector const& EndLocation, FName const& ProfileName, bool bAppendToList)
	{
		TransformerPawn_eventServerTraceByProfile_Parms Parms;
		Parms.StartLocation=StartLocation;
		Parms.EndLocation=EndLocation;
		Parms.ProfileName=ProfileName;
		Parms.bAppendToList=bAppendToList ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_ServerTraceByProfile),&Parms);
	}
	static FName NAME_ATransformerPawn_ShouldSelect = FName(TEXT("ShouldSelect"));
	bool ATransformerPawn::ShouldSelect(AActor* OwnerActor, USceneComponent* Component)
	{
		TransformerPawn_eventShouldSelect_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		Parms.Component=Component;
		ProcessEvent(FindFunctionChecked(NAME_ATransformerPawn_ShouldSelect),&Parms);
		return !!Parms.ReturnValue;
	}
	void ATransformerPawn::StaticRegisterNativesATransformerPawn()
	{
		UClass* Class = ATransformerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDeltaTransform", &ATransformerPawn::execApplyDeltaTransform },
			{ "ClearDomain", &ATransformerPawn::execClearDomain },
			{ "CloneSelected", &ATransformerPawn::execCloneSelected },
			{ "DeselectActor", &ATransformerPawn::execDeselectActor },
			{ "DeselectAll", &ATransformerPawn::execDeselectAll },
			{ "DeselectComponent", &ATransformerPawn::execDeselectComponent },
			{ "GetCurrentDomain", &ATransformerPawn::execGetCurrentDomain },
			{ "GetSelectedComponents", &ATransformerPawn::execGetSelectedComponents },
			{ "HandleTracedObjects", &ATransformerPawn::execHandleTracedObjects },
			{ "LogSelectedComponents", &ATransformerPawn::execLogSelectedComponents },
			{ "MouseTraceByChannel", &ATransformerPawn::execMouseTraceByChannel },
			{ "MouseTraceByObjectTypes", &ATransformerPawn::execMouseTraceByObjectTypes },
			{ "MouseTraceByProfile", &ATransformerPawn::execMouseTraceByProfile },
			{ "MulticastApplyTransform", &ATransformerPawn::execMulticastApplyTransform },
			{ "MulticastClearDomain", &ATransformerPawn::execMulticastClearDomain },
			{ "MulticastDeselectAll", &ATransformerPawn::execMulticastDeselectAll },
			{ "MulticastSetComponentBased", &ATransformerPawn::execMulticastSetComponentBased },
			{ "MulticastSetDomain", &ATransformerPawn::execMulticastSetDomain },
			{ "MulticastSetRotateOnLocalAxis", &ATransformerPawn::execMulticastSetRotateOnLocalAxis },
			{ "MulticastSetSelectedComponents", &ATransformerPawn::execMulticastSetSelectedComponents },
			{ "MulticastSetSpaceType", &ATransformerPawn::execMulticastSetSpaceType },
			{ "MulticastSetTransformationType", &ATransformerPawn::execMulticastSetTransformationType },
			{ "OnComponentSelectionChange", &ATransformerPawn::execOnComponentSelectionChange },
			{ "OnGizmoStateChanged", &ATransformerPawn::execOnGizmoStateChanged },
			{ "ReplicatedMouseTraceByChannel", &ATransformerPawn::execReplicatedMouseTraceByChannel },
			{ "ReplicatedMouseTraceByObjectTypes", &ATransformerPawn::execReplicatedMouseTraceByObjectTypes },
			{ "ReplicatedMouseTraceByProfile", &ATransformerPawn::execReplicatedMouseTraceByProfile },
			{ "ReplicateFinishTransform", &ATransformerPawn::execReplicateFinishTransform },
			{ "SelectActor", &ATransformerPawn::execSelectActor },
			{ "SelectComponent", &ATransformerPawn::execSelectComponent },
			{ "SelectMultipleActors", &ATransformerPawn::execSelectMultipleActors },
			{ "SelectMultipleComponents", &ATransformerPawn::execSelectMultipleComponents },
			{ "ServerApplyTransform", &ATransformerPawn::execServerApplyTransform },
			{ "ServerClearDomain", &ATransformerPawn::execServerClearDomain },
			{ "ServerCloneSelected", &ATransformerPawn::execServerCloneSelected },
			{ "ServerDeselectAll", &ATransformerPawn::execServerDeselectAll },
			{ "ServerSetComponentBased", &ATransformerPawn::execServerSetComponentBased },
			{ "ServerSetDomain", &ATransformerPawn::execServerSetDomain },
			{ "ServerSetRotateOnLocalAxis", &ATransformerPawn::execServerSetRotateOnLocalAxis },
			{ "ServerSetSpaceType", &ATransformerPawn::execServerSetSpaceType },
			{ "ServerSetTransformationType", &ATransformerPawn::execServerSetTransformationType },
			{ "ServerSyncSelectedComponents", &ATransformerPawn::execServerSyncSelectedComponents },
			{ "ServerTraceByChannel", &ATransformerPawn::execServerTraceByChannel },
			{ "ServerTraceByObjectTypes", &ATransformerPawn::execServerTraceByObjectTypes },
			{ "ServerTraceByProfile", &ATransformerPawn::execServerTraceByProfile },
			{ "SetComponentBased", &ATransformerPawn::execSetComponentBased },
			{ "SetRotateOnLocalAxis", &ATransformerPawn::execSetRotateOnLocalAxis },
			{ "SetSnappingEnabled", &ATransformerPawn::execSetSnappingEnabled },
			{ "SetSnappingValue", &ATransformerPawn::execSetSnappingValue },
			{ "SetSpaceType", &ATransformerPawn::execSetSpaceType },
			{ "SetTransformationType", &ATransformerPawn::execSetTransformationType },
			{ "ShouldSelect", &ATransformerPawn::execShouldSelect },
			{ "TraceByChannel", &ATransformerPawn::execTraceByChannel },
			{ "TraceByObjectTypes", &ATransformerPawn::execTraceByObjectTypes },
			{ "TraceByProfile", &ATransformerPawn::execTraceByProfile },
			{ "UpdateTransform", &ATransformerPawn::execUpdateTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATransformerPawn_ApplyDeltaTransform_Statics
	{
		struct TransformerPawn_eventApplyDeltaTransform_Parms
		{
			FTransform DeltaTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ApplyDeltaTransform_Statics::NewProp_DeltaTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_ApplyDeltaTransform_Statics::NewProp_DeltaTransform = { "DeltaTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventApplyDeltaTransform_Parms, DeltaTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ApplyDeltaTransform_Statics::NewProp_DeltaTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ApplyDeltaTransform_Statics::NewProp_DeltaTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_ApplyDeltaTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ApplyDeltaTransform_Statics::NewProp_DeltaTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ApplyDeltaTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ApplyDeltaTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ApplyDeltaTransform", nullptr, nullptr, sizeof(TransformerPawn_eventApplyDeltaTransform_Parms), Z_Construct_UFunction_ATransformerPawn_ApplyDeltaTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ApplyDeltaTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ApplyDeltaTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ApplyDeltaTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ApplyDeltaTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ApplyDeltaTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ClearDomain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ClearDomain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * Sets the Current Domain to NONE. (Transforming in Progress will become false)\n\x09 * Should be called when we are done transforming with the Gizmo.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Sets the Current Domain to NONE. (Transforming in Progress will become false)\nShould be called when we are done transforming with the Gizmo." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ClearDomain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ClearDomain", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ClearDomain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ClearDomain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ClearDomain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ClearDomain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics
	{
		struct TransformerPawn_eventCloneSelected_Parms
		{
			bool bSelectNewClones;
			bool bAppendToList;
		};
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
		static void NewProp_bSelectNewClones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelectNewClones;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventCloneSelected_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventCloneSelected_Parms), &Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics::NewProp_bSelectNewClones_SetBit(void* Obj)
	{
		((TransformerPawn_eventCloneSelected_Parms*)Obj)->bSelectNewClones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics::NewProp_bSelectNewClones = { "bSelectNewClones", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventCloneSelected_Parms), &Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics::NewProp_bSelectNewClones_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics::NewProp_bSelectNewClones,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/*\n\x09* Makes an exact copy of the Actors that are owners of the components and makes\n\x09* a copy of them.\n\x09\n\x09* Don't spam this :)\n\x09* @param bSelectNewClones - whether to add the new clones to the Selection\n\x09* @param bAppendToList - If the New Clones are selected, whether to Append them to the List or Clear the previous Selections\n\x09*/" },
		{ "CPP_Default_bAppendToList", "false" },
		{ "CPP_Default_bSelectNewClones", "true" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Makes an exact copy of the Actors that are owners of the components and makes\n* a copy of them.\n\n* Don't spam this :)\n* @param bSelectNewClones - whether to add the new clones to the Selection\n* @param bAppendToList - If the New Clones are selected, whether to Append them to the List or Clear the previous Selections" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "CloneSelected", nullptr, nullptr, sizeof(TransformerPawn_eventCloneSelected_Parms), Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_CloneSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_CloneSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_DeselectActor_Statics
	{
		struct TransformerPawn_eventDeselectActor_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_DeselectActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventDeselectActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_DeselectActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_DeselectActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_DeselectActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * Deselects a given Actor's Root Component, if found on the list.\n\x09 * @param Actor whose RootComponent to deselect\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Deselects a given Actor's Root Component, if found on the list.\n@param Actor whose RootComponent to deselect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_DeselectActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "DeselectActor", nullptr, nullptr, sizeof(TransformerPawn_eventDeselectActor_Parms), Z_Construct_UFunction_ATransformerPawn_DeselectActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_DeselectActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_DeselectActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_DeselectActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_DeselectActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_DeselectActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics
	{
		struct TransformerPawn_eventDeselectAll_Parms
		{
			bool bDestroyDeselected;
			TArray<USceneComponent*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_bDestroyDeselected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyDeselected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventDeselectAll_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::NewProp_bDestroyDeselected_SetBit(void* Obj)
	{
		((TransformerPawn_eventDeselectAll_Parms*)Obj)->bDestroyDeselected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::NewProp_bDestroyDeselected = { "bDestroyDeselected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventDeselectAll_Parms), &Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::NewProp_bDestroyDeselected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::NewProp_bDestroyDeselected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/*\n\x09* Deselects all the Selected Components that are in the list.\n\n\x09* @param bDestroyComponents - whether to Deselect all Components and Destroy them!\n\n\x09* @return the list of components that were Deselected. (list will be empty if bDestroyComponents is true)\n\x09*/" },
		{ "CPP_Default_bDestroyDeselected", "false" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Deselects all the Selected Components that are in the list.\n\n* @param bDestroyComponents - whether to Deselect all Components and Destroy them!\n\n* @return the list of components that were Deselected. (list will be empty if bDestroyComponents is true)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "DeselectAll", nullptr, nullptr, sizeof(TransformerPawn_eventDeselectAll_Parms), Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_DeselectAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_DeselectAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_DeselectComponent_Statics
	{
		struct TransformerPawn_eventDeselectComponent_Parms
		{
			USceneComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_DeselectComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_DeselectComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventDeselectComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_DeselectComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_DeselectComponent_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_DeselectComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_DeselectComponent_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_DeselectComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * Deselects a given Component, if found on the list.\n\x09 * @param Component the Component to deselect\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Deselects a given Component, if found on the list.\n@param Component the Component to deselect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_DeselectComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "DeselectComponent", nullptr, nullptr, sizeof(TransformerPawn_eventDeselectComponent_Parms), Z_Construct_UFunction_ATransformerPawn_DeselectComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_DeselectComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_DeselectComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_DeselectComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_DeselectComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_DeselectComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics
	{
		struct TransformerPawn_eventGetCurrentDomain_Parms
		{
			bool TransformInProgress;
			ETransformationDomain ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static void NewProp_TransformInProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TransformInProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventGetCurrentDomain_Parms, ReturnValue), Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics::NewProp_TransformInProgress_SetBit(void* Obj)
	{
		((TransformerPawn_eventGetCurrentDomain_Parms*)Obj)->TransformInProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics::NewProp_TransformInProgress = { "TransformInProgress", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventGetCurrentDomain_Parms), &Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics::NewProp_TransformInProgress_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics::NewProp_TransformInProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Gets the Current Domain\n\x09 * If it returns ETransformationDomain::TD_None, then that means\n\x09 * there is no Transformation in Progress.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Gets the Current Domain\n* If it returns ETransformationDomain::TD_None, then that means\n* there is no Transformation in Progress." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "GetCurrentDomain", nullptr, nullptr, sizeof(TransformerPawn_eventGetCurrentDomain_Parms), Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics
	{
		struct TransformerPawn_eventGetSelectedComponents_Parms
		{
			TArray<USceneComponent*> outComponentList;
			USceneComponent* outGizmoPlacedComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outGizmoPlacedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outGizmoPlacedComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outComponentList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outComponentList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outComponentList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::NewProp_outGizmoPlacedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::NewProp_outGizmoPlacedComponent = { "outGizmoPlacedComponent", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventGetSelectedComponents_Parms, outGizmoPlacedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::NewProp_outGizmoPlacedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::NewProp_outGizmoPlacedComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::NewProp_outComponentList_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::NewProp_outComponentList = { "outComponentList", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventGetSelectedComponents_Parms, outComponentList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::NewProp_outComponentList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::NewProp_outComponentList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::NewProp_outComponentList_Inner = { "outComponentList", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::NewProp_outGizmoPlacedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::NewProp_outComponentList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::NewProp_outComponentList_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Gets the list of Selected Components.\n\n\x09 @return outComponentList - the List of Currently Selected Components\n\x09 @return outGizmoPlacedComponent - the Component in the list that currently has the Gizmo attached\n\x09*/" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Gets the list of Selected Components.\n\n@return outComponentList - the List of Currently Selected Components\n@return outGizmoPlacedComponent - the Component in the list that currently has the Gizmo attached" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "GetSelectedComponents", nullptr, nullptr, sizeof(TransformerPawn_eventGetSelectedComponents_Parms), Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics
	{
		struct TransformerPawn_eventHandleTracedObjects_Parms
		{
			TArray<FHitResult> HitResults;
			bool bAppendToList;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitResults;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResults_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TransformerPawn_eventHandleTracedObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventHandleTracedObjects_Parms), &Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventHandleTracedObjects_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventHandleTracedObjects_Parms), &Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::NewProp_HitResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::NewProp_HitResults = { "HitResults", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventHandleTracedObjects_Parms, HitResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::NewProp_HitResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::NewProp_HitResults_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::NewProp_HitResults_Inner = { "HitResults", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::NewProp_HitResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::NewProp_HitResults_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * Processes the OutHits generated by Tracing and Selects either a Gizmo (priority) or\n\x09 * if no Gizmo is present in the trace, the first object hit is selected.\n\x09 *\n\x09 * This is already called by the RuntimeTransformer built-in Trace Functions,\n\x09 * but can be called manually if you wish to provide your own list of Hit Results (e.g. tracing with different configuration/method)\n\x09 *\n\x09 * @param HitResults - a list of the FHitResults that were generated by LineTracing\n\x09 * @param bAppendToList - If a selection happens, whether to append to the previously selected components or not\n\x09*/" },
		{ "CPP_Default_bAppendToList", "false" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Processes the OutHits generated by Tracing and Selects either a Gizmo (priority) or\nif no Gizmo is present in the trace, the first object hit is selected.\n\nThis is already called by the RuntimeTransformer built-in Trace Functions,\nbut can be called manually if you wish to provide your own list of Hit Results (e.g. tracing with different configuration/method)\n\n@param HitResults - a list of the FHitResults that were generated by LineTracing\n@param bAppendToList - If a selection happens, whether to append to the previously selected components or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "HandleTracedObjects", nullptr, nullptr, sizeof(TransformerPawn_eventHandleTracedObjects_Parms), Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_LogSelectedComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_LogSelectedComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Prints all the information regarding the Currently Selected Components\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Prints all the information regarding the Currently Selected Components" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_LogSelectedComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "LogSelectedComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_LogSelectedComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_LogSelectedComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_LogSelectedComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_LogSelectedComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics
	{
		struct TransformerPawn_eventMouseTraceByChannel_Parms
		{
			float TraceDistance;
			TEnumAsByte<ECollisionChannel> TraceChannel;
			TArray<AActor*> IgnoredActors;
			bool bAppendToList;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoredActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoredActors_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TransformerPawn_eventMouseTraceByChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventMouseTraceByChannel_Parms), &Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventMouseTraceByChannel_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventMouseTraceByChannel_Parms), &Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::NewProp_IgnoredActors = { "IgnoredActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventMouseTraceByChannel_Parms, IgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::NewProp_IgnoredActors_Inner = { "IgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventMouseTraceByChannel_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventMouseTraceByChannel_Parms, TraceDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::NewProp_IgnoredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::NewProp_IgnoredActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::NewProp_TraceDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * If a Gizmo is Present, (i.e. there is a Selected Object), then\n\x09 * this test will prioritize finding a Gizmo, even if it is behind an object.\n\x09 * If there is not a Gizmo present, the first Object encountered will be automatically Selected.\n\n\x09 * This function only does the actual trace if there is a Player Controller Set\n\x09 * @see SetPlayerController\n\n\x09 * @param TraceChannel - The Ray Collision Channel to be Considered in the Trace\n\x09 * @param Ignored Actors\x09- The Actors to be Ignored during trace\n\x09 * @param bAppendToList - If a selection happens, whether to append to the previously selected components or not\n\x09 * @return bool Whether there was an Object traced successfully\n\x09 */" },
		{ "CPP_Default_bAppendToList", "false" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "If a Gizmo is Present, (i.e. there is a Selected Object), then\nthis test will prioritize finding a Gizmo, even if it is behind an object.\nIf there is not a Gizmo present, the first Object encountered will be automatically Selected.\n\nThis function only does the actual trace if there is a Player Controller Set\n@see SetPlayerController\n\n@param TraceChannel - The Ray Collision Channel to be Considered in the Trace\n@param Ignored Actors        - The Actors to be Ignored during trace\n@param bAppendToList - If a selection happens, whether to append to the previously selected components or not\n@return bool Whether there was an Object traced successfully" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "MouseTraceByChannel", nullptr, nullptr, sizeof(TransformerPawn_eventMouseTraceByChannel_Parms), Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics
	{
		struct TransformerPawn_eventMouseTraceByObjectTypes_Parms
		{
			float TraceDistance;
			TArray<TEnumAsByte<ECollisionChannel> > CollisionChannels;
			TArray<AActor*> IgnoredActors;
			bool bAppendToList;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoredActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoredActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionChannels;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannels_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TransformerPawn_eventMouseTraceByObjectTypes_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventMouseTraceByObjectTypes_Parms), &Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventMouseTraceByObjectTypes_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventMouseTraceByObjectTypes_Parms), &Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_IgnoredActors = { "IgnoredActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventMouseTraceByObjectTypes_Parms, IgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_IgnoredActors_Inner = { "IgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_CollisionChannels = { "CollisionChannels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventMouseTraceByObjectTypes_Parms, CollisionChannels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_CollisionChannels_Inner = { "CollisionChannels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventMouseTraceByObjectTypes_Parms, TraceDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_IgnoredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_IgnoredActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_CollisionChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_CollisionChannels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::NewProp_TraceDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * If a Gizmo is Present, (i.e. there is a Selected Object), then\n\x09 * this test will prioritize finding a Gizmo, even if it is behind an object.\n\x09 * If there is not a Gizmo present, the first Object encountered will be automatically Selected.\n\n\x09 * This function only does the actual trace if there is a Player Controller Set\n\x09 * @see SetPlayerController\n\n\x09 * @param CollisionChannels - All the Channels to be considering during Trace\n\x09 * @param Ignored Actors\x09- The Actors to be Ignored during trace\n\x09 * @param bAppendToList - If a selection happens, whether to append to the previously selected components or not\n\x09 * @return bool Whether there was an Object traced successfully\n\x09 */" },
		{ "CPP_Default_bAppendToList", "false" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "If a Gizmo is Present, (i.e. there is a Selected Object), then\nthis test will prioritize finding a Gizmo, even if it is behind an object.\nIf there is not a Gizmo present, the first Object encountered will be automatically Selected.\n\nThis function only does the actual trace if there is a Player Controller Set\n@see SetPlayerController\n\n@param CollisionChannels - All the Channels to be considering during Trace\n@param Ignored Actors        - The Actors to be Ignored during trace\n@param bAppendToList - If a selection happens, whether to append to the previously selected components or not\n@return bool Whether there was an Object traced successfully" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "MouseTraceByObjectTypes", nullptr, nullptr, sizeof(TransformerPawn_eventMouseTraceByObjectTypes_Parms), Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics
	{
		struct TransformerPawn_eventMouseTraceByProfile_Parms
		{
			float TraceDistance;
			FName ProfileName;
			TArray<AActor*> IgnoredActors;
			bool bAppendToList;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoredActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoredActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProfileName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TransformerPawn_eventMouseTraceByProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventMouseTraceByProfile_Parms), &Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventMouseTraceByProfile_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventMouseTraceByProfile_Parms), &Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_IgnoredActors = { "IgnoredActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventMouseTraceByProfile_Parms, IgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_IgnoredActors_Inner = { "IgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_ProfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventMouseTraceByProfile_Parms, ProfileName), METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_ProfileName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventMouseTraceByProfile_Parms, TraceDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_IgnoredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_IgnoredActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_ProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::NewProp_TraceDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * If a Gizmo is Present, (i.e. there is a Selected Object), then\n\x09 * this test will prioritize finding a Gizmo, even if it is behind an object.\n\x09 * If there is not a Gizmo present, the first Object encountered will be automatically Selected.\n\n\x09 * This function only does the actual trace if there is a Player Controller Set\n\x09 * @see SetPlayerController\n\n\x09 * @param ProfileName - The Profile Name to be used during the Trace\n\x09 * @param Ignored Actors\x09- The Actors to be Ignored during trace\n\x09 * @param bAppendToList - If a selection happens, whether to append to the previously selected components or not\n\x09 * @return bool Whether there was an Object traced successfully\n\x09 */" },
		{ "CPP_Default_bAppendToList", "false" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "If a Gizmo is Present, (i.e. there is a Selected Object), then\nthis test will prioritize finding a Gizmo, even if it is behind an object.\nIf there is not a Gizmo present, the first Object encountered will be automatically Selected.\n\nThis function only does the actual trace if there is a Player Controller Set\n@see SetPlayerController\n\n@param ProfileName - The Profile Name to be used during the Trace\n@param Ignored Actors        - The Actors to be Ignored during trace\n@param bAppendToList - If a selection happens, whether to append to the previously selected components or not\n@return bool Whether there was an Object traced successfully" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "MouseTraceByProfile", nullptr, nullptr, sizeof(TransformerPawn_eventMouseTraceByProfile_Parms), Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_MulticastApplyTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_MulticastApplyTransform_Statics::NewProp_DeltaTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_MulticastApplyTransform_Statics::NewProp_DeltaTransform = { "DeltaTransform", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventMulticastApplyTransform_Parms, DeltaTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_MulticastApplyTransform_Statics::NewProp_DeltaTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastApplyTransform_Statics::NewProp_DeltaTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_MulticastApplyTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MulticastApplyTransform_Statics::NewProp_DeltaTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_MulticastApplyTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Multicast, Reliable. ApplyTransform is performed in the Clients.\n\x09 * @ see ApplyTransform\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Multicast, Reliable. ApplyTransform is performed in the Clients.\n* @ see ApplyTransform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_MulticastApplyTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "MulticastApplyTransform", nullptr, nullptr, sizeof(TransformerPawn_eventMulticastApplyTransform_Parms), Z_Construct_UFunction_ATransformerPawn_MulticastApplyTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastApplyTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_MulticastApplyTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastApplyTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_MulticastApplyTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_MulticastApplyTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_MulticastClearDomain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_MulticastClearDomain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Multicast, Reliable. ClearDomain is performed in the Clients.\n\x09 * @ see ClearDomain\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Multicast, Reliable. ClearDomain is performed in the Clients.\n* @ see ClearDomain" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_MulticastClearDomain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "MulticastClearDomain", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_MulticastClearDomain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastClearDomain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_MulticastClearDomain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_MulticastClearDomain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_MulticastDeselectAll_Statics
	{
		static void NewProp_bDestroySelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroySelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_MulticastDeselectAll_Statics::NewProp_bDestroySelected_SetBit(void* Obj)
	{
		((TransformerPawn_eventMulticastDeselectAll_Parms*)Obj)->bDestroySelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_MulticastDeselectAll_Statics::NewProp_bDestroySelected = { "bDestroySelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventMulticastDeselectAll_Parms), &Z_Construct_UFunction_ATransformerPawn_MulticastDeselectAll_Statics::NewProp_bDestroySelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_MulticastDeselectAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MulticastDeselectAll_Statics::NewProp_bDestroySelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_MulticastDeselectAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Multicast, Unreliable. DeselectAll is performed in the Clients.\n\x09 * @ see DeselectAll\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Multicast, Unreliable. DeselectAll is performed in the Clients.\n* @ see DeselectAll" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_MulticastDeselectAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "MulticastDeselectAll", nullptr, nullptr, sizeof(TransformerPawn_eventMulticastDeselectAll_Parms), Z_Construct_UFunction_ATransformerPawn_MulticastDeselectAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastDeselectAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_MulticastDeselectAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastDeselectAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_MulticastDeselectAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_MulticastDeselectAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_MulticastSetComponentBased_Statics
	{
		static void NewProp_bIsComponentBased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsComponentBased;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_MulticastSetComponentBased_Statics::NewProp_bIsComponentBased_SetBit(void* Obj)
	{
		((TransformerPawn_eventMulticastSetComponentBased_Parms*)Obj)->bIsComponentBased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_MulticastSetComponentBased_Statics::NewProp_bIsComponentBased = { "bIsComponentBased", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventMulticastSetComponentBased_Parms), &Z_Construct_UFunction_ATransformerPawn_MulticastSetComponentBased_Statics::NewProp_bIsComponentBased_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_MulticastSetComponentBased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MulticastSetComponentBased_Statics::NewProp_bIsComponentBased,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_MulticastSetComponentBased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Multicast, Reliable. SetComponentBased is performed in the Clients.\n\x09 * @ see SetComponentBased\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Multicast, Reliable. SetComponentBased is performed in the Clients.\n* @ see SetComponentBased" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_MulticastSetComponentBased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "MulticastSetComponentBased", nullptr, nullptr, sizeof(TransformerPawn_eventMulticastSetComponentBased_Parms), Z_Construct_UFunction_ATransformerPawn_MulticastSetComponentBased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastSetComponentBased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_MulticastSetComponentBased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastSetComponentBased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_MulticastSetComponentBased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_MulticastSetComponentBased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_MulticastSetDomain_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Domain;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Domain_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATransformerPawn_MulticastSetDomain_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventMulticastSetDomain_Parms, Domain), Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_MulticastSetDomain_Statics::NewProp_Domain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_MulticastSetDomain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MulticastSetDomain_Statics::NewProp_Domain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MulticastSetDomain_Statics::NewProp_Domain_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_MulticastSetDomain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Multicast, Unreliable. SetDomain is performed in the Clients.\n\x09 * @ see SetDomain\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Multicast, Unreliable. SetDomain is performed in the Clients.\n* @ see SetDomain" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_MulticastSetDomain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "MulticastSetDomain", nullptr, nullptr, sizeof(TransformerPawn_eventMulticastSetDomain_Parms), Z_Construct_UFunction_ATransformerPawn_MulticastSetDomain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastSetDomain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_MulticastSetDomain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastSetDomain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_MulticastSetDomain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_MulticastSetDomain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_MulticastSetRotateOnLocalAxis_Statics
	{
		static void NewProp_bRotateLocalAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateLocalAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_MulticastSetRotateOnLocalAxis_Statics::NewProp_bRotateLocalAxis_SetBit(void* Obj)
	{
		((TransformerPawn_eventMulticastSetRotateOnLocalAxis_Parms*)Obj)->bRotateLocalAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_MulticastSetRotateOnLocalAxis_Statics::NewProp_bRotateLocalAxis = { "bRotateLocalAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventMulticastSetRotateOnLocalAxis_Parms), &Z_Construct_UFunction_ATransformerPawn_MulticastSetRotateOnLocalAxis_Statics::NewProp_bRotateLocalAxis_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_MulticastSetRotateOnLocalAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MulticastSetRotateOnLocalAxis_Statics::NewProp_bRotateLocalAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_MulticastSetRotateOnLocalAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Multicast, Reliable. SetRotateOnLocalAxis is performed in the Clients.\n\x09 * @ see SetRotateOnLocalAxis\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Multicast, Reliable. SetRotateOnLocalAxis is performed in the Clients.\n* @ see SetRotateOnLocalAxis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_MulticastSetRotateOnLocalAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "MulticastSetRotateOnLocalAxis", nullptr, nullptr, sizeof(TransformerPawn_eventMulticastSetRotateOnLocalAxis_Parms), Z_Construct_UFunction_ATransformerPawn_MulticastSetRotateOnLocalAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastSetRotateOnLocalAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_MulticastSetRotateOnLocalAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastSetRotateOnLocalAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_MulticastSetRotateOnLocalAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_MulticastSetRotateOnLocalAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Components_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents_Statics::NewProp_Components_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010008008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventMulticastSetSelectedComponents_Parms, Components), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents_Statics::NewProp_Components_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents_Statics::NewProp_Components_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents_Statics::NewProp_Components,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents_Statics::NewProp_Components_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Multicast, Reliable. \n\x09 * Syncs the SelectedComponents of the Server to the Clients.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Multicast, Reliable.\n* Syncs the SelectedComponents of the Server to the Clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "MulticastSetSelectedComponents", nullptr, nullptr, sizeof(TransformerPawn_eventMulticastSetSelectedComponents_Parms), Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_MulticastSetSpaceType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Space;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATransformerPawn_MulticastSetSpaceType_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventMulticastSetSpaceType_Parms, Space), Z_Construct_UEnum_RuntimeTransformer_ESpaceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_MulticastSetSpaceType_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_MulticastSetSpaceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MulticastSetSpaceType_Statics::NewProp_Space,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MulticastSetSpaceType_Statics::NewProp_Space_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_MulticastSetSpaceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Multicast, Reliable. SetSpaceType is performed in the Clients.\n\x09 * @ see SetSpaceType\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Multicast, Reliable. SetSpaceType is performed in the Clients.\n* @ see SetSpaceType" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_MulticastSetSpaceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "MulticastSetSpaceType", nullptr, nullptr, sizeof(TransformerPawn_eventMulticastSetSpaceType_Parms), Z_Construct_UFunction_ATransformerPawn_MulticastSetSpaceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastSetSpaceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_MulticastSetSpaceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastSetSpaceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_MulticastSetSpaceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_MulticastSetSpaceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_MulticastSetTransformationType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Transformation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Transformation_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATransformerPawn_MulticastSetTransformationType_Statics::NewProp_Transformation = { "Transformation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventMulticastSetTransformationType_Parms, Transformation), Z_Construct_UEnum_RuntimeTransformer_ETransformationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_MulticastSetTransformationType_Statics::NewProp_Transformation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_MulticastSetTransformationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MulticastSetTransformationType_Statics::NewProp_Transformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_MulticastSetTransformationType_Statics::NewProp_Transformation_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_MulticastSetTransformationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Multicast, Reliable. SetTransformationType is performed in the Clients.\n\x09 * @ see SetTransformationType\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Multicast, Reliable. SetTransformationType is performed in the Clients.\n* @ see SetTransformationType" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_MulticastSetTransformationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "MulticastSetTransformationType", nullptr, nullptr, sizeof(TransformerPawn_eventMulticastSetTransformationType_Parms), Z_Construct_UFunction_ATransformerPawn_MulticastSetTransformationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastSetTransformationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_MulticastSetTransformationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_MulticastSetTransformationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_MulticastSetTransformationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_MulticastSetTransformationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics
	{
		static void NewProp_bImplementsUFocusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImplementsUFocusable;
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::NewProp_bImplementsUFocusable_SetBit(void* Obj)
	{
		((TransformerPawn_eventOnComponentSelectionChange_Parms*)Obj)->bImplementsUFocusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::NewProp_bImplementsUFocusable = { "bImplementsUFocusable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventOnComponentSelectionChange_Parms), &Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::NewProp_bImplementsUFocusable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((TransformerPawn_eventOnComponentSelectionChange_Parms*)Obj)->bSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventOnComponentSelectionChange_Parms), &Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventOnComponentSelectionChange_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::NewProp_bImplementsUFocusable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::NewProp_bSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Called when a new Component has been Selected (Focused)\n\x09 * or has been unselected (unfocused).\n\n\x09 * This should be used if there needs to be logic applied to\n\x09 * objects that do not implement the UFocusable interface.\n\n\x09 * @param Component - the Component selected/deselected\n\x09 * @param bSelected - whether the given component was selected or unselected\n\x09 * @param bImplementsUFocusable - whether the given Component implements UFocusable (Actor considered, if actors are traced)\n\x09*/" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Called when a new Component has been Selected (Focused)\n* or has been unselected (unfocused).\n\n* This should be used if there needs to be logic applied to\n* objects that do not implement the UFocusable interface.\n\n* @param Component - the Component selected/deselected\n* @param bSelected - whether the given component was selected or unselected\n* @param bImplementsUFocusable - whether the given Component implements UFocusable (Actor considered, if actors are traced)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "OnComponentSelectionChange", nullptr, nullptr, sizeof(TransformerPawn_eventOnComponentSelectionChange_Parms), Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Domain;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Domain_Underlying;
		static void NewProp_bTransformInProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransformInProgress;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GizmoType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GizmoType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventOnGizmoStateChanged_Parms, Domain), Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::NewProp_Domain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::NewProp_bTransformInProgress_SetBit(void* Obj)
	{
		((TransformerPawn_eventOnGizmoStateChanged_Parms*)Obj)->bTransformInProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::NewProp_bTransformInProgress = { "bTransformInProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventOnGizmoStateChanged_Parms), &Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::NewProp_bTransformInProgress_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::NewProp_GizmoType = { "GizmoType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventOnGizmoStateChanged_Parms, GizmoType), Z_Construct_UEnum_RuntimeTransformer_ETransformationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::NewProp_GizmoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::NewProp_Domain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::NewProp_Domain_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::NewProp_bTransformInProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::NewProp_GizmoType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::NewProp_GizmoType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Called when the Gizmo State has changed (i.e. Domain has changed)\n\x09 * @param GizmoType - the type of Gizmo that was changed (Translation, Rotation or Scale)\n\x09 * @param bTransformInProgress - whether the Transform is currently in progress. This is basically a bool that evaluates to Domain != NONE\n\x09 * @param Domain - The current domain that the Gizmo State changed to\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Called when the Gizmo State has changed (i.e. Domain has changed)\n* @param GizmoType - the type of Gizmo that was changed (Translation, Rotation or Scale)\n* @param bTransformInProgress - whether the Transform is currently in progress. This is basically a bool that evaluates to Domain != NONE\n* @param Domain - The current domain that the Gizmo State changed to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "OnGizmoStateChanged", nullptr, nullptr, sizeof(TransformerPawn_eventOnGizmoStateChanged_Parms), Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics
	{
		struct TransformerPawn_eventReplicatedMouseTraceByChannel_Parms
		{
			float TraceDistance;
			TEnumAsByte<ECollisionChannel> CollisionChannel;
			bool bAppendToList;
		};
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventReplicatedMouseTraceByChannel_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventReplicatedMouseTraceByChannel_Parms), &Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventReplicatedMouseTraceByChannel_Parms, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventReplicatedMouseTraceByChannel_Parms, TraceDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics::NewProp_CollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics::NewProp_TraceDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09* Function Similar to MouseTraceByChannel\n\x09* Performs a Local Trace for Gizmos (since they appear differently for each player)\n\x09* and then Performs a Server Trace for the rest of the Objects found in the Server.\n\n\x09* ONLY CALL THIS if the PAWN has a Valid Player Controller.\n\x09\n\x09* @see MouseTraceByChannel for Param Desc\n\x09*/" },
		{ "CPP_Default_bAppendToList", "false" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Function Similar to MouseTraceByChannel\n* Performs a Local Trace for Gizmos (since they appear differently for each player)\n* and then Performs a Server Trace for the rest of the Objects found in the Server.\n\n* ONLY CALL THIS if the PAWN has a Valid Player Controller.\n\n* @see MouseTraceByChannel for Param Desc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ReplicatedMouseTraceByChannel", nullptr, nullptr, sizeof(TransformerPawn_eventReplicatedMouseTraceByChannel_Parms), Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics
	{
		struct TransformerPawn_eventReplicatedMouseTraceByObjectTypes_Parms
		{
			float TraceDistance;
			TArray<TEnumAsByte<ECollisionChannel> > CollisionChannels;
			bool bAppendToList;
		};
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionChannels;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannels_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventReplicatedMouseTraceByObjectTypes_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventReplicatedMouseTraceByObjectTypes_Parms), &Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::NewProp_CollisionChannels = { "CollisionChannels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventReplicatedMouseTraceByObjectTypes_Parms, CollisionChannels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::NewProp_CollisionChannels_Inner = { "CollisionChannels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventReplicatedMouseTraceByObjectTypes_Parms, TraceDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::NewProp_CollisionChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::NewProp_CollisionChannels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::NewProp_TraceDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/* \n\x09* Function Similar to MouseTraceByObjectTypes\n\x09* Performs a Local Trace for Gizmos (since they appear differently for each player)\n\x09* and then Performs a Server Trace for the rest of the Objects found in the Server.\n\n\x09* ONLY CALL THIS if the PAWN has a Valid Player Controller. \n\x09\n\x09* @see MouseTraceByObjectTypes for Param Desc\n\x09*/" },
		{ "CPP_Default_bAppendToList", "false" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Function Similar to MouseTraceByObjectTypes\n* Performs a Local Trace for Gizmos (since they appear differently for each player)\n* and then Performs a Server Trace for the rest of the Objects found in the Server.\n\n* ONLY CALL THIS if the PAWN has a Valid Player Controller.\n\n* @see MouseTraceByObjectTypes for Param Desc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ReplicatedMouseTraceByObjectTypes", nullptr, nullptr, sizeof(TransformerPawn_eventReplicatedMouseTraceByObjectTypes_Parms), Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics
	{
		struct TransformerPawn_eventReplicatedMouseTraceByProfile_Parms
		{
			float TraceDistance;
			FName ProfileName;
			bool bAppendToList;
		};
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProfileName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventReplicatedMouseTraceByProfile_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventReplicatedMouseTraceByProfile_Parms), &Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::NewProp_ProfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventReplicatedMouseTraceByProfile_Parms, ProfileName), METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::NewProp_ProfileName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventReplicatedMouseTraceByProfile_Parms, TraceDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::NewProp_ProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::NewProp_TraceDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09* Function Similar to MouseTraceByProfile\n\x09* Performs a Local Trace for Gizmos (since they appear differently for each player)\n\x09* and then Performs a Server Trace for the rest of the Objects found in the Server.\n\n\x09* ONLY CALL THIS if the PAWN has a Valid Player Controller.\n\n\x09* @see MouseTraceByProfile for Param Desc\n\x09*/" },
		{ "CPP_Default_bAppendToList", "false" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Function Similar to MouseTraceByProfile\n* Performs a Local Trace for Gizmos (since they appear differently for each player)\n* and then Performs a Server Trace for the rest of the Objects found in the Server.\n\n* ONLY CALL THIS if the PAWN has a Valid Player Controller.\n\n* @see MouseTraceByProfile for Param Desc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ReplicatedMouseTraceByProfile", nullptr, nullptr, sizeof(TransformerPawn_eventReplicatedMouseTraceByProfile_Parms), Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ReplicateFinishTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ReplicateFinishTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Calls the ServerClearDomain.\n\x09 * Then it calls ServerApplyTransform and Resets the Accumulated Network Transform.\n\n\x09 * @see ServerClearDomain\n\x09 * @see ServerApplyTransform\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Calls the ServerClearDomain.\n* Then it calls ServerApplyTransform and Resets the Accumulated Network Transform.\n\n* @see ServerClearDomain\n* @see ServerApplyTransform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ReplicateFinishTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ReplicateFinishTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ReplicateFinishTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ReplicateFinishTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ReplicateFinishTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ReplicateFinishTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_SelectActor_Statics
	{
		struct TransformerPawn_eventSelectActor_Parms
		{
			AActor* Actor;
			bool bAppendToList;
		};
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_SelectActor_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventSelectActor_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_SelectActor_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventSelectActor_Parms), &Z_Construct_UFunction_ATransformerPawn_SelectActor_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_SelectActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventSelectActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_SelectActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SelectActor_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SelectActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_SelectActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * Select Actor adds the Actor's Root Component to a list of components that will be used for the Runtime Transforms\n\x09 * @param Actor The Actor whose Root Component will be added to the list.\n\x09 * @param bAppendToList - If a selection happens, whether to append to the previously selected components or not\n\x09 */" },
		{ "CPP_Default_bAppendToList", "false" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Select Actor adds the Actor's Root Component to a list of components that will be used for the Runtime Transforms\n@param Actor The Actor whose Root Component will be added to the list.\n@param bAppendToList - If a selection happens, whether to append to the previously selected components or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_SelectActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "SelectActor", nullptr, nullptr, sizeof(TransformerPawn_eventSelectActor_Parms), Z_Construct_UFunction_ATransformerPawn_SelectActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SelectActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_SelectActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SelectActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_SelectActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_SelectActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics
	{
		struct TransformerPawn_eventSelectComponent_Parms
		{
			USceneComponent* Component;
			bool bAppendToList;
		};
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventSelectComponent_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventSelectComponent_Parms), &Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventSelectComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * Select Component adds a given Component to a list of components that will be used for the Runtime Transforms\n\x09 * @param Component The component to add to the list.\n\x09 * @param bAppendToList - If a selection happens, whether to append to the previously selected components or not\n\x09*/" },
		{ "CPP_Default_bAppendToList", "false" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Select Component adds a given Component to a list of components that will be used for the Runtime Transforms\n@param Component The component to add to the list.\n@param bAppendToList - If a selection happens, whether to append to the previously selected components or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "SelectComponent", nullptr, nullptr, sizeof(TransformerPawn_eventSelectComponent_Parms), Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_SelectComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_SelectComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics
	{
		struct TransformerPawn_eventSelectMultipleActors_Parms
		{
			TArray<AActor*> Actors;
			bool bAppendToList;
		};
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventSelectMultipleActors_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventSelectMultipleActors_Parms), &Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventSelectMultipleActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::NewProp_Actors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * Selects all the Root Components of the Actors in given list.\n\x09 * @see SelectActor func\n\x09 */" },
		{ "CPP_Default_bAppendToList", "false" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Selects all the Root Components of the Actors in given list.\n@see SelectActor func" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "SelectMultipleActors", nullptr, nullptr, sizeof(TransformerPawn_eventSelectMultipleActors_Parms), Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics
	{
		struct TransformerPawn_eventSelectMultipleComponents_Parms
		{
			TArray<USceneComponent*> Components;
			bool bAppendToList;
		};
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Components_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventSelectMultipleComponents_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventSelectMultipleComponents_Parms), &Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::NewProp_Components_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventSelectMultipleComponents_Parms, Components), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::NewProp_Components_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::NewProp_Components_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::NewProp_Components,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::NewProp_Components_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * Selects all the Components in given list.\n\x09 * @see SelectComponent func\n\x09 */" },
		{ "CPP_Default_bAppendToList", "false" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Selects all the Components in given list.\n@see SelectComponent func" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "SelectMultipleComponents", nullptr, nullptr, sizeof(TransformerPawn_eventSelectMultipleComponents_Parms), Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ServerApplyTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerApplyTransform_Statics::NewProp_DeltaTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerApplyTransform_Statics::NewProp_DeltaTransform = { "DeltaTransform", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventServerApplyTransform_Parms, DeltaTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerApplyTransform_Statics::NewProp_DeltaTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerApplyTransform_Statics::NewProp_DeltaTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_ServerApplyTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerApplyTransform_Statics::NewProp_DeltaTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerApplyTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * ServerCall, Reliable. ApplyTransform is performed in the Server.\n\x09 * Currently no Validation takes place.\n\x09 * @ see ApplyTransform\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* ServerCall, Reliable. ApplyTransform is performed in the Server.\n* Currently no Validation takes place.\n* @ see ApplyTransform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ServerApplyTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ServerApplyTransform", nullptr, nullptr, sizeof(TransformerPawn_eventServerApplyTransform_Parms), Z_Construct_UFunction_ATransformerPawn_ServerApplyTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerApplyTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerApplyTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerApplyTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ServerApplyTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ServerApplyTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ServerClearDomain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerClearDomain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * ServerCall, Reliable. ClearDomain is performed in the Server.\n\x09 * Currently no Validation takes place.\n\x09 * @ see ClearDomain\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* ServerCall, Reliable. ClearDomain is performed in the Server.\n* Currently no Validation takes place.\n* @ see ClearDomain" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ServerClearDomain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ServerClearDomain", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerClearDomain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerClearDomain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ServerClearDomain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ServerClearDomain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics
	{
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
		static void NewProp_bSelectNewClones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelectNewClones;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventServerCloneSelected_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventServerCloneSelected_Parms), &Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics::NewProp_bSelectNewClones_SetBit(void* Obj)
	{
		((TransformerPawn_eventServerCloneSelected_Parms*)Obj)->bSelectNewClones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics::NewProp_bSelectNewClones = { "bSelectNewClones", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventServerCloneSelected_Parms), &Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics::NewProp_bSelectNewClones_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics::NewProp_bSelectNewClones,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09* ServerCall, Unreliable. CloneSelected is performed in the Server.\n\x09* Currently no Validation takes place. \n\n\x09* WARNING: Component Cloning will NOT take place. (PluginLimitations.txt for details)\n\n\x09* NOTE: The Objects must be Replicating in order to be reflected in the Clients.\n\x09* Objects that are cloned are NOT directly handled but rather a Timer is used to check\n\x09* when the objects have finished beginplay, so that we are sure that the networking logic has been processed for them\n\n\x09* @ see CloneSelected\n\x09* @ see CheckUnreplicatedActors\n\x09*/" },
		{ "CPP_Default_bAppendToList", "false" },
		{ "CPP_Default_bSelectNewClones", "true" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* ServerCall, Unreliable. CloneSelected is performed in the Server.\n* Currently no Validation takes place.\n\n* WARNING: Component Cloning will NOT take place. (PluginLimitations.txt for details)\n\n* NOTE: The Objects must be Replicating in order to be reflected in the Clients.\n* Objects that are cloned are NOT directly handled but rather a Timer is used to check\n* when the objects have finished beginplay, so that we are sure that the networking logic has been processed for them\n\n* @ see CloneSelected\n* @ see CheckUnreplicatedActors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ServerCloneSelected", nullptr, nullptr, sizeof(TransformerPawn_eventServerCloneSelected_Parms), Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ServerDeselectAll_Statics
	{
		static void NewProp_bDestroySelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroySelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_ServerDeselectAll_Statics::NewProp_bDestroySelected_SetBit(void* Obj)
	{
		((TransformerPawn_eventServerDeselectAll_Parms*)Obj)->bDestroySelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerDeselectAll_Statics::NewProp_bDestroySelected = { "bDestroySelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventServerDeselectAll_Parms), &Z_Construct_UFunction_ATransformerPawn_ServerDeselectAll_Statics::NewProp_bDestroySelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_ServerDeselectAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerDeselectAll_Statics::NewProp_bDestroySelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerDeselectAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * ServerCall, Unreliable. DeselectAll is performed in the Server.\n\x09 * Currently no Validation takes place.\n\x09 * @ see DeselectAll\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* ServerCall, Unreliable. DeselectAll is performed in the Server.\n* Currently no Validation takes place.\n* @ see DeselectAll" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ServerDeselectAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ServerDeselectAll", nullptr, nullptr, sizeof(TransformerPawn_eventServerDeselectAll_Parms), Z_Construct_UFunction_ATransformerPawn_ServerDeselectAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerDeselectAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerDeselectAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerDeselectAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ServerDeselectAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ServerDeselectAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ServerSetComponentBased_Statics
	{
		static void NewProp_bIsComponentBased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsComponentBased;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_ServerSetComponentBased_Statics::NewProp_bIsComponentBased_SetBit(void* Obj)
	{
		((TransformerPawn_eventServerSetComponentBased_Parms*)Obj)->bIsComponentBased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerSetComponentBased_Statics::NewProp_bIsComponentBased = { "bIsComponentBased", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventServerSetComponentBased_Parms), &Z_Construct_UFunction_ATransformerPawn_ServerSetComponentBased_Statics::NewProp_bIsComponentBased_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_ServerSetComponentBased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerSetComponentBased_Statics::NewProp_bIsComponentBased,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerSetComponentBased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * ServerCall, Reliable. SetComponentBased is performed in the Server.\n\x09 * Currently no Validation takes place.\n\x09 * @ see SetComponentBased\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* ServerCall, Reliable. SetComponentBased is performed in the Server.\n* Currently no Validation takes place.\n* @ see SetComponentBased" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ServerSetComponentBased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ServerSetComponentBased", nullptr, nullptr, sizeof(TransformerPawn_eventServerSetComponentBased_Parms), Z_Construct_UFunction_ATransformerPawn_ServerSetComponentBased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerSetComponentBased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerSetComponentBased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerSetComponentBased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ServerSetComponentBased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ServerSetComponentBased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ServerSetDomain_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Domain;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Domain_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerSetDomain_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventServerSetDomain_Parms, Domain), Z_Construct_UEnum_RuntimeTransformer_ETransformationDomain, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_ServerSetDomain_Statics::NewProp_Domain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_ServerSetDomain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerSetDomain_Statics::NewProp_Domain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerSetDomain_Statics::NewProp_Domain_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerSetDomain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * ServerCall, Unreliable. SetDomain is performed in the Server.\n\x09 * Currently no Validation takes place.\n\x09 * @ see SetDomain\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* ServerCall, Unreliable. SetDomain is performed in the Server.\n* Currently no Validation takes place.\n* @ see SetDomain" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ServerSetDomain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ServerSetDomain", nullptr, nullptr, sizeof(TransformerPawn_eventServerSetDomain_Parms), Z_Construct_UFunction_ATransformerPawn_ServerSetDomain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerSetDomain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerSetDomain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerSetDomain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ServerSetDomain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ServerSetDomain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ServerSetRotateOnLocalAxis_Statics
	{
		static void NewProp_bRotateLocalAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateLocalAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_ServerSetRotateOnLocalAxis_Statics::NewProp_bRotateLocalAxis_SetBit(void* Obj)
	{
		((TransformerPawn_eventServerSetRotateOnLocalAxis_Parms*)Obj)->bRotateLocalAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerSetRotateOnLocalAxis_Statics::NewProp_bRotateLocalAxis = { "bRotateLocalAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventServerSetRotateOnLocalAxis_Parms), &Z_Construct_UFunction_ATransformerPawn_ServerSetRotateOnLocalAxis_Statics::NewProp_bRotateLocalAxis_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_ServerSetRotateOnLocalAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerSetRotateOnLocalAxis_Statics::NewProp_bRotateLocalAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerSetRotateOnLocalAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * ServerCall, Reliable. SetRotateOnLocalAxis is performed in the Server.\n\x09 * Currently no Validation takes place.\n\x09 * @ see SetRotateOnLocalAxis\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* ServerCall, Reliable. SetRotateOnLocalAxis is performed in the Server.\n* Currently no Validation takes place.\n* @ see SetRotateOnLocalAxis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ServerSetRotateOnLocalAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ServerSetRotateOnLocalAxis", nullptr, nullptr, sizeof(TransformerPawn_eventServerSetRotateOnLocalAxis_Parms), Z_Construct_UFunction_ATransformerPawn_ServerSetRotateOnLocalAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerSetRotateOnLocalAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerSetRotateOnLocalAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerSetRotateOnLocalAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ServerSetRotateOnLocalAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ServerSetRotateOnLocalAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ServerSetSpaceType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Space;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerSetSpaceType_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventServerSetSpaceType_Parms, Space), Z_Construct_UEnum_RuntimeTransformer_ESpaceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_ServerSetSpaceType_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_ServerSetSpaceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerSetSpaceType_Statics::NewProp_Space,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerSetSpaceType_Statics::NewProp_Space_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerSetSpaceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * ServerCall, Reliable. SetSpaceType is performed in the Server.\n\x09 * Currently no Validation takes place.\n\x09 * @ see SetSpaceType\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* ServerCall, Reliable. SetSpaceType is performed in the Server.\n* Currently no Validation takes place.\n* @ see SetSpaceType" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ServerSetSpaceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ServerSetSpaceType", nullptr, nullptr, sizeof(TransformerPawn_eventServerSetSpaceType_Parms), Z_Construct_UFunction_ATransformerPawn_ServerSetSpaceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerSetSpaceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerSetSpaceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerSetSpaceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ServerSetSpaceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ServerSetSpaceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ServerSetTransformationType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Transformation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Transformation_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerSetTransformationType_Statics::NewProp_Transformation = { "Transformation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventServerSetTransformationType_Parms, Transformation), Z_Construct_UEnum_RuntimeTransformer_ETransformationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_ServerSetTransformationType_Statics::NewProp_Transformation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_ServerSetTransformationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerSetTransformationType_Statics::NewProp_Transformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerSetTransformationType_Statics::NewProp_Transformation_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerSetTransformationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * ServerCall, Reliable. SetTransformationType is performed in the Server.\n\x09 * Currently no Validation takes place.\n\x09 * @ see SetTransformationType\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* ServerCall, Reliable. SetTransformationType is performed in the Server.\n* Currently no Validation takes place.\n* @ see SetTransformationType" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ServerSetTransformationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ServerSetTransformationType", nullptr, nullptr, sizeof(TransformerPawn_eventServerSetTransformationType_Parms), Z_Construct_UFunction_ATransformerPawn_ServerSetTransformationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerSetTransformationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerSetTransformationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerSetTransformationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ServerSetTransformationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ServerSetTransformationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ServerSyncSelectedComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerSyncSelectedComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * ServerCall, Reliable. Multicasts the Selected Components of the Server to all Clients.\n\x09 * Currently no Validation takes place.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* ServerCall, Reliable. Multicasts the Selected Components of the Server to all Clients.\n* Currently no Validation takes place." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ServerSyncSelectedComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ServerSyncSelectedComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerSyncSelectedComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerSyncSelectedComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ServerSyncSelectedComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ServerSyncSelectedComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics
	{
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventServerTraceByChannel_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventServerTraceByChannel_Parms), &Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventServerTraceByChannel_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventServerTraceByChannel_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventServerTraceByChannel_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::NewProp_StartLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::NewProp_StartLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * ServerCall, Unreliable. Trace is performed in the Server.\n\x09 * Currently no Validation takes place.\n\x09 * @ see TraceByChannel\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* ServerCall, Unreliable. Trace is performed in the Server.\n* Currently no Validation takes place.\n* @ see TraceByChannel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ServerTraceByChannel", nullptr, nullptr, sizeof(TransformerPawn_eventServerTraceByChannel_Parms), Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics
	{
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionChannels;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventServerTraceByObjectTypes_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventServerTraceByObjectTypes_Parms), &Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_CollisionChannels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_CollisionChannels = { "CollisionChannels", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventServerTraceByObjectTypes_Parms, CollisionChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_CollisionChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_CollisionChannels_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_CollisionChannels_Inner = { "CollisionChannels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventServerTraceByObjectTypes_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventServerTraceByObjectTypes_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_StartLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_CollisionChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_CollisionChannels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::NewProp_StartLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * ServerCall, Unreliable. Trace is performed in the Server.\n\x09 * Currently no Validation takes place.\n\x09 * @ see TraceByObjectTypes\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* ServerCall, Unreliable. Trace is performed in the Server.\n* Currently no Validation takes place.\n* @ see TraceByObjectTypes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ServerTraceByObjectTypes", nullptr, nullptr, sizeof(TransformerPawn_eventServerTraceByObjectTypes_Parms), Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics
	{
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventServerTraceByProfile_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventServerTraceByProfile_Parms), &Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_ProfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventServerTraceByProfile_Parms, ProfileName), METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_ProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventServerTraceByProfile_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventServerTraceByProfile_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_StartLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_ProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::NewProp_StartLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * ServerCall, Unreliable. Trace is performed in the Server.\n\x09 * Currently no Validation takes place.\n\x09 * @ see TraceByProfile\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* ServerCall, Unreliable. Trace is performed in the Server.\n* Currently no Validation takes place.\n* @ see TraceByProfile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ServerTraceByProfile", nullptr, nullptr, sizeof(TransformerPawn_eventServerTraceByProfile_Parms), Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_SetComponentBased_Statics
	{
		struct TransformerPawn_eventSetComponentBased_Parms
		{
			bool bIsComponentBased;
		};
		static void NewProp_bIsComponentBased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsComponentBased;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_SetComponentBased_Statics::NewProp_bIsComponentBased_SetBit(void* Obj)
	{
		((TransformerPawn_eventSetComponentBased_Parms*)Obj)->bIsComponentBased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_SetComponentBased_Statics::NewProp_bIsComponentBased = { "bIsComponentBased", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventSetComponentBased_Parms), &Z_Construct_UFunction_ATransformerPawn_SetComponentBased_Statics::NewProp_bIsComponentBased_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_SetComponentBased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SetComponentBased_Statics::NewProp_bIsComponentBased,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_SetComponentBased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * Whether to Set the System to work with Components (true)\n\x09 * or to work with Actors (false)\n\n\x09 @see bComponentBased\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Whether to Set the System to work with Components (true)\nor to work with Actors (false)\n\n        @see bComponentBased" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_SetComponentBased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "SetComponentBased", nullptr, nullptr, sizeof(TransformerPawn_eventSetComponentBased_Parms), Z_Construct_UFunction_ATransformerPawn_SetComponentBased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SetComponentBased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_SetComponentBased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SetComponentBased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_SetComponentBased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_SetComponentBased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_SetRotateOnLocalAxis_Statics
	{
		struct TransformerPawn_eventSetRotateOnLocalAxis_Parms
		{
			bool bRotateLocalAxis;
		};
		static void NewProp_bRotateLocalAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateLocalAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_SetRotateOnLocalAxis_Statics::NewProp_bRotateLocalAxis_SetBit(void* Obj)
	{
		((TransformerPawn_eventSetRotateOnLocalAxis_Parms*)Obj)->bRotateLocalAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_SetRotateOnLocalAxis_Statics::NewProp_bRotateLocalAxis = { "bRotateLocalAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventSetRotateOnLocalAxis_Parms), &Z_Construct_UFunction_ATransformerPawn_SetRotateOnLocalAxis_Statics::NewProp_bRotateLocalAxis_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_SetRotateOnLocalAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SetRotateOnLocalAxis_Statics::NewProp_bRotateLocalAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_SetRotateOnLocalAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * Whether to Set the System to Rotate Multiple Objects around their own axis (true)\n\x09 * or to work rotate around where the Gizmo is at (false)\n\n\x09 @see bRotateLocalAxis\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Whether to Set the System to Rotate Multiple Objects around their own axis (true)\nor to work rotate around where the Gizmo is at (false)\n\n        @see bRotateLocalAxis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_SetRotateOnLocalAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "SetRotateOnLocalAxis", nullptr, nullptr, sizeof(TransformerPawn_eventSetRotateOnLocalAxis_Parms), Z_Construct_UFunction_ATransformerPawn_SetRotateOnLocalAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SetRotateOnLocalAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_SetRotateOnLocalAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SetRotateOnLocalAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_SetRotateOnLocalAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_SetRotateOnLocalAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics
	{
		struct TransformerPawn_eventSetSnappingEnabled_Parms
		{
			ETransformationType TransformationType;
			bool bSnappingEnabled;
		};
		static void NewProp_bSnappingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnappingEnabled;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransformationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformationType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics::NewProp_bSnappingEnabled_SetBit(void* Obj)
	{
		((TransformerPawn_eventSetSnappingEnabled_Parms*)Obj)->bSnappingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics::NewProp_bSnappingEnabled = { "bSnappingEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventSetSnappingEnabled_Parms), &Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics::NewProp_bSnappingEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics::NewProp_TransformationType = { "TransformationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventSetSnappingEnabled_Parms, TransformationType), Z_Construct_UEnum_RuntimeTransformer_ETransformationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics::NewProp_TransformationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics::NewProp_bSnappingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics::NewProp_TransformationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics::NewProp_TransformationType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Enables/Disables Snapping for a given Transformation\n\x09 * Snapping Value for the Given Transformation MUST NOT be 0 for Snapping to work\n\n\x09 @see SetSnappingValue\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Enables/Disables Snapping for a given Transformation\n* Snapping Value for the Given Transformation MUST NOT be 0 for Snapping to work\n\n@see SetSnappingValue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "SetSnappingEnabled", nullptr, nullptr, sizeof(TransformerPawn_eventSetSnappingEnabled_Parms), Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_SetSnappingValue_Statics
	{
		struct TransformerPawn_eventSetSnappingValue_Parms
		{
			ETransformationType TransformationType;
			float SnappingValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnappingValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransformationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformationType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATransformerPawn_SetSnappingValue_Statics::NewProp_SnappingValue = { "SnappingValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventSetSnappingValue_Parms, SnappingValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATransformerPawn_SetSnappingValue_Statics::NewProp_TransformationType = { "TransformationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventSetSnappingValue_Parms, TransformationType), Z_Construct_UEnum_RuntimeTransformer_ETransformationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_SetSnappingValue_Statics::NewProp_TransformationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_SetSnappingValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SetSnappingValue_Statics::NewProp_SnappingValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SetSnappingValue_Statics::NewProp_TransformationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SetSnappingValue_Statics::NewProp_TransformationType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_SetSnappingValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Sets a Snapping Value for a given Transformation\n\x09 * Snapping Value MUST NOT be 0  and Snapping must be enabled for the given transformation for Snapping to work\n\n\x09 @see SetSnappingEnabled\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Sets a Snapping Value for a given Transformation\n* Snapping Value MUST NOT be 0  and Snapping must be enabled for the given transformation for Snapping to work\n\n@see SetSnappingEnabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_SetSnappingValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "SetSnappingValue", nullptr, nullptr, sizeof(TransformerPawn_eventSetSnappingValue_Parms), Z_Construct_UFunction_ATransformerPawn_SetSnappingValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SetSnappingValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_SetSnappingValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SetSnappingValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_SetSnappingValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_SetSnappingValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_SetSpaceType_Statics
	{
		struct TransformerPawn_eventSetSpaceType_Parms
		{
			ESpaceType Type;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATransformerPawn_SetSpaceType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventSetSpaceType_Parms, Type), Z_Construct_UEnum_RuntimeTransformer_ESpaceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_SetSpaceType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_SetSpaceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SetSpaceType_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SetSpaceType_Statics::NewProp_Type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_SetSpaceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "//Sets the Space of the Gizmo, whether its Local or World space.\n" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Sets the Space of the Gizmo, whether its Local or World space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_SetSpaceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "SetSpaceType", nullptr, nullptr, sizeof(TransformerPawn_eventSetSpaceType_Parms), Z_Construct_UFunction_ATransformerPawn_SetSpaceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SetSpaceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_SetSpaceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SetSpaceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_SetSpaceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_SetSpaceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_SetTransformationType_Statics
	{
		struct TransformerPawn_eventSetTransformationType_Parms
		{
			ETransformationType TransformationType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransformationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformationType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATransformerPawn_SetTransformationType_Statics::NewProp_TransformationType = { "TransformationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventSetTransformationType_Parms, TransformationType), Z_Construct_UEnum_RuntimeTransformer_ETransformationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_SetTransformationType_Statics::NewProp_TransformationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_SetTransformationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SetTransformationType_Statics::NewProp_TransformationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_SetTransformationType_Statics::NewProp_TransformationType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_SetTransformationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * Sets the Current Transformation (Translation, Rotation or Scale)\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Sets the Current Transformation (Translation, Rotation or Scale)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_SetTransformationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "SetTransformationType", nullptr, nullptr, sizeof(TransformerPawn_eventSetTransformationType_Parms), Z_Construct_UFunction_ATransformerPawn_SetTransformationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SetTransformationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_SetTransformationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_SetTransformationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_SetTransformationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_SetTransformationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TransformerPawn_eventShouldSelect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventShouldSelect_Parms), &Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventShouldSelect_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventShouldSelect_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::NewProp_OwnerActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/*\n\x09* This gets called everytime a Component / Actor is going to get added.\n\x09* The default return is TRUE, but it can be overriden to check for additional things \n\x09* (e.g. checking if it implements an interface, has some property, is child of a class, etc)\n\x09\n\x09* @param OwnerActor: The Actor owning the Component Selected \n\x09* @param Component: The Component Selected (if it's an Actor Selected, this would be its RootComponent)\n\n\x09* @return bool: Whether or not this Component should be added.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* This gets called everytime a Component / Actor is going to get added.\n* The default return is TRUE, but it can be overriden to check for additional things\n* (e.g. checking if it implements an interface, has some property, is child of a class, etc)\n\n* @param OwnerActor: The Actor owning the Component Selected\n* @param Component: The Component Selected (if it's an Actor Selected, this would be its RootComponent)\n\n* @return bool: Whether or not this Component should be added." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "ShouldSelect", nullptr, nullptr, sizeof(TransformerPawn_eventShouldSelect_Parms), Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_ShouldSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_ShouldSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics
	{
		struct TransformerPawn_eventTraceByChannel_Parms
		{
			FVector StartLocation;
			FVector EndLocation;
			TEnumAsByte<ECollisionChannel> TraceChannel;
			TArray<AActor*> IgnoredActors;
			bool bAppendToList;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoredActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoredActors_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TransformerPawn_eventTraceByChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventTraceByChannel_Parms), &Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventTraceByChannel_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventTraceByChannel_Parms), &Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_IgnoredActors = { "IgnoredActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventTraceByChannel_Parms, IgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_IgnoredActors_Inner = { "IgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventTraceByChannel_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventTraceByChannel_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventTraceByChannel_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_StartLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_IgnoredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_IgnoredActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::NewProp_StartLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * If a Gizmo is Present, (i.e. there is a Selected Object), then\n\x09 * this test will prioritize finding a Gizmo, even if it is behind an object.\n\x09 * If there is not a Gizmo present, the first Object encountered will be automatically Selected.\n\n\x09  * Note: This function does not Deselect the Objects selected if Trace doesn't select anything in any situation\n\n\x09 * @param StartLocation - the starting Location of the trace, in World Space\n\x09 * @param EndLocation - the ending location of the trace, in World Space\n\x09 * @param TraceChannel - The Ray Collision Channel to be Considered in the Trace\n\x09 * @param Ignored Actors\x09- The Actors to be Ignored during trace\n\x09 * @param bAppendToList - If a selection happens, whether to append to the previously selected components or not\n\x09 * @return bool Whether there was an Object traced successfully\n\x09 */" },
		{ "CPP_Default_bAppendToList", "false" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "If a Gizmo is Present, (i.e. there is a Selected Object), then\nthis test will prioritize finding a Gizmo, even if it is behind an object.\nIf there is not a Gizmo present, the first Object encountered will be automatically Selected.\n\nNote: This function does not Deselect the Objects selected if Trace doesn't select anything in any situation\n\n@param StartLocation - the starting Location of the trace, in World Space\n@param EndLocation - the ending location of the trace, in World Space\n@param TraceChannel - The Ray Collision Channel to be Considered in the Trace\n@param Ignored Actors        - The Actors to be Ignored during trace\n@param bAppendToList - If a selection happens, whether to append to the previously selected components or not\n@return bool Whether there was an Object traced successfully" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "TraceByChannel", nullptr, nullptr, sizeof(TransformerPawn_eventTraceByChannel_Parms), Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_TraceByChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_TraceByChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics
	{
		struct TransformerPawn_eventTraceByObjectTypes_Parms
		{
			FVector StartLocation;
			FVector EndLocation;
			TArray<TEnumAsByte<ECollisionChannel> > CollisionChannels;
			TArray<AActor*> IgnoredActors;
			bool bAppendToList;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoredActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoredActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionChannels;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TransformerPawn_eventTraceByObjectTypes_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventTraceByObjectTypes_Parms), &Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventTraceByObjectTypes_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventTraceByObjectTypes_Parms), &Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_IgnoredActors = { "IgnoredActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventTraceByObjectTypes_Parms, IgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_IgnoredActors_Inner = { "IgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_CollisionChannels = { "CollisionChannels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventTraceByObjectTypes_Parms, CollisionChannels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_CollisionChannels_Inner = { "CollisionChannels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventTraceByObjectTypes_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventTraceByObjectTypes_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_StartLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_IgnoredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_IgnoredActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_CollisionChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_CollisionChannels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::NewProp_StartLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * If a Gizmo is Present, (i.e. there is a Selected Object), then\n\x09 * this test will prioritize finding a Gizmo, even if it is behind an object.\n\x09 * If there is not a Gizmo present, the first Object encountered will be automatically Selected.\n\n\x09 * Note: This function does not Deselect the Objects selected if Trace doesn't select anything in any situation\n\n\x09 * @param StartLocation - the starting Location of the trace, in World Space\n\x09 * @param EndLocation - the ending location of the trace, in World Space\n\x09 * @param CollisionChannels - All the Channels to be considering during Trace\n\x09 * @param Ignored Actors\x09- The Actors to be Ignored during trace\n\x09 * @param bAppendToList - If a selection happens, whether to append to the previously selected components or not\n\x09 * @return bool Whether there was an Object traced successfully\n\x09 */" },
		{ "CPP_Default_bAppendToList", "false" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "If a Gizmo is Present, (i.e. there is a Selected Object), then\nthis test will prioritize finding a Gizmo, even if it is behind an object.\nIf there is not a Gizmo present, the first Object encountered will be automatically Selected.\n\nNote: This function does not Deselect the Objects selected if Trace doesn't select anything in any situation\n\n@param StartLocation - the starting Location of the trace, in World Space\n@param EndLocation - the ending location of the trace, in World Space\n@param CollisionChannels - All the Channels to be considering during Trace\n@param Ignored Actors        - The Actors to be Ignored during trace\n@param bAppendToList - If a selection happens, whether to append to the previously selected components or not\n@return bool Whether there was an Object traced successfully" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "TraceByObjectTypes", nullptr, nullptr, sizeof(TransformerPawn_eventTraceByObjectTypes_Parms), Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics
	{
		struct TransformerPawn_eventTraceByProfile_Parms
		{
			FVector StartLocation;
			FVector EndLocation;
			FName ProfileName;
			TArray<AActor*> IgnoredActors;
			bool bAppendToList;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAppendToList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppendToList;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoredActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoredActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TransformerPawn_eventTraceByProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventTraceByProfile_Parms), &Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_bAppendToList_SetBit(void* Obj)
	{
		((TransformerPawn_eventTraceByProfile_Parms*)Obj)->bAppendToList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_bAppendToList = { "bAppendToList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TransformerPawn_eventTraceByProfile_Parms), &Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_bAppendToList_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_IgnoredActors = { "IgnoredActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventTraceByProfile_Parms, IgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_IgnoredActors_Inner = { "IgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_ProfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventTraceByProfile_Parms, ProfileName), METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_ProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventTraceByProfile_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventTraceByProfile_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_StartLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_bAppendToList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_IgnoredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_IgnoredActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_ProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::NewProp_StartLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * If a Gizmo is Present, (i.e. there is a Selected Object), then\n\x09 * this test will prioritize finding a Gizmo, even if it is behind an object.\n\x09 * If there is not a Gizmo present, the first Object encountered will be automatically Selected.\n\n\x09  * Note: This function does not Deselect the Objects selected if Trace doesn't select anything in any situation\n\n\x09 * @param StartLocation - the starting Location of the trace, in World Space\n\x09 * @param EndLocation - the ending location of the trace, in World Space\n\x09 * @param ProfileName - The Profile Name to be used during the Trace\n\x09 * @param Ignored Actors\x09- The Actors to be Ignored during trace\n\x09 * @param bAppendToList - If a selection happens, whether to append to the previously selected components or not\n\x09 * @return bool Whether there was an Object traced successfully\n\x09 */" },
		{ "CPP_Default_bAppendToList", "false" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "If a Gizmo is Present, (i.e. there is a Selected Object), then\nthis test will prioritize finding a Gizmo, even if it is behind an object.\nIf there is not a Gizmo present, the first Object encountered will be automatically Selected.\n\nNote: This function does not Deselect the Objects selected if Trace doesn't select anything in any situation\n\n@param StartLocation - the starting Location of the trace, in World Space\n@param EndLocation - the ending location of the trace, in World Space\n@param ProfileName - The Profile Name to be used during the Trace\n@param Ignored Actors        - The Actors to be Ignored during trace\n@param bAppendToList - If a selection happens, whether to append to the previously selected components or not\n@return bool Whether there was an Object traced successfully" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "TraceByProfile", nullptr, nullptr, sizeof(TransformerPawn_eventTraceByProfile_Parms), Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_TraceByProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_TraceByProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics
	{
		struct TransformerPawn_eventUpdateTransform_Parms
		{
			FVector LookingVector;
			FVector RayOrigin;
			FVector RayDirection;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RayDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RayOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookingVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookingVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventUpdateTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_RayDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_RayDirection = { "RayDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventUpdateTransform_Parms, RayDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_RayDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_RayDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_RayOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_RayOrigin = { "RayOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventUpdateTransform_Parms, RayOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_RayOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_RayOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_LookingVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_LookingVector = { "LookingVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TransformerPawn_eventUpdateTransform_Parms, LookingVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_LookingVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_LookingVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_RayDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_RayOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::NewProp_LookingVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Transformer" },
		{ "Comment", "/**\n\x09 * If the Gizmo is currently in a Valid Domain,\n\x09 * it will transform the Selected Object(s) through a valid domain.\n\x09 * The transform is calculated with the given Ray Origin and Ray Direction in World Space (usually the Mouse World Position & Mouse World Direction)\n\n\x09 * This function should be called if NO Player Controller has been Set\n\n\x09 * @param LookingVector - The looking direction of the player (e.g. Camera Forward Vector)\n\x09 * @param RayOrigin - The origin point (world space) of the Ray (e.g. the Mouse Position in World Space)\n\x09 * @param RayDirection - the direction of the ray (in world space) (e.g. the Mouse Direction in World Space)\n\n\x09 * @returnval FTransform - The delta transform calculated (after any snapping)\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "If the Gizmo is currently in a Valid Domain,\nit will transform the Selected Object(s) through a valid domain.\nThe transform is calculated with the given Ray Origin and Ray Direction in World Space (usually the Mouse World Position & Mouse World Direction)\n\nThis function should be called if NO Player Controller has been Set\n\n@param LookingVector - The looking direction of the player (e.g. Camera Forward Vector)\n@param RayOrigin - The origin point (world space) of the Ray (e.g. the Mouse Position in World Space)\n@param RayDirection - the direction of the ray (in world space) (e.g. the Mouse Direction in World Space)\n\n@returnval FTransform - The delta transform calculated (after any snapping)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformerPawn, nullptr, "UpdateTransform", nullptr, nullptr, sizeof(TransformerPawn_eventUpdateTransform_Parms), Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATransformerPawn_UpdateTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATransformerPawn_UpdateTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATransformerPawn_NoRegister()
	{
		return ATransformerPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATransformerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComponentBased_MetaData[];
#endif
		static void NewProp_bComponentBased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComponentBased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToggleSelectedInMultiSelection_MetaData[];
#endif
		static void NewProp_bToggleSelectedInMultiSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleSelectedInMultiSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransformUFocusableObjects_MetaData[];
#endif
		static void NewProp_bTransformUFocusableObjects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransformUFocusableObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateOnLocalAxis_MetaData[];
#endif
		static void NewProp_bRotateOnLocalAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateOnLocalAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceMobility_MetaData[];
#endif
		static void NewProp_bForceMobility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceMobility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnappingEnabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SnappingEnabled;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SnappingEnabled_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SnappingEnabled_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SnappingEnabled_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnappingValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SnappingValues;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SnappingValues_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SnappingValues_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnappingValues_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTransformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentTransformation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentTransformation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoPlacement_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GizmoPlacement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GizmoPlacement_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gizmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Gizmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleGizmoClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ScaleGizmoClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationGizmoClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RotationGizmoClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationGizmoClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TranslationGizmoClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSpaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentSpaceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentSpaceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloneReplicationCheckFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CloneReplicationCheckFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumCloneReplicationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumCloneReplicationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreNonReplicatedObjects_MetaData[];
#endif
		static void NewProp_bIgnoreNonReplicatedObjects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonReplicatedObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATransformerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeTransformer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATransformerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATransformerPawn_ApplyDeltaTransform, "ApplyDeltaTransform" }, // 3286263481
		{ &Z_Construct_UFunction_ATransformerPawn_ClearDomain, "ClearDomain" }, // 3794239432
		{ &Z_Construct_UFunction_ATransformerPawn_CloneSelected, "CloneSelected" }, // 3600401948
		{ &Z_Construct_UFunction_ATransformerPawn_DeselectActor, "DeselectActor" }, // 94511848
		{ &Z_Construct_UFunction_ATransformerPawn_DeselectAll, "DeselectAll" }, // 4084574872
		{ &Z_Construct_UFunction_ATransformerPawn_DeselectComponent, "DeselectComponent" }, // 1013629917
		{ &Z_Construct_UFunction_ATransformerPawn_GetCurrentDomain, "GetCurrentDomain" }, // 2541809224
		{ &Z_Construct_UFunction_ATransformerPawn_GetSelectedComponents, "GetSelectedComponents" }, // 2999706561
		{ &Z_Construct_UFunction_ATransformerPawn_HandleTracedObjects, "HandleTracedObjects" }, // 2678071315
		{ &Z_Construct_UFunction_ATransformerPawn_LogSelectedComponents, "LogSelectedComponents" }, // 3850677710
		{ &Z_Construct_UFunction_ATransformerPawn_MouseTraceByChannel, "MouseTraceByChannel" }, // 2514049372
		{ &Z_Construct_UFunction_ATransformerPawn_MouseTraceByObjectTypes, "MouseTraceByObjectTypes" }, // 1837648395
		{ &Z_Construct_UFunction_ATransformerPawn_MouseTraceByProfile, "MouseTraceByProfile" }, // 3908533062
		{ &Z_Construct_UFunction_ATransformerPawn_MulticastApplyTransform, "MulticastApplyTransform" }, // 1241219589
		{ &Z_Construct_UFunction_ATransformerPawn_MulticastClearDomain, "MulticastClearDomain" }, // 3260794699
		{ &Z_Construct_UFunction_ATransformerPawn_MulticastDeselectAll, "MulticastDeselectAll" }, // 2373759995
		{ &Z_Construct_UFunction_ATransformerPawn_MulticastSetComponentBased, "MulticastSetComponentBased" }, // 3508942750
		{ &Z_Construct_UFunction_ATransformerPawn_MulticastSetDomain, "MulticastSetDomain" }, // 1940202783
		{ &Z_Construct_UFunction_ATransformerPawn_MulticastSetRotateOnLocalAxis, "MulticastSetRotateOnLocalAxis" }, // 807086113
		{ &Z_Construct_UFunction_ATransformerPawn_MulticastSetSelectedComponents, "MulticastSetSelectedComponents" }, // 1119463562
		{ &Z_Construct_UFunction_ATransformerPawn_MulticastSetSpaceType, "MulticastSetSpaceType" }, // 799982383
		{ &Z_Construct_UFunction_ATransformerPawn_MulticastSetTransformationType, "MulticastSetTransformationType" }, // 2199418378
		{ &Z_Construct_UFunction_ATransformerPawn_OnComponentSelectionChange, "OnComponentSelectionChange" }, // 778271890
		{ &Z_Construct_UFunction_ATransformerPawn_OnGizmoStateChanged, "OnGizmoStateChanged" }, // 1545955559
		{ &Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByChannel, "ReplicatedMouseTraceByChannel" }, // 3989362838
		{ &Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByObjectTypes, "ReplicatedMouseTraceByObjectTypes" }, // 1013640713
		{ &Z_Construct_UFunction_ATransformerPawn_ReplicatedMouseTraceByProfile, "ReplicatedMouseTraceByProfile" }, // 1585375321
		{ &Z_Construct_UFunction_ATransformerPawn_ReplicateFinishTransform, "ReplicateFinishTransform" }, // 1346771546
		{ &Z_Construct_UFunction_ATransformerPawn_SelectActor, "SelectActor" }, // 490320040
		{ &Z_Construct_UFunction_ATransformerPawn_SelectComponent, "SelectComponent" }, // 166152409
		{ &Z_Construct_UFunction_ATransformerPawn_SelectMultipleActors, "SelectMultipleActors" }, // 3269601647
		{ &Z_Construct_UFunction_ATransformerPawn_SelectMultipleComponents, "SelectMultipleComponents" }, // 2808806065
		{ &Z_Construct_UFunction_ATransformerPawn_ServerApplyTransform, "ServerApplyTransform" }, // 2881471050
		{ &Z_Construct_UFunction_ATransformerPawn_ServerClearDomain, "ServerClearDomain" }, // 1826526667
		{ &Z_Construct_UFunction_ATransformerPawn_ServerCloneSelected, "ServerCloneSelected" }, // 3299610898
		{ &Z_Construct_UFunction_ATransformerPawn_ServerDeselectAll, "ServerDeselectAll" }, // 2890526637
		{ &Z_Construct_UFunction_ATransformerPawn_ServerSetComponentBased, "ServerSetComponentBased" }, // 3820390643
		{ &Z_Construct_UFunction_ATransformerPawn_ServerSetDomain, "ServerSetDomain" }, // 2501485921
		{ &Z_Construct_UFunction_ATransformerPawn_ServerSetRotateOnLocalAxis, "ServerSetRotateOnLocalAxis" }, // 1663717648
		{ &Z_Construct_UFunction_ATransformerPawn_ServerSetSpaceType, "ServerSetSpaceType" }, // 1937907773
		{ &Z_Construct_UFunction_ATransformerPawn_ServerSetTransformationType, "ServerSetTransformationType" }, // 3455028779
		{ &Z_Construct_UFunction_ATransformerPawn_ServerSyncSelectedComponents, "ServerSyncSelectedComponents" }, // 1601165067
		{ &Z_Construct_UFunction_ATransformerPawn_ServerTraceByChannel, "ServerTraceByChannel" }, // 1085096097
		{ &Z_Construct_UFunction_ATransformerPawn_ServerTraceByObjectTypes, "ServerTraceByObjectTypes" }, // 3657645747
		{ &Z_Construct_UFunction_ATransformerPawn_ServerTraceByProfile, "ServerTraceByProfile" }, // 385341901
		{ &Z_Construct_UFunction_ATransformerPawn_SetComponentBased, "SetComponentBased" }, // 909967468
		{ &Z_Construct_UFunction_ATransformerPawn_SetRotateOnLocalAxis, "SetRotateOnLocalAxis" }, // 646397733
		{ &Z_Construct_UFunction_ATransformerPawn_SetSnappingEnabled, "SetSnappingEnabled" }, // 3272871546
		{ &Z_Construct_UFunction_ATransformerPawn_SetSnappingValue, "SetSnappingValue" }, // 1146788891
		{ &Z_Construct_UFunction_ATransformerPawn_SetSpaceType, "SetSpaceType" }, // 4231073989
		{ &Z_Construct_UFunction_ATransformerPawn_SetTransformationType, "SetTransformationType" }, // 3165347370
		{ &Z_Construct_UFunction_ATransformerPawn_ShouldSelect, "ShouldSelect" }, // 1985858140
		{ &Z_Construct_UFunction_ATransformerPawn_TraceByChannel, "TraceByChannel" }, // 2110870801
		{ &Z_Construct_UFunction_ATransformerPawn_TraceByObjectTypes, "TraceByObjectTypes" }, // 618125824
		{ &Z_Construct_UFunction_ATransformerPawn_TraceByProfile, "TraceByProfile" }, // 4234330429
		{ &Z_Construct_UFunction_ATransformerPawn_UpdateTransform, "UpdateTransform" }, // 2785894780
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TransformerPawn.h" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bComponentBased_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Runtime Transformations" },
		{ "Comment", "/*\n\x09 * Property that checks whether Components are considered in trace \n\x09 or the Actors are.\n\x09 * This property affects how Cloning, Tracing is done and Interface checking is done\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Property that checks whether Components are considered in trace\nor the Actors are.\n* This property affects how Cloning, Tracing is done and Interface checking is done" },
	};
#endif
	void Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bComponentBased_SetBit(void* Obj)
	{
		((ATransformerPawn*)Obj)->bComponentBased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bComponentBased = { "bComponentBased", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATransformerPawn), &Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bComponentBased_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bComponentBased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bComponentBased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bToggleSelectedInMultiSelection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Runtime Transformations" },
		{ "Comment", "//Property that checks whether a CLICK on an already selected object should deselect the object or not.\n" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Property that checks whether a CLICK on an already selected object should deselect the object or not." },
	};
#endif
	void Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bToggleSelectedInMultiSelection_SetBit(void* Obj)
	{
		((ATransformerPawn*)Obj)->bToggleSelectedInMultiSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bToggleSelectedInMultiSelection = { "bToggleSelectedInMultiSelection", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATransformerPawn), &Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bToggleSelectedInMultiSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bToggleSelectedInMultiSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bToggleSelectedInMultiSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bTransformUFocusableObjects_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Runtime Transformations" },
		{ "Comment", "/**\n\x09 * Whether to Apply the Transforms to objects that Implement the UFocusable Interface.\n\x09 * if True, the Transforms will be applied.\n\x09 * if False, the Transforms will not be applied.\n\n\x09 * IN BOTH Situations, the UFocusable Objects have IFocusable::OnNewDeltaTransformation called.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Whether to Apply the Transforms to objects that Implement the UFocusable Interface.\nif True, the Transforms will be applied.\nif False, the Transforms will not be applied.\n\nIN BOTH Situations, the UFocusable Objects have IFocusable::OnNewDeltaTransformation called." },
	};
#endif
	void Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bTransformUFocusableObjects_SetBit(void* Obj)
	{
		((ATransformerPawn*)Obj)->bTransformUFocusableObjects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bTransformUFocusableObjects = { "bTransformUFocusableObjects", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATransformerPawn), &Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bTransformUFocusableObjects_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bTransformUFocusableObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bTransformUFocusableObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bRotateOnLocalAxis_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Runtime Transformations" },
		{ "Comment", "/*\n\x09 * This property only matters when multiple objects are selected.\n\x09 * Whether multiple objects should rotate on their local axes (true) or on the axes the Gizmo is in (false)\n\x09*/" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* This property only matters when multiple objects are selected.\n* Whether multiple objects should rotate on their local axes (true) or on the axes the Gizmo is in (false)" },
	};
#endif
	void Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bRotateOnLocalAxis_SetBit(void* Obj)
	{
		((ATransformerPawn*)Obj)->bRotateOnLocalAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bRotateOnLocalAxis = { "bRotateOnLocalAxis", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATransformerPawn), &Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bRotateOnLocalAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bRotateOnLocalAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bRotateOnLocalAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bForceMobility_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Runtime Transformations" },
		{ "Comment", "/**\n\x09* Whether to Force Mobility on items that are not Moveable\n\x09* if true, Mobility on Components will be changed to Moveable (WARNING: does not set it back to its original mobility!)\n\x09* if false, no movement transformations will be attempted on Static/Stationary Components\n\n\x09*/" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Whether to Force Mobility on items that are not Moveable\nif true, Mobility on Components will be changed to Moveable (WARNING: does not set it back to its original mobility!)\nif false, no movement transformations will be attempted on Static/Stationary Components" },
	};
#endif
	void Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bForceMobility_SetBit(void* Obj)
	{
		((ATransformerPawn*)Obj)->bForceMobility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bForceMobility = { "bForceMobility", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATransformerPawn), &Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bForceMobility_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bForceMobility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bForceMobility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Runtime Transformations" },
		{ "Comment", "/**\n\x09* Whether Snapping an Object for each Transformation is enabled or not.\n\x09* SnappingValue for each Transformation must also NOT be zero for it to work \n\x09* (if, snapping value is 0 for a transformation, no snapping will take place)\n\n\x09* @see SetSnappingValue function & SnappingValues Map var\n\x09*/" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Whether Snapping an Object for each Transformation is enabled or not.\nSnappingValue for each Transformation must also NOT be zero for it to work\n(if, snapping value is 0 for a transformation, no snapping will take place)\n\n@see SetSnappingValue function & SnappingValues Map var" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingEnabled = { "SnappingEnabled", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransformerPawn, SnappingEnabled), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingEnabled_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingEnabled_Key_KeyProp = { "SnappingEnabled_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_RuntimeTransformer_ETransformationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingEnabled_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingEnabled_ValueProp = { "SnappingEnabled", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingValues_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Runtime Transformations" },
		{ "Comment", "/*\n\x09* Map storing the Snap values for each transformation\n\x09* bSnappingEnabled must be true AND, the value for the current transform MUST NOT be 0 for these values to take effect.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Map storing the Snap values for each transformation\n* bSnappingEnabled must be true AND, the value for the current transform MUST NOT be 0 for these values to take effect." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingValues = { "SnappingValues", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransformerPawn, SnappingValues), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingValues_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingValues_Key_KeyProp = { "SnappingValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_RuntimeTransformer_ETransformationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingValues_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingValues_ValueProp = { "SnappingValues", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CurrentTransformation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Runtime Transformations" },
		{ "Comment", "// Var that tells which is the Current Transformation taking place\n" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Var that tells which is the Current Transformation taking place" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CurrentTransformation = { "CurrentTransformation", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransformerPawn, CurrentTransformation), Z_Construct_UEnum_RuntimeTransformer_ETransformationType, METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CurrentTransformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CurrentTransformation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CurrentTransformation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_GizmoPlacement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Runtime Transformations" },
		{ "Comment", "//Tell where the Gizmo should be placed when multiple objects are selected\n" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "Tell where the Gizmo should be placed when multiple objects are selected" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_GizmoPlacement = { "GizmoPlacement", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransformerPawn, GizmoPlacement), Z_Construct_UEnum_RuntimeTransformer_EGizmoPlacement, METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_GizmoPlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_GizmoPlacement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_GizmoPlacement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_Gizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_Gizmo = { "Gizmo", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransformerPawn, Gizmo), Z_Construct_UClass_ABaseGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_Gizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_Gizmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_ScaleGizmoClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gizmo" },
		{ "Comment", "/**\n\x09 * GizmoClasses are variables that specified which Gizmo to spawn for each\n\x09 * transformation. This can even be childs of classes that are already defined\n\x09 * to allow the user to customize gizmo functionality\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "GizmoClasses are variables that specified which Gizmo to spawn for each\ntransformation. This can even be childs of classes that are already defined\nto allow the user to customize gizmo functionality" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_ScaleGizmoClass = { "ScaleGizmoClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransformerPawn, ScaleGizmoClass), Z_Construct_UClass_AScaleGizmo_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_ScaleGizmoClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_ScaleGizmoClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_RotationGizmoClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gizmo" },
		{ "Comment", "/**\n\x09 * GizmoClasses are variables that specified which Gizmo to spawn for each\n\x09 * transformation. This can even be childs of classes that are already defined\n\x09 * to allow the user to customize gizmo functionality\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "GizmoClasses are variables that specified which Gizmo to spawn for each\ntransformation. This can even be childs of classes that are already defined\nto allow the user to customize gizmo functionality" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_RotationGizmoClass = { "RotationGizmoClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransformerPawn, RotationGizmoClass), Z_Construct_UClass_ARotationGizmo_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_RotationGizmoClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_RotationGizmoClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_TranslationGizmoClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gizmo" },
		{ "Comment", "/**\n\x09 * GizmoClasses are variables that specified which Gizmo to spawn for each\n\x09 * transformation. This can even be childs of classes that are already defined\n\x09 * to allow the user to customize gizmo functionality\n\x09 */" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "GizmoClasses are variables that specified which Gizmo to spawn for each\ntransformation. This can even be childs of classes that are already defined\nto allow the user to customize gizmo functionality" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_TranslationGizmoClass = { "TranslationGizmoClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransformerPawn, TranslationGizmoClass), Z_Construct_UClass_ATranslationGizmo_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_TranslationGizmoClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_TranslationGizmoClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CurrentSpaceType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Runtime Transformations" },
		{ "Comment", "//The Current Space being used, whether it is Local or World.\n" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "The Current Space being used, whether it is Local or World." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CurrentSpaceType = { "CurrentSpaceType", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransformerPawn, CurrentSpaceType), Z_Construct_UEnum_RuntimeTransformer_ESpaceType, METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CurrentSpaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CurrentSpaceType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CurrentSpaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CloneReplicationCheckFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "//The frequency at which checks are done on newly spawned clones. Whether they are suitable for replication.\n" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "The frequency at which checks are done on newly spawned clones. Whether they are suitable for replication." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CloneReplicationCheckFrequency = { "CloneReplicationCheckFrequency", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransformerPawn, CloneReplicationCheckFrequency), METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CloneReplicationCheckFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CloneReplicationCheckFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_MinimumCloneReplicationTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09 * Optional minimum time to wait for all Cloned objects to fully replicate and are selectable.\n\x09 * It is not required, but there are occassions (especially when cloning multiple objects at once)\n\x09 * where the newly spawned clone objects are not selected on the client side because the object, \n\x09 * although has begun play, is not still fully network addressable on the client side and so a nullptr is passed \n\x09 * (so no selection occurs).\n\x09 * The time it actually takes to Replicate can be more because it also waits for all clone objects to have begun play.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Optional minimum time to wait for all Cloned objects to fully replicate and are selectable.\n* It is not required, but there are occassions (especially when cloning multiple objects at once)\n* where the newly spawned clone objects are not selected on the client side because the object,\n* although has begun play, is not still fully network addressable on the client side and so a nullptr is passed\n* (so no selection occurs).\n* The time it actually takes to Replicate can be more because it also waits for all clone objects to have begun play." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_MinimumCloneReplicationTime = { "MinimumCloneReplicationTime", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATransformerPawn, MinimumCloneReplicationTime), METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_MinimumCloneReplicationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_MinimumCloneReplicationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bIgnoreNonReplicatedObjects_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Replicated Runtime Transformer" },
		{ "Comment", "/*\n\x09* Ignore Non-Replicated Objects means that the objects that do not satisfy\n\x09* the replication conditions will become unselectable. This only takes effect if using the ServerTracing\n\x09* The Replication Conditions:\n\x09* - For an actor, replicating must be on\n\x09* - For a component, both its owner and itself need to be replicating\n\x09*/" },
		{ "ModuleRelativePath", "Public/TransformerPawn.h" },
		{ "ToolTip", "* Ignore Non-Replicated Objects means that the objects that do not satisfy\n* the replication conditions will become unselectable. This only takes effect if using the ServerTracing\n* The Replication Conditions:\n* - For an actor, replicating must be on\n* - For a component, both its owner and itself need to be replicating" },
	};
#endif
	void Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bIgnoreNonReplicatedObjects_SetBit(void* Obj)
	{
		((ATransformerPawn*)Obj)->bIgnoreNonReplicatedObjects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bIgnoreNonReplicatedObjects = { "bIgnoreNonReplicatedObjects", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATransformerPawn), &Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bIgnoreNonReplicatedObjects_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bIgnoreNonReplicatedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bIgnoreNonReplicatedObjects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATransformerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bComponentBased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bToggleSelectedInMultiSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bTransformUFocusableObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bRotateOnLocalAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bForceMobility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingEnabled_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingEnabled_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingEnabled_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingValues_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingValues_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_SnappingValues_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CurrentTransformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CurrentTransformation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_GizmoPlacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_GizmoPlacement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_Gizmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_ScaleGizmoClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_RotationGizmoClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_TranslationGizmoClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CurrentSpaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CurrentSpaceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_CloneReplicationCheckFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_MinimumCloneReplicationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformerPawn_Statics::NewProp_bIgnoreNonReplicatedObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATransformerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATransformerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATransformerPawn_Statics::ClassParams = {
		&ATransformerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATransformerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATransformerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATransformerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATransformerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATransformerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATransformerPawn, 4276520969);
	template<> RUNTIMETRANSFORMER_API UClass* StaticClass<ATransformerPawn>()
	{
		return ATransformerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATransformerPawn(Z_Construct_UClass_ATransformerPawn, &ATransformerPawn::StaticClass, TEXT("/Script/RuntimeTransformer"), TEXT("ATransformerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATransformerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
