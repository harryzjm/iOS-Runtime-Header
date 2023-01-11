//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <MediaControls/UIGestureRecognizerDelegate-Protocol.h>

@class AVTimeFormatter, CADisplayLink, MPCPlayerResponse, NSArray, NSLayoutConstraint, NSString, UIImageView, UILabel, UILayoutGuide, UIView;

@interface MediaControlsTimeControl : UIControl <UIGestureRecognizerDelegate>
{
    NSArray *_defaultConstraints;
    NSArray *_trackingConstraints;
    NSArray *_initialConstraints;
    NSLayoutConstraint *_knobViewXConstraint;
    CADisplayLink *_displayLink;
    AVTimeFormatter *_elapsedTimeFormatter;
    AVTimeFormatter *_remainingTimeFormatter;
    double _lastRecordedTime;
    double _currentTimeInTrack;
    NSString *_elapsedTime;
    NSString *_remainingTime;
    _Bool _debugPreviousDisplayLinkPaused;
    _Bool _transitioning;
    _Bool _empty;
    _Bool _timeControlOnScreen;
    _Bool _currentlyTracking;
    long long _style;
    MPCPlayerResponse *_response;
    UIView *_elapsedTrack;
    UIView *_remainingTrack;
    UIView *_knobView;
    UILabel *_elapsedTimeLabel;
    UILabel *_remainingTimeLabel;
    UILabel *_liveLabel;
    UIImageView *_liveBackground;
    UILayoutGuide *_trackLayoutGuide;
    double _sliderValue;
    CDStruct_fce57115 _durationSnapshot;
}

@property(nonatomic, getter=isCurrentlyTracking) _Bool currentlyTracking; // @synthesize currentlyTracking=_currentlyTracking;
@property(nonatomic) double sliderValue; // @synthesize sliderValue=_sliderValue;
@property(retain, nonatomic) UILayoutGuide *trackLayoutGuide; // @synthesize trackLayoutGuide=_trackLayoutGuide;
@property(retain, nonatomic) UIImageView *liveBackground; // @synthesize liveBackground=_liveBackground;
@property(retain, nonatomic) UILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) UILabel *remainingTimeLabel; // @synthesize remainingTimeLabel=_remainingTimeLabel;
@property(retain, nonatomic) UILabel *elapsedTimeLabel; // @synthesize elapsedTimeLabel=_elapsedTimeLabel;
@property(retain, nonatomic) UIView *knobView; // @synthesize knobView=_knobView;
@property(retain, nonatomic) UIView *remainingTrack; // @synthesize remainingTrack=_remainingTrack;
@property(retain, nonatomic) UIView *elapsedTrack; // @synthesize elapsedTrack=_elapsedTrack;
@property(nonatomic, getter=isTimeControlOnScreen) _Bool timeControlOnScreen; // @synthesize timeControlOnScreen=_timeControlOnScreen;
@property(nonatomic) CDStruct_fce57115 durationSnapshot; // @synthesize durationSnapshot=_durationSnapshot;
@property(retain, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)invalidateDisplayLinkIfNeeded;
- (void)createDisplayLinkIfNeeded;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_updateDisplayLinkPause;
- (void)_updateTimeControl;
- (void)_displayLinkTick:(id)arg1;
- (void)_updateStyle;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)updateLabelAvoidance;
- (void)_updateLabels:(double)arg1 withRemainingDuration:(double)arg2;
- (void)_updateLabels:(CDStruct_fce57115)arg1 withTargetTimestamp:(double)arg2;
- (void)_updateSliderPosition;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)viewDidMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

