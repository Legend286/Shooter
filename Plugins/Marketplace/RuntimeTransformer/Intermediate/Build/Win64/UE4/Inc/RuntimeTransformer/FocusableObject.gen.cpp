// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeTransformer/Public/FocusableObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFocusableObject() {}
// Cross Module References
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_UFocusableObject_NoRegister();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_UFocusableObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_RuntimeTransformer();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	RUNTIMETRANSFORMER_API UClass* Z_Construct_UClass_ATransformerPawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(IFocusableObject::execOnNewTransformation)
	{
		P_GET_OBJECT(ATransformerPawn,Z_Param_Caller);
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform);
		P_GET_UBOOL(Z_Param_bComponentBased);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNewTransformation_Implementation(Z_Param_Caller,Z_Param_Component,Z_Param_Out_NewTransform,Z_Param_bComponentBased);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFocusableObject::execUnfocus)
	{
		P_GET_OBJECT(ATransformerPawn,Z_Param_Caller);
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_UBOOL(Z_Param_bComponentBased);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unfocus_Implementation(Z_Param_Caller,Z_Param_Component,Z_Param_bComponentBased);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFocusableObject::execFocus)
	{
		P_GET_OBJECT(ATransformerPawn,Z_Param_Caller);
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_UBOOL(Z_Param_bComponentBased);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Focus_Implementation(Z_Param_Caller,Z_Param_Component,Z_Param_bComponentBased);
		P_NATIVE_END;
	}
	void IFocusableObject::Focus(ATransformerPawn* Caller, USceneComponent* Component, bool bComponentBased)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Focus instead.");
	}
	void IFocusableObject::OnNewTransformation(ATransformerPawn* Caller, USceneComponent* Component, FTransform const& NewTransform, bool bComponentBased)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnNewTransformation instead.");
	}
	void IFocusableObject::Unfocus(ATransformerPawn* Caller, USceneComponent* Component, bool bComponentBased)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Unfocus instead.");
	}
	void UFocusableObject::StaticRegisterNativesUFocusableObject()
	{
		UClass* Class = UFocusableObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Focus", &IFocusableObject::execFocus },
			{ "OnNewTransformation", &IFocusableObject::execOnNewTransformation },
			{ "Unfocus", &IFocusableObject::execUnfocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFocusableObject_Focus_Statics
	{
		static void NewProp_bComponentBased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComponentBased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFocusableObject_Focus_Statics::NewProp_bComponentBased_SetBit(void* Obj)
	{
		((FocusableObject_eventFocus_Parms*)Obj)->bComponentBased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFocusableObject_Focus_Statics::NewProp_bComponentBased = { "bComponentBased", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FocusableObject_eventFocus_Parms), &Z_Construct_UFunction_UFocusableObject_Focus_Statics::NewProp_bComponentBased_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFocusableObject_Focus_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFocusableObject_Focus_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FocusableObject_eventFocus_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFocusableObject_Focus_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableObject_Focus_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFocusableObject_Focus_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FocusableObject_eventFocus_Parms, Caller), Z_Construct_UClass_ATransformerPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFocusableObject_Focus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusableObject_Focus_Statics::NewProp_bComponentBased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusableObject_Focus_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusableObject_Focus_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFocusableObject_Focus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Focusable" },
		{ "Comment", "//Focus is called right before the Component is added to the list.\n" },
		{ "ModuleRelativePath", "Public/FocusableObject.h" },
		{ "ToolTip", "Focus is called right before the Component is added to the list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFocusableObject_Focus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFocusableObject, nullptr, "Focus", nullptr, nullptr, sizeof(FocusableObject_eventFocus_Parms), Z_Construct_UFunction_UFocusableObject_Focus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableObject_Focus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFocusableObject_Focus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableObject_Focus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFocusableObject_Focus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFocusableObject_Focus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics
	{
		static void NewProp_bComponentBased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComponentBased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::NewProp_bComponentBased_SetBit(void* Obj)
	{
		((FocusableObject_eventOnNewTransformation_Parms*)Obj)->bComponentBased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::NewProp_bComponentBased = { "bComponentBased", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FocusableObject_eventOnNewTransformation_Parms), &Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::NewProp_bComponentBased_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::NewProp_NewTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FocusableObject_eventOnNewTransformation_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::NewProp_NewTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::NewProp_NewTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FocusableObject_eventOnNewTransformation_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FocusableObject_eventOnNewTransformation_Parms, Caller), Z_Construct_UClass_ATransformerPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::NewProp_bComponentBased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::NewProp_NewTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Focusable" },
		{ "Comment", "//Called when there is a Delta Transform in World Space (Local for Scaling) that has been calculated for the Selected Focusable Object.\n" },
		{ "ModuleRelativePath", "Public/FocusableObject.h" },
		{ "ToolTip", "Called when there is a Delta Transform in World Space (Local for Scaling) that has been calculated for the Selected Focusable Object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFocusableObject, nullptr, "OnNewTransformation", nullptr, nullptr, sizeof(FocusableObject_eventOnNewTransformation_Parms), Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFocusableObject_OnNewTransformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFocusableObject_OnNewTransformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFocusableObject_Unfocus_Statics
	{
		static void NewProp_bComponentBased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComponentBased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::NewProp_bComponentBased_SetBit(void* Obj)
	{
		((FocusableObject_eventUnfocus_Parms*)Obj)->bComponentBased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::NewProp_bComponentBased = { "bComponentBased", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FocusableObject_eventUnfocus_Parms), &Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::NewProp_bComponentBased_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FocusableObject_eventUnfocus_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FocusableObject_eventUnfocus_Parms, Caller), Z_Construct_UClass_ATransformerPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::NewProp_bComponentBased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Focusable" },
		{ "Comment", "//Unfocus is called right before the Component is removed from the list.\n" },
		{ "ModuleRelativePath", "Public/FocusableObject.h" },
		{ "ToolTip", "Unfocus is called right before the Component is removed from the list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFocusableObject, nullptr, "Unfocus", nullptr, nullptr, sizeof(FocusableObject_eventUnfocus_Parms), Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFocusableObject_Unfocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFocusableObject_Unfocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFocusableObject_NoRegister()
	{
		return UFocusableObject::StaticClass();
	}
	struct Z_Construct_UClass_UFocusableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFocusableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeTransformer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFocusableObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFocusableObject_Focus, "Focus" }, // 968742824
		{ &Z_Construct_UFunction_UFocusableObject_OnNewTransformation, "OnNewTransformation" }, // 3382249068
		{ &Z_Construct_UFunction_UFocusableObject_Unfocus, "Unfocus" }, // 3358981583
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFocusableObject_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FocusableObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFocusableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFocusableObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFocusableObject_Statics::ClassParams = {
		&UFocusableObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFocusableObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFocusableObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFocusableObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFocusableObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFocusableObject, 4271230824);
	template<> RUNTIMETRANSFORMER_API UClass* StaticClass<UFocusableObject>()
	{
		return UFocusableObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFocusableObject(Z_Construct_UClass_UFocusableObject, &UFocusableObject::StaticClass, TEXT("/Script/RuntimeTransformer"), TEXT("UFocusableObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFocusableObject);
	static FName NAME_UFocusableObject_Focus = FName(TEXT("Focus"));
	void IFocusableObject::Execute_Focus(UObject* O, ATransformerPawn* Caller, USceneComponent* Component, bool bComponentBased)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFocusableObject::StaticClass()));
		FocusableObject_eventFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFocusableObject_Focus);
		if (Func)
		{
			Parms.Caller=Caller;
			Parms.Component=Component;
			Parms.bComponentBased=bComponentBased;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFocusableObject*)(O->GetNativeInterfaceAddress(UFocusableObject::StaticClass())))
		{
			I->Focus_Implementation(Caller,Component,bComponentBased);
		}
	}
	static FName NAME_UFocusableObject_OnNewTransformation = FName(TEXT("OnNewTransformation"));
	void IFocusableObject::Execute_OnNewTransformation(UObject* O, ATransformerPawn* Caller, USceneComponent* Component, FTransform const& NewTransform, bool bComponentBased)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFocusableObject::StaticClass()));
		FocusableObject_eventOnNewTransformation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFocusableObject_OnNewTransformation);
		if (Func)
		{
			Parms.Caller=Caller;
			Parms.Component=Component;
			Parms.NewTransform=NewTransform;
			Parms.bComponentBased=bComponentBased;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFocusableObject*)(O->GetNativeInterfaceAddress(UFocusableObject::StaticClass())))
		{
			I->OnNewTransformation_Implementation(Caller,Component,NewTransform,bComponentBased);
		}
	}
	static FName NAME_UFocusableObject_Unfocus = FName(TEXT("Unfocus"));
	void IFocusableObject::Execute_Unfocus(UObject* O, ATransformerPawn* Caller, USceneComponent* Component, bool bComponentBased)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFocusableObject::StaticClass()));
		FocusableObject_eventUnfocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFocusableObject_Unfocus);
		if (Func)
		{
			Parms.Caller=Caller;
			Parms.Component=Component;
			Parms.bComponentBased=bComponentBased;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFocusableObject*)(O->GetNativeInterfaceAddress(UFocusableObject::StaticClass())))
		{
			I->Unfocus_Implementation(Caller,Component,bComponentBased);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
