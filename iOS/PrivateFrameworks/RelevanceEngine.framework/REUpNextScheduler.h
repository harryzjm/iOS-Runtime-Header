//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock;
@protocol OS_dispatch_queue;

@interface REUpNextScheduler : NSObject
{
    _Bool _updateScheduled;
    NSLock *_scheduledLock;
    NSObject<OS_dispatch_queue> *_queue;
    double _delay;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _updateCompletionBlock;
}

+ (id)schedulerWithQueue:(id)arg1 delay:(double)arg2 updateCompletionBlock:(CDUnknownBlockType)arg3;
+ (id)schedulerWithQueue:(id)arg1 delay:(double)arg2 updateBlock:(CDUnknownBlockType)arg3;
+ (id)schedulerWithQueue:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) CDUnknownBlockType updateCompletionBlock; // @synthesize updateCompletionBlock=_updateCompletionBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_queue_performUpdate;
- (void)schedule;
- (void)performImmediately;
@property(readonly, nonatomic) _Bool isScheduled;
- (id)initWithQueue:(id)arg1 delay:(double)arg2 updateBlock:(CDUnknownBlockType)arg3 updateCompletionBlock:(CDUnknownBlockType)arg4;

@end

