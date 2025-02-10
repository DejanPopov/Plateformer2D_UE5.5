// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plateformer2D_UE5_5/Public/Plateformer2DGM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlateformer2DGM() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
PLATEFORMER2D_UE5_5_API UClass* Z_Construct_UClass_APlateformer2DGM();
PLATEFORMER2D_UE5_5_API UClass* Z_Construct_UClass_APlateformer2DGM_NoRegister();
UPackage* Z_Construct_UPackage__Script_Plateformer2D_UE5_5();
// End Cross Module References

// Begin Class APlateformer2DGM
void APlateformer2DGM::StaticRegisterNativesAPlateformer2DGM()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlateformer2DGM);
UClass* Z_Construct_UClass_APlateformer2DGM_NoRegister()
{
	return APlateformer2DGM::StaticClass();
}
struct Z_Construct_UClass_APlateformer2DGM_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Plateformer2DGM.h" },
		{ "ModuleRelativePath", "Public/Plateformer2DGM.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlateformer2DGM>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlateformer2DGM_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Plateformer2D_UE5_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlateformer2DGM_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlateformer2DGM_Statics::ClassParams = {
	&APlateformer2DGM::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlateformer2DGM_Statics::Class_MetaDataParams), Z_Construct_UClass_APlateformer2DGM_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlateformer2DGM()
{
	if (!Z_Registration_Info_UClass_APlateformer2DGM.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlateformer2DGM.OuterSingleton, Z_Construct_UClass_APlateformer2DGM_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlateformer2DGM.OuterSingleton;
}
template<> PLATEFORMER2D_UE5_5_API UClass* StaticClass<APlateformer2DGM>()
{
	return APlateformer2DGM::StaticClass();
}
APlateformer2DGM::APlateformer2DGM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlateformer2DGM);
APlateformer2DGM::~APlateformer2DGM() {}
// End Class APlateformer2DGM

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Plateformer2D_UE5_5_Plateformer2D_UE5_5_Source_Plateformer2D_UE5_5_Public_Plateformer2DGM_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlateformer2DGM, APlateformer2DGM::StaticClass, TEXT("APlateformer2DGM"), &Z_Registration_Info_UClass_APlateformer2DGM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlateformer2DGM), 1223298870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Plateformer2D_UE5_5_Plateformer2D_UE5_5_Source_Plateformer2D_UE5_5_Public_Plateformer2DGM_h_1966102367(TEXT("/Script/Plateformer2D_UE5_5"),
	Z_CompiledInDeferFile_FID_UE_Projects_Plateformer2D_UE5_5_Plateformer2D_UE5_5_Source_Plateformer2D_UE5_5_Public_Plateformer2DGM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Plateformer2D_UE5_5_Plateformer2D_UE5_5_Source_Plateformer2D_UE5_5_Public_Plateformer2DGM_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
