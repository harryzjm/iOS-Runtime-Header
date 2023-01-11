//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDaemon/CKDOperationPipelining-Protocol.h>

@class CKDRecordFetchAggregator, CKQuery, CKQueryCursor, CKRecordZoneID, NSDictionary, NSMutableArray, NSObject, NSSet, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDQueryOperation <CKDOperationPipelining>
{
    _Bool _shouldFetchAssetContent;
    _Bool _fetchAllResults;
    _Bool _hasCalledQueryCursorUpdatedBlock;
    CKQuery *_query;
    CKQueryCursor *_cursor;
    unsigned long long _resultsLimit;
    CKQueryCursor *_resultsCursor;
    CDUnknownBlockType _recordFetchedBlock;
    CDUnknownBlockType _queryCursorUpdatedBlock;
    NSSet *_desiredKeySet;
    CKRecordZoneID *_zoneID;
    CKDRecordFetchAggregator *_recordFetcher;
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;
    unsigned long long _numRequestsSent;
    NSMutableArray *_requestInfos;
    NSDictionary *_assetTransferOptionsByKey;
}

@property(nonatomic) _Bool hasCalledQueryCursorUpdatedBlock; // @synthesize hasCalledQueryCursorUpdatedBlock=_hasCalledQueryCursorUpdatedBlock;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByKey; // @synthesize assetTransferOptionsByKey=_assetTransferOptionsByKey;
@property(retain, nonatomic) NSMutableArray *requestInfos; // @synthesize requestInfos=_requestInfos;
@property(nonatomic) unsigned long long numRequestsSent; // @synthesize numRequestsSent=_numRequestsSent;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup; // @synthesize fetchRecordsGroup=_fetchRecordsGroup;
@property(nonatomic) _Bool fetchAllResults; // @synthesize fetchAllResults=_fetchAllResults;
@property(retain, nonatomic) CKDRecordFetchAggregator *recordFetcher; // @synthesize recordFetcher=_recordFetcher;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(retain, nonatomic) NSSet *desiredKeySet; // @synthesize desiredKeySet=_desiredKeySet;
@property(copy, nonatomic) CDUnknownBlockType queryCursorUpdatedBlock; // @synthesize queryCursorUpdatedBlock=_queryCursorUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
@property(retain, nonatomic) CKQueryCursor *resultsCursor; // @synthesize resultsCursor=_resultsCursor;
@property(readonly, nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(readonly, nonatomic) CKQueryCursor *cursor; // @synthesize cursor=_cursor;
@property(readonly, nonatomic) CKQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_sendQueryRequestWithCursor:(id)arg1 previousRequestSchedulerInfo:(id)arg2;
- (void)_handleRecordResponses:(id)arg1 perRequestSchedulerInfo:(id)arg2;
- (id)_wrapError:(id)arg1 format:(id)arg2;
- (void)_handleQueryRequestFinishedWithSchedulerInfo:(id)arg1;
- (id)activityCreate;
@property(readonly, nonatomic) NSString *pipeliningDescription;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

