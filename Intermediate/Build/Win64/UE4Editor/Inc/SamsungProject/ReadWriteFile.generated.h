// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMSUNGPROJECT_ReadWriteFile_generated_h
#error "ReadWriteFile.generated.h already included, missing '#pragma once' in ReadWriteFile.h"
#endif
#define SAMSUNGPROJECT_ReadWriteFile_generated_h

#define SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveTxt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UReadWriteFile::SaveTxt(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTxt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UReadWriteFile::LoadTxt(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	}


#define SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveTxt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UReadWriteFile::SaveTxt(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTxt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UReadWriteFile::LoadTxt(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	}


#define SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReadWriteFile(); \
	friend struct Z_Construct_UClass_UReadWriteFile_Statics; \
public: \
	DECLARE_CLASS(UReadWriteFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SamsungProject"), NO_API) \
	DECLARE_SERIALIZER(UReadWriteFile)


#define SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUReadWriteFile(); \
	friend struct Z_Construct_UClass_UReadWriteFile_Statics; \
public: \
	DECLARE_CLASS(UReadWriteFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SamsungProject"), NO_API) \
	DECLARE_SERIALIZER(UReadWriteFile)


#define SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadWriteFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadWriteFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadWriteFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadWriteFile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadWriteFile(UReadWriteFile&&); \
	NO_API UReadWriteFile(const UReadWriteFile&); \
public:


#define SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadWriteFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadWriteFile(UReadWriteFile&&); \
	NO_API UReadWriteFile(const UReadWriteFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadWriteFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadWriteFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadWriteFile)


#define SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_PRIVATE_PROPERTY_OFFSET
#define SamsungProject_Source_SamsungProject_ReadWriteFile_h_12_PROLOG
#define SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_PRIVATE_PROPERTY_OFFSET \
	SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_RPC_WRAPPERS \
	SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_INCLASS \
	SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_PRIVATE_PROPERTY_OFFSET \
	SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_INCLASS_NO_PURE_DECLS \
	SamsungProject_Source_SamsungProject_ReadWriteFile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMSUNGPROJECT_API UClass* StaticClass<class UReadWriteFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SamsungProject_Source_SamsungProject_ReadWriteFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
