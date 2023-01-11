//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MaterialKit/CAAnimationDelegate-Protocol.h>

@class MTLumaDodgePillSettings, NSMutableArray, NSString, _MTLumaDodgePillLowQualityEffectView;
@protocol MTLumaDodgePillBackgroundLuminanceObserver;

@interface MTLumaDodgePillView <CAAnimationDelegate>
{
    long long _style;
    MTLumaDodgePillSettings *_settings;
    id <MTLumaDodgePillBackgroundLuminanceObserver> _backgroundLumninanceObserver;
    long long _backgroundLuminance;
    long long _backgroundLuminanceBias;
    long long _graphicsQuality;
    double _luma;
    _Bool _lumaIsValid;
    _MTLumaDodgePillLowQualityEffectView *_lowQualityEffectView;
    unsigned int _bounceAnimationsInFlight;
    NSMutableArray *_bounceAnimationKeys;
}

+ (_Bool)supportsBackgroundLuminanceObserving;
+ (Class)layerClass;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) long long backgroundLuminanceBias; // @synthesize backgroundLuminanceBias=_backgroundLuminanceBias;
@property(readonly, nonatomic) long long backgroundLuminance; // @synthesize backgroundLuminance=_backgroundLuminance;
@property(nonatomic) __weak id <MTLumaDodgePillBackgroundLuminanceObserver> backgroundLumninanceObserver; // @synthesize backgroundLumninanceObserver=_backgroundLumninanceObserver;
@property(nonatomic) long long style; // @synthesize style=_style;
- (struct CGSize)suggestedSizeForContentWidth:(double)arg1;
@property(readonly, nonatomic) double suggestedEdgeSpacing;
- (void)bounce;
- (void)resetBackgroundLuminanceHysteresis;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(readonly, copy) NSString *description;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)_shouldAnimatePropertyAdditivelyWithKey:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)layoutSubviews;
- (void)_updateStyle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 settings:(id)arg2 graphicsQuality:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 settings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
