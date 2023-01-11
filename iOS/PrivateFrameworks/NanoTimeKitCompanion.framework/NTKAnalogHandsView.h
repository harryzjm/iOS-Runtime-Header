//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>

@class CALayer, CLKDevice, NSCalendar, NSDate, NSNumber, NSString, NSTimeZone, NSTimer, NTKColoringImageView, NTKHandView, UIColor;

@interface NTKAnalogHandsView : UIView <NTKTimeView>
{
    NTKColoringImageView *_colorTransitionSecondHandLowerView;
    NTKColoringImageView *_colorTransitionSecondHandUpperView;
    NTKColoringImageView *_colorTransitionSecondHandSmallCircleView;
    NTKColoringImageView *_colorTransitionSecondHandLargeCircleView;
    _Bool _animatingToNewDate;
    NSNumber *_displayLinkToken;
    NSTimer *_animationUpdateTimer;
    double _timeOffset;
    CALayer *_minuteHandTransitionBodyLayer;
    CALayer *_minuteHandTransitionStemLayer;
    CALayer *_minuteHandTransitionPegLayer;
    CALayer *_hourHandTransitionBodyLayer;
    CALayer *_hourHandTransitionStemLayer;
    UIView *_hourShadowView;
    UIView *_minuteShadowView;
    UIView *_secondShadowView;
    _Bool _shadowCompositingEnabled;
    _Bool _useDirectionalShadows;
    UIView *_directionalShadowContainerView;
    _Bool _timeScrubbing;
    _Bool _frozen;
    _Bool _showDebugClientSideHands;
    _Bool _shouldRestoreSecondHandAfterScrubbing;
    CLKDevice *_device;
    NTKHandView *_hourHandView;
    NTKHandView *_minuteHandView;
    NTKHandView *_secondHandView;
    NSDate *_overrideDate;
    NSCalendar *_calendar;
    long long _dataMode;
    UIColor *_inlayColor;
    NTKHandView *_hourHandView_clientSide;
    NTKHandView *_minuteHandView_clientSide;
    NTKHandView *_secondHandView_clientSide;
    NSTimeZone *_timeZone;
}

+ (long long)preferredCountOfInstancesToCache;
+ (double)minuteHandAngleForDate:(id)arg1;
+ (double)hourHandAngleForDate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) _Bool shouldRestoreSecondHandAfterScrubbing; // @synthesize shouldRestoreSecondHandAfterScrubbing=_shouldRestoreSecondHandAfterScrubbing;
@property(nonatomic) _Bool showDebugClientSideHands; // @synthesize showDebugClientSideHands=_showDebugClientSideHands;
@property(readonly, nonatomic) NTKHandView *secondHandView_clientSide; // @synthesize secondHandView_clientSide=_secondHandView_clientSide;
@property(readonly, nonatomic) NTKHandView *minuteHandView_clientSide; // @synthesize minuteHandView_clientSide=_minuteHandView_clientSide;
@property(readonly, nonatomic) NTKHandView *hourHandView_clientSide; // @synthesize hourHandView_clientSide=_hourHandView_clientSide;
@property(retain, nonatomic) UIColor *inlayColor; // @synthesize inlayColor=_inlayColor;
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen=_frozen;
@property(nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
@property(readonly, nonatomic) _Bool timeScrubbing; // @synthesize timeScrubbing=_timeScrubbing;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, nonatomic) NSDate *overrideDate; // @synthesize overrideDate=_overrideDate;
@property(retain, nonatomic) NTKHandView *secondHandView; // @synthesize secondHandView=_secondHandView;
@property(retain, nonatomic) NTKHandView *minuteHandView; // @synthesize minuteHandView=_minuteHandView;
@property(retain, nonatomic) NTKHandView *hourHandView; // @synthesize hourHandView=_hourHandView;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
- (void)_accessibilityInvalidateElements;
- (void)_repointDebugHandsToCurrentTime;
- (void)_handleDisplayLink;
- (_Bool)_dontRepointDebugHands;
- (double)_minuteHandDotDiameter;
@property(readonly, nonatomic) UIView *minuteHandDot;
@property(readonly, nonatomic) UIView *secondHandDot;
- (void)_deregisterFromDisplayLinkManager;
- (void)_enumerateSecondHandViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)displayTime;
- (void)_significantTimeChanged;
- (void)setUseDirectionalShadows:(_Bool)arg1;
- (void)_addHourMinuteHandsTransitionLayers;
- (void)_removeHourMinuteHandsTransitionLayers;
- (void)_removeColorTransitionViews;
- (void)applySecondHandColor:(id)arg1;
- (void)applySecondHandTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (void)applyHourMinuteHandsTransitionFraction:(double)arg1 fromStrokeColor:(id)arg2 fromFillColor:(id)arg3 toStrokeColor:(id)arg4 toFillColor:(id)arg5;
- (void)applyHourMinuteHandsStrokeColor:(id)arg1 fillColor:(id)arg2;
- (void)endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)scrubToDate:(id)arg1 animated:(_Bool)arg2;
- (void)startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_canRunTimeAnimation;
- (void)_stopTimeAnimation;
- (void)_startNewTimeAnimation;
- (double)_timeAnimationFramesPerSecondForDevice:(id)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (_Bool)useDirectionalShadows;
- (_Bool)shadowCompositingEnabled;
- (id)createSecondHandView;
- (id)createMinuteHandView;
- (id)createHourHandView;
- (id)secondHandConfiguration;
- (id)minuteHandConfiguration;
- (id)hourHandConfiguration;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_enumerateShadowViews:(CDUnknownBlockType)arg1;
- (void)_enumerateHandViews:(CDUnknownBlockType)arg1;
- (void)layoutShadowViews;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initForDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
