//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PUImportOneUpTransitionItem, PUPhotoPinchGestureRecognizer, PXPinchTracker, PXSwipeDownTracker, UIPanGestureRecognizer, UIViewPropertyAnimator;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface PUImportOneUpModalTransition : NSObject
{
    UIViewPropertyAnimator *_transitionAnimator;
    PUPhotoPinchGestureRecognizer *_pinchGestureRecognizer;
    PXPinchTracker *_pinchTracker;
    UIPanGestureRecognizer *_panGestureRecognizer;
    PXSwipeDownTracker *_swipeDownTracker;
    long long _activeGesture;
    long long _operation;
    UIViewPropertyAnimator *_floatingItemsAnimator;
    id <UIViewControllerContextTransitioning> _context;
    NSArray *_floatingItems;
    PUImportOneUpTransitionItem *_manipulatedFloatingItem;
    double _startingAnimationProgress;
}

+ (struct CGSize)scaledSizeForTargetSize:(struct CGSize)arg1 aspectFillingIntoSize:(struct CGSize)arg2;
+ (id)transitioningObjectInViewController:(id)arg1;
+ (id)propertyAnimatorWithInitialVelocity:(struct CGVector)arg1 forOperation:(long long)arg2 inDirection:(long long)arg3;
+ (double)defaultAnimationDurationForOperation:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) double startingAnimationProgress; // @synthesize startingAnimationProgress=_startingAnimationProgress;
@property(retain, nonatomic) PUImportOneUpTransitionItem *manipulatedFloatingItem; // @synthesize manipulatedFloatingItem=_manipulatedFloatingItem;
@property(retain, nonatomic) NSArray *floatingItems; // @synthesize floatingItems=_floatingItems;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> context; // @synthesize context=_context;
@property(retain, nonatomic) UIViewPropertyAnimator *floatingItemsAnimator; // @synthesize floatingItemsAnimator=_floatingItemsAnimator;
@property(readonly, nonatomic) long long operation; // @synthesize operation=_operation;
@property(nonatomic) long long activeGesture; // @synthesize activeGesture=_activeGesture;
@property(readonly, nonatomic) PXSwipeDownTracker *swipeDownTracker; // @synthesize swipeDownTracker=_swipeDownTracker;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) PXPinchTracker *pinchTracker; // @synthesize pinchTracker=_pinchTracker;
@property(readonly, nonatomic) PUPhotoPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(retain, nonatomic) UIViewPropertyAnimator *transitionAnimator; // @synthesize transitionAnimator=_transitionAnimator;
- (_Bool)continuousGestureRecognizerIsActive:(id)arg1;
- (void)pauseAnimation;
- (long long)animatingPositionForSwipeDownTracker:(id)arg1;
- (long long)animatingPositionForPinchTracker:(id)arg1;
- (void)endInteraction;
- (struct CGVector)unitVelocityForDisplayVelocity:(struct PXDisplayVelocity)arg1;
- (double)currentProgressForFloatingItem:(id)arg1 atSize:(struct CGSize)arg2 inDirection:(long long)arg3;
- (void)handleTapHoldGesture:(id)arg1;
- (void)updateTransitionWithPanGestureRecognizer:(id)arg1;
- (void)updateTransitionWithPinchGestureRecognizer:(id)arg1;
- (void)configureFloatingItemForInteractiveTracking;
- (void)animateToPosition:(long long)arg1;
- (void)prepareFloatingItemsForAnimation;
- (void)handleTransitionComplete:(long long)arg1;
- (void)startTransition;
- (id)initWithOperation:(long long)arg1 transitionContext:(id)arg2 pinchGestureRecognizer:(id)arg3 panGestureRecognizer:(id)arg4 startsInteractive:(_Bool)arg5;

@end

