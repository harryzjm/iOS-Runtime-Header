//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface UNNotificationSettings : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _providesAppNotificationSettings;
    long long _authorizationStatus;
    long long _soundSetting;
    long long _badgeSetting;
    long long _alertSetting;
    long long _notificationCenterSetting;
    long long _lockScreenSetting;
    long long _carPlaySetting;
    long long _alertStyle;
    long long _showPreviewsSetting;
    long long _criticalAlertSetting;
    NSDictionary *_topicsSettings;
}

+ (_Bool)supportsSecureCoding;
+ (id)settingsWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 criticalAlertSetting:(long long)arg8 alertStyle:(long long)arg9 showPreviewsSetting:(long long)arg10 providesAppNotificationSettings:(_Bool)arg11 topicsSettings:(id)arg12;
+ (id)settingsWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 criticalAlertSetting:(long long)arg8 alertStyle:(long long)arg9 showPreviewsSetting:(long long)arg10 providesAppNotificationSettings:(_Bool)arg11;
+ (id)settingsWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 criticalAlertSetting:(long long)arg8 alertStyle:(long long)arg9 showPreviewsSetting:(long long)arg10;
+ (id)emptySettings;
@property(readonly, nonatomic) NSDictionary *topicsSettings; // @synthesize topicsSettings=_topicsSettings;
@property(readonly, nonatomic) _Bool providesAppNotificationSettings; // @synthesize providesAppNotificationSettings=_providesAppNotificationSettings;
@property(readonly, nonatomic) long long criticalAlertSetting; // @synthesize criticalAlertSetting=_criticalAlertSetting;
@property(readonly, nonatomic) long long showPreviewsSetting; // @synthesize showPreviewsSetting=_showPreviewsSetting;
@property(readonly, nonatomic) long long alertStyle; // @synthesize alertStyle=_alertStyle;
@property(readonly, nonatomic) long long carPlaySetting; // @synthesize carPlaySetting=_carPlaySetting;
@property(readonly, nonatomic) long long lockScreenSetting; // @synthesize lockScreenSetting=_lockScreenSetting;
@property(readonly, nonatomic) long long notificationCenterSetting; // @synthesize notificationCenterSetting=_notificationCenterSetting;
@property(readonly, nonatomic) long long alertSetting; // @synthesize alertSetting=_alertSetting;
@property(readonly, nonatomic) long long badgeSetting; // @synthesize badgeSetting=_badgeSetting;
@property(readonly, nonatomic) long long soundSetting; // @synthesize soundSetting=_soundSetting;
@property(readonly, nonatomic) long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)hasEnabledSettings;
- (id)initWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 criticalAlertSetting:(long long)arg8 alertStyle:(long long)arg9 showPreviewsSetting:(long long)arg10 providesAppNotificationSettings:(_Bool)arg11 topicsSettings:(id)arg12;

@end

