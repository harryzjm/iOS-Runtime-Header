//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CLKDevice, CLKGaugeProvider, NSArray, NTKRichComplicationShapeView;

@interface NTKRichComplicationProgressView : UIView
{
    CLKDevice *_device;
    NTKRichComplicationShapeView *_backgroundView;
    NTKRichComplicationShapeView *_foregroundView;
    struct NSNumber *_updateToken;
    UIView *_ringView;
    _Bool _enabled;
    NSArray *_gradientColors;
    double _progress;
    long long _style;
    CLKGaugeProvider *_gaugeProvider;
}

@property(retain, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
- (void).cxx_destruct;
- (void)_createRingView;
- (void)_applyStyle;
- (void)_updateUIFromGaugeProvider;
- (void)animateToProgress:(float)arg1 duration:(double)arg2;
- (void)setGradientColors:(id)arg1 locations:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initForDevice:(id)arg1 backgroundShapeView:(id)arg2 foregroundShapeView:(id)arg3;

@end

