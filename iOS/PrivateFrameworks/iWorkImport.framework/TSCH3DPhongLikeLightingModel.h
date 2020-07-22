//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCH3DPhongLikeLightingModel
{
}

- (id)representativeMaterialLightenedByPercentage:(id)arg1;
- (id)diffuseTextureTiling;
- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4 percentage:(id)arg5;
- (id)p_lightenDiffuseMaterial:(id)arg1 percentage:(id)arg2;
- (tvec4_ac57c72d)p_lightenedColorForColor:(const tvec4_ac57c72d *)arg1 percentage:(id)arg2;
- (id)phongMaterials;
- (id)init;
- (void)saveToPhongMaterialPackageArchive:(struct Chart3DPhongMaterialPackageArchive *)arg1 environmentPackageArchive:(struct Chart3DEnvironmentPackageArchive *)arg2 archiver:(id)arg3;
- (id)initWithPhongMaterialPackageArchive:(const struct Chart3DPhongMaterialPackageArchive *)arg1 lightingModelArchive:(const struct Chart3DLightingModelArchive *)arg2 unarchiver:(id)arg3;

@end

