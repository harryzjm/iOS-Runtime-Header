//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSUUID;

@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate
@property(readonly, nonatomic) NSUUID *deviceUUID;
- (NSArray *)deletedEventIDsSinceDate:(NSDate *)arg1 streamNames:(NSArray *)arg2 limit:(unsigned long long)arg3 endDate:(id *)arg4 error:(id *)arg5;
- (NSArray *)sortedEventsWithCreationDateBetweenDate:(NSDate *)arg1 andDate:(NSDate *)arg2 streamNames:(NSArray *)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id *)arg6;
@end

