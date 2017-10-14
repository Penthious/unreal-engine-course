// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Section_01GameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSection_01GameModeBase() {}
// Cross Module References
	SECTION_01_API UClass* Z_Construct_UClass_ASection_01GameModeBase_NoRegister();
	SECTION_01_API UClass* Z_Construct_UClass_ASection_01GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Section_01();
// End Cross Module References
	void ASection_01GameModeBase::StaticRegisterNativesASection_01GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASection_01GameModeBase_NoRegister()
	{
		return ASection_01GameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ASection_01GameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Section_01();
			OuterClass = ASection_01GameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ASection_01GameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Section_01GameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Section_01GameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASection_01GameModeBase, 1829971974);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASection_01GameModeBase(Z_Construct_UClass_ASection_01GameModeBase, &ASection_01GameModeBase::StaticClass, TEXT("/Script/Section_01"), TEXT("ASection_01GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASection_01GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
