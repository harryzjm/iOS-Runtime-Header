//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTransitionPresentationContext, NSMutableArray, UIView, UIViewPropertyAnimator;
@protocol AVTransitionDelegate, UIViewControllerContextTransitioningEx;

@interface AVTransition : NSObject
{
    _Bool _wasInitiallyInteractive;
    AVTransitionPresentationContext *_presentationContext;
    long long _transitionType;
    id <AVTransitionDelegate> _delegate;
    id <UIViewControllerContextTransitioningEx> _transitionContext;
    UIViewPropertyAnimator *_transitionAnimator;
    UIViewPropertyAnimator *_clientAnimator;
    UIView *_touchBlockingView;
    UIView *_containerView;
    UIView *_backgroundView;
    NSMutableArray *_allAnimators;
}

@property(readonly, nonatomic) NSMutableArray *allAnimators; // @synthesize allAnimators=_allAnimators;
@property(nonatomic) _Bool wasInitiallyInteractive; // @synthesize wasInitiallyInteractive=_wasInitiallyInteractive;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UIView *touchBlockingView; // @synthesize touchBlockingView=_touchBlockingView;
@property(readonly, nonatomic) UIViewPropertyAnimator *clientAnimator; // @synthesize clientAnimator=_clientAnimator;
@property(readonly, nonatomic) UIViewPropertyAnimator *transitionAnimator; // @synthesize transitionAnimator=_transitionAnimator;
@property(readonly, nonatomic) __weak id <UIViewControllerContextTransitioningEx> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) __weak id <AVTransitionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
@property(retain, nonatomic) AVTransitionPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
- (void).cxx_destruct;
- (struct CGRect)_sourceViewFrameInContainerView;
- (struct CGAffineTransform)_rotationTransform:(double)arg1;
- (struct CGAffineTransform)_transformForDismissalAnimation;
- (struct CGAffineTransform)_rotationTransformFromPresentedViewToSourceView;
- (void)_updateCornerAppearanceAttributesOfView:(id)arg1 toSourceView:(id)arg2 similarity:(double)arg3;
- (struct CGAffineTransform)_transformForScale:(double)arg1 translation:(struct CGPoint)arg2 rotation:(double)arg3 locationInWindow:(struct CGPoint)arg4 sourceRectInContainerView:(struct CGRect)arg5;
- (struct CGRect)_finalFrameForPresentedView;
- (struct CGRect)_initialFrameForPresentedView;
- (struct CGAffineTransform)_finalTransformForPresentedView;
- (void)_startOrContinueAnimatorsReversed:(_Bool)arg1;
- (void)_dismissalTransitionDidEnd:(_Bool)arg1;
- (void)_presentationTransitionDidEnd:(_Bool)arg1;
- (void)completeTransition:(_Bool)arg1;
- (void)addRunAlongsideAnimationsIfNeeded;
- (void)_animateAlongsideInteractiveDismissalTransitionAnimationForCancelling;
- (void)_animateAlongsideInteractivePresentationTransitionAnimationForCancelling;
- (void)cancelInteractiveTransition;
- (void)_freezeDismissingViewForFinishing;
- (void)_animateFinishInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateWithPercentComplete:(double)arg1 translation:(struct CGPoint)arg2 rotation:(double)arg3 locationInWindow:(struct CGPoint)arg4;
- (void)pauseInteractiveTransition;
- (void)_dismissalTransitionWillBegin;
- (void)_presentationTransitionWillBegin;
- (void)startInteractiveTransition;
@property(readonly, nonatomic) __weak UIView *presentingView;
@property(readonly, nonatomic) __weak UIView *presentedView;
- (double)duration;
- (void)dealloc;
- (id)initWithTransitionContext:(id)arg1;

@end

