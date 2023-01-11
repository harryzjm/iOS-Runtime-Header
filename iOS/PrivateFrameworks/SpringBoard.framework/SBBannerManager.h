//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BNBannerSourceListenerDelegate-Protocol.h>
#import <SpringBoard/BNPosting-Protocol.h>
#import <SpringBoard/BNPostingPrivate-Protocol.h>
#import <SpringBoard/BNPresentingDelegate-Protocol.h>
#import <SpringBoard/SBAssistantObserver-Protocol.h>
#import <SpringBoard/SBButtonEventsHandler-Protocol.h>

@class BNBannerController, BNBannerSourceListener, BNContentViewController, NSHashTable, NSMapTable, NSMutableArray, NSMutableSet, NSString, SBBannerAuthority, UIPanGestureRecognizer, UIWindow;
@protocol BNLayoutManaging, BSInvalidatable;

@interface SBBannerManager : NSObject <BNPostingPrivate, BNPresentingDelegate, BNBannerSourceListenerDelegate, SBAssistantObserver, BNPosting, SBButtonEventsHandler>
{
    SBBannerAuthority *_bannerAuthority;
    BNBannerController *_bannerController;
    BNContentViewController *_contentViewController;
    BNBannerSourceListener *_bannerSourceListener;
    NSMutableArray *_windowLevelAssertions;
    UIPanGestureRecognizer *_panGesture;
    _Bool _installedAsSystemGesture;
    NSMutableArray *_gesturePriorityAssertions;
    NSMapTable *_presentablesToGesturePriorityAssertions;
    id <BSInvalidatable> _presenterVisibilityGestureRecognizerPriorityAssertion;
    NSHashTable *_suppressionAssertions;
    NSMutableSet *_clientSuppressionAssertions;
    id <BSInvalidatable> _systemStatusBarAssertion;
    id <BSInvalidatable> _appsStatusBarAssertion;
    NSMutableSet *_statusBarAssertionReasons;
    UIWindow *_bannerWindow;
}

+ (id)_defaultAuthorizedBundleIDs;
- (void).cxx_destruct;
- (void)_revealStatusIfNecessaryForPresentable:(id)arg1;
- (void)_hideStatusIfNecessaryForPresentable:(id)arg1;
- (id)_statusBarAssertionReasonForPresentable:(id)arg1;
- (_Bool)_shouldHideStatusBarForPresentable:(id)arg1;
- (_Bool)_isPresentableHUD:(id)arg1;
- (id)_bannerSuspensionReasonForSuppressionAssertionReason:(id)arg1;
- (void)_acquirePresenterVisibilityGestureRecognizerPriorityAssertion;
- (void)_invalidatePresenterVisibilityGestureRecognizerPriorityAssertion;
- (id)_acquireGestureRecognizerPriorityAssertionWithPriority:(long long)arg1 reason:(id)arg2;
- (void)_updateGesturePriority;
- (void)_updateWindowLevel;
- (id)_layoutDescriptionWithBounds:(struct CGRect)arg1;
- (id)_newBannerWindow;
- (void)assistantWillAppear:(id)arg1;
- (_Bool)handleVolumeDownButtonPress;
- (_Bool)handleVolumeUpButtonPress;
- (_Bool)handleLockButtonPress;
- (_Bool)handleHomeButtonLongPress;
- (_Bool)handleHomeButtonDoublePress;
- (_Bool)handleHomeButtonPress;
- (_Bool)handleHeadsetButtonPress:(_Bool)arg1;
- (_Bool)_handleButtonEventWithTest:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;
- (id)userInterfaceStyleTransitionAnimationSettingsForPresentable:(id)arg1 forTransitionToStyle:(long long)arg2;
- (_Bool)bannerSourceListener:(id)arg1 recommendsSuspending:(_Bool)arg2 forReason:(id)arg3 revokingCurrent:(_Bool)arg4 error:(id *)arg5;
- (_Bool)bannerSourceListener:(id)arg1 requestsRevokingAllPresentablesForRequesterWithIdentifier:(id)arg2 reason:(id)arg3 userInfo:(id)arg4 error:(id *)arg5;
- (_Bool)bannerSourceListener:(id)arg1 requestsRevokingPresentableWithRequestIdentifier:(id)arg2 requesterIdentifier:(id)arg3 animated:(_Bool)arg4 reason:(id)arg5 userInfo:(id)arg6 error:(id *)arg7;
- (_Bool)bannerSourceListener:(id)arg1 requestsPostingPresentable:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 error:(id *)arg5;
- (void)bannerSourceListener:(id)arg1 presentationSize:(out struct CGSize *)arg2 containerSize:(out struct CGSize *)arg3 error:(id *)arg4;
- (id)bannerSourceListener:(id)arg1 layoutDescriptionWithError:(id *)arg2;
- (void)presenterRelinquishesVisibility:(id)arg1;
- (void)presenterRequestsVisibility:(id)arg1;
- (struct CGPoint)presenter:(id)arg1 gestureRecognizer:(id)arg2 translationInView:(id)arg3;
- (struct CGPoint)presenter:(id)arg1 gestureRecognizer:(id)arg2 velocityInView:(id)arg3;
- (struct CGPoint)presenter:(id)arg1 gestureRecognizer:(id)arg2 locationForTouch:(id)arg3 inView:(id)arg4;
- (struct CGPoint)presenter:(id)arg1 gestureRecognizer:(id)arg2 locationForEvent:(id)arg3 inView:(id)arg4;
- (id)panGestureRecognizerForPresenter:(id)arg1;
- (void)presenter:(id)arg1 willDismissPresentable:(id)arg2 withTransitionCoordinator:(id)arg3 userInfo:(id)arg4;
- (void)presenter:(id)arg1 willPresentPresentable:(id)arg2 withTransitionCoordinator:(id)arg3 userInfo:(id)arg4;
- (void)presenter:(id)arg1 willTransitionToSize:(struct CGSize)arg2 withTransitionCoordinator:(id)arg3;
- (_Bool)revokePresentableWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2 reason:(id)arg3 options:(unsigned long long)arg4 animated:(_Bool)arg5 userInfo:(id)arg6 error:(out id *)arg7;
- (_Bool)revokeAllPresentablesWithRequesterIdentifier:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 error:(out id *)arg5;
- (_Bool)revokePresentableWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2 reason:(id)arg3 options:(unsigned long long)arg4 userInfo:(id)arg5 error:(out id *)arg6;
- (_Bool)postPresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3 error:(out id *)arg4;
- (void)dismissAllBannersAnimated:(_Bool)arg1 reason:(id)arg2;
- (void)setSuspended:(_Bool)arg1 forReason:(id)arg2;
- (id)acquireBannerSuppressionAssertionForReason:(id)arg1;
- (id)acquireGestureRecognizerPriorityAssertionForPresentable:(id)arg1 priority:(long long)arg2 reason:(id)arg3;
- (id)acquireWindowLevelAssertionWithPriority:(long long)arg1 windowLevel:(double)arg2 reason:(id)arg3;
- (void)registerAuthority:(id)arg1 forRequesterIdentifier:(id)arg2;
@property(readonly, nonatomic, getter=isPresentingBanner) _Bool presentingBanner;
@property(readonly, nonatomic) id <BNLayoutManaging> layoutManager;
@property(readonly, nonatomic) UIWindow *bannerWindow; // @synthesize bannerWindow=_bannerWindow;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
