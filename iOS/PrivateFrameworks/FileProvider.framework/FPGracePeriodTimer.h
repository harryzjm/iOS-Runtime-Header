//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FPGracePeriodTimer : NSObject
{
    CDUnknownBlockType _action;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    double _delay;
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
- (void)suppress;
- (void)arm;
- (void)_suppress;
- (void)_createTimer;
- (id)initWithAction:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2 delay:(double)arg3;

@end

