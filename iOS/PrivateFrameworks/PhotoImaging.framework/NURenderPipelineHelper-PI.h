//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NURenderPipelineHelper.h>

@interface NURenderPipelineHelper (PI)
- (id)debugNodeByApplyingFilterWithName:(id)arg1 useHDRFilter:(_Bool)arg2 settingsAndInputs:(id)arg3;
- (id)nodeByApplyingFilterWithName:(id)arg1 useHDRFilter:(_Bool)arg2 settingsAndInputs:(id)arg3;
- (id)performRedeyeOnImage:(id)arg1 useHDRFilter:(_Bool)arg2 redEyeAdjustment:(id)arg3;
- (id)performApertureRedeyeOnImage:(id)arg1 useHDRFilter:(_Bool)arg2 redEyeAdjustment:(id)arg3;
- (id)performLongExposureFusionForComposition:(id)arg1 longExposureImage:(id)arg2 useHDRFilter:(_Bool)arg3 error:(out id *)arg4;
- (long long)versionForPortraitEffect:(id)arg1;
- (id)portraitVideoDebugDetectedObjects:(id)arg1 source:(id)arg2 cinematographyState:(id)arg3 monochrome:(_Bool)arg4 error:(out id *)arg5;
- (id)portraitVideo:(id)arg1 disparityInput:(id)arg2 disparityKeyframes:(id)arg3 apertureKeyframes:(id)arg4 debugMode:(long long)arg5 error:(out id *)arg6;
- (id)videoCrossfadeLoop:(id)arg1 crossfadeAdjustment:(id)arg2 error:(out id *)arg3;
- (id)videoReframe:(id)arg1 reframes:(id)arg2 error:(out id *)arg3;
- (id)remapPortraitV2Strength:(id)arg1 portraitEffectKind:(id)arg2;
@end

