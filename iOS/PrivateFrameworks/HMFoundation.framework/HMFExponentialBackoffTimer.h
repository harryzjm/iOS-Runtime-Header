//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMFExponentialBackoffTimer
{
    _Bool _increasing;
    double _minimumTimeInterval;
    double _maximumTimeInterval;
    long long _exponentialFactor;
}

@property(readonly, nonatomic, getter=isIncreasing) _Bool increasing; // @synthesize increasing=_increasing;
@property(readonly, nonatomic) long long exponentialFactor; // @synthesize exponentialFactor=_exponentialFactor;
@property(readonly, nonatomic) double maximumTimeInterval; // @synthesize maximumTimeInterval=_maximumTimeInterval;
@property(readonly, nonatomic) double minimumTimeInterval; // @synthesize minimumTimeInterval=_minimumTimeInterval;
- (void)reset;
- (void)__fire;
- (double)timeInterval;
- (id)initWithMinimumTimeInterval:(double)arg1 maximumTimeInterval:(double)arg2 exponentialFactor:(long long)arg3 options:(unsigned long long)arg4;
- (id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;

@end
