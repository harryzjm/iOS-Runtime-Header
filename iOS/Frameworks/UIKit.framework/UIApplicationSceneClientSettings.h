//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSSceneClientSettings.h>

#import <UIKit/UIApplicationSceneClientSettings-Protocol.h>

@class FBSDisplayMode, NSString;

@interface UIApplicationSceneClientSettings : FBSSceneClientSettings <UIApplicationSceneClientSettings>
{
}

- (_Bool)isUISubclass;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofOtherSetting:(unsigned long long)arg3;
- (id)keyDescriptionForOtherSetting:(unsigned long long)arg1;
@property(readonly, nonatomic) long long userInterfaceStyle;
@property(readonly, nonatomic) _Bool wantsExclusiveForeground;
@property(readonly, nonatomic) _Bool homeIndicatorAutoHidden;
@property(readonly, nonatomic) unsigned long long screenEdgesDeferringSystemGestures;
@property(readonly, nonatomic, getter=isReachabilitySupported) _Bool reachabilitySupported;
@property(readonly, nonatomic) FBSDisplayMode *requestedDisplayMode;
@property(readonly, nonatomic) long long overscanCompensation;
@property(readonly, nonatomic) long long whitePointAdaptivityStyle;
@property(readonly, nonatomic) _Bool idleModeVisualEffectsEnabled;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, nonatomic) struct UIEdgeInsets primaryWindowOverlayInsets;
@property(readonly, nonatomic) long long notificationCenterRevealMode;
@property(readonly, nonatomic) long long controlCenterRevealMode;
@property(readonly, nonatomic) double controlCenterAmbiguousActivationMargin;
@property(readonly, nonatomic) unsigned long long proximityDetectionModes;
@property(readonly, nonatomic) _Bool idleTimerDisabled;
@property(readonly, nonatomic) unsigned long long supportedInterfaceOrientations;
@property(readonly, nonatomic) long long interfaceOrientation;
@property(readonly, nonatomic) _Bool interfaceOrientationChangesDisabled;
@property(readonly, nonatomic) _Bool deviceOrientationEventsEnabled;
@property(readonly, nonatomic) long long compatibilityMode;
@property(readonly, nonatomic) double defaultPNGExpirationTime;
@property(readonly, copy, nonatomic) NSString *defaultPNGName;
@property(readonly, nonatomic) _Bool defaultStatusBarHidden;
@property(readonly, nonatomic) long long defaultStatusBarStyle;
@property(readonly, nonatomic) unsigned int statusBarContextID;
@property(readonly, nonatomic, getter=isStatusBarForegroundTransparent) _Bool statusBarForegroundTransparent;
@property(readonly, nonatomic) _Bool statusBarHidden;
@property(readonly, nonatomic) long long statusBarStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

