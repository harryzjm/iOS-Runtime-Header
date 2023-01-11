//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <PassKitUI/UIViewControllerInteractiveTransitioning-Protocol.h>

@class NSString, PKNavigationDashboardPassViewController, PKPGSVTransitionInterstitialView, PKPassGroupsViewController, PKPassthroughView, UIView, UIViewPropertyAnimator;
@protocol UIViewControllerContextTransitioning;

@interface PKNavigationDashboardAnimatedTransitioningHandler : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>
{
    PKPassGroupsViewController *_presentingVC;
    UIView *_presentingView;
    PKNavigationDashboardPassViewController *_presentedVC;
    UIView *_presentedView;
    PKPassthroughView *_navigationItemsView;
    id <UIViewControllerContextTransitioning> _transitionContext;
    double _animationStartTime;
    _Bool _boostedPresentation;
    _Bool _completed;
    UIViewPropertyAnimator *_alphaPropertyAnimator;
    _Bool _presenting;
    _Bool _dragged;
    double _duration;
    PKPGSVTransitionInterstitialView *_leadingInterstitialItemView;
    PKPGSVTransitionInterstitialView *_trailingInterstitialItemView;
}

@property(nonatomic, getter=wasDragged) _Bool dragged; // @synthesize dragged=_dragged;
@property(retain, nonatomic) PKPGSVTransitionInterstitialView *trailingInterstitialItemView; // @synthesize trailingInterstitialItemView=_trailingInterstitialItemView;
@property(retain, nonatomic) PKPGSVTransitionInterstitialView *leadingInterstitialItemView; // @synthesize leadingInterstitialItemView=_leadingInterstitialItemView;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void).cxx_destruct;
- (void)_clearNavigationItems;
- (void)_moveGroupView:(id)arg1 toView:(id)arg2 belowView:(id)arg3;
- (double)_contentOffsetAnimationDurationForCollectionView:(id)arg1;
- (void)_dismiss;
- (void)_completeCancelledPresentation;
- (void)_completePresentation;
- (void)_cancelPresentation;
- (void)_startPresentation;
- (void)completePresentationImmediately;
- (void)boostPresentation;
- (void)cancel;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;
- (void)startInteractiveTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)_updateWithTransitionContext:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
