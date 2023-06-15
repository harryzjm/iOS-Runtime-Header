//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSCH3DPhongLikeLightingModel
{
}

- (id)representativeMaterialLightenedByPercentage:(id)arg1;
- (id)diffuseTextureTiling;
- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4 percentage:(id)arg5;
- (id)p_lightenDiffuseMaterial:(id)arg1 percentage:(id)arg2;
- (tvec4_ac57c72d)p_lightenedColorForColor:(void *)arg1 percentage:(id)arg2;
- (id)phongMaterials;
- (id)init;
- (void)saveToPhongMaterialPackageArchive:(void *)arg1 environmentPackageArchive:(void *)arg2 archiver:(id)arg3;
- (id)initWithPhongMaterialPackageArchive:(const void *)arg1 lightingModelArchive:(const void *)arg2 unarchiver:(id)arg3;

@end

