//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CIPortraitEffectLight
{
}

- (id)outputImage;
- (id)enrichImage:(id)arg1;
- (id)imageForLandmarks:(id)arg1;
- (id)processEyesIn:(id)arg1 withEyeBlur:(id)arg2 landmarks:(id)arg3;
- (id)processTeethIn:(id)arg1 withTeethMask:(id)arg2;
- (id)processSkinIn:(id)arg1 withSkinMask:(id)arg2;
- (id)teethMaskForLandmarks:(id)arg1;
- (id)skinMaskForLandmarks:(id)arg1;
- (id)processTeethIn:(id)arg1 withFaceMask:(id)arg2;
- (id)processSkinIn:(id)arg1 withFaceMask:(id)arg2;
- (id)faceMaskForLandmarks:(id)arg1;
- (id)eyeBlurForLandmarks:(id)arg1;
- (id)maskForLandmarks:(id)arg1 withFilterNamed:(id)arg2;
- (id)_textureAdd;
- (id)_textureDiff;
- (id)_mixKernel;
- (id)_eyeBrightenSoftlight;
- (id)_enrich;
- (id)_whitenTeeth;

@end

