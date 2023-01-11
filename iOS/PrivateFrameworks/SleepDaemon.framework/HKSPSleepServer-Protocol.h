//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepDaemon/HKSPServer-Protocol.h>

@class HKSPSleepEventRecord, HKSPSleepSchedule, HKSPSleepSettings, NSDate, NSDictionary, NSString;

@protocol HKSPSleepServer <HKSPServer>
- (void)setLockScreenOverrideState:(long long)arg1 userInfo:(NSDictionary *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)publishWakeUpResultsNotificationWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)publishNotificationWithIdentifier:(NSString *)arg1 userInfo:(NSDictionary *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)sleepAlarmWasModifiedWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)sleepAlarmWasSnoozedUntilDate:(NSDate *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)sleepAlarmWasDismissedOnDate:(NSDate *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)dismissGoodMorningWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)confirmAwakeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)skipWindDownWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)skipBedtimeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)delayBedtimeForTimeInterval:(double)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)getSleepScheduleStateWithCompletion:(void (^)(unsigned long long, NSError *))arg1;
- (void)setSleepMode:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)getSleepModeWithCompletion:(void (^)(long long, NSError *))arg1;
- (void)saveSleepEventRecord:(HKSPSleepEventRecord *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getSleepEventRecordWithCompletion:(void (^)(HKSPSleepEventRecord *, NSError *))arg1;
- (void)saveSleepSettings:(HKSPSleepSettings *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getSleepSettingsWithCompletion:(void (^)(HKSPSleepSettings *, NSError *))arg1;
- (void)saveSleepSchedule:(HKSPSleepSchedule *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getSleepScheduleWithCompletion:(void (^)(HKSPSleepSchedule *, NSError *))arg1;
@end
