//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SBRemoteTransientOverlayDismissalRequest, SBRemoteTransientOverlayPresentationRequest, SBRemoteTransientOverlaySession, SBRemoteTransientOverlaySessionManager, SBSRemoteAlertActivationContext, SBTransientOverlayViewController, SBWindowScene;

@protocol SBRemoteTransientOverlaySessionManagerDelegate
- (void)remoteTransientOverlaySessionManager:(SBRemoteTransientOverlaySessionManager *)arg1 requestsHandlingForButtonEvents:(unsigned long long)arg2 forSession:(SBRemoteTransientOverlaySession *)arg3 viewController:(SBTransientOverlayViewController *)arg4;
- (_Bool)remoteTransientOverlaySessionManager:(SBRemoteTransientOverlaySessionManager *)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(NSString *)arg2 forSession:(SBRemoteTransientOverlaySession *)arg3;
- (_Bool)remoteTransientOverlaySessionManager:(SBRemoteTransientOverlaySessionManager *)arg1 performPresentationRequest:(SBRemoteTransientOverlayPresentationRequest *)arg2 forSession:(SBRemoteTransientOverlaySession *)arg3;
- (_Bool)remoteTransientOverlaySessionManager:(SBRemoteTransientOverlaySessionManager *)arg1 performDismissalRequest:(SBRemoteTransientOverlayDismissalRequest *)arg2 forSession:(SBRemoteTransientOverlaySession *)arg3;
- (_Bool)remoteTransientOverlaySessionManager:(SBRemoteTransientOverlaySessionManager *)arg1 shouldActivateOverlayWithContext:(SBSRemoteAlertActivationContext *)arg2 forSession:(SBRemoteTransientOverlaySession *)arg3;
- (long long)remoteTransientOverlaySessionManager:(SBRemoteTransientOverlaySessionManager *)arg1 activeWallpaperVariantForSession:(SBRemoteTransientOverlaySession *)arg2;
- (SBWindowScene *)remoteTransientOverlaySessionManager:(SBRemoteTransientOverlaySessionManager *)arg1 embeddedDisplayWindowSceneForRemoteTransientOverlaySession:(SBRemoteTransientOverlaySession *)arg2;
@end

