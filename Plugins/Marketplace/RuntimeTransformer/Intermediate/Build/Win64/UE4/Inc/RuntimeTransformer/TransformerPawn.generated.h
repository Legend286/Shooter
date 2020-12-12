// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
enum class ETransformationDomain : uint8;
enum class ETransformationType : uint8;
enum class ESpaceType : uint8;
struct FTransform;
struct FVector;
class AActor;
struct FHitResult;
#ifdef RUNTIMETRANSFORMER_TransformerPawn_generated_h
#error "TransformerPawn.generated.h already included, missing '#pragma once' in TransformerPawn.h"
#endif
#define RUNTIMETRANSFORMER_TransformerPawn_generated_h

#define GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_SPARSE_DATA
#define GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_RPC_WRAPPERS \
	virtual void MulticastSetSelectedComponents_Implementation(TArray<USceneComponent*> const& Components); \
	virtual bool ServerSyncSelectedComponents_Validate(); \
	virtual void ServerSyncSelectedComponents_Implementation(); \
	virtual void MulticastSetDomain_Implementation(ETransformationDomain Domain); \
	virtual bool ServerSetDomain_Validate(ETransformationDomain ); \
	virtual void ServerSetDomain_Implementation(ETransformationDomain Domain); \
	virtual bool ServerCloneSelected_Validate(bool , bool ); \
	virtual void ServerCloneSelected_Implementation(bool bSelectNewClones, bool bAppendToList); \
	virtual void MulticastSetRotateOnLocalAxis_Implementation(bool bRotateLocalAxis); \
	virtual bool ServerSetRotateOnLocalAxis_Validate(bool ); \
	virtual void ServerSetRotateOnLocalAxis_Implementation(bool bRotateLocalAxis); \
	virtual void MulticastSetComponentBased_Implementation(bool bIsComponentBased); \
	virtual bool ServerSetComponentBased_Validate(bool ); \
	virtual void ServerSetComponentBased_Implementation(bool bIsComponentBased); \
	virtual void MulticastSetTransformationType_Implementation(ETransformationType Transformation); \
	virtual bool ServerSetTransformationType_Validate(ETransformationType ); \
	virtual void ServerSetTransformationType_Implementation(ETransformationType Transformation); \
	virtual void MulticastSetSpaceType_Implementation(ESpaceType Space); \
	virtual bool ServerSetSpaceType_Validate(ESpaceType ); \
	virtual void ServerSetSpaceType_Implementation(ESpaceType Space); \
	virtual void MulticastDeselectAll_Implementation(bool bDestroySelected); \
	virtual bool ServerDeselectAll_Validate(bool ); \
	virtual void ServerDeselectAll_Implementation(bool bDestroySelected); \
	virtual void MulticastApplyTransform_Implementation(FTransform const& DeltaTransform); \
	virtual bool ServerApplyTransform_Validate(FTransform const& ); \
	virtual void ServerApplyTransform_Implementation(FTransform const& DeltaTransform); \
	virtual void MulticastClearDomain_Implementation(); \
	virtual bool ServerClearDomain_Validate(); \
	virtual void ServerClearDomain_Implementation(); \
	virtual bool ServerTraceByProfile_Validate(FVector const& , FVector const& , FName const& , bool ); \
	virtual void ServerTraceByProfile_Implementation(FVector const& StartLocation, FVector const& EndLocation, FName const& ProfileName, bool bAppendToList); \
	virtual bool ServerTraceByChannel_Validate(FVector const& , FVector const& , ECollisionChannel , bool ); \
	virtual void ServerTraceByChannel_Implementation(FVector const& StartLocation, FVector const& EndLocation, ECollisionChannel TraceChannel, bool bAppendToList); \
	virtual bool ServerTraceByObjectTypes_Validate(FVector const& , FVector const& , TArray<TEnumAsByte<ECollisionChannel> > const& , bool ); \
	virtual void ServerTraceByObjectTypes_Implementation(FVector const& StartLocation, FVector const& EndLocation, TArray<TEnumAsByte<ECollisionChannel> > const& CollisionChannels, bool bAppendToList); \
	virtual void OnComponentSelectionChange_Implementation(USceneComponent* Component, bool bSelected, bool bImplementsUFocusable); \
	virtual void OnGizmoStateChanged_Implementation(ETransformationType GizmoType, bool bTransformInProgress, ETransformationDomain Domain); \
	virtual bool ShouldSelect_Implementation(AActor* OwnerActor, USceneComponent* Component); \
 \
	DECLARE_FUNCTION(execMulticastSetSelectedComponents); \
	DECLARE_FUNCTION(execServerSyncSelectedComponents); \
	DECLARE_FUNCTION(execMulticastSetDomain); \
	DECLARE_FUNCTION(execServerSetDomain); \
	DECLARE_FUNCTION(execServerCloneSelected); \
	DECLARE_FUNCTION(execMulticastSetRotateOnLocalAxis); \
	DECLARE_FUNCTION(execServerSetRotateOnLocalAxis); \
	DECLARE_FUNCTION(execMulticastSetComponentBased); \
	DECLARE_FUNCTION(execServerSetComponentBased); \
	DECLARE_FUNCTION(execMulticastSetTransformationType); \
	DECLARE_FUNCTION(execServerSetTransformationType); \
	DECLARE_FUNCTION(execMulticastSetSpaceType); \
	DECLARE_FUNCTION(execServerSetSpaceType); \
	DECLARE_FUNCTION(execMulticastDeselectAll); \
	DECLARE_FUNCTION(execServerDeselectAll); \
	DECLARE_FUNCTION(execReplicateFinishTransform); \
	DECLARE_FUNCTION(execMulticastApplyTransform); \
	DECLARE_FUNCTION(execServerApplyTransform); \
	DECLARE_FUNCTION(execMulticastClearDomain); \
	DECLARE_FUNCTION(execServerClearDomain); \
	DECLARE_FUNCTION(execServerTraceByProfile); \
	DECLARE_FUNCTION(execServerTraceByChannel); \
	DECLARE_FUNCTION(execServerTraceByObjectTypes); \
	DECLARE_FUNCTION(execLogSelectedComponents); \
	DECLARE_FUNCTION(execReplicatedMouseTraceByProfile); \
	DECLARE_FUNCTION(execReplicatedMouseTraceByChannel); \
	DECLARE_FUNCTION(execReplicatedMouseTraceByObjectTypes); \
	DECLARE_FUNCTION(execDeselectAll); \
	DECLARE_FUNCTION(execDeselectActor); \
	DECLARE_FUNCTION(execDeselectComponent); \
	DECLARE_FUNCTION(execSelectMultipleActors); \
	DECLARE_FUNCTION(execSelectMultipleComponents); \
	DECLARE_FUNCTION(execSelectActor); \
	DECLARE_FUNCTION(execSelectComponent); \
	DECLARE_FUNCTION(execCloneSelected); \
	DECLARE_FUNCTION(execGetSelectedComponents); \
	DECLARE_FUNCTION(execSetSnappingValue); \
	DECLARE_FUNCTION(execSetSnappingEnabled); \
	DECLARE_FUNCTION(execSetTransformationType); \
	DECLARE_FUNCTION(execSetRotateOnLocalAxis); \
	DECLARE_FUNCTION(execSetComponentBased); \
	DECLARE_FUNCTION(execOnComponentSelectionChange); \
	DECLARE_FUNCTION(execOnGizmoStateChanged); \
	DECLARE_FUNCTION(execHandleTracedObjects); \
	DECLARE_FUNCTION(execApplyDeltaTransform); \
	DECLARE_FUNCTION(execUpdateTransform); \
	DECLARE_FUNCTION(execTraceByProfile); \
	DECLARE_FUNCTION(execTraceByChannel); \
	DECLARE_FUNCTION(execTraceByObjectTypes); \
	DECLARE_FUNCTION(execMouseTraceByProfile); \
	DECLARE_FUNCTION(execMouseTraceByChannel); \
	DECLARE_FUNCTION(execMouseTraceByObjectTypes); \
	DECLARE_FUNCTION(execClearDomain); \
	DECLARE_FUNCTION(execGetCurrentDomain); \
	DECLARE_FUNCTION(execSetSpaceType); \
	DECLARE_FUNCTION(execShouldSelect);


