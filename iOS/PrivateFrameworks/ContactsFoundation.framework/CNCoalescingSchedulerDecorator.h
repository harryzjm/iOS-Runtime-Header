//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class CNStack, NSString;
@protocol CNScheduler;

@interface CNCoalescingSchedulerDecorator : NSObject <CNScheduler>
{
    id <CNScheduler> _scheduler;
    double _coalescingWindow;
    unsigned long long _state;
    CNStack *_delayedBlocks;
}

@property(copy, nonatomic) CNStack *delayedBlocks; // @synthesize delayedBlocks=_delayedBlocks;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) double coalescingWindow; // @synthesize coalescingWindow=_coalescingWindow;
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)removeDelayedBlock:(CDUnknownBlockType)arg1;
- (void)flushDelayedBlock;
- (unsigned long long)getAndIncrementState;
- (id)initWithScheduler:(id)arg1 coalescingWindow:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

