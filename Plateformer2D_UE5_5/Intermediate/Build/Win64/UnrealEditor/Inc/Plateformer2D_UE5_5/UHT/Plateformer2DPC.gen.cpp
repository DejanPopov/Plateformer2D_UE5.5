// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plateformer2D_UE5_5/Public/Plateformer2DPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlateformer2DPC() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
PLATEFORMER2D_UE5_5_API UClass* Z_Construct_UClass_APlateformer2DPC();
PLATEFORMER2D_UE5_5_API UClass* Z_Construct_UClass_APlateformer2DPC_NoRegister();
UPackage* Z_Construct_UPackage__Script_Plateformer2D_UE5_5();
// End Cross Module References

// Begin Class APlateformer2DPC
void APlateformer2DPC::StaticRegisterNativesAPlateformer2DPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlateformer2DPC);
UClass* Z_Construct_UClass_APlateformer2DPC_NoRegister()
{
	return APlateformer2DPC::StaticClass();
}
struct Z_Construct_UClass_APlateformer2DPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Plateformer2DPC.h" },
		{ "ModuleRelativePath", "Public/Plateformer2DPC.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlateformer2DPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlateformer2DPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Plateformer2D_UE5_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlateformer2DPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlateformer2DPC_Statics::ClassParams = {
	&APlateformer2DPC::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlateformer2DPC_Statics::Class_MetaDataParams), Z_Construct_UClass_APlateformer2DPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlateformer2DPC()
{
	if (!Z_Registration_Info_UClass_APlateformer2DPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlateformer2DPC.OuterSingleton, Z_Construct_UClass_APlateformer2DPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlateformer2DPC.OuterSingleton;
}
template<> PLATEFORMER2D_UE5_5_API UClass* StaticClass<APlateformer2DPC>()
{
	return APlateformer2DPC::StaticClass();
}
APlateformer2DPC::APlateformer2DPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlateformer2DPC);
APlateformer2DPC::~APlateformer2DPC() {}
// End Class APlateformer2DPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Plateformer2D_UE5_5_Plateformer2D_UE5_5_Source_Plateformer2D_UE5_5_Public_Plateformer2DPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlateformer2DPC, APlateformer2DPC::StaticClass, TEXT("APlateformer2DPC"), &Z_Registration_Info_UClass_APlateformer2DPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlateformer2DPC), 327856537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Plateformer2D_UE5_5_Plateformer2D_UE5_5_Source_Plateformer2D_UE5_5_Public_Plateformer2DPC_h_952746370(TEXT("/Script/Plateformer2D_UE5_5"),
	Z_CompiledInDeferFile_FID_UE_Projects_Plateformer2D_UE5_5_Plateformer2D_UE5_5_Source_Plateformer2D_UE5_5_Public_Plateformer2DPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Plateformer2D_UE5_5_Plateformer2D_UE5_5_Source_Plateformer2D_UE5_5_Public_Plateformer2DPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
