//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSCoding-Protocol.h>

@class NSMutableArray, UIResponder, UIView, UIWindow;

@interface UITransitionView <NSCoding>
{
    UIView *_fromView;
    UIView *_toView;
    NSMutableArray *_frozenSubviews;
    UIResponder *_firstResponderToRemember;
    id _delegate;
    UIWindow *_originalWindow;
    struct {
        unsigned int animationInProgress:1;
        unsigned int ignoresInteractionEvents:1;
        unsigned int shouldNotifyDidCompleteImmediately:1;
        unsigned int useViewControllerAppearanceCallbacks:1;
        unsigned int shouldRestoreFromViewAlpha:1;
        unsigned int shouldRestoreGroupOpacity:1;
        unsigned int shouldRasterize:1;
        unsigned int enableRotationAfterTransition:1;
        unsigned int removeFromView:1;
    } _transitionViewFlags;
    double _curlUpRevealedHeight;
    _Bool _ignoreDirectTouchEvents;
    long long _animationTimingCurve;
}

+ (double)defaultDurationForTransition:(int)arg1;
@property(nonatomic) _Bool ignoreDirectTouchEvents; // @synthesize ignoreDirectTouchEvents=_ignoreDirectTouchEvents;
@property(nonatomic) long long animationTimingCurve; // @synthesize animationTimingCurve=_animationTimingCurve;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_shouldDisableGroupOpacityOnAlphaTransitions;
- (void)_transitionDidStop:(id)arg1 finished:(id)arg2;
- (void)_startTransition:(int)arg1 withDuration:(double)arg2;
- (void)setIgnoresInteractionEvents:(_Bool)arg1;
- (_Bool)ignoresInteractionEvents;
- (_Bool)rasterizesOnTransition;
- (void)setRasterizesOnTransition:(_Bool)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (_Bool)_isTransitioningFromFromView:(id)arg1;
- (_Bool)isTransitioning;
- (id)toView;
- (id)fromView;
- (_Bool)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(_Bool)arg4;
- (_Bool)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)notifyDidCompleteTransition:(id)arg1;
- (_Bool)transition:(int)arg1 toView:(id)arg2;
- (void)_didCompleteTransition:(_Bool)arg1;
@property(nonatomic) _Bool shouldNotifyDidCompleteImmediately;
- (void)_didStartTransition;
- (double)durationForTransition:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)_curlUpRevealedHeight;

@end

