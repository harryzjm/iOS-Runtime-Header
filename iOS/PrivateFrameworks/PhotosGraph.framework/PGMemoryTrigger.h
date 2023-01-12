//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

@interface PGMemoryTrigger : NSObject
{
    NSObject<OS_os_log> *_loggingConnection;
}

+ (id)monthDayNodesInGraph:(id)arg1 startDayOffset:(long long)arg2 endDayOffset:(long long)arg3 fromLocalDate:(id)arg4 inTimeZone:(id)arg5;
+ (id)monthDayCalendarUnitValuesForLocalDateInterval:(id)arg1;
+ (id)dateNodesInGraph:(id)arg1 startDayOffset:(long long)arg2 endDayOffset:(long long)arg3 fromLocalDate:(id)arg4 inTimeZone:(id)arg5;
+ (id)localDateIntervalFromLocalDate:(id)arg1 startDayOffset:(long long)arg2 endDayOffset:(long long)arg3 inTimeZone:(id)arg4;
+ (id)stringFromTriggerType:(unsigned long long)arg1;
+ (unsigned long long)triggerTypeFromString:(id)arg1;
+ (id)memoryTriggerResultsForMemoryNodesArray:(id)arg1 withValidityInterval:(id)arg2;
+ (id)memoryTriggerResultsForMemoryNodes:(id)arg1 withValidityInterval:(id)arg2;
+ (id)singleDayValidityIntervalWithContext:(id)arg1;
+ (id)validityIntervalForLocalStartDate:(id)arg1 localEndDate:(id)arg2 timeZone:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
- (id)relevantFeatureNodesInFeatureNodes:(id)arg1;
- (id)resultsTriggeredWithContext:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3;
@property(readonly, nonatomic) unsigned long long triggerType;
@property(readonly, nonatomic) _Bool supportsFutureLookup;
- (id)initWithLoggingConnection:(id)arg1;
- (id)init;

@end
