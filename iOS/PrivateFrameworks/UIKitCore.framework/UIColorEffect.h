//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface UIColorEffect
{
    NSString *_filterType;
    NSDictionary *_configurationValues;
    NSDictionary *_identityValues;
    NSDictionary *_requestedValues;
    _Bool _disableInPlaceFiltering;
}

+ (_Bool)supportsSecureCoding;
+ (id)colorEffectAverageColor;
+ (id)colorEffectCurvesRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;
+ (id)colorEffectLuminanceCurveMap:(id)arg1 blendingAmount:(double)arg2;
+ (id)colorEffectLuminanceMap:(id)arg1 blendingAmount:(double)arg2;
+ (id)colorEffectMonochromeTint:(id)arg1 blendingAmount:(double)arg2 brightnessAdjustment:(double)arg3;
+ (id)colorEffectInvert;
+ (id)colorEffectContrast:(double)arg1;
+ (id)colorEffectBrightness:(double)arg1;
+ (id)colorEffectSaturate:(double)arg1;
+ (id)_colorEffectSourceOver:(CDStruct_d2b197d1)arg1;
+ (id)colorEffectSubtract:(id)arg1;
+ (id)colorEffectAdd:(id)arg1;
+ (id)colorEffectMultiply:(id)arg1;
+ (id)colorEffectColor:(id)arg1;
+ (id)_colorEffectCAMatrix:(struct CAColorMatrix)arg1;
+ (id)colorEffectMatrix:(CDStruct_10115da1)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (id)_filterEntry;
- (long long)_expectedUsage;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
