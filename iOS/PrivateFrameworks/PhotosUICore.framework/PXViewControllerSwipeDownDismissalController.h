//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface PXViewControllerSwipeDownDismissalController : NSObject
{
    MISSING_TYPE *state;
    MISSING_TYPE *viewControllerTransitionObservation;
    MISSING_TYPE *viewControllerTransition;
    MISSING_TYPE *referenceView;
    MISSING_TYPE *initialGestureLocation;
    MISSING_TYPE *currentGestureLocation;
    MISSING_TYPE *currentGestureVelocity;
    MISSING_TYPE *initialItemPlacement;
    MISSING_TYPE *swipeDownTracker;
    MISSING_TYPE *releaseAnimationProgressAnimator;
    MISSING_TYPE *releaseAnimationDismissalProgressAnimator;
    MISSING_TYPE *centerOffsetAnimatorObservation;
    MISSING_TYPE *centerOffsetAnimator;
    MISSING_TYPE *targetCenter;
    MISSING_TYPE *sourceSize;
    MISSING_TYPE *targetSize;
    MISSING_TYPE *targetCancelled;
    MISSING_TYPE *updater;
}

- (void).cxx_destruct;
- (id)init;
- (void)updateCurrentPlacement;
- (void)updateSwipeDownTracker;
- (void)updateInitialPlacement;
- (void)setNeedsUpdate;

@end

