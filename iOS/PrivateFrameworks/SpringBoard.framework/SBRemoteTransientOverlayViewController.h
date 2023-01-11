//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBIdleTimerCoordinating-Protocol.h>
#import <SpringBoard/SBRemoteTransientOverlayHostViewControllerDelegate-Protocol.h>

@class BSAnimationSettings, NSString, SBIdleTimerCoordinatorHelper, SBRemoteTransientOverlayHostViewController, SBTransientOverlayWallpaperEffectView, UIView;
@protocol SBRemoteTransientOverlayViewControllerDelegate;

@interface SBRemoteTransientOverlayViewController <SBRemoteTransientOverlayHostViewControllerDelegate, SBIdleTimerCoordinating>
{
    SBRemoteTransientOverlayHostViewController *_contentViewController;
    UIView *_contentViewWrapperView;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    _Bool _isPresented;
    long long _lastWallpaperStyle;
    BSAnimationSettings *_pendingAnimationSettings;
    long long _wallpaperEffectAnimations;
    SBTransientOverlayWallpaperEffectView *_wallpaperEffectView;
    long long _preferredDismissalAnimationStyle;
    id <SBRemoteTransientOverlayViewControllerDelegate> _delegate;
    long long _wallpaperVariant;
}

+ (void)requestViewControllerForAlertDefinition:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long wallpaperVariant; // @synthesize wallpaperVariant=_wallpaperVariant;
@property(nonatomic) __weak id <SBRemoteTransientOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long preferredDismissalAnimationStyle; // @synthesize preferredDismissalAnimationStyle=_preferredDismissalAnimationStyle;
- (_Bool)_needsWallpaperEffectView;
- (void)_configureWallpaperEffectViewWithAnimationSettings:(id)arg1;
- (void)_setMediaOverridePID:(int)arg1;
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didInvalidate;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool shouldInvalidateWhenDeactivated;
- (id)representedDisplayItem;
@property(readonly, nonatomic, getter=isSwitcherEligible) _Bool switcherEligible;
@property(readonly, nonatomic) _Bool isScreenshotMarkup;
@property(readonly, nonatomic, getter=isActivatingForSiri) _Bool activatingForSiri;
- (_Bool)shouldPendAlertItems;
- (_Bool)shouldDisableSiri;
- (_Bool)shouldDisableInteractiveScreenshotGesture;
- (_Bool)shouldDisableOrientationUpdates;
- (_Bool)shouldDisableReachability;
- (_Bool)shouldDisableControlCenter;
- (_Bool)shouldDisableBanners;
- (void)setIdleTimerCoordinator:(id)arg1;
- (void)setContainerOrientation:(long long)arg1;
- (int)preferredStatusBarStyleOverridesToCancel;
- (void)restoreInputViewsAnimated:(_Bool)arg1;
- (void)preserveInputViewsAnimated:(_Bool)arg1;
- (_Bool)prefersStatusBarActivityItemVisible;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (long long)preferredUnlockedGestureDismissalStyle;
- (id)preferredSceneDeactivationReasonValue;
- (long long)preferredLockedGestureDismissalStyle;
- (id)preferredDisplayLayoutElementIdentifier;
- (int)pictureInPictureProcessIdentifier;
- (_Bool)isContentOpaque;
- (_Bool)hasServiceProcessIdentifier:(int)arg1;
- (void)handleGestureDismissal;
- (_Bool)handleVolumeDownButtonPress;
- (_Bool)handleVolumeUpButtonPress;
- (void)handlePictureInPictureDidBegin;
- (_Bool)handleLockButtonPress;
- (_Bool)handleHomeButtonLongPress;
- (_Bool)handleHomeButtonDoublePress;
- (_Bool)handleHomeButtonPress;
- (_Bool)handleHeadsetButtonPress:(_Bool)arg1;
- (_Bool)handleDoubleHeightStatusBarTap;
- (void)endIgnoringContentOverlayInsetUpdates;
- (void)beginIgnoringContentOverlayInsetUpdates;
- (void)endIgnoringAppearanceUpdates;
- (void)beginIgnoringAppearanceUpdates;
- (_Bool)allowsStackingOverlayContentAbove;
- (long long)defaultPreferredInterfaceOrientationForPresentationForRemoteTransientOverlayHostViewController:(id)arg1;
- (id)remoteTransientOverlayHostViewController:(id)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2;
- (void)remoteTransientOverlayHostViewController:(id)arg1 requestsWallpaperEffectUpdateWithAnimationSettings:(id)arg2;
- (void)remoteTransientOverlayHostViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)remoteTransientOverlayHostViewControllerRequestsInvalidation:(id)arg1;
- (void)remoteTransientOverlayHostViewControllerRequestsDeactivation:(id)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeShouldDisableOrientationUpdates:(id)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangePreferredSceneDeactivationReasonValue:(id)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeFeaturePolicy:(id)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeGestureDismissalStyles:(id)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeContentOpaque:(id)arg1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (id)succinctDescriptionBuilder;
- (_Bool)_canShowWhileLocked;
- (int)_preferredStatusBarVisibility;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)serviceEventDeferringToken;
- (int)serviceProcessIdentifier;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)resignFirstResponder;
- (long long)preferredWhitePointAdaptivityStyle;
- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)dealloc;
- (id)_initWithContentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
