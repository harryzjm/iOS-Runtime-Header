//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DVTDelayedInvocationDelayScheduler
{
    double _delay;
}

+ (id)schedulerWithDelay:(double)arg1;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
- (void)unscheduleDelayedInvocation:(id)arg1;
- (void)scheduleDelayedInvocation:(id)arg1;
- (id)initWithDelay:(double)arg1;

@end
