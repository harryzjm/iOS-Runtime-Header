//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SSMetricsEventTable;

@interface SSMetricsEventController
{
    SSMetricsEventTable *_table;
}

- (void).cxx_destruct;
- (id)_collectUnreportedPIDsFromDatabase:(id)arg1 matchingReportURLString:(id)arg2 since:(long long)arg3 suppressUserInfo:(_Bool)arg4;
- (int)_maximumUnreportedToSelect;
- (id)unreportedEventURLsSince:(long long)arg1;
- (id)unreportedEventsForURL:(id)arg1 since:(long long)arg2 suppressDSID:(_Bool)arg3;
- (id)unreportedEventsForURL:(id)arg1 since:(long long)arg2 suppressUserInfo:(_Bool)arg3;
- (_Bool)markEventsAsReported:(id)arg1;
- (_Bool)insertEventSummaries:(id)arg1 error:(id *)arg2;
- (void)flushUnreportedEventsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)deleteReportedEvents;
- (_Bool)deleteEventsInsertedBefore:(long long)arg1;
- (long long)countUnreportedEventsBefore:(long long)arg1;
- (void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end