#define GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastSetSelectedComponents_Implementation(TArray<USceneComponent*> const& Components); \
	virtual bool ServerSyncSelectedComponents_Validate(); \
	virtual void ServerSyncSelectedComponents_Implementation(); \
	virtual void MulticastSetDomain_Implementation(ETransformationDomain Domain); \
	virtual bool ServerSetDomain_Validate(ETransformationDomain ); \
	virtual void ServerSetDomain_Implementation(ETransformationDomain Domain); \
	virtual bool ServerCloneSelected_Validate(bool , bool ); \
	virtual void ServerCloneSelected_Implementation(bool bSelectNewClones, bool bAppendToList); \
	virtual void MulticastSetRotateOnLocalAxis_Implementation(bool bRotateLocalAxis); \
	virtual bool ServerSetRotateOnLocalAxis_Validate(bool ); \
	virtual void ServerSetRotateOnLocalAxis_Implementation(bool bRotateLocalAxis); \
	virtual void MulticastSetComponentBased_Implementation(bool bIsComponentBased); \
	virtual bool ServerSetComponentBased_Validate(bool ); \
	virtual void ServerSetComponentBased_Implementation(bool bIsComponentBased); \
	virtual void MulticastSetTransformationType_Implementation(ETransformationType Transformation); \
	virtual bool ServerSetTransformationType_Validate(ETransformationType ); \
	virtual void ServerSetTransformationType_Implementation(ETransformationType Transformation); \
	virtual void MulticastSetSpaceType_Implementation(ESpaceType Space); \
	virtual bool ServerSetSpaceType_Validate(ESpaceType ); \
	virtual void ServerSetSpaceType_Implementation(ESpaceType Space); \
	virtual void MulticastDeselectAll_Implementation(bool bDestroySelected); \
	virtual bool ServerDeselectAll_Validate(bool ); \
	virtual void ServerDeselectAll_Implementation(bool bDestroySelected); \
	virtual void MulticastApplyTransform_Implementation(FTransform const& DeltaTransform); \
	virtual bool ServerApplyTransform_Validate(FTransform const& ); \
	virtual void ServerApplyTransform_Implementation(FTransform const& DeltaTransform); \
	virtual void MulticastClearDomain_Implementation(); \
	virtual bool ServerClearDomain_Validate(); \
	virtual void ServerClearDomain_Implementation(); \
	virtual bool ServerTraceByProfile_Validate(FVector const& , FVector const& , FName const& , bool ); \
	virtual void ServerTraceByProfile_Implementation(FVector const& StartLocation, FVector const& EndLocation, FName const& ProfileName, bool bAppendToList); \
	virtual bool ServerTraceByChannel_Validate(FVector const& , FVector const& , ECollisionChannel , bool ); \
	virtual void ServerTraceByChannel_Implementation(FVector const& StartLocation, FVector const& EndLocation, ECollisionChannel TraceChannel, bool bAppendToList); \
	virtual bool ServerTraceByObjectTypes_Validate(FVector const& , FVector const& , TArray<TEnumAsByte<ECollisionChannel> > const& , bool ); \
	virtual void ServerTraceByObjectTypes_Implementation(FVector const& StartLocation, FVector const& EndLocation, TArray<TEnumAsByte<ECollisionChannel> > const& CollisionChannels, bool bAppendToList); \
 \
	DECLARE_FUNCTION(execMulticastSetSelectedComponents); \
	DECLARE_FUNCTION(execServerSyncSelectedComponents); \
	DECLARE_FUNCTION(execMulticastSetDomain); \
	DECLARE_FUNCTION(execServerSetDomain); \
	DECLARE_FUNCTION(execServerCloneSelected); \
	DECLARE_FUNCTION(execMulticastSetRotateOnLocalAxis); \
	DECLARE_FUNCTION(execServerSetRotateOnLocalAxis); \
	DECLARE_FUNCTION(execMulticastSetComponentBased); \
	DECLARE_FUNCTION(execServerSetComponentBased); \
	DECLARE_FUNCTION(execMulticastSetTransformationType); \
	DECLARE_FUNCTION(execServerSetTransformationType); \
	DECLARE_FUNCTION(execMulticastSetSpaceType); \
	DECLARE_FUNCTION(execServerSetSpaceType); \
	DECLARE_FUNCTION(execMulticastDeselectAll); \
	DECLARE_FUNCTION(execServerDeselectAll); \
	DECLARE_FUNCTION(execReplicateFinishTransform); \
	DECLARE_FUNCTION(execMulticastApplyTransform); \
	DECLARE_FUNCTION(execServerApplyTransform); \
	DECLARE_FUNCTION(execMulticastClearDomain); \
	DECLARE_FUNCTION(execServerClearDomain); \
	DECLARE_FUNCTION(execServerTraceByProfile); \
	DECLARE_FUNCTION(execServerTraceByChannel); \
	DECLARE_FUNCTION(execServerTraceByObjectTypes); \
	DECLARE_FUNCTION(execLogSelectedComponents); \
	DECLARE_FUNCTION(execReplicatedMouseTraceByProfile); \
	DECLARE_FUNCTION(execReplicatedMouseTraceByChannel); \
	DECLARE_FUNCTION(execReplicatedMouseTraceByObjectTypes); \
	DECLARE_FUNCTION(execDeselectAll); \
	DECLARE_FUNCTION(execDeselectActor); \
	DECLARE_FUNCTION(execDeselectComponent); \
	DECLARE_FUNCTION(execSelectMultipleActors); \
	DECLARE_FUNCTION(execSelectMultipleComponents); \
	DECLARE_FUNCTION(execSelectActor); \
	DECLARE_FUNCTION(execSelectComponent); \
	DECLARE_FUNCTION(execCloneSelected); \
	DECLARE_FUNCTION(execGetSelectedComponents); \
	DECLARE_FUNCTION(execSetSnappingValue); \
	DECLARE_FUNCTION(execSetSnappingEnabled); \
	DECLARE_FUNCTION(execSetTransformationType); \
	DECLARE_FUNCTION(execSetRotateOnLocalAxis); \
	DECLARE_FUNCTION(execSetComponentBased); \
	DECLARE_FUNCTION(execOnComponentSelectionChange); \
	DECLARE_FUNCTION(execOnGizmoStateChanged); \
	DECLARE_FUNCTION(execHandleTracedObjects); \
	DECLARE_FUNCTION(execApplyDeltaTransform); \
	DECLARE_FUNCTION(execUpdateTransform); \
	DECLARE_FUNCTION(execTraceByProfile); \
	DECLARE_FUNCTION(execTraceByChannel); \
	DECLARE_FUNCTION(execTraceByObjectTypes); \
	DECLARE_FUNCTION(execMouseTraceByProfile); \
	DECLARE_FUNCTION(execMouseTraceByChannel); \
	DECLARE_FUNCTION(execMouseTraceByObjectTypes); \
	DECLARE_FUNCTION(execClearDomain); \
	DECLARE_FUNCTION(execGetCurrentDomain); \
	DECLARE_FUNCTION(execSetSpaceType); \
	DECLARE_FUNCTION(execShouldSelect);


