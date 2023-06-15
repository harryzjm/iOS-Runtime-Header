//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class BSCornerRadiusConfiguration, NSNumber, NSSet, NSString;
@protocol BSInterfaceOrientationMapResolving><BSXPCSecureCoding;

@protocol UIApplicationSceneSettings <NSObject>
@property(readonly, nonatomic) _Bool isCapturingContentForAdditionalRenderingDestination;
@property(readonly, nonatomic) _Bool inLiveResize;
@property(readonly, nonatomic) _Bool _debugValidationOrientationMaskEnabled;
@property(readonly, nonatomic) NSSet *targetOfEventDeferringEnvironments;
@property(readonly, nonatomic) double angleFromHostReferenceUprightDirection;
@property(readonly, nonatomic) unsigned long long hostReferenceAngleMode;
@property(readonly, nonatomic) _Bool enhancedWindowingEnabled;
@property(readonly, nonatomic) long long screenReferenceDisplayModeStatus;
@property(readonly, nonatomic) _Bool screenBoundsIgnoresSceneOrientation;
@property(readonly, nonatomic) id <BSInterfaceOrientationMapResolving><BSXPCSecureCoding> interfaceOrientationMapResolver;
@property(readonly, nonatomic) long long interfaceOrientationMode;
@property(readonly, nonatomic) long long pointerLockStatus;
@property(readonly, nonatomic) long long accessibilityContrast;
@property(readonly, nonatomic) unsigned long long scenePresenterRenderIdentifierForSnapshotting;
@property(readonly, nonatomic) unsigned int hostContextIdentifierForSnapshotting;
@property(readonly, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property(readonly, nonatomic) unsigned long long artworkSubtype;
@property(readonly, nonatomic) long long deviceOrientation;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeRight;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeLeft;
@property(readonly, nonatomic) double homeAffordanceOverlayAllowance;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortrait;
@property(readonly, nonatomic) double systemMinimumMargin;
@property(readonly, nonatomic) double statusBarHeight;
@property(readonly, nonatomic) struct CGRect statusBarAvoidanceFrame;
@property(readonly, nonatomic) long long statusBarParts;
@property(readonly, nonatomic) struct UIEdgeInsets peripheryInsets;
@property(readonly, nonatomic) _Bool statusBarDisabled;
@property(readonly, nonatomic) _Bool idleModeEnabled;
@property(readonly, nonatomic) _Bool canShowAlerts;
@property(readonly, nonatomic) _Bool deviceOrientationEventsEnabled;
@property(readonly, nonatomic) _Bool forcedStatusBarForegroundTransparent;
@property(readonly, nonatomic) NSNumber *forcedStatusBarStyle;
@property(readonly, nonatomic) long long userInterfaceStyle;
@property(readonly, nonatomic) unsigned long long deactivationReasons;
@property(readonly, nonatomic) unsigned long long statusBarStyleOverridesToSuppress;
@property(readonly, nonatomic) _Bool underLock;
@property(readonly, nonatomic) NSString *persistenceIdentifier;
- (double)defaultStatusBarHeightForOrientation:(long long)arg1;
@end

