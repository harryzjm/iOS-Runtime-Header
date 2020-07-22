//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CPLBackgroundDownloadsTask
{
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableArray *_transportTasks;
    _Bool _shouldStop;
    NSError *_badError;
    NSError *_stopError;
    _Bool _hasResetQueue;
    unsigned long long _successfullyDownloadedResourcesCount;
    unsigned long long _failedDownloadedResourcesCount;
    unsigned long long _total;
    unsigned long long _activeTransferTaskCount;
    unsigned long long _transportTaskCount;
}

- (void).cxx_destruct;
- (id)description;
- (id)taskIdentifier;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)taskDidFinishWithError:(id)arg1;
- (void)launch;
- (void)_transportTaskDidFinish:(id)arg1;
- (void)_downloadTask:(id)arg1 didFinishWithErrorLocked:(id)arg2;
- (void)_updateActiveDownloadTaskCount;
- (void)_enqueueTasksLocked;
- (void)_completeBackgroundDownloadForResource:(id)arg1 error:(id)arg2 withTransaction:(id)arg3;
- (_Bool)_isErrorCountingForARetry:(id)arg1;
- (void)_launchNecessaryDownloadTasksWithTransaction:(id)arg1;
- (void)_finishTaskLocked;
- (id)initWithEngineLibrary:(id)arg1;

@end

