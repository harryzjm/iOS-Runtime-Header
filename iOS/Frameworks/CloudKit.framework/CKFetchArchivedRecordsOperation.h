//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKFetchArchivedRecordsOperation
{
    _Bool _fetchAllChanges;
    _Bool _shouldFetchAssetContents;
    CDUnknownBlockType _recordFetchedBlock;
    CDUnknownBlockType _recordZoneChangeTokensUpdatedBlock;
    CDUnknownBlockType _recordZoneFetchCompletionBlock;
    CDUnknownBlockType _fetchArchivedRecordsCompletionBlock;
    NSArray *_recordZoneIDs;
    NSDictionary *_configurationsByRecordZoneID;
    NSMutableDictionary *_statusByZoneID;
    NSMutableDictionary *_perItemErrors;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
}

@property(retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(retain, nonatomic) NSMutableDictionary *perItemErrors; // @synthesize perItemErrors=_perItemErrors;
@property(nonatomic) _Bool shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property(retain, nonatomic) NSMutableDictionary *statusByZoneID; // @synthesize statusByZoneID=_statusByZoneID;
@property(nonatomic) _Bool fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(copy, nonatomic) NSDictionary *configurationsByRecordZoneID; // @synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID;
@property(copy, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
- (void).cxx_destruct;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)recordZoneArchivesStatusByZoneID;
@property(copy, nonatomic) CDUnknownBlockType fetchArchivedRecordsCompletionBlock; // @synthesize fetchArchivedRecordsCompletionBlock=_fetchArchivedRecordsCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneFetchCompletionBlock; // @synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneChangeTokensUpdatedBlock; // @synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
- (id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2;
- (id)init;

@end

