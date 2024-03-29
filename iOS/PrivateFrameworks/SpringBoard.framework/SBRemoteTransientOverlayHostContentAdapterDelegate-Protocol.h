//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSAnimationSettings, NSError, SBRemoteTransientOverlayHostContentAdapter, SBUIRemoteAlertButtonAction;

@protocol SBRemoteTransientOverlayHostContentAdapterDelegate <NSObject>
- (SBUIRemoteAlertButtonAction *)remoteTransientOverlayHostContentAdapter:(SBRemoteTransientOverlayHostContentAdapter *)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2;
- (long long)defaultPreferredInterfaceOrientationForPresentationForRemoteTransientOverlayHostContentAdapter:(SBRemoteTransientOverlayHostContentAdapter *)arg1;
- (void)remoteTransientOverlayHostContentAdapter:(SBRemoteTransientOverlayHostContentAdapter *)arg1 needsStatusBarAppearanceUpdateWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)remoteTransientOverlayHostContentAdapter:(SBRemoteTransientOverlayHostContentAdapter *)arg1 requestsWallpaperEffectUpdateWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)remoteTransientOverlayHostContentAdapter:(SBRemoteTransientOverlayHostContentAdapter *)arg1 didTerminateWithError:(NSError *)arg2;
- (void)remoteTransientOverlayHostContentAdapterRequestsInvalidation:(SBRemoteTransientOverlayHostContentAdapter *)arg1;
- (void)remoteTransientOverlayHostContentAdapterRequestsDeactivation:(SBRemoteTransientOverlayHostContentAdapter *)arg1;
- (void)remoteTransientOverlayHostContentAdapterDidChangeShouldDisableOrientationUpdates:(SBRemoteTransientOverlayHostContentAdapter *)arg1;
- (void)remoteTransientOverlayHostContentAdapterDidChangePreferredSceneDeactivationReasonValue:(SBRemoteTransientOverlayHostContentAdapter *)arg1;
- (void)remoteTransientOverlayHostContentAdapterDidChangeFeaturePolicy:(SBRemoteTransientOverlayHostContentAdapter *)arg1;
- (void)remoteTransientOverlayHostContentAdapterDidChangeGestureDismissalStyles:(SBRemoteTransientOverlayHostContentAdapter *)arg1;
- (void)remoteTransientOverlayHostContentAdapterDidChangeContentOpaque:(SBRemoteTransientOverlayHostContentAdapter *)arg1;
@end

