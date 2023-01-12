//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPSleepNotificationPublisher-Protocol.h>
#import <SleepDaemon/HDSPSource-Protocol.h>

@class HDSPEnvironment, NSMutableDictionary, NSString;
@protocol HDSPSource;

__attribute__((visibility("hidden")))
@interface HDSPCFUserNotificationCenter : NSObject <HDSPSource, HDSPSleepNotificationPublisher, HDSPEnvironmentAware>
{
    struct os_unfair_lock_s _notificationLock;
    HDSPEnvironment *_environment;
    NSMutableDictionary *_notifications;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *notifications; // @synthesize notifications=_notifications;
@property(readonly, nonatomic) struct os_unfair_lock_s notificationLock; // @synthesize notificationLock=_notificationLock;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (void)tearDownNotifications;
- (void)tearDownNotificationForEventIdentifier:(id)arg1;
- (void)handleResponse:(unsigned long long)arg1 forUserNotification:(id)arg2;
- (void)_publishNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 bypassDND:(_Bool)arg6 actionHandler:(CDUnknownBlockType)arg7;
- (id)_wakeDetectionAlertBodyForAlarmEnabled:(_Bool)arg1 sleepModeOn:(_Bool)arg2;
- (id)_wakeDetectionAlertTitleForAlarmEnabled:(_Bool)arg1 sleepModeOn:(_Bool)arg2;
- (void)_publishWakeDetectionNotificationForUserInfo:(id)arg1;
- (void)publishNotificationForEvent:(id)arg1 userInfo:(id)arg2;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)initWithEnvironment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool dontNotify;
@property(readonly, nonatomic) _Bool dontSync;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <HDSPSource> targetSource;

@end
