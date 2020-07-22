//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>
#import <HealthKit/_HKDateBounded-Protocol.h>

@class NSDateInterval, NSDictionary, NSString;

@interface _HKSleepQueryResult : NSObject <_HKDateBounded, NSSecureCoding>
{
    NSDictionary *_resultsByCategoryValue;
    NSDictionary *_samplesBySource;
    NSDateInterval *_dateInterval;
    NSDateInterval *_resultInterval;
}

+ (_Bool)supportsSecureCoding;
+ (id)_preferredSourceFromSources:(id)arg1 sourceOrder:(id)arg2;
+ (id)samplesForSamplesBySource:(id)arg1;
+ (id)dateIntervalForSamples:(id)arg1;
@property(readonly, nonatomic) NSDateInterval *resultInterval; // @synthesize resultInterval=_resultInterval;
- (void).cxx_destruct;
- (id)endDate;
- (id)startDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_calculatePreferredDuration:(double *)arg1 categoryValue:(long long *)arg2;
- (id)preferredDateIntervals;
- (id)dateIntervalsForCategoryValue:(long long)arg1;
- (id)initWithResultInterval:(id)arg1 dateIntervalsByCategoryValue:(id)arg2 samplesBySource:(id)arg3;
- (id)dateInterval;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

