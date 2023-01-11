//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSSceneSettings.h>

#import <UIKitCore/UIApplicationSceneSettings-Protocol.h>
#import <UIKitCore/_UIDisplayEdgeInfoProviding-Protocol.h>

@class NSNumber, NSString;

@interface UIApplicationSceneSettings : FBSSceneSettings <_UIDisplayEdgeInfoProviding, UIApplicationSceneSettings>
{
}

- (Class)canvasClass;
- (_Bool)isUISubclass;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long artworkSubtype;
@property(readonly, nonatomic) long long deviceOrientation;
@property(readonly, nonatomic) _Bool statusBarDisabled;
@property(readonly, nonatomic) _Bool idleModeEnabled;
@property(readonly, nonatomic) _Bool canShowAlerts;
@property(readonly, nonatomic) _Bool deviceOrientationEventsEnabled;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeRight;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeLeft;
@property(readonly, nonatomic) double homeAffordanceOverlayAllowance;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortrait;
@property(readonly, nonatomic) double systemMinimumMargin;
@property(readonly, nonatomic) struct CGRect statusBarAvoidanceFrame;
@property(readonly, nonatomic) long long statusBarParts;
@property(readonly, nonatomic) struct UIEdgeInsets peripheryInsets;
@property(readonly, nonatomic) _Bool forcedStatusBarForegroundTransparent;
@property(readonly, nonatomic) NSNumber *forcedStatusBarStyle;
@property(readonly, nonatomic) long long userInterfaceStyle;
@property(readonly, nonatomic) unsigned long long deactivationReasons;
@property(readonly, nonatomic) int statusBarStyleOverridesToSuppress;
@property(readonly, nonatomic) _Bool underLock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

