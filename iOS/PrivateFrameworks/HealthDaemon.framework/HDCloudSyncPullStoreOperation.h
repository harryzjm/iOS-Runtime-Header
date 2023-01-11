//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKServerChangeToken, HDCloudSyncTarget;

@interface HDCloudSyncPullStoreOperation
{
    struct os_unfair_lock_s _lock;
    CKServerChangeToken *_initialServerChangeToken;
    _Bool _hasAppliedChange;
    HDCloudSyncTarget *_target;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HDCloudSyncTarget *target; // @synthesize target=_target;
@property(readonly, nonatomic) _Bool hasAppliedChange; // @synthesize hasAppliedChange=_hasAppliedChange;
- (_Bool)_shouldApplyAnchorRangeMap:(id)arg1 receivedAnchorMap:(id)arg2;
- (_Bool)_isValidAnchorRangeMap:(id)arg1 lastAnchorMap:(id)arg2 error:(id *)arg3;
- (id)_requiredRecordsWithOrderedChangeRecords:(id)arg1 sequenceRecord:(id)arg2 error:(id *)arg3;
- (id)_orderedChangeRecordsBySequenceRecordIDWithFetchedChangeRecords:(id)arg1;
- (void)_fetchChangeRecordsOperationDidFinish:(id)arg1 initialChangeToken:(id)arg2;
- (void)_updatePersistedServerChangeToken:(id)arg1;
- (_Bool)_isRelevantChangeRecord:(id)arg1;
- (id)persistedStoreState;
- (long long)_requiresSyncWithError:(id *)arg1;
- (long long)_requiresSyncForSequence:(id)arg1 error:(id *)arg2;
- (_Bool)_prepareForEpochChangeWithPersistedState:(id)arg1 error:(id *)arg2;
- (_Bool)_resetPullState:(id)arg1 error:(id *)arg2;
- (void)_fetchChangeRecordsWithChangeToken:(id)arg1;
- (void)main;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;

@end
