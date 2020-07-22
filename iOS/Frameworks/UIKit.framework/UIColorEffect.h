//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface UIColorEffect
{
    NSString *_filterType;
    NSDictionary *_identityValues;
    NSDictionary *_requestedValues;
}

+ (id)colorEffectLuminanceMap:(id)arg1 blendingAmount:(double)arg2;
+ (id)colorEffectMonochromeTint:(id)arg1 blendingAmount:(double)arg2 brightnessAdjustment:(double)arg3;
+ (id)colorEffectInvert;
+ (id)colorEffectContrast:(double)arg1;
+ (id)colorEffectBrightness:(double)arg1;
+ (id)colorEffectSaturate:(double)arg1;
+ (id)colorEffectSubtract:(id)arg1;
+ (id)colorEffectAdd:(id)arg1;
+ (id)colorEffectMultiply:(id)arg1;
+ (id)colorEffectColor:(id)arg1;
+ (id)_colorEffectCAMatrix:(struct CAColorMatrix)arg1;
+ (id)colorEffectMatrix:(CDStruct_10115da1)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (id)_filterEntry;
- (long long)_expectedUsage;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

