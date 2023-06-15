//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString, SBTransientOverlayViewController;

@protocol SBTransientOverlayViewControllerDelegate <NSObject>
- (void)transientOverlayViewControllerNeedsWindowHitTestingUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerDidEndRotation:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerWillBeginRotation:(SBTransientOverlayViewController *)arg1 toInterfaceOrientation:(long long)arg2;
- (void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerDidUpdatePresentationPrefersStatusBarHidden:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(SBTransientOverlayViewController *)arg1;
- (void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(SBTransientOverlayViewController *)arg1;
- (_Bool)isKeyboardVisibleForSpringBoardForTransientOverlayViewController:(SBTransientOverlayViewController *)arg1;
- (_Bool)defaultShouldAutorotateForTransientOverlayViewController:(SBTransientOverlayViewController *)arg1;
- (long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(SBTransientOverlayViewController *)arg1;
- (unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(SBTransientOverlayViewController *)arg1;

@optional
- (void)transientOverlayViewController:(SBTransientOverlayViewController *)arg1 requestZStackParticipantPreferencesUpdateWithReason:(NSString *)arg2;
- (_Bool)transientOverlayViewControllerIsForegroundActive:(SBTransientOverlayViewController *)arg1;
@end

