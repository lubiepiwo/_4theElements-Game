// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/EpicLeaderboardPrivatePCH.h"
#include "Classes/EpicLeaderboardObject.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicLeaderboardObject() {}
// Cross Module References
	EPICLEADERBOARD_API UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EpicLeaderboard();
	EPICLEADERBOARD_API UClass* Z_Construct_UClass_UEpicLeaderboardObject_NoRegister();
	EPICLEADERBOARD_API UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboardEntry();
	EPICLEADERBOARD_API UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName();
	EPICLEADERBOARD_API UClass* Z_Construct_UClass_UEpicLeaderboardObject();
	EPICLEADERBOARD_API UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard();
	EPICLEADERBOARD_API UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_SubmitScore();
	EPICLEADERBOARD_API UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_UpdateLeaderboard();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature()
	{
		struct _Script_EpicLeaderboard_eventEpicLeaderboardResponse_Parms
		{
			UEpicLeaderboardObject* Leaderboard;
		};
		UObject* Outer = Z_Construct_UPackage__Script_EpicLeaderboard();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EpicLeaderboardResponse__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_EpicLeaderboard_eventEpicLeaderboardResponse_Parms));
			UProperty* NewProp_Leaderboard = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Leaderboard"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Leaderboard, _Script_EpicLeaderboard_eventEpicLeaderboardResponse_Parms), 0x0010000000000080, Z_Construct_UClass_UEpicLeaderboardObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/EpicLeaderboardObject.h"));
#endif
		}
		return ReturnFunction;
	}
