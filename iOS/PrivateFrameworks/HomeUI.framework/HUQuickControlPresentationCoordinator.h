//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/HUPresentationDelegate-Protocol.h>
#import <HomeUI/HUQuickControlViewControllerDelegate-Protocol.h>
#import <HomeUI/UIGestureRecognizerDelegate-Protocol.h>
#import <HomeUI/UITraitEnvironment-Protocol.h>

@class HUForceInterpolatedPressGestureRecognizer, HUPressedItemContext, HUQuickControlPresentationContext, HUQuickControlViewController, NSMapTable, NSMutableSet, NSString, UITraitCollection, UIView, UIViewController;
@protocol HUQuickControlPresentationCoordinatorDelegate, NACancelable;

@interface HUQuickControlPresentationCoordinator : NSObject <HUQuickControlViewControllerDelegate, HUPresentationDelegate, UIGestureRecognizerDelegate, UITraitEnvironment>
{
    HUQuickControlPresentationContext *_presentationContext;
    HUQuickControlViewController *_quickControlViewController;
    UIView *_targetView;
    id <HUQuickControlPresentationCoordinatorDelegate> _delegate;
    HUForceInterpolatedPressGestureRecognizer *_pressGestureRecognizer;
    NSMutableSet *_mutuallyExclusiveGestureRecognizers;
    id <NACancelable> _pressGestureActiveTimerCancellationToken;
    NSMapTable *_pressedItemContexts;
}

@property(readonly, nonatomic) NSMapTable *pressedItemContexts; // @synthesize pressedItemContexts=_pressedItemContexts;
@property(retain, nonatomic) id <NACancelable> pressGestureActiveTimerCancellationToken; // @synthesize pressGestureActiveTimerCancellationToken=_pressGestureActiveTimerCancellationToken;
@property(readonly, nonatomic) NSMutableSet *mutuallyExclusiveGestureRecognizers; // @synthesize mutuallyExclusiveGestureRecognizers=_mutuallyExclusiveGestureRecognizers;
@property(retain, nonatomic) HUForceInterpolatedPressGestureRecognizer *pressGestureRecognizer; // @synthesize pressGestureRecognizer=_pressGestureRecognizer;
@property(nonatomic) __weak id <HUQuickControlPresentationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) HUQuickControlViewController *quickControlViewController; // @synthesize quickControlViewController=_quickControlViewController;
@property(retain, nonatomic) HUQuickControlPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
- (void).cxx_destruct;
- (void)_logUserMetricsAfterPress;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;
- (void)quickControlViewControllerWillDismissDetailsViewController:(id)arg1 shouldDismissQuickControl:(_Bool)arg2;
- (id)detailsViewControllerForQuickControlViewController:(id)arg1 item:(id)arg2;
- (_Bool)hasDetailsActionForQuickControlViewController:(id)arg1 item:(id)arg2;
- (id)quickControlViewController:(id)arg1 applierForSourceViewTransitionWithAnimationSettings:(id)arg2 presenting:(_Bool)arg3;
- (double)quickControlViewController:(id)arg1 sourceViewInitialScaleForPresentation:(_Bool)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(readonly, nonatomic, getter=isQuickControlPresented) _Bool quickControlIsPresented;
- (void)_cleanupForQuickControlDismissal;
- (id)_dismissQuickControlViewControllerAnimated:(_Bool)arg1;
- (id)dismissQuickControlAnimated:(_Bool)arg1;
- (id)dismissQuickControlAnimated:(_Bool)arg1 wasDismissed:(_Bool *)arg2;
- (void)_validatePresentationContext:(id)arg1;
- (void)_beginControlPresentation;
- (void)presentQuickControlAnimatedWithContext:(id)arg1;
- (void)_endUsingTapticFeedbackIfAvailable;
- (void)_actuateTapticFeedbackIfAvailable;
- (void)_prepareForTapticFeedbackIfAvailable;
- (void)_pressedStateDidEndForItem:(id)arg1 clearPresentationContext:(_Bool)arg2;
- (void)_updateOverrideAttributesWithTransform:(struct CGAffineTransform)arg1 alpha:(double)arg2 forItem:(id)arg3;
- (void)_updateOverrideAttributesWithScale:(double)arg1 forItem:(id)arg2;
- (id)_createPressedContextForItem:(id)arg1 userInitiated:(_Bool)arg2;
- (void)_configureInitialStateForPressedItemContext:(id)arg1 userInitiated:(_Bool)arg2;
- (void)_preparePressedItemContextForPresentationContext:(id)arg1 startApplier:(_Bool)arg2;
- (void)_pressGestureDidEnd:(_Bool)arg1;
- (void)_pressGestureDidBecomeActive;
- (void)_pressGestureDidBeginWithLocation:(struct CGPoint)arg1;
- (void)_handlePressGesture:(id)arg1;
- (void)_installGestureRecognizer;
- (id)_gestureInstallationView;
- (void)_handleMutuallyExclusiveGesture:(id)arg1;
- (void)playBounceForItem:(id)arg1;
- (void)removeMutuallyExclusiveGestureRecognizer:(id)arg1;
- (void)addMutuallyExclusiveGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) HUPressedItemContext *activePressedItemContext;
@property(readonly, nonatomic) UIViewController *presentingViewController;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (id)initWithTargetView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

