//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface PISmartToneAdjustmentController
{
    struct {
        double exposure;
        double contrast;
        double brightness;
        double shadows;
        double highlights;
        double black;
        double rawHighlights;
        double localLight;
    } _smartSettings;
}

+ (id)sourceSelectionKey;
+ (id)overcaptureStatisticsKey;
+ (id)statisticsKey;
+ (id)inputRawHighlightsKey;
+ (id)inputLocalLightKey;
+ (id)inputBlackKey;
+ (id)inputHighlightsKey;
+ (id)inputShadowsKey;
+ (id)inputBrightnessKey;
+ (id)inputContrastKey;
+ (id)inputExposureKey;
+ (id)offsetShadowsKey;
+ (id)offsetLocalLightKey;
+ (id)offsetHighlightsKey;
+ (id)offsetExposureKey;
+ (id)offsetContrastKey;
+ (id)offsetBrightnessKey;
+ (id)offsetBlackKey;
+ (id)attributeLightMapHeightKey;
+ (id)attributeLightMapWidthKey;
+ (id)attributeLightMapKey;
+ (id)attributeLocalLightKey;
+ (id)attributeBlackPointKey;
+ (id)attributeShadowsKey;
+ (id)attributeHighlightsKey;
+ (id)attributeExposureKey;
+ (id)attributeContrastKey;
+ (id)attributeBrightnessKey;
+ (id)inputLightKey;
@property(nonatomic) double offsetShadows;
@property(nonatomic) double offsetLocalLight;
@property(nonatomic) double offsetHighlights;
@property(nonatomic) double offsetExposure;
@property(nonatomic) double offsetContrast;
@property(nonatomic) double offsetBrightness;
@property(nonatomic) double offsetBlack;
@property(copy, nonatomic) NSDictionary *overcaptureStatistics;
@property(nonatomic) long long sourceSelection;
@property(copy, nonatomic) NSDictionary *statistics;
- (double)inputRawHighlights;
- (void)setInputRawHighlights:(double)arg1;
- (double)inputLocalLight;
- (void)setInputLocalLight:(double)arg1;
- (double)inputBlack;
- (void)setInputBlack:(double)arg1;
- (double)inputHighlights;
- (void)setInputHighlights:(double)arg1;
- (double)inputShadows;
- (void)setInputShadows:(double)arg1;
- (double)inputContrast;
- (void)setInputContrast:(double)arg1;
- (double)inputBrightness;
- (void)setInputBrightness:(double)arg1;
- (double)inputExposure;
- (void)setInputExposure:(double)arg1;
@property(nonatomic) double inputLight;
- (id)computedSettings;
- (void)_updateSettingsWithInputLight:(double)arg1;
- (id)initWithAdjustment:(id)arg1;

@end
