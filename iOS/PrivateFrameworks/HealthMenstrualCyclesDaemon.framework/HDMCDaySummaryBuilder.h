//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKCalendarCache, NSMutableArray, NSMutableDictionary;

@interface HDMCDaySummaryBuilder : NSObject
{
    HKCalendarCache *_calendarCache;
    NSMutableArray *_menstrualFlowSamples;
    NSMutableArray *_intermenstrualBleedingSamples;
    NSMutableArray *_symptomsSamples;
    NSMutableArray *_sexualActivitySamples;
    NSMutableArray *_ovulationTestResultSamples;
    NSMutableArray *_cervicalMucusQualitySamples;
    NSMutableArray *_basalBodyTemperatureSamples;
    NSMutableDictionary *_sampleCountByType;
    long long _dayIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long dayIndex; // @synthesize dayIndex=_dayIndex;
- (id)createDaySummaryWithDevice:(id)arg1;
- (id)_basalBodyTemperature;
- (long long)_cervicalMucusQuality;
- (long long)_ovulationTestResult;
- (long long)_sexualActivity;
- (unsigned long long)_symptoms;
- (_Bool)_intermenstrualBleeding;
- (long long)_menstrualFlowWithModificationDay:(long long *)arg1 startOfCycleFromCycleTracking:(id *)arg2;
- (void)addCycleTrackingSample:(id)arg1;
- (id)initWithDayIndex:(long long)arg1 calendarCache:(id)arg2;

@end
