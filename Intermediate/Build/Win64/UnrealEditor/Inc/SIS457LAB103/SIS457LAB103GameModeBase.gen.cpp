// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457LAB103/SIS457LAB103GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIS457LAB103GameModeBase() {}
// Cross Module References
	SIS457LAB103_API UClass* Z_Construct_UClass_ASIS457LAB103GameModeBase_NoRegister();
	SIS457LAB103_API UClass* Z_Construct_UClass_ASIS457LAB103GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SIS457LAB103();
// End Cross Module References
	void ASIS457LAB103GameModeBase::StaticRegisterNativesASIS457LAB103GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASIS457LAB103GameModeBase);
	UClass* Z_Construct_UClass_ASIS457LAB103GameModeBase_NoRegister()
	{
		return ASIS457LAB103GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASIS457LAB103GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASIS457LAB103GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457LAB103,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB103GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SIS457LAB103GameModeBase.h" },
		{ "ModuleRelativePath", "SIS457LAB103GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASIS457LAB103GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASIS457LAB103GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASIS457LAB103GameModeBase_Statics::ClassParams = {
		&ASIS457LAB103GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB103GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB103GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASIS457LAB103GameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASIS457LAB103GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASIS457LAB103GameModeBase.OuterSingleton, Z_Construct_UClass_ASIS457LAB103GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASIS457LAB103GameModeBase.OuterSingleton;
	}
	template<> SIS457LAB103_API UClass* StaticClass<ASIS457LAB103GameModeBase>()
	{
		return ASIS457LAB103GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASIS457LAB103GameModeBase);
	struct Z_CompiledInDeferFile_FID_SIS457LAB103_Source_SIS457LAB103_SIS457LAB103GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SIS457LAB103_Source_SIS457LAB103_SIS457LAB103GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASIS457LAB103GameModeBase, ASIS457LAB103GameModeBase::StaticClass, TEXT("ASIS457LAB103GameModeBase"), &Z_Registration_Info_UClass_ASIS457LAB103GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASIS457LAB103GameModeBase), 2190673355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SIS457LAB103_Source_SIS457LAB103_SIS457LAB103GameModeBase_h_1014162594(TEXT("/Script/SIS457LAB103"),
		Z_CompiledInDeferFile_FID_SIS457LAB103_Source_SIS457LAB103_SIS457LAB103GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SIS457LAB103_Source_SIS457LAB103_SIS457LAB103GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
