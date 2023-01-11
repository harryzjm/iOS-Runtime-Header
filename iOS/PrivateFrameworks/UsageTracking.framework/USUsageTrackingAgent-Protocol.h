//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDateInterval, NSSet, NSString;

@protocol USUsageTrackingAgent
- (void)fetchBudgetsWithIdentifier:(NSString *)arg1 clientIdentifier:(NSString *)arg2 replyHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)checkStatusOfBudgets:(NSArray *)arg1 clientIdentifiers:(NSArray *)arg2 replyHandler:(void (^)(NSArray *, NSArray *, NSArray *, NSArray *, NSError *))arg3;
- (void)checkStatusOfAllBudgetsWithReplyHandler:(void (^)(NSArray *, NSArray *, NSArray *, NSArray *, NSError *))arg1;
- (void)checkStatusOfBudgets:(NSArray *)arg1 clientIdentifier:(NSString *)arg2 replyHandler:(void (^)(NSArray *, NSArray *, NSArray *, NSArray *, NSError *))arg3;
- (void)stopMonitoringAllBudgetsWithReplyHandler:(void (^)(NSError *))arg1;
- (void)stopMonitoringBudgets:(NSArray *)arg1 clientIdentifier:(NSString *)arg2 replyHandler:(void (^)(NSError *))arg3;
- (void)startMonitoringBudgets:(NSArray *)arg1 darwinNotificationName:(NSString *)arg2 notificationTimes:(NSSet *)arg3 clientIdentifier:(NSString *)arg4 replyHandler:(void (^)(NSError *))arg5;
- (void)fetchReportsDuringInterval:(NSDateInterval *)arg1 partitionInterval:(double)arg2 forceImmediateSync:(_Bool)arg3 replyHandler:(void (^)(NSArray *, NSDictionary *, NSArray *, NSError *))arg4;
@end

