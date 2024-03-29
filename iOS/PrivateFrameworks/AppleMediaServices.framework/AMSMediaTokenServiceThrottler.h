//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface AMSMediaTokenServiceThrottler : NSObject
{
    double _baseSleepInterval;
    double _maxSleepInterval;
    unsigned long long _attemptNumber;
    NSDate *_throttleDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *throttleDate; // @synthesize throttleDate=_throttleDate;
@property(nonatomic) unsigned long long attemptNumber; // @synthesize attemptNumber=_attemptNumber;
@property(nonatomic) double maxSleepInterval; // @synthesize maxSleepInterval=_maxSleepInterval;
@property(nonatomic) double baseSleepInterval; // @synthesize baseSleepInterval=_baseSleepInterval;
- (double)_calculateThrottleInterval;
- (void)throttle;
- (_Bool)shouldThrottle;
- (void)reset;
- (id)initWithBaseSleepInterval:(double)arg1 maxSleepInterval:(double)arg2;

@end

