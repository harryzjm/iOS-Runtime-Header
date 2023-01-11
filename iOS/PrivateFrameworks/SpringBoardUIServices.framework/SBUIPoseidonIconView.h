//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoardUIServices/CAAnimationDelegate-Protocol.h>

@class CAGradientLayer, NSString, NSTimer, SBUILegibilityLabel, _UILegibilitySettings, _UILegibilityView;
@protocol SBUIPoseidonIconViewDelegate;

@interface SBUIPoseidonIconView : UIView <CAAnimationDelegate>
{
    _UILegibilityView *_coachingButton;
    SBUILegibilityLabel *_coachingLabel;
    SBUILegibilityLabel *_restToOpenLabel;
    UIView *_coachingLabelRotationView;
    UIView *_restToOpenLabelRotationView;
    NSTimer *_restToOpenIdleTimer;
    CAGradientLayer *_progressFillGradient;
    double _fullProgressFillDuration;
    double _startProgressFillTime;
    _Bool _isFilling;
    CAGradientLayer *_shimmerGradient;
    NSTimer *_idleUntilShimmerTimer;
    NSTimer *_reduceMotionShimmerTimer;
    id <SBUIPoseidonIconViewDelegate> _delegate;
    _UILegibilitySettings *_legibilitySettings;
    long long _state;
    struct CGAffineTransform _localTransform;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGAffineTransform localTransform; // @synthesize localTransform=_localTransform;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) __weak id <SBUIPoseidonIconViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_cancelRestToOpenIdleTimer;
- (void)_startRestToOpenIdleTimer;
- (void)_stopShimmer;
- (void)_startReduceMotionShimmer;
- (void)_startShimmer;
- (void)_cancelRestToOpenProgress;
- (void)_contentSizeCategoryDidChange;
- (double)_fontSize;
- (void)layoutSubviews;
- (void)resetRestToOpen;
- (void)fillRestToOpenWithDuration:(double)arg1;
- (void)setState:(long long)arg1 forIdleTimeout:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
