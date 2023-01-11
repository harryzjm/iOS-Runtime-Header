//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol CSAppHostConfiguring, CSApplicationInforming, CSAuthenticationManaging, CSCarPlayStatusProviding, CSDeviceOrientationProviding, CSHomeAffordanceControlling, CSLegibilityProviding, CSMediaControlling, CSModalHomeAffordanceControlling, CSNotificationPresenting, CSOverlayProviding, CSPowerStatusProviding, CSProximitySensorProviding, CSReachabilityControlling, CSResetRestoreStatusProviding, CSScreenStateProviding, CSStatusBarControlling, CSSystemPointerInteractionManaging, CSTelephonyStatusProviding, CSThermalStatusProviding, CSTouchEnvironmentStatusProviding, CSUnlockRequesting, CSUserSessionControlling, CSWallpaperLogging, CSWallpaperViewProviding, SBFActionProviding, SBFAuthenticationAssertionProviding, SBFAuthenticationStatusProvider, SBFDateProviding, SBFLockOutStatusProvider, SBFPasscodeFieldChangeObserver, SBFScreenWakeAnimationControlling, SBUIBiometricResource;

@protocol CSCoverSheetContextProviding <NSObject>
@property(readonly, nonatomic) id <CSDeviceOrientationProviding> deviceOrientationProvider;
@property(readonly, nonatomic) id <CSProximitySensorProviding> proximitySensorProvider;
@property(readonly, nonatomic) id <CSSystemPointerInteractionManaging> systemPointerInteractionManager;
@property(readonly, nonatomic) id <CSAppHostConfiguring> appHostConfiguring;
@property(readonly, nonatomic) id <CSOverlayProviding> homeScreenOverlayProvider;
@property(readonly, nonatomic) id <CSCarPlayStatusProviding> carPlayStatusProvider;
@property(readonly, nonatomic) id <CSReachabilityControlling> reachabilityController;
@property(readonly, nonatomic) id <CSUserSessionControlling> userSessionController;
@property(readonly, nonatomic) id <CSTouchEnvironmentStatusProviding> touchEnvironmentStatusProvider;
@property(readonly, nonatomic) id <CSNotificationPresenting> notificationPresenter;
@property(readonly, nonatomic) id <CSApplicationInforming> applicationInformer;
@property(readonly, nonatomic) id <SBFActionProviding> contentActionProvider;
@property(readonly, nonatomic) id <CSWallpaperLogging> wallpaperLogger;
@property(readonly, nonatomic) id <CSUnlockRequesting> unlockRequester;
@property(readonly, nonatomic) id <CSMediaControlling> mediaController;
@property(readonly, nonatomic) id <CSStatusBarControlling> statusBarController;
@property(readonly, nonatomic) id <CSModalHomeAffordanceControlling> modalHomeAffordanceController;
@property(readonly, nonatomic) id <CSHomeAffordanceControlling> homeAffordanceController;
@property(readonly, nonatomic) id <CSAuthenticationManaging> authenticationManager;
@property(readonly, nonatomic) id <CSTelephonyStatusProviding> telephonyStatusProvider;
@property(readonly, nonatomic) id <CSWallpaperViewProviding> wallpaperViewProvider;
@property(readonly, nonatomic) id <SBFScreenWakeAnimationControlling> screenWakeAnimationController;
@property(readonly, nonatomic) id <CSScreenStateProviding> screenStateProvider;
@property(readonly, copy, nonatomic) NSArray *dismissableOverlays;
@property(readonly, nonatomic) id <SBUIBiometricResource> biometricResource;
@property(readonly, nonatomic) id <CSThermalStatusProviding> thermalStatusProvider;
@property(readonly, nonatomic) id <CSResetRestoreStatusProviding> resetRestoreStatusProvider;
@property(readonly, copy, nonatomic) NSString *powerStatusChangeNotificationName;
@property(readonly, nonatomic) id <CSPowerStatusProviding> powerStatusProvider;
@property(readonly, nonatomic) id <CSLegibilityProviding> legibilityProvider;
@property(readonly, nonatomic) id <SBFDateProviding> dateProvider;
@property(readonly, nonatomic) id <SBFLockOutStatusProvider> lockOutStatusProvider;
@property(readonly, nonatomic) id <SBFPasscodeFieldChangeObserver> passcodeFieldChangeObserver;
@property(readonly, nonatomic) id <SBFAuthenticationStatusProvider> authenticationStatusProvider;
@property(readonly, nonatomic) id <SBFAuthenticationAssertionProviding> authenticationAssertionProvider;
@end