class UScriptStruct* FEpicLeaderboardEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EPICLEADERBOARD_API uint32 Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEpicLeaderboardEntry, Z_Construct_UPackage__Script_EpicLeaderboard(), TEXT("EpicLeaderboardEntry"), sizeof(FEpicLeaderboardEntry), Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEpicLeaderboardEntry(FEpicLeaderboardEntry::StaticStruct, TEXT("/Script/EpicLeaderboard"), TEXT("EpicLeaderboardEntry"), false, nullptr, nullptr);
static struct FScriptStruct_EpicLeaderboard_StaticRegisterNativesFEpicLeaderboardEntry
{
	FScriptStruct_EpicLeaderboard_StaticRegisterNativesFEpicLeaderboardEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EpicLeaderboardEntry")),new UScriptStruct::TCppStructOps<FEpicLeaderboardEntry>);
	}
} ScriptStruct_EpicLeaderboard_StaticRegisterNativesFEpicLeaderboardEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboardEntry()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_EpicLeaderboard();
		extern uint32 Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EpicLeaderboardEntry"), sizeof(FEpicLeaderboardEntry), Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EpicLeaderboardEntry"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FEpicLeaderboardEntry>, EStructFlags(0x00000001));
			UProperty* NewProp_score = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("score"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(score, FEpicLeaderboardEntry), 0x0010000000000005);
			UProperty* NewProp_username = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("username"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(username, FEpicLeaderboardEntry), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/EpicLeaderboardObject.h"));
			MetaData->SetValue(NewProp_score, TEXT("Category"), TEXT("EpicLeaderboardEntry"));
			MetaData->SetValue(NewProp_score, TEXT("ModuleRelativePath"), TEXT("Classes/EpicLeaderboardObject.h"));
			MetaData->SetValue(NewProp_username, TEXT("Category"), TEXT("EpicLeaderboardEntry"));
			MetaData->SetValue(NewProp_username, TEXT("ModuleRelativePath"), TEXT("Classes/EpicLeaderboardObject.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_CRC() { return 3007294466U; }
	void UEpicLeaderboardObject::StaticRegisterNativesUEpicLeaderboardObject()
	{
		UClass* Class = UEpicLeaderboardObject::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CleanupName", (Native)&UEpicLeaderboardObject::execCleanupName },
			{ "GetEpicLeaderboard", (Native)&UEpicLeaderboardObject::execGetEpicLeaderboard },
			{ "SubmitScore", (Native)&UEpicLeaderboardObject::execSubmitScore },
			{ "UpdateLeaderboard", (Native)&UEpicLeaderboardObject::execUpdateLeaderboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName()
	{
		struct EpicLeaderboardObject_eventCleanupName_Parms
		{
			FString name;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UEpicLeaderboardObject();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CleanupName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(EpicLeaderboardObject_eventCleanupName_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, EpicLeaderboardObject_eventCleanupName_Parms), 0x0010000000000580);
			UProperty* NewProp_name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(name, EpicLeaderboardObject_eventCleanupName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("EpicLeaderboard|Utilities"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/EpicLeaderboardObject.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Utilities"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard()
	{
		struct EpicLeaderboardObject_eventGetEpicLeaderboard_Parms
		{
			FString leaderboardID;
			FString leaderboardKey;
			UEpicLeaderboardObject* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UEpicLeaderboardObject();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetEpicLeaderboard"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(EpicLeaderboardObject_eventGetEpicLeaderboard_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, EpicLeaderboardObject_eventGetEpicLeaderboard_Parms), 0x0010000000000580, Z_Construct_UClass_UEpicLeaderboardObject_NoRegister());
			UProperty* NewProp_leaderboardKey = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("leaderboardKey"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(leaderboardKey, EpicLeaderboardObject_eventGetEpicLeaderboard_Parms), 0x0010000000000080);
			UProperty* NewProp_leaderboardID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("leaderboardID"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(leaderboardID, EpicLeaderboardObject_eventGetEpicLeaderboard_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("EpicLeaderboard|Leaderboard"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/EpicLeaderboardObject.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("leaderboard access"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_SubmitScore()
	{
		struct EpicLeaderboardObject_eventSubmitScore_Parms
		{
			FString username;
			float score;
		};
		UObject* Outer = Z_Construct_UClass_UEpicLeaderboardObject();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SubmitScore"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(EpicLeaderboardObject_eventSubmitScore_Parms));
			UProperty* NewProp_score = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("score"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(score, EpicLeaderboardObject_eventSubmitScore_Parms), 0x0010000000000080);
			UProperty* NewProp_username = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("username"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(username, EpicLeaderboardObject_eventSubmitScore_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("EpicLeaderboard|Leaderboard"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/EpicLeaderboardObject.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_UpdateLeaderboard()
	{
		UObject* Outer = Z_Construct_UClass_UEpicLeaderboardObject();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateLeaderboard"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("EpicLeaderboard|Leaderboard"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/EpicLeaderboardObject.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("methods"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEpicLeaderboardObject_NoRegister()
	{
		return UEpicLeaderboardObject::StaticClass();
	}
	UClass* Z_Construct_UClass_UEpicLeaderboardObject()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_EpicLeaderboard();
			OuterClass = UEpicLeaderboardObject::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName());
				OuterClass->LinkChild(Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard());
				OuterClass->LinkChild(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitScore());
				OuterClass->LinkChild(Z_Construct_UFunction_UEpicLeaderboardObject_UpdateLeaderboard());

				UProperty* NewProp_LeaderboardEntries = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LeaderboardEntries"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(LeaderboardEntries, UEpicLeaderboardObject), 0x0010000000020005);
				UProperty* NewProp_LeaderboardEntries_Inner = new(EC_InternalUseOnlyConstructor, NewProp_LeaderboardEntries, TEXT("LeaderboardEntries"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000, Z_Construct_UScriptStruct_FEpicLeaderboardEntry());
				UProperty* NewProp_Key = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Key, UEpicLeaderboardObject), 0x0010000000020015);
				UProperty* NewProp_ID = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ID"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ID, UEpicLeaderboardObject), 0x0010000000020015);
				UProperty* NewProp_OnFailure = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnFailure"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnFailure, UEpicLeaderboardObject), 0x0010000010080000, Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature());
				UProperty* NewProp_OnSuccess = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSuccess, UEpicLeaderboardObject), 0x0010000010080000, Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName(), "CleanupName"); // 544720224
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard(), "GetEpicLeaderboard"); // 1641501989
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitScore(), "SubmitScore"); // 2657268133
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UEpicLeaderboardObject_UpdateLeaderboard(), "UpdateLeaderboard"); // 1193307876
				static TCppClassTypeInfo<TCppClassTypeTraits<UEpicLeaderboardObject> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EpicLeaderboardObject.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/EpicLeaderboardObject.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_LeaderboardEntries, TEXT("Category"), TEXT("EpicLeaderboard|Properties"));
				MetaData->SetValue(NewProp_LeaderboardEntries, TEXT("ModuleRelativePath"), TEXT("Classes/EpicLeaderboardObject.h"));
				MetaData->SetValue(NewProp_Key, TEXT("Category"), TEXT("EpicLeaderboard|Properties"));
				MetaData->SetValue(NewProp_Key, TEXT("ModuleRelativePath"), TEXT("Classes/EpicLeaderboardObject.h"));
				MetaData->SetValue(NewProp_ID, TEXT("Category"), TEXT("EpicLeaderboard|Properties"));
				MetaData->SetValue(NewProp_ID, TEXT("ModuleRelativePath"), TEXT("Classes/EpicLeaderboardObject.h"));
				MetaData->SetValue(NewProp_ID, TEXT("ToolTip"), TEXT("Properties"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("Category"), TEXT("EpicLeaderboard|Delegates"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ModuleRelativePath"), TEXT("Classes/EpicLeaderboardObject.h"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("Category"), TEXT("EpicLeaderboard|Delegates"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ModuleRelativePath"), TEXT("Classes/EpicLeaderboardObject.h"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ToolTip"), TEXT("Delegates"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEpicLeaderboardObject, 119970967);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEpicLeaderboardObject(Z_Construct_UClass_UEpicLeaderboardObject, &UEpicLeaderboardObject::StaticClass, TEXT("/Script/EpicLeaderboard"), TEXT("UEpicLeaderboardObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEpicLeaderboardObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
