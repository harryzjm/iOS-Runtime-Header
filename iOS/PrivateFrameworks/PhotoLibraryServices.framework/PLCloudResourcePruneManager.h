//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLCloudPhotoLibraryManager, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLCloudResourcePruneManager : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    PLCloudPhotoLibraryManager *_cplManager;
    _Bool _stopped;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void).cxx_destruct;
- (long long)pruneResources:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)_identifierForResource:(id)arg1;
- (id)_predicateForPruneWithUrgency:(long long)arg1;
- (long long)diskSpaceToPrune;
- (long long)_localResourcesSize;
- (void)_updateLocalStateForPrunedResources:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)pruneStatusForDebug:(_Bool)arg1;
- (long long)_fetchResourcesForPruningWithBudget:(long long)arg1 urgency:(long long)arg2 batchHandler:(CDUnknownBlockType)arg3;
- (void)stop;
- (void)startAutomaticPruneWithBudget:(long long)arg1 urgency:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateCacheDeletePurgeableAmount;
- (void)_handleCacheDeleteRegistration;
- (struct __CFDictionary *)_handleCacheDeletePurgeable:(int)arg1 info:(struct __CFDictionary *)arg2;
- (struct __CFDictionary *)_handleCacheDeletePurge:(int)arg1 info:(struct __CFDictionary *)arg2;
- (long long)_purgeableAmountWithBudget:(long long)arg1 debugString:(id)arg2;
- (long long)_totalPurgeableAmountForUrgency:(long long)arg1;
- (void)dealloc;
- (id)initWithCPLManager:(id)arg1 library:(id)arg2;
- (id)init;

@end