#define GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_EVENT_PARMS \
	struct TransformerPawn_eventMulticastApplyTransform_Parms \
	{ \
		FTransform DeltaTransform; \
	}; \
	struct TransformerPawn_eventMulticastDeselectAll_Parms \
	{ \
		bool bDestroySelected; \
	}; \
	struct TransformerPawn_eventMulticastSetComponentBased_Parms \
	{ \
		bool bIsComponentBased; \
	}; \
	struct TransformerPawn_eventMulticastSetDomain_Parms \
	{ \
		ETransformationDomain Domain; \
	}; \
	struct TransformerPawn_eventMulticastSetRotateOnLocalAxis_Parms \
	{ \
		bool bRotateLocalAxis; \
	}; \
	struct TransformerPawn_eventMulticastSetSelectedComponents_Parms \
	{ \
		TArray<USceneComponent*> Components; \
	}; \
	struct TransformerPawn_eventMulticastSetSpaceType_Parms \
	{ \
		ESpaceType Space; \
	}; \
	struct TransformerPawn_eventMulticastSetTransformationType_Parms \
	{ \
		ETransformationType Transformation; \
	}; \
	struct TransformerPawn_eventOnComponentSelectionChange_Parms \
	{ \
		USceneComponent* Component; \
		bool bSelected; \
		bool bImplementsUFocusable; \
	}; \
	struct TransformerPawn_eventOnGizmoStateChanged_Parms \
	{ \
		ETransformationType GizmoType; \
		bool bTransformInProgress; \
		ETransformationDomain Domain; \
	}; \
	struct TransformerPawn_eventServerApplyTransform_Parms \
	{ \
		FTransform DeltaTransform; \
	}; \
	struct TransformerPawn_eventServerCloneSelected_Parms \
	{ \
		bool bSelectNewClones; \
		bool bAppendToList; \
	}; \
	struct TransformerPawn_eventServerDeselectAll_Parms \
	{ \
		bool bDestroySelected; \
	}; \
	struct TransformerPawn_eventServerSetComponentBased_Parms \
	{ \
		bool bIsComponentBased; \
	}; \
	struct TransformerPawn_eventServerSetDomain_Parms \
	{ \
		ETransformationDomain Domain; \
	}; \
	struct TransformerPawn_eventServerSetRotateOnLocalAxis_Parms \
	{ \
		bool bRotateLocalAxis; \
	}; \
	struct TransformerPawn_eventServerSetSpaceType_Parms \
	{ \
		ESpaceType Space; \
	}; \
	struct TransformerPawn_eventServerSetTransformationType_Parms \
	{ \
		ETransformationType Transformation; \
	}; \
	struct TransformerPawn_eventServerTraceByChannel_Parms \
	{ \
		FVector StartLocation; \
		FVector EndLocation; \
		TEnumAsByte<ECollisionChannel> TraceChannel; \
		bool bAppendToList; \
	}; \
	struct TransformerPawn_eventServerTraceByObjectTypes_Parms \
	{ \
		FVector StartLocation; \
		FVector EndLocation; \
		TArray<TEnumAsByte<ECollisionChannel> > CollisionChannels; \
		bool bAppendToList; \
	}; \
	struct TransformerPawn_eventServerTraceByProfile_Parms \
	{ \
		FVector StartLocation; \
		FVector EndLocation; \
		FName ProfileName; \
		bool bAppendToList; \
	}; \
	struct TransformerPawn_eventShouldSelect_Parms \
	{ \
		AActor* OwnerActor; \
		USceneComponent* Component; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TransformerPawn_eventShouldSelect_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_CALLBACK_WRAPPERS
#define GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATransformerPawn(); \
	friend struct Z_Construct_UClass_ATransformerPawn_Statics; \
public: \
	DECLARE_CLASS(ATransformerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeTransformer"), NO_API) \
	DECLARE_SERIALIZER(ATransformerPawn)


#define GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_INCLASS \
private: \
	static void StaticRegisterNativesATransformerPawn(); \
	friend struct Z_Construct_UClass_ATransformerPawn_Statics; \
public: \
	DECLARE_CLASS(ATransformerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeTransformer"), NO_API) \
	DECLARE_SERIALIZER(ATransformerPawn)


#define GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATransformerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATransformerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATransformerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATransformerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATransformerPawn(ATransformerPawn&&); \
	NO_API ATransformerPawn(const ATransformerPawn&); \
public:


#define GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATransformerPawn(ATransformerPawn&&); \
	NO_API ATransformerPawn(const ATransformerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATransformerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATransformerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATransformerPawn)


#define GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIgnoreNonReplicatedObjects() { return STRUCT_OFFSET(ATransformerPawn, bIgnoreNonReplicatedObjects); } \
	FORCEINLINE static uint32 __PPO__MinimumCloneReplicationTime() { return STRUCT_OFFSET(ATransformerPawn, MinimumCloneReplicationTime); } \
	FORCEINLINE static uint32 __PPO__CloneReplicationCheckFrequency() { return STRUCT_OFFSET(ATransformerPawn, CloneReplicationCheckFrequency); } \
	FORCEINLINE static uint32 __PPO__CurrentSpaceType() { return STRUCT_OFFSET(ATransformerPawn, CurrentSpaceType); } \
	FORCEINLINE static uint32 __PPO__TranslationGizmoClass() { return STRUCT_OFFSET(ATransformerPawn, TranslationGizmoClass); } \
	FORCEINLINE static uint32 __PPO__RotationGizmoClass() { return STRUCT_OFFSET(ATransformerPawn, RotationGizmoClass); } \
	FORCEINLINE static uint32 __PPO__ScaleGizmoClass() { return STRUCT_OFFSET(ATransformerPawn, ScaleGizmoClass); } \
	FORCEINLINE static uint32 __PPO__Gizmo() { return STRUCT_OFFSET(ATransformerPawn, Gizmo); } \
	FORCEINLINE static uint32 __PPO__GizmoPlacement() { return STRUCT_OFFSET(ATransformerPawn, GizmoPlacement); } \
	FORCEINLINE static uint32 __PPO__CurrentTransformation() { return STRUCT_OFFSET(ATransformerPawn, CurrentTransformation); } \
	FORCEINLINE static uint32 __PPO__SnappingValues() { return STRUCT_OFFSET(ATransformerPawn, SnappingValues); } \
	FORCEINLINE static uint32 __PPO__SnappingEnabled() { return STRUCT_OFFSET(ATransformerPawn, SnappingEnabled); } \
	FORCEINLINE static uint32 __PPO__bForceMobility() { return STRUCT_OFFSET(ATransformerPawn, bForceMobility); } \
	FORCEINLINE static uint32 __PPO__bRotateOnLocalAxis() { return STRUCT_OFFSET(ATransformerPawn, bRotateOnLocalAxis); } \
	FORCEINLINE static uint32 __PPO__bTransformUFocusableObjects() { return STRUCT_OFFSET(ATransformerPawn, bTransformUFocusableObjects); } \
	FORCEINLINE static uint32 __PPO__bToggleSelectedInMultiSelection() { return STRUCT_OFFSET(ATransformerPawn, bToggleSelectedInMultiSelection); } \
	FORCEINLINE static uint32 __PPO__bComponentBased() { return STRUCT_OFFSET(ATransformerPawn, bComponentBased); }


#define GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_18_PROLOG \
	GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_EVENT_PARMS


#define GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_SPARSE_DATA \
	GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_RPC_WRAPPERS \
	GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_CALLBACK_WRAPPERS \
	GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_INCLASS \
	GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_SPARSE_DATA \
	GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_CALLBACK_WRAPPERS \
	GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_INCLASS_NO_PURE_DECLS \
	GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMETRANSFORMER_API UClass* StaticClass<class ATransformerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GModUE4_Plugins_Marketplace_RuntimeTransformer_Source_RuntimeTransformer_Public_TransformerPawn_h


#define FOREACH_ENUM_EGIZMOPLACEMENT(op) \
	op(EGizmoPlacement::GP_None) \
	op(EGizmoPlacement::GP_OnFirstSelection) \
	op(EGizmoPlacement::GP_OnLastSelection) 

enum class EGizmoPlacement : uint8;
template<> RUNTIMETRANSFORMER_API UEnum* StaticEnum<EGizmoPlacement>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
