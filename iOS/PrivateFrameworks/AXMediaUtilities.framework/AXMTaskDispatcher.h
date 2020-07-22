//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol AXMTaskDispatcherDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface AXMTaskDispatcher : NSObject
{
    NSObject<OS_dispatch_source> *_processQueueSource;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_taskList;
    _Bool _queue_taskIsBeingProcessed;
    id <AXMTaskDispatcherDelegate> _delegate;
}

@property(nonatomic) __weak id <AXMTaskDispatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_queue_dequeueTask;
- (void)_queue_unscheduleAllTasks;
- (void)unscheduleAllTasks;
- (void)_queue_scheduleTask:(id)arg1;
- (void)scheduleTask:(id)arg1;
- (void)_queue_processNextTask;
@property(readonly, nonatomic) _Bool isEmpty;
- (long long)_queue_count;
@property(readonly, nonatomic) long long count;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;

@end

