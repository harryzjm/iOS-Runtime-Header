//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PXPreloadScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_utilityQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_group> *_pendingUtilityTasks;
    CADisplayLink *_displayLink;
    NSMutableArray *_pendingBlocks;
    struct __CFRunLoopObserver *_runloopObserver;
    _Bool __isActive;
}

+ (id)sharedScheduler;
- (void).cxx_destruct;
@property(nonatomic, setter=_setActive:) _Bool _isActive; // @synthesize _isActive=__isActive;
- (void)scheduleTaskAfterCATransactionCommits:(CDUnknownBlockType)arg1;
- (void)_updateIsActive;
- (void)_runLoopWillStartWaiting;
- (_Bool)_shouldExecutePendingBlock;
- (void)_displayLinkTick:(id)arg1;
- (void)_didExecuteTaskWithQoS:(unsigned long long)arg1;
- (void)_willScheduleTaskWithQoS:(unsigned long long)arg1;
- (void)scheduleDeferredTaskWithQoS:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)scheduleTaskWithQoS:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)scheduleMainQueueTaskAndWait:(CDUnknownBlockType)arg1;
- (void)scheduleMainQueueTask:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
