//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PlatterKit/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSPointerArray, NSString, UIView;
@protocol PLViewControllerAnimatorDelegate;

@interface PLViewControllerAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIView *_sourceView;
    NSPointerArray *_observers;
    _Bool _didPrepareForTransition;
    _Bool _presenting;
    _Bool _includePresentingViewInAnimation;
    id <PLViewControllerAnimatorDelegate> _delegate;
}

+ (_Bool)drivesAnimation;
@property(nonatomic) _Bool includePresentingViewInAnimation; // @synthesize includePresentingViewInAnimation=_includePresentingViewInAnimation;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(nonatomic) __weak id <PLViewControllerAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)_animateTransitionWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performTransitionWithContext:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)performTransitionWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (id)_presentedExpandedPlatterForPresentedView:(id)arg1;
- (id)_previewInteractionPresentableViewControllerForPresentation:(_Bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentedViewControllerForPresentation:(_Bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentingViewControllerForPresentation:(_Bool)arg1 withTransitionContext:(id)arg2;
- (id)_sourceViewForPresentation:(_Bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentedViewForPresentation:(_Bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentingViewForPresentation:(_Bool)arg1 withTransitionContext:(id)arg2;
- (id)_animationFactoryForLongLookPresentation:(_Bool)arg1;
- (_Bool)_isTransitionAnimated;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initForPresentation:(_Bool)arg1 withSourceView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

