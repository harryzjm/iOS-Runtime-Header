//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NUCoalescer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    double _delay;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) double delay; // @synthesize delay=_delay;
- (void).cxx_destruct;
- (void)dealloc;
- (void)coalesceBlock:(CDUnknownBlockType)arg1;
- (id)initWithDelay:(double)arg1 queue:(id)arg2;
- (id)initWithDelay:(double)arg1;
- (id)init;

@end
