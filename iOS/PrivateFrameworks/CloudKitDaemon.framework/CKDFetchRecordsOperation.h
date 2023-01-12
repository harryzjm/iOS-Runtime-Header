//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDDecryptRecordsOperation, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSObject, NSSet;
@protocol CKFetchRecordsOperationCallbacks, OS_dispatch_group;

@interface CKDFetchRecordsOperation
{
    CKDDecryptRecordsOperation *_decryptOperation;
    _Bool _useCachedEtags;
    _Bool _useRecordCache;
    _Bool _forcePCSDecrypt;
    _Bool _skipDecryption;
    _Bool _shouldUpdateTimestampsForFetchedMergeableValues;
    _Bool _shouldFetchAssetContent;
    _Bool _shouldFetchAssetContentInMemory;
    _Bool _shouldFetchMergeableValues;
    _Bool _shouldRollSharePCSOnFetch;
    NSArray *_fullRecordsToFetch;
    CDUnknownBlockType _recordFetchProgressBlock;
    CDUnknownBlockType _recordFetchCommandBlock;
    CDUnknownBlockType _recordFetchCompletionBlock;
    NSArray *_recordIDsToFetch;
    NSMutableDictionary *_cachedRecords;
    NSSet *_desiredKeySet;
    NSDictionary *_recordIDsToETags;
    NSDictionary *_recordIDsToVersionETags;
    NSDictionary *_desiredPackageFileIndices;
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;
    NSMutableDictionary *_errorsByRecordID;
    NSMapTable *_downloadTasksByRecordID;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
    NSSet *_assetFieldNamesToPublishURLs;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
    NSMutableArray *_recordIDsToRefetch;
    NSMutableDictionary *_keyOrErrorForHostname;
    NSMutableDictionary *_shareRecordsToUpdateByRecordID;
    NSMutableDictionary *_mergeableValueDownloadTasks;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldRollSharePCSOnFetch; // @synthesize shouldRollSharePCSOnFetch=_shouldRollSharePCSOnFetch;
@property(retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // @synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID;
@property(retain, nonatomic) NSMutableDictionary *mergeableValueDownloadTasks; // @synthesize mergeableValueDownloadTasks=_mergeableValueDownloadTasks;
@property(retain, nonatomic) NSMutableDictionary *shareRecordsToUpdateByRecordID; // @synthesize shareRecordsToUpdateByRecordID=_shareRecordsToUpdateByRecordID;
@property(retain, nonatomic) NSMutableDictionary *keyOrErrorForHostname; // @synthesize keyOrErrorForHostname=_keyOrErrorForHostname;
@property(retain, nonatomic) NSMutableArray *recordIDsToRefetch; // @synthesize recordIDsToRefetch=_recordIDsToRefetch;
@property(nonatomic) unsigned long long URLOptions; // @synthesize URLOptions=_URLOptions;
@property(nonatomic) unsigned long long requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property(retain, nonatomic) NSSet *assetFieldNamesToPublishURLs; // @synthesize assetFieldNamesToPublishURLs=_assetFieldNamesToPublishURLs;
@property(nonatomic) _Bool shouldFetchMergeableValues; // @synthesize shouldFetchMergeableValues=_shouldFetchMergeableValues;
@property(nonatomic) _Bool shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(retain, nonatomic) NSMapTable *downloadTasksByRecordID; // @synthesize downloadTasksByRecordID=_downloadTasksByRecordID;
@property(retain, nonatomic) NSMutableDictionary *errorsByRecordID; // @synthesize errorsByRecordID=_errorsByRecordID;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup; // @synthesize fetchRecordsGroup=_fetchRecordsGroup;
@property(retain, nonatomic) NSDictionary *desiredPackageFileIndices; // @synthesize desiredPackageFileIndices=_desiredPackageFileIndices;
@property(retain, nonatomic) NSDictionary *recordIDsToVersionETags; // @synthesize recordIDsToVersionETags=_recordIDsToVersionETags;
@property(retain, nonatomic) NSDictionary *recordIDsToETags; // @synthesize recordIDsToETags=_recordIDsToETags;
@property(retain, nonatomic) NSSet *desiredKeySet; // @synthesize desiredKeySet=_desiredKeySet;
@property(retain, nonatomic) NSMutableDictionary *cachedRecords; // @synthesize cachedRecords=_cachedRecords;
@property(retain, nonatomic) NSArray *recordIDsToFetch; // @synthesize recordIDsToFetch=_recordIDsToFetch;
@property(copy, nonatomic) CDUnknownBlockType recordFetchCompletionBlock; // @synthesize recordFetchCompletionBlock=_recordFetchCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchCommandBlock; // @synthesize recordFetchCommandBlock=_recordFetchCommandBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchProgressBlock; // @synthesize recordFetchProgressBlock=_recordFetchProgressBlock;
@property(nonatomic) _Bool shouldUpdateTimestampsForFetchedMergeableValues; // @synthesize shouldUpdateTimestampsForFetchedMergeableValues=_shouldUpdateTimestampsForFetchedMergeableValues;
@property(retain, nonatomic) NSArray *fullRecordsToFetch; // @synthesize fullRecordsToFetch=_fullRecordsToFetch;
@property(nonatomic) _Bool skipDecryption; // @synthesize skipDecryption=_skipDecryption;
@property(nonatomic) _Bool forcePCSDecrypt; // @synthesize forcePCSDecrypt=_forcePCSDecrypt;
@property(nonatomic) _Bool useRecordCache; // @synthesize useRecordCache=_useRecordCache;
@property(nonatomic) _Bool useCachedEtags; // @synthesize useCachedEtags=_useCachedEtags;
- (id)relevantZoneIDs;
- (_Bool)supportsClearAssetEncryption;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)_downloadMergeableValues;
- (void)_downloadAssets;
- (void)_fetchCloudCerts;
- (void)_didDownloadAssetsWithError:(id)arg1;
- (void)_finishAllDownloadTasksWithError:(id)arg1;
- (void)_addMergeableValueDownloadTasksForRecord:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_addAssetDownloadTaskForRecord:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_addDownloadTasksForRecord:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (int)_prepareAsset:(id)arg1 record:(id)arg2 recordKey:(id)arg3 assetTransferOptions:(id)arg4;
- (void)_decryptPropertiesIfNeededForRecord:(id)arg1 record:(id)arg2;
- (void)_handleSharePCSPrepForShare:(id)arg1 recordID:(id)arg2;
- (void)_handleRecordFetch:(id)arg1 recordID:(id)arg2 etagMatched:(_Bool)arg3 responseCode:(id)arg4;
- (void)_fetchPCSForMergeableValueDeltaRecord:(id)arg1 recordID:(id)arg2;
- (void)_reallyDecryptPropertiesOnRecord:(id)arg1 recordID:(id)arg2;
- (void)_decryptPropertiesOnRecord:(id)arg1 recordID:(id)arg2;
@property(readonly, nonatomic) _Bool hasRecordDecryptOperation;
@property(readonly, nonatomic) CKDDecryptRecordsOperation *recordDecryptOperation;
- (void)_continueHandleFetchedRecord:(id)arg1 recordID:(id)arg2;
- (void)setError:(id)arg1 forRecordID:(id)arg2;
- (id)errorForRecordID:(id)arg1;
- (void)fetchRecordsWithIDs:(id)arg1 andFullRecords:(id)arg2;
- (int)operationType;
- (void)_findSpecialParticipantsOnShare:(id)arg1 identityDelegate:(id)arg2;
- (void)_saveUpdatedShareRecords;
- (id)desiredIndexedListKeys;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;

// Remaining properties
@property(retain, nonatomic) id <CKFetchRecordsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

