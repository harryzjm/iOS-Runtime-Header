//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDCloudSyncChangeRecord, HDCloudSyncSequenceRecord, HDCloudSyncTarget, NSFileHandle;

@interface HDCloudSyncPullChangeRecordOperation
{
    NSFileHandle *_fileHandle;
    HDCloudSyncTarget *_target;
    HDCloudSyncSequenceRecord *_sequenceRecord;
    HDCloudSyncChangeRecord *_changeRecord;
}

+ (id)_assetFileHandleWithName:(id)arg1 error:(id *)arg2;
+ (long long)progressCount;
- (void).cxx_destruct;
@property(readonly, nonatomic) HDCloudSyncChangeRecord *changeRecord; // @synthesize changeRecord=_changeRecord;
@property(readonly, nonatomic) HDCloudSyncSequenceRecord *sequenceRecord; // @synthesize sequenceRecord=_sequenceRecord;
@property(readonly, nonatomic) HDCloudSyncTarget *target; // @synthesize target=_target;
- (void)_finishWithAssetExtractionError:(id)arg1;
- (id)_assetExtractionFailureCountKey;
- (void)_setAssetExtractionFailureCount:(long long)arg1;
- (long long)_assetExtractionFailureCount;
- (void)_recordAppliedChange;
- (_Bool)_applySyncChanges:(id)arg1 store:(id)arg2 error:(id *)arg3;
- (_Bool)_persistFetchedArchiveAsset:(id)arg1 changeRecord:(id)arg2 error:(id *)arg3;
- (id)_zipArchiveExtractorForChangeRecord:(id)arg1 assetContentInMemory:(_Bool)arg2 error:(id *)arg3;
- (void)_fetchedRecord:(id)arg1 recordID:(id)arg2 inMemoryAsset:(_Bool)arg3 error:(id)arg4;
- (void)main;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3 sequenceRecord:(id)arg4 changeRecord:(id)arg5;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;

@end
