//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface KNAnimationUtils : NSObject
{
}

+ (void)hitPreviewButtonIfExists;
+ (void)getRecommendedPosition:(struct CGPoint *)arg1 andTransform:(struct CATransform3D *)arg2 toFitLayer:(id)arg3 inContainerWithBounds:(struct CGRect)arg4 contentsScale:(double)arg5;
+ (struct CGRect)recommendedLayerBoundsForNaturalPlaybackSize:(struct CGSize)arg1 inContainerWithBounds:(struct CGRect)arg2 contentsScale:(double)arg3 isExternalDisplay:(_Bool)arg4;
+ (id)CAAccelerationFromSFXActionAcceleration:(unsigned long long)arg1;
+ (_Bool)isMotionBlurCapableWithAnimationContext:(id)arg1;
+ (_Bool)isMotionBlurBlacklistedWithCapabilities:(id)arg1;
+ (_Bool)isCustomEffectTimingCurveEditingEnabled;
+ (_Bool)shouldForceDisplayPreferredMode;
+ (_Bool)isSOATSImageExportTestEnabled;
+ (_Bool)isAnimationTestingEnabled;
+ (_Bool)isRandomNumberSeedInspectionEnabled;
+ (_Bool)isDisplayLoggingEnabled;
+ (_Bool)isResponsivenessLoggingEnabled;
+ (_Bool)isTexturePrecachingDisabled;
+ (_Bool)isGLStateValidationEnabled;
+ (_Bool)isFPSGraphEnabled;
+ (_Bool)isFPSLoggingTimerDisabled;
+ (_Bool)isFPSLoggingEnabled;
+ (unsigned long long)randomBasicDirection;
+ (unsigned long long)randomDirection;
+ (unsigned long long)directionFromCustomAttributesDeliveryOption:(unsigned long long)arg1;
+ (id)customAttributesArrayWithJiggleIntensityOptions:(id)arg1;
+ (id)customAttributesArrayWithDeliveryOptions:(id)arg1;
+ (id)customAttributesArrayWithTextDeliveryOptions:(id)arg1;
+ (id)timingsArrayWithDirection:(unsigned long long)arg1 duration:(double)arg2 count:(unsigned long long)arg3 chunkDuration:(double)arg4 randomness:(double)arg5 randomGenerator:(id)arg6;
+ (void)initialize;
+ (void)updateDefaultsValues;

@end

