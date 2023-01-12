//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriUI/UNNotificationSettingsCenterDelegate-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, UNNotificationSettingsCenter;
@protocol OS_dispatch_queue;

@interface SiriUICachedUserNotificationsSettings : NSObject <UNNotificationSettingsCenterDelegate>
{
    NSMapTable *_appObservers;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_announceEnabledPerApp;
    UNNotificationSettingsCenter *_notificationsSettingsCenter;
    long long _announceCarPlaySetting;
}

- (void).cxx_destruct;
- (void)_notifyAllObserversWithAppBundleIdThatPreferencesDidChange:(id)arg1;
- (void)_notifyAllObserversThatPreferencesDidChange;
- (_Bool)_currentlyObservingForAppBundleId:(id)arg1;
- (_Bool)_announceNotificationsEnabledForAppBundleId:(id)arg1 fromSettingsCenter:(id)arg2;
- (void)_updateNotificationSettingsChangeForAppBundleId:(id)arg1 fromSettingsCenter:(id)arg2 notifyObservers:(_Bool)arg3;
- (void)_updateNotificationSystemSettingsChangeFromSettingsCenter:(id)arg1 notifyObservers:(_Bool)arg2;
- (_Bool)_announceNotificationsEnabledForAppBundleId:(id)arg1;
- (void)_removeObserver:(id)arg1 forAppBundleId:(id)arg2;
- (void)_addObserver:(id)arg1 forAppBundleId:(id)arg2;
- (void)userNotificationSettingsCenter:(id)arg1 didUpdateNotificationSourceIdentifiers:(id)arg2;
- (void)userNotificationSettingsCenter:(id)arg1 didUpdateNotificationSystemSettings:(id)arg2;
@property(readonly, nonatomic) long long announceCarPlaySetting;
- (_Bool)announceNotificationsEnabledForAppBundleId:(id)arg1;
- (void)removeObserver:(id)arg1 forAppBundleId:(id)arg2;
- (void)addObserver:(id)arg1 forAppBundleId:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
