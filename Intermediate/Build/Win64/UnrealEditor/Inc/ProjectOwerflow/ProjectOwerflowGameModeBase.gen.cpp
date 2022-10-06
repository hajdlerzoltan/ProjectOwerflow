// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectOwerflow/ProjectOwerflowGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectOwerflowGameModeBase() {}
// Cross Module References
	PROJECTOWERFLOW_API UClass* Z_Construct_UClass_AProjectOwerflowGameModeBase_NoRegister();
	PROJECTOWERFLOW_API UClass* Z_Construct_UClass_AProjectOwerflowGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjectOwerflow();
// End Cross Module References
	void AProjectOwerflowGameModeBase::StaticRegisterNativesAProjectOwerflowGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectOwerflowGameModeBase);
	UClass* Z_Construct_UClass_AProjectOwerflowGameModeBase_NoRegister()
	{
		return AProjectOwerflowGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProjectOwerflowGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectOwerflowGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectOwerflow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectOwerflowGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectOwerflowGameModeBase.h" },
		{ "ModuleRelativePath", "ProjectOwerflowGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectOwerflowGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectOwerflowGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectOwerflowGameModeBase_Statics::ClassParams = {
		&AProjectOwerflowGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProjectOwerflowGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectOwerflowGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectOwerflowGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AProjectOwerflowGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectOwerflowGameModeBase.OuterSingleton, Z_Construct_UClass_AProjectOwerflowGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectOwerflowGameModeBase.OuterSingleton;
	}
	template<> PROJECTOWERFLOW_API UClass* StaticClass<AProjectOwerflowGameModeBase>()
	{
		return AProjectOwerflowGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectOwerflowGameModeBase);
	struct Z_CompiledInDeferFile_FID_ProjectOwerflow_Source_ProjectOwerflow_ProjectOwerflowGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectOwerflow_Source_ProjectOwerflow_ProjectOwerflowGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectOwerflowGameModeBase, AProjectOwerflowGameModeBase::StaticClass, TEXT("AProjectOwerflowGameModeBase"), &Z_Registration_Info_UClass_AProjectOwerflowGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectOwerflowGameModeBase), 2013337269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectOwerflow_Source_ProjectOwerflow_ProjectOwerflowGameModeBase_h_3888365377(TEXT("/Script/ProjectOwerflow"),
		Z_CompiledInDeferFile_FID_ProjectOwerflow_Source_ProjectOwerflow_ProjectOwerflowGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectOwerflow_Source_ProjectOwerflow_ProjectOwerflowGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
