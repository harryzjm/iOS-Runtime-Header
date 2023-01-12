//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVTimeFormatter, CADisplayLink, CAGradientLayer, MRUSlider, MRUTimeControls, MRUVisualStylingProvider, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MRUNowPlayingTimeControlsView : UIView
{
    _Bool _onScreen;
    _Bool _dimmed;
    _Bool _leftAlignLive;
    _Bool _debugPreviousDisplayLinkPaused;
    MRUTimeControls *_timeControls;
    MRUVisualStylingProvider *_stylingProvider;
    long long _layout;
    MRUSlider *_slider;
    UILabel *_elapsedTimeLabel;
    UILabel *_remainingTimeLabel;
    UILabel *_liveLabel;
    UIView *_liveBackground;
    CAGradientLayer *_liveBackgroundMask;
    CADisplayLink *_displayLink;
    AVTimeFormatter *_elapsedTimeFormatter;
    AVTimeFormatter *_remainingTimeFormatter;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool debugPreviousDisplayLinkPaused; // @synthesize debugPreviousDisplayLinkPaused=_debugPreviousDisplayLinkPaused;
@property(retain, nonatomic) AVTimeFormatter *remainingTimeFormatter; // @synthesize remainingTimeFormatter=_remainingTimeFormatter;
@property(retain, nonatomic) AVTimeFormatter *elapsedTimeFormatter; // @synthesize elapsedTimeFormatter=_elapsedTimeFormatter;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) CAGradientLayer *liveBackgroundMask; // @synthesize liveBackgroundMask=_liveBackgroundMask;
@property(retain, nonatomic) UIView *liveBackground; // @synthesize liveBackground=_liveBackground;
@property(retain, nonatomic) UILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) UILabel *remainingTimeLabel; // @synthesize remainingTimeLabel=_remainingTimeLabel;
@property(retain, nonatomic) UILabel *elapsedTimeLabel; // @synthesize elapsedTimeLabel=_elapsedTimeLabel;
@property(retain, nonatomic) MRUSlider *slider; // @synthesize slider=_slider;
@property(nonatomic) _Bool leftAlignLive; // @synthesize leftAlignLive=_leftAlignLive;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic, getter=isOnScreen) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) MRUTimeControls *timeControls; // @synthesize timeControls=_timeControls;
- (void)updateVisibility;
- (void)updateContentSizeCategory;
- (void)updateBackgroundMask;
- (void)updateElapsedTimeWithElapsedTime:(double)arg1;
- (void)updateElapsedTimeForDate:(id)arg1;
- (void)updateElapsedTime;
- (void)updateElapsedTimeOnDisplayLinkTick:(id)arg1;
- (void)updateDisplayLinkPaused;
- (void)updateDisplayLink;
- (void)updateVisualStyling;
- (double)accessibilityElapsedDuration;
- (double)accessibilityTotalDuration;
- (void)visualStylingProviderDidChange:(id)arg1;
- (void)sliderTouchCancel:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)sliderTouchDown:(id)arg1;
- (void)setTimeControls:(id)arg1 forPresentationInterval:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

