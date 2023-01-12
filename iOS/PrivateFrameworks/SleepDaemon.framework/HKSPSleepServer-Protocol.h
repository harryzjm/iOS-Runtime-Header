//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepDaemon/HKSPServer-Protocol.h>

@class HKSPSleepEventRecord, HKSPSleepSchedule, HKSPSleepSettings, NSDate, NSDictionary, NSString;

@protocol HKSPSleepServer <HKSPServer>
- (void)deleteSleepFocusModeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)createSleepFocusModeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)clearWidgetOverrideWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)setWidgetOverrideState:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setLockScreenOverrideState:(long long)arg1 userInfo:(NSDictionary *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)publishWakeUpResultsNotificationWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)publishNotificationWithIdentifier:(NSString *)arg1 userInfo:(NSDictionary *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)sleepAlarmWasModifiedFromSource:(unsigned long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)sleepAlarmWasSnoozedUntilDate:(NSDate *)arg1 source:(unsigned long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)sleepAlarmWasDismissedOnDate:(NSDate *)arg1 source:(unsigned long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)dismissSleepLockWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)dismissGoodMorningWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)confirmAwakeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)getSleepWidgetStateWithCompletion:(void (^)(long long, NSError *))arg1;
- (void)getSleepScheduleStateWithCompletion:(void (^)(unsigned long long, NSError *))arg1;
- (void)setSleepMode:(long long)arg1 reason:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)getSleepModeWithCompletion:(void (^)(long long, NSError *))arg1;
- (void)saveSleepEventRecord:(HKSPSleepEventRecord *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getSleepEventRecordWithCompletion:(void (^)(HKSPSleepEventRecord *, NSError *))arg1;
- (void)saveSleepSettings:(HKSPSleepSettings *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getSleepSettingsWithCompletion:(void (^)(HKSPSleepSettings *, NSError *))arg1;
- (void)saveSleepSchedule:(HKSPSleepSchedule *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getSleepScheduleWithCompletion:(void (^)(HKSPSleepSchedule *, NSError *))arg1;
@end

