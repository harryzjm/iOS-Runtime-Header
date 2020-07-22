//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDaemon/CKDOperationPipelining-Protocol.h>

@class CKDRecordCache, CKDRecordFetchAggregator, NSArray, NSDictionary, NSMutableArray, NSObject, NSSet, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDFetchBatchedRecordsOperation <CKDOperationPipelining>
{
    _Bool _shouldFetchAssetContents;
    _Bool _fetchAllChanges;
    _Bool _forcePCSDecryptionAttempt;
    CKDRecordCache *_recordCache;
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;
    NSSet *_desiredAssetKeys;
    NSArray *_recordZoneIDs;
    NSDictionary *_optionsByRecordZoneID;
    unsigned long long _numRequestsSent;
    CKDRecordFetchAggregator *_recordFetcher;
    NSMutableArray *_requestInfos;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
}

@property(nonatomic) _Bool forcePCSDecryptionAttempt; // @synthesize forcePCSDecryptionAttempt=_forcePCSDecryptionAttempt;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(retain, nonatomic) NSMutableArray *requestInfos; // @synthesize requestInfos=_requestInfos;
@property(retain, nonatomic) CKDRecordFetchAggregator *recordFetcher; // @synthesize recordFetcher=_recordFetcher;
@property(nonatomic) unsigned long long numRequestsSent; // @synthesize numRequestsSent=_numRequestsSent;
@property(retain, nonatomic) NSDictionary *optionsByRecordZoneID; // @synthesize optionsByRecordZoneID=_optionsByRecordZoneID;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property(retain, nonatomic) NSSet *desiredAssetKeys; // @synthesize desiredAssetKeys=_desiredAssetKeys;
@property(nonatomic) _Bool fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(nonatomic) _Bool shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup; // @synthesize fetchRecordsGroup=_fetchRecordsGroup;
- (void).cxx_destruct;
- (void)_noteOperationFinishedBlockEnd;
- (void)_noteOperationEnding;
- (void)_noteOperationBeginning;
- (void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2;
- (void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2;
- (void)_noteChangedRecordWithID:(id)arg1 recordType:(id)arg2 record:(id)arg3 error:(id)arg4;
- (id)activityCreate;
@property(readonly, nonatomic) NSString *pipeliningDescription;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (id)_possiblyWrapError:(id)arg1 withCode:(long long)arg2 format:(id)arg3;
- (void)_sendFetchChangesRequestForZoneIDs:(id)arg1 withOptions:(id)arg2 previousRequestSchedulerInfo:(id)arg3;
- (void)_handleRecordDelete:(id)arg1 recordType:(id)arg2 perRequestSchedulerInfo:(id)arg3;
- (void)_handleRecordChange:(id)arg1 perRequestSchedulerInfo:(id)arg2;
- (void)_handleFetchChangesRequestFinishedWithSchedulerInfo:(id)arg1;
@property(readonly, nonatomic) CKDRecordCache *recordCache; // @synthesize recordCache=_recordCache;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
