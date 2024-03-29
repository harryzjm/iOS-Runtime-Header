//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _HKSleepDaySummaryDurations : NSObject
{
    double _inBedDuration;
    double _sleepDuration;
    double _unspecifiedSleepDuration;
    double _coreSleepDuration;
    double _deepSleepDuration;
    double _remSleepDuration;
    double _awakeDuration;
}

+ (id)durationsFromSleepPeriods:(id)arg1 dateInterval:(id)arg2;
@property(readonly, nonatomic) double awakeDuration; // @synthesize awakeDuration=_awakeDuration;
@property(readonly, nonatomic) double remSleepDuration; // @synthesize remSleepDuration=_remSleepDuration;
@property(readonly, nonatomic) double deepSleepDuration; // @synthesize deepSleepDuration=_deepSleepDuration;
@property(readonly, nonatomic) double coreSleepDuration; // @synthesize coreSleepDuration=_coreSleepDuration;
@property(readonly, nonatomic) double unspecifiedSleepDuration; // @synthesize unspecifiedSleepDuration=_unspecifiedSleepDuration;
@property(readonly, nonatomic) double sleepDuration; // @synthesize sleepDuration=_sleepDuration;
@property(readonly, nonatomic) double inBedDuration; // @synthesize inBedDuration=_inBedDuration;
- (id)initWithInBedDuration:(double)arg1 sleepDuration:(double)arg2 unspecifiedSleepDuration:(double)arg3 coreSleepDuration:(double)arg4 deepSleepDuration:(double)arg5 remSleepDuration:(double)arg6 awakeDuration:(double)arg7;

@end

