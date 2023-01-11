//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLEngineFileStorage, CPLPlatformObject, NSCountedSet, NSDate, NSMutableDictionary, NSObject, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface CPLEngineResourceStorage <CPLAbstractObject>
{
    NSMutableDictionary *_identitiesToCommit;
    NSMutableDictionary *_identitiesToDelete;
    NSURL *_tempFolderURL;
    NSObject<OS_dispatch_queue> *_pruneStatsQueue;
    NSCountedSet *_successfulPruneStatsPerResourceType;
    NSCountedSet *_failedPruneStatsPerResourceType;
    unsigned long long _successfulPruneSize;
    NSDate *_lastPruneRequestDate;
    CPLEngineFileStorage *_fileStorage;
}

@property(readonly, nonatomic) CPLEngineFileStorage *fileStorage; // @synthesize fileStorage=_fileStorage;
- (void).cxx_destruct;
- (void)notePruningRequestForResource:(id)arg1 successful:(_Bool)arg2;
- (void)notePruningRequestForResource:(id)arg1 successful:(_Bool)arg2 prunedSize:(unsigned long long)arg3;
- (id)statusDictionary;
- (id)status;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (_Bool)checkIsEmpty;
- (_Bool)resetWithError:(id *)arg1;
- (_Bool)compactWithError:(id *)arg1;
- (_Bool)storeDownloadedResource:(id)arg1 atURL:(id)arg2 error:(id *)arg3;
- (id)createTempDestinationURLForResource:(id)arg1 error:(id *)arg2;
- (_Bool)hasResource:(id)arg1;
- (_Bool)releaseFileURL:(id)arg1 forResource:(id)arg2 error:(id *)arg3;
- (id)retainFileURLForResource:(id)arg1 error:(id *)arg2;
- (unsigned long long)sizeOfOriginalResourcesToUpload;
- (unsigned long long)sizeOfResourcesToUpload;
- (_Bool)dropResourceForUpload:(id)arg1 error:(id *)arg2;
- (_Bool)storeResourceCopyForUpload:(id)arg1 error:(id *)arg2;
- (_Bool)storeResourceForUpload:(id)arg1 error:(id *)arg2;
- (unsigned long long)scopeType;
- (_Bool)openWithError:(id *)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

