//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSWatchMetricsEventTable;
@protocol OS_dispatch_queue;

@interface SSWatchMetricsEventsController : NSObject
{
    SSWatchMetricsEventTable *_table;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)_numberFormatter;
- (void).cxx_destruct;
- (void)markAsFailed:(id)arg1;
- (void)markAsCompleted:(id)arg1;
- (void)discardUnreportableEvents;
- (id)unreportedEventsSinceTimestamp:(long long)arg1;
- (_Bool)insertWatchMetricEvent:(id)arg1 error:(id *)arg2;
@property(readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property(readonly, nonatomic) SSWatchMetricsEventTable *table;

@end
