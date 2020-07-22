//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface CAMPreciseTimer : NSObject
{
    double _delay;
    double _interval;
    CDUnknownBlockType __handler;
    NSObject<OS_dispatch_source> *__currentTimer;
}

@property(retain, nonatomic, setter=_setCurrentTimer:) NSObject<OS_dispatch_source> *_currentTimer; // @synthesize _currentTimer=__currentTimer;
@property(readonly, copy, nonatomic) CDUnknownBlockType _handler; // @synthesize _handler=__handler;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
- (void).cxx_destruct;
- (void)invalidate;
- (void)start;
- (id)initWithDelay:(double)arg1 interval:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;

@end

