//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCDispatchTimer
{
    CDUnknownBlockType _callbackBlock;
    NSObject<OS_dispatch_source> *_timer;
    unsigned int _intervalMilliseconds;
    _Bool _running;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property(readonly, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_running;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithIntervalMilliseconds:(unsigned int)arg1 callbackBlock:(CDUnknownBlockType)arg2 clientQueue:(id)arg3;
- (id)initWithIntervalSeconds:(unsigned int)arg1 callbackBlock:(CDUnknownBlockType)arg2 clientQueue:(id)arg3;
- (id)initWithIntervalMilliseconds:(unsigned int)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (id)initWithIntervalSeconds:(unsigned int)arg1 callbackBlock:(CDUnknownBlockType)arg2;

@end

