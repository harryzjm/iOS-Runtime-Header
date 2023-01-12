//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthMenstrualCyclesDaemon/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol HDMenstrualCyclesPluginServerInterface <NSObject>
- (void)remote_triggerAnalysisForDebugReason:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_savePeriodEndedOnDayIndex:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_savePeriodStartedOnDayIndex:(long long)arg1 endedOnDayIndex:(long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_savePeriodStartedOnDayIndex:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_savePeriodNotYetEndedWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_savePeriodNotYetStartedWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_saveLastMenstrualPeriodWithDayIndexRange:(CDStruct_912cb5d2)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_confirmAndSaveDeviationWithMenstrualFlowByDayIndex:(NSDictionary *)arg1 intermenstrualBleedingByDayIndex:(NSDictionary *)arg2 addedCycleFactors:(NSArray *)arg3 initialAnalysisWindow:(CDStruct_912cb5d2)arg4 completion:(void (^)(NSArray *, NSError *))arg5;
- (void)remote_saveMenstrualFlowByDayIndex:(NSDictionary *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_saveMenstrualFlow:(long long)arg1 dayIndex:(long long)arg2 updateAdjacentDays:(_Bool)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)remote_saveDaySummaries:(NSArray *)arg1 canOverrideCreationDate:(_Bool)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_fetchScheduledNotificationsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

