//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (OFUIImageExtensions)
+ (id)animatedImageAtURL:(id)arg1;
+ (id)decompressedDeviceImageWithCGImage:(struct CGImage *)arg1 opaque:(_Bool)arg2 scale:(double)arg3 orientation:(long long)arg4;
+ (id)imageWithColor:(id)arg1 andSize:(struct CGSize)arg2 opaque:(_Bool)arg3 scale:(double)arg4;
+ (long long)UIImageOrientationForExifOrientation:(long long)arg1;
- (id)applyBlurWithRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3 maskImage:(id)arg4;
- (id)applyBlurTintEffectWithColor:(id)arg1;
- (id)applyBlurDarkEffect;
- (id)applyBlurExtraLightEffect;
- (id)applyBlurLightEffect;
- (id)decompressedDeviceImage:(_Bool)arg1;
- (id)imageWithTransparentInset:(double)arg1;
- (struct CGImage *)newBorderMask:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (id)imageWithAdjustedOrientation:(long long)arg1 andResolution:(unsigned long long)arg2;
- (id)imageWithSize:(struct CGSize)arg1 andCropRect:(struct CGRect)arg2;
- (id)centerImageWithSize:(struct CGSize)arg1;
- (id)imageWithSize:(struct CGSize)arg1 opaque:(_Bool)arg2 scale:(double)arg3;
@end

