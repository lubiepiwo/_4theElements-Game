// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEpicLeaderboardObject;
#ifdef EPICLEADERBOARD_EpicLeaderboardObject_generated_h
#error "EpicLeaderboardObject.generated.h already included, missing '#pragma once' in EpicLeaderboardObject.h"
#endif
#define EPICLEADERBOARD_EpicLeaderboardObject_generated_h

#define 4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_13_GENERATED_BODY \
	friend EPICLEADERBOARD_API class UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboardEntry(); \
	EPICLEADERBOARD_API static class UScriptStruct* StaticStruct();


#define 4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_23_DELEGATE \
struct _Script_EpicLeaderboard_eventEpicLeaderboardResponse_Parms \
{ \
	UEpicLeaderboardObject* Leaderboard; \
}; \
static inline void FEpicLeaderboardResponse_DelegateWrapper(const FMulticastScriptDelegate& EpicLeaderboardResponse, UEpicLeaderboardObject* Leaderboard) \
{ \
	_Script_EpicLeaderboard_eventEpicLeaderboardResponse_Parms Parms; \
	Parms.Leaderboard=Leaderboard; \
	EpicLeaderboardResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define 4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEpicLeaderboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEpicLeaderboardObject**)Z_Param__Result=UEpicLeaderboardObject::GetEpicLeaderboard(Z_Param_leaderboardID,Z_Param_leaderboardKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubmitScore) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_username); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_score); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SubmitScore(Z_Param_username,Z_Param_score); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateLeaderboard) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateLeaderboard(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCleanupName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UEpicLeaderboardObject::CleanupName(Z_Param_name); \
		P_NATIVE_END; \
	}


#define 4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEpicLeaderboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_leaderboardKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEpicLeaderboardObject**)Z_Param__Result=UEpicLeaderboardObject::GetEpicLeaderboard(Z_Param_leaderboardID,Z_Param_leaderboardKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubmitScore) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_username); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_score); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SubmitScore(Z_Param_username,Z_Param_score); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateLeaderboard) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateLeaderboard(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCleanupName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UEpicLeaderboardObject::CleanupName(Z_Param_name); \
		P_NATIVE_END; \
	}


#define 4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEpicLeaderboardObject(); \
	friend EPICLEADERBOARD_API class UClass* Z_Construct_UClass_UEpicLeaderboardObject(); \
public: \
	DECLARE_CLASS(UEpicLeaderboardObject, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EpicLeaderboard"), NO_API) \
	DECLARE_SERIALIZER(UEpicLeaderboardObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define 4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUEpicLeaderboardObject(); \
	friend EPICLEADERBOARD_API class UClass* Z_Construct_UClass_UEpicLeaderboardObject(); \
public: \
	DECLARE_CLASS(UEpicLeaderboardObject, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EpicLeaderboard"), NO_API) \
	DECLARE_SERIALIZER(UEpicLeaderboardObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define 4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEpicLeaderboardObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEpicLeaderboardObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEpicLeaderboardObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEpicLeaderboardObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEpicLeaderboardObject(UEpicLeaderboardObject&&); \
	NO_API UEpicLeaderboardObject(const UEpicLeaderboardObject&); \
public:


#define 4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEpicLeaderboardObject(UEpicLeaderboardObject&&); \
	NO_API UEpicLeaderboardObject(const UEpicLeaderboardObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEpicLeaderboardObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEpicLeaderboardObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEpicLeaderboardObject)


#define 4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_PRIVATE_PROPERTY_OFFSET
#define 4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_25_PROLOG
#define 4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_PRIVATE_PROPERTY_OFFSET \
	4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_RPC_WRAPPERS \
	4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_INCLASS \
	4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define 4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_PRIVATE_PROPERTY_OFFSET \
	4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_INCLASS_NO_PURE_DECLS \
	4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID 4theElements_Game_Plugins_EpicLeaderboard_Source_EpicLeaderboard_Classes_EpicLeaderboardObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
