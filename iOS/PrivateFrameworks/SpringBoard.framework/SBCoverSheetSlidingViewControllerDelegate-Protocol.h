//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBCoverSheetSlidingViewController;

@protocol SBCoverSheetSlidingViewControllerDelegate <NSObject>
- (void)coverSheetSlidingViewControllerReachabilityAnimationDidEnd:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerReachabilityAnimationWillBegin:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 isTransitioning:(_Bool)arg2;
- (_Bool)coverSheetSlidingViewControllerShouldAllowDismissal:(SBCoverSheetSlidingViewController *)arg1;
- (_Bool)coverSheetSlidingViewControllerContentShouldAutoRotateWhenNotVisible:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerCleanupInterstitialTransition:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 dismissGestureChangedWithProgress:(double)arg2;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 animationTickedWithProgress:(double)arg2 velocity:(double)arg3 coverSheetFrame:(struct CGRect)arg4 gestureActive:(_Bool)arg5 forPresentationValue:(_Bool)arg6;
- (_Bool)hasContentUnderCoverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 animateForGestureActive:(_Bool)arg2 withProgress:(double)arg3 beginBlock:(void (^)(void))arg4 endBlock:(void (^)(void))arg5;
- (void)coverSheetSlidingViewControllerDidPassRubberBandThreshold:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerCleanupRubberBandedPresentationTransition:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerPrepareForRubberBandedPresentationTransition:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 committingToEndPresented:(_Bool)arg2;
- (void)coverSheetSlidingViewControllerUserPresentGestureBegan:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerCleanupDismissalTransition:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 prepareForDismissalTransitionForReversingTransition:(_Bool)arg2 forUserGesture:(_Bool)arg3;
- (void)coverSheetSlidingViewControllerCleanupPresentationTransition:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 prepareForPresentationTransitionForUserGesture:(_Bool)arg2;
@end

