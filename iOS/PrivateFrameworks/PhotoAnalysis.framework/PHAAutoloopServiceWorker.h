//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject, PHAAnalysisWorkerJob;
@protocol OS_dispatch_queue;

@interface PHAAutoloopServiceWorker
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableArray *_pendingAssetIdentifiers;
    PHAAnalysisWorkerJob *_currentJob;
}

+ (_Bool)persistsState;
+ (long long)applicationDataFolderIdentifier;
+ (short)workerType;
- (void).cxx_destruct;
- (void)_processNextPendingAssetIdentifier;
- (void)_cleanup;
- (_Bool)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (_Bool)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (void)cooldown;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;

@end

