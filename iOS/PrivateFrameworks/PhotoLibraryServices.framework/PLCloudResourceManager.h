//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, PLCloudResourcePrefetchManager, PLCloudResourcePruneManager;
@protocol OS_dispatch_queue;

@interface PLCloudResourceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    PLCloudResourcePrefetchManager *_prefetchManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDate *_lastOperationDate;
    _Bool _enqueuedOperation;
}

- (id)statusForDebug:(_Bool)arg1;
- (void)stop;
- (void)startAutomaticPruneIfNecessary;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(_Bool)arg1;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithCPLManager:(id)arg1;
- (id)init;

@end

