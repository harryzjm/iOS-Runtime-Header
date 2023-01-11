//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface PISmartColorAdjustmentController
{
    struct {
        double p75;
        double p98;
        double autoValue;
        double g98;
    } _stats;
    CDStruct_7982ab34 _smartSettings;
}

+ (id)attributeCastKey;
+ (id)attributeVibrancyKey;
+ (id)attributeContrastKey;
+ (id)offsetCastKey;
+ (id)offsetContrastKey;
+ (id)offsetSaturationKey;
+ (id)statisticsKey;
+ (id)inputCastKey;
+ (id)inputContrastKey;
+ (id)inputSaturationKey;
+ (id)inputColorKey;
@property(copy, nonatomic) NSDictionary *statistics;
@property(nonatomic) double offsetSaturation;
@property(nonatomic) double offsetContrast;
@property(nonatomic) double offsetCast;
- (double)inputCast;
- (void)setInputCast:(double)arg1;
- (double)inputContrast;
- (void)setInputContrast:(double)arg1;
- (double)inputSaturation;
- (void)setInputSaturation:(double)arg1;
@property(nonatomic) double inputColor;
- (id)computedSettings;
- (void)_updateSettingsWithInputColor:(double)arg1;
- (id)initWithAdjustment:(id)arg1;

@end
