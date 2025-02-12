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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlateformer2DCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
APlateformer2DCharacter::APlateformer2DCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlateformer2DCharacter);
APlateformer2DCharacter::~APlateformer2DCharacter() {}
// End Class APlateformer2DCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Plateformer2D_UE5_5_Plateformer2D_UE5_5_Source_Plateformer2D_UE5_5_Public_Plateformer2DCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlateformer2DCharacter, APlateformer2DCharacter::StaticClass, TEXT("APlateformer2DCharacter"), &Z_Registration_Info_UClass_APlateformer2DCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlateformer2DCharacter), 1717823222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Plateformer2D_UE5_5_Plateformer2D_UE5_5_Source_Plateformer2D_UE5_5_Public_Plateformer2DCharacter_h_1441644660(TEXT("/Script/Plateformer2D_UE5_5"),
	Z_CompiledInDeferFile_FID_UE_Projects_Plateformer2D_UE5_5_Plateformer2D_UE5_5_Source_Plateformer2D_UE5_5_Public_Plateformer2DCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Plateformer2D_UE5_5_Plateformer2D_UE5_5_Source_Plateformer2D_UE5_5_Public_Plateformer2DCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
