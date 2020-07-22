//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

@interface HKUIMetricColors : NSObject
{
    UIColor *_keyColor;
    UIColor *_gradientTopColor;
    UIColor *_gradientBottomColor;
    UIColor *_contextViewPrimaryTextColor;
    UIColor *_contextViewSecondaryTextColor;
    UIColor *_contextViewInfoButtonGlyphColor;
    UIColor *_contextViewInfoButtonBackgroundColor;
    UIColor *_contextViewChartGradientTopColor;
    UIColor *_contextViewChartGradientBottomColor;
}

+ (id)workoutContextViewColors;
+ (id)defaultContextViewColors;
+ (id)resultsColors;
+ (id)sleepColors;
+ (id)reproductiveHealthColors;
+ (id)mindfulnessColors;
+ (id)bodyMeasurementColors;
+ (id)activityColors;
+ (id)vitalsColors;
+ (id)metricColorsForHeartRateContext:(long long)arg1;
@property(retain, nonatomic) UIColor *contextViewChartGradientBottomColor; // @synthesize contextViewChartGradientBottomColor=_contextViewChartGradientBottomColor;
@property(retain, nonatomic) UIColor *contextViewChartGradientTopColor; // @synthesize contextViewChartGradientTopColor=_contextViewChartGradientTopColor;
@property(retain, nonatomic) UIColor *contextViewInfoButtonBackgroundColor; // @synthesize contextViewInfoButtonBackgroundColor=_contextViewInfoButtonBackgroundColor;
@property(retain, nonatomic) UIColor *contextViewInfoButtonGlyphColor; // @synthesize contextViewInfoButtonGlyphColor=_contextViewInfoButtonGlyphColor;
@property(retain, nonatomic) UIColor *contextViewSecondaryTextColor; // @synthesize contextViewSecondaryTextColor=_contextViewSecondaryTextColor;
@property(retain, nonatomic) UIColor *contextViewPrimaryTextColor; // @synthesize contextViewPrimaryTextColor=_contextViewPrimaryTextColor;
@property(retain, nonatomic) UIColor *gradientBottomColor; // @synthesize gradientBottomColor=_gradientBottomColor;
@property(retain, nonatomic) UIColor *gradientTopColor; // @synthesize gradientTopColor=_gradientTopColor;
@property(retain, nonatomic) UIColor *keyColor; // @synthesize keyColor=_keyColor;
- (void).cxx_destruct;

@end
