//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDCloudSyncManagerTask, NSMutableArray;
@protocol HDCloudSyncManagerTaskQueueDelegate;

@interface HDCloudSyncManagerTaskQueue : NSObject
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_pendingTasks;
    long long _pendingTasksBeingSorted;
    _Bool _isComputingActiveTask;
    _Bool _isStartingNextTask;
    HDCloudSyncManagerTask *_activeTask;
    id <HDCloudSyncManagerTaskQueueDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <HDCloudSyncManagerTaskQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_primitiveConsiderStartingNextTask;
- (void)_considerStartingNextTask;
- (void)addTask:(id)arg1;
@property(readonly) HDCloudSyncManagerTask *activeTask;
@property(readonly) _Bool hasActiveTask;
@property(readonly) long long pendingTaskCount;
- (id)initWithDelegate:(id)arg1;

@end
