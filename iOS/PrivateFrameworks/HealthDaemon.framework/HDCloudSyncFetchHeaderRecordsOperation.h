//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDSynchronousTaskGroupDelegate-Protocol.h>

@class HDSynchronousTaskGroup, NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface HDCloudSyncFetchHeaderRecordsOperation <HDSynchronousTaskGroupDelegate>
{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_fetchedRecordIDsByContainerID;
    NSMutableSet *_invalidRecordIDs;
    HDSynchronousTaskGroup *_taskGroup;
    _Bool _fetchSubscriptions;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fetchSubscriptions; // @synthesize fetchSubscriptions=_fetchSubscriptions;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(_Bool)arg2 errors:(id)arg3;
- (void)_processFetchedRecords:(id)arg1 container:(id)arg2 scope:(long long)arg3;
- (_Bool)_processFetchedRecord:(id)arg1 container:(id)arg2 scope:(long long)arg3 error:(id *)arg4;
- (_Bool)_processFetchedRecord:(id)arg1 recordClass:(Class)arg2 zone:(id)arg3 error:(id *)arg4;
- (void)_startHeaderRecordFetchForZones:(id)arg1 container:(id)arg2 scope:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_receivedLimitExceededError:(id)arg1 fetchingRecordsWithIDs:(id)arg2 container:(id)arg3 scope:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchRecordsWithIDs:(id)arg1 container:(id)arg2 scope:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_startHeaderRecordFetchForContainer:(id)arg1 scope:(long long)arg2;
- (void)main;
@property(readonly, copy, nonatomic) NSArray *invalidRecordIDs;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
