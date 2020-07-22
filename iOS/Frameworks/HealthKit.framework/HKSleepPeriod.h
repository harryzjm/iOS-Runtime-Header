//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDateInterval, NSString;

@interface HKSleepPeriod : NSObject
{
    _Bool _startDateConformsToIntendedBedtime;
    _Bool _endDateConformsToIntendedBedtime;
    _Bool _consistent;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateInterval *_dateInterval;
    long long _type;
    double _duration;
    double _inBedDuration;
    double _asleepDuration;
    NSDateInterval *_intendedBedtime;
    long long _intendedBedtimeType;
    double _startDateOffsetFromIntendedBedtime;
    double _endDateOffsetFromIntendedBedtime;
    double _asleepDurationGoal;
    long long _asleepDurationGoalSource;
    double _timeToFallAsleep;
    double _timeToGetOutOfBed;
    double _timeAwakeDuringIntendedSleepPeriod;
    double _efficiency;
    long long _numberOfInterruptions;
    NSArray *_segments;
    NSString *_timeZoneName;
}

@property(readonly, copy, nonatomic) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;
@property(readonly, copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(readonly, nonatomic, getter=isConsistent) _Bool consistent; // @synthesize consistent=_consistent;
@property(readonly, nonatomic) long long numberOfInterruptions; // @synthesize numberOfInterruptions=_numberOfInterruptions;
@property(readonly, nonatomic) double efficiency; // @synthesize efficiency=_efficiency;
@property(readonly, nonatomic) double timeAwakeDuringIntendedSleepPeriod; // @synthesize timeAwakeDuringIntendedSleepPeriod=_timeAwakeDuringIntendedSleepPeriod;
@property(readonly, nonatomic) double timeToGetOutOfBed; // @synthesize timeToGetOutOfBed=_timeToGetOutOfBed;
@property(readonly, nonatomic) double timeToFallAsleep; // @synthesize timeToFallAsleep=_timeToFallAsleep;
@property(readonly, nonatomic) long long asleepDurationGoalSource; // @synthesize asleepDurationGoalSource=_asleepDurationGoalSource;
@property(readonly, nonatomic) double asleepDurationGoal; // @synthesize asleepDurationGoal=_asleepDurationGoal;
@property(readonly, nonatomic) double endDateOffsetFromIntendedBedtime; // @synthesize endDateOffsetFromIntendedBedtime=_endDateOffsetFromIntendedBedtime;
@property(readonly, nonatomic) _Bool endDateConformsToIntendedBedtime; // @synthesize endDateConformsToIntendedBedtime=_endDateConformsToIntendedBedtime;
@property(readonly, nonatomic) double startDateOffsetFromIntendedBedtime; // @synthesize startDateOffsetFromIntendedBedtime=_startDateOffsetFromIntendedBedtime;
@property(readonly, nonatomic) _Bool startDateConformsToIntendedBedtime; // @synthesize startDateConformsToIntendedBedtime=_startDateConformsToIntendedBedtime;
@property(readonly, nonatomic) long long intendedBedtimeType; // @synthesize intendedBedtimeType=_intendedBedtimeType;
@property(readonly, nonatomic) NSDateInterval *intendedBedtime; // @synthesize intendedBedtime=_intendedBedtime;
@property(readonly, nonatomic) double asleepDuration; // @synthesize asleepDuration=_asleepDuration;
@property(readonly, nonatomic) double inBedDuration; // @synthesize inBedDuration=_inBedDuration;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)_firstBedtimeAlarmWithCalendar:(id)arg1;
- (void)enumerateDateIntervalsForCategoryValue:(long long)arg1 intersectedWithDateInterval:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)segmentDateIntervalsForCategoryValue:(long long)arg1 intersectedWithDateInterval:(id)arg2;
- (void)_setIntendedBedtime:(id)arg1 type:(long long)arg2;
- (void)_setType:(long long)arg1;
- (id)segmentsForCategory:(long long)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 segments:(id)arg3;

@end
