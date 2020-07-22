//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HKSleepAnalysis : NSObject
{
    _Bool _containsAsleepSamples;
    NSArray *_sleepDays;
    long long _consistencyCount;
    double _averageEfficiency;
    double _averageTimeInBed;
    double _averageTimeAsleep;
    long long _averageNumberOfInterruptions;
}

+ (id)emptyAnalysis;
@property(readonly, nonatomic) long long averageNumberOfInterruptions; // @synthesize averageNumberOfInterruptions=_averageNumberOfInterruptions;
@property(readonly, nonatomic) double averageTimeAsleep; // @synthesize averageTimeAsleep=_averageTimeAsleep;
@property(readonly, nonatomic) double averageTimeInBed; // @synthesize averageTimeInBed=_averageTimeInBed;
@property(readonly, nonatomic) double averageEfficiency; // @synthesize averageEfficiency=_averageEfficiency;
@property(readonly, nonatomic) long long consistencyCount; // @synthesize consistencyCount=_consistencyCount;
@property(readonly, nonatomic) _Bool containsAsleepSamples; // @synthesize containsAsleepSamples=_containsAsleepSamples;
@property(readonly, copy, nonatomic) NSArray *sleepDays; // @synthesize sleepDays=_sleepDays;
- (void).cxx_destruct;
- (id)initWithSleepDays:(id)arg1 containsAsleepSamples:(_Bool)arg2 consistencyCount:(long long)arg3 averageEfficiency:(double)arg4 averageTimeInBed:(double)arg5 averageTimeAlseep:(double)arg6 averageNumberOfInterruptions:(long long)arg7;

@end

