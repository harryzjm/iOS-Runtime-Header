//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, _DKEventStatsTimerCounter;
@protocol OS_os_activity;

@interface _CDMutablePerfMetric
{
    struct XSPerfCollection *_stats;
    NSObject<OS_os_activity> *_os_activity;
    struct os_activity_scope_state_s _os_activity_scope_state;
    _DKEventStatsTimerCounter *_eventStatsTimerCounter;
}

- (void).cxx_destruct;
- (id)description;
- (id)elapsedTimeHistogram;
- (unsigned long long)errorCount;
- (unsigned long long)lastResultCount;
- (id)lastUpdate;
- (double)averageElapsedTime;
- (double)maximumElapsedTime;
- (double)minimumElapsedTime;
- (double)lastElapsedTime;
- (unsigned long long)count;
- (void)startTelemetryWithOSActivity:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3;

@end

