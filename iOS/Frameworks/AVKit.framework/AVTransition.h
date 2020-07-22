//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerViewController, UIView, UIViewController, UIViewPropertyAnimator;
@protocol UIViewControllerContextTransitioning;

@interface AVTransition : NSObject
{
    _Bool _wasInitiallyInteractive;
    id <UIViewControllerContextTransitioning> _transitionContext;
    AVPlayerViewController *_playerViewController;
    UIViewPropertyAnimator *_currentAnimator;
    double _interactiveTransitionPercentComplete;
}

+ (id)transitionWithTransitionContext:(id)arg1 playerViewController:(id)arg2;
@property(nonatomic) _Bool wasInitiallyInteractive; // @synthesize wasInitiallyInteractive=_wasInitiallyInteractive;
@property(nonatomic) double interactiveTransitionPercentComplete; // @synthesize interactiveTransitionPercentComplete=_interactiveTransitionPercentComplete;
@property(nonatomic) __weak UIViewPropertyAnimator *currentAnimator; // @synthesize currentAnimator=_currentAnimator;
@property(readonly, nonatomic) __weak AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(readonly, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
- (void).cxx_destruct;
- (void)animateAlongsideInteractiveTransitionAnimationForCancelling;
- (void)animateAlongsideInteractiveTransitionAnimationForFinishing;
- (void)animateAlongsideNonInteractiveTransitionAnimation;
- (void)updateWithPercentComplete:(double)arg1 translation:(struct CGPoint)arg2 rotation:(double)arg3 locationInWindow:(struct CGPoint)arg4;
- (void)transitionWillBegin;
- (struct CGAffineTransform)transformForScale:(double)arg1 translation:(struct CGPoint)arg2 rotation:(double)arg3 locationInWindow:(struct CGPoint)arg4 sourceRectInContainerView:(struct CGRect)arg5;
- (void)animateNonInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (id)animatorWithDurationFactor:(double)arg1;
- (void)completeTransition:(_Bool)arg1;
- (void)pauseInteractiveTransition;
@property(readonly, nonatomic) UIViewController *fromViewController;
@property(readonly, nonatomic) UIViewController *toViewController;
@property(readonly, nonatomic) UIView *containerView;
@property(readonly, nonatomic) UIView *fromView;
@property(readonly, nonatomic) UIView *toView;
@property(readonly, nonatomic) double duration;
- (void)dealloc;
- (id)initWithTransitionContext:(id)arg1 playerViewController:(id)arg2;

@end
