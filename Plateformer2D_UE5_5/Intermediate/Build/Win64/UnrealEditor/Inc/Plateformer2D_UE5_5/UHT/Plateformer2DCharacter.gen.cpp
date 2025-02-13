// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plateformer2D_UE5_5/Public/Plateformer2DCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlateformer2DCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
PLATEFORMER2D_UE5_5_API UClass* Z_Construct_UClass_APlateformer2DCharacter();
PLATEFORMER2D_UE5_5_API UClass* Z_Construct_UClass_APlateformer2DCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Plateformer2D_UE5_5();
// End Cross Module References

// Begin Class APlateformer2DCharacter
void APlateformer2DCharacter::StaticRegisterNativesAPlateformer2DCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlateformer2DCharacter);
UClass* Z_Construct_UClass_APlateformer2DCharacter_NoRegister()
{
	return APlateformer2DCharacter::StaticClass();
}
struct Z_Construct_UClass_APlateformer2DCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Plateformer2DCharacter.h" },
		{ "ModuleRelativePath", "Public/Plateformer2DCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Plateformer2D|Actor Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This component tries to maintain its children at fixed distance from the parent\n// It is going to be attached to the camera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Plateformer2DCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This component tries to maintain its children at fixed distance from the parent\nIt is going to be attached to the camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Plateformer2D|Actor Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Plateformer2DCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Plateformer2D|Actor Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Plateformer2DCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlateformer2DCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlateformer2DCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlateformer2DCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComponent_MetaData), NewProp_SpringArmComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlateformer2DCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlateformer2DCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlateformer2DCharacter_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlateformer2DCharacter, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlateformer2DCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlateformer2DCharacter_Statics::NewProp_SpringArmComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlateformer2DCharacter_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlateformer2DCharacter_Statics::NewProp_SceneComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlateformer2DCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlateformer2DCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APaperCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Plateformer2D_UE5_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlateformer2DCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlateformer2DCharacter_Statics::ClassParams = {
	&APlateformer2DCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlateformer2DCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlateformer2DCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlateformer2DCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlateformer2DCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlateformer2DCharacter()
{
	if (!Z_Registration_Info_UClass_APlateformer2DCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlateformer2DCharacter.OuterSingleton, Z_Construct_UClass_APlateformer2DCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlateformer2DCharacter.OuterSingleton;
}
template<> PLATEFORMER2D_UE5_5_API UClass* StaticClass<APlateformer2DCharacter>()
{
	return APlateformer2DCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlateformer2DCharacter);
APlateformer2DCharacter::~APlateformer2DCharacter() {}
// End Class APlateformer2DCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Plateformer2D_UE5_5_Plateformer2D_UE5_5_Source_Plateformer2D_UE5_5_Public_Plateformer2DCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlateformer2DCharacter, APlateformer2DCharacter::StaticClass, TEXT("APlateformer2DCharacter"), &Z_Registration_Info_UClass_APlateformer2DCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlateformer2DCharacter), 808577351U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Plateformer2D_UE5_5_Plateformer2D_UE5_5_Source_Plateformer2D_UE5_5_Public_Plateformer2DCharacter_h_2789115982(TEXT("/Script/Plateformer2D_UE5_5"),
	Z_CompiledInDeferFile_FID_UE_Projects_Plateformer2D_UE5_5_Plateformer2D_UE5_5_Source_Plateformer2D_UE5_5_Public_Plateformer2DCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Plateformer2D_UE5_5_Plateformer2D_UE5_5_Source_Plateformer2D_UE5_5_Public_Plateformer2DCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
