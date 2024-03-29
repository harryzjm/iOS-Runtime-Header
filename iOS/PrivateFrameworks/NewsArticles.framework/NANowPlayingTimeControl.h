//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class MISSING_TYPE, UIColor;

__attribute__((visibility("hidden")))
@interface NANowPlayingTimeControl : UIControl
{
    MISSING_TYPE *slider;
    MISSING_TYPE *elapsedTimeLabel;
    MISSING_TYPE *remainingTimeLabel;
    MISSING_TYPE *scrubbingDidChangeHandler;
    MISSING_TYPE *timeDidChangeHandler;
    MISSING_TYPE *elapsedTrackColor;
    MISSING_TYPE *remainingTrackColor;
    MISSING_TYPE *trackingTrackColor;
    MISSING_TYPE *timeLabelTextColor;
    MISSING_TYPE *timeLabelTrackingTextColor;
    MISSING_TYPE *_tracking;
    MISSING_TYPE *durationSnapshot;
    MISSING_TYPE *backgroundObserver;
    MISSING_TYPE *foregroundObserver;
    MISSING_TYPE *displayLink;
    MISSING_TYPE *isBackgrounded;
    MISSING_TYPE *timeFormatter;
    MISSING_TYPE *$__lazy_storage_$_elapsedTimeLabelBaselineConstraint;
    MISSING_TYPE *$__lazy_storage_$_remainingTimeLabelBaselineConstraint;
}

- (void).cxx_destruct;
- (void)accessibilityUpdateWithElapsedDuration:(double)arg1;
@property(nonatomic, readonly) double accessibilityElapsedDuration;
@property(nonatomic, readonly) double accessibilityTotalDuration;
- (void)updateFonts;
- (void)setCurrentTime:(double)arg1 duration:(double)arg2 rate:(double)arg3 isWaiting:(_Bool)arg4 animated:(_Bool)arg5;
- (void)displayLinkFired:(id)arg1;
@property(nonatomic) _Bool enabled;
- (_Bool)isEnabled;
- (void)tintColorDidChange;
- (void)didMoveToWindow;
@property(nonatomic) double alpha;
@property(nonatomic) _Bool hidden;
- (_Bool)isHidden;
@property(nonatomic, retain) UIColor *timeLabelTrackingTextColor; // @synthesize timeLabelTrackingTextColor;
@property(nonatomic, retain) UIColor *timeLabelTextColor; // @synthesize timeLabelTextColor;
@property(nonatomic, retain) UIColor *trackingTrackColor; // @synthesize trackingTrackColor;
@property(nonatomic, retain) UIColor *remainingTrackColor; // @synthesize remainingTrackColor;
@property(nonatomic, retain) UIColor *elapsedTrackColor; // @synthesize elapsedTrackColor;
@property(nonatomic, copy) CDUnknownBlockType timeDidChangeHandler;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

