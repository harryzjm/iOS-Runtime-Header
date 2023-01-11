//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPSleepNotificationPublisher-Protocol.h>

@class HDSPEnvironment, NSString, UNUserNotificationCenter;

__attribute__((visibility("hidden")))
@interface HDSPUserNotificationCenter : NSObject <HDSPSleepNotificationPublisher, HDSPEnvironmentAware>
{
    HDSPEnvironment *_environment;
    UNUserNotificationCenter *_notificationCenter;
}

+ (id)_stringForEventDate:(id)arg1;
+ (id)_generateUniqueIdentifierForNotificationIdentifierPrefix:(id)arg1 eventDate:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
- (id)_weeklyCoachingContentWithCategory:(id)arg1 userInfo:(id)arg2;
- (id)_oneDayCoachingContentWithCategory:(id)arg1 userInfo:(id)arg2;
- (id)_baseWakeUpResultsContentWithCategoryID:(id)arg1 body:(id)arg2 userInfo:(id)arg3;
- (id)_wakeUpResultsContentWithUserInfo:(id)arg1;
- (id)_wakeDetectionAlertBodyForAlarmEnabled:(_Bool)arg1 sleepModeOn:(_Bool)arg2;
- (id)_wakeDetectionAlertTitleForAlarmEnabled:(_Bool)arg1 sleepModeOn:(_Bool)arg2;
- (id)_wakeDetectionContentWithUserInfo:(id)arg1;
- (id)_chargingReminderBodyForAlarmEnabled:(_Bool)arg1 sleepTrackingEnabled:(_Bool)arg2;
- (id)_chargingReminderContentWithUserInfo:(id)arg1;
- (id)_localizedBedtimeOrWindDownReminderBodyWithKey:(id)arg1 embeddingTimeForEvent:(id)arg2;
- (id)_windDownReminderBodyContent;
- (id)_windDownReminderContent;
- (id)_bedtimeReminderContent;
- (id)_contentByAddingCommonUserInfoTo:(id)arg1;
- (id)_notificationContentForEventIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)_notificationIdentifierPrefixForEventIdentifier:(id)arg1;
- (id)_notificationRequestIdentifierForEvent:(id)arg1;
- (void)tearDownNotifications;
- (void)tearDownNotificationForEventIdentifier:(id)arg1;
- (void)_publishNotificationRequest:(id)arg1;
- (id)_notificationRequestForEvent:(id)arg1 userInfo:(id)arg2;
- (void)publishNotificationForEvent:(id)arg1 userInfo:(id)arg2;
- (void)environmentDidBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1 notificationCenter:(id)arg2;
- (id)initWithEnvironment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
