//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCThrottleBase;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCThrottler : NSObject
{
    BRCThrottleBase *_throttle;
    long long _latestRetry;
    unsigned int _retryCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)suspend;
- (void)resume;
- (void)reset;
- (void)scheduleNextEvent;
- (id)initWithName:(id)arg1 throttleParameters:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end
