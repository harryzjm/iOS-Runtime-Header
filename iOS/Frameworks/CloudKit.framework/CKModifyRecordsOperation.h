//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKModifyRecordsOperationCallbacks-Protocol.h>

@class CKModifyRecordsOperationInfo, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol CKModifyRecordsOperationCallbacks;

@interface CKModifyRecordsOperation <CKModifyRecordsOperationCallbacks>
{
    _Bool _atomic;
    _Bool _shouldReportRecordsInFlight;
    _Bool _shouldOnlySaveAssetContent;
    _Bool _markAsParticipantNeedsNewInvitationToken;
    CDUnknownBlockType _perRecordProgressBlock;
    CDUnknownBlockType _perRecordCompletionBlock;
    CDUnknownBlockType _modifyRecordsCompletionBlock;
    CDUnknownBlockType _recordsInFlightBlock;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
    long long _savePolicy;
    NSData *_clientChangeTokenData;
    NSMutableArray *_savedRecords;
    NSMutableArray *_deletedRecordIDs;
    NSMutableDictionary *_recordsByRecordIDs;
    NSMutableDictionary *_recordErrors;
    NSMutableDictionary *_assetsByRecordIDAndRecordKey;
    NSMutableSet *_packagesToDestroy;
    NSDictionary *_assetUUIDToExpectedProperties;
    NSDictionary *_packageUUIDToExpectedProperties;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSDictionary *_pluginFieldsForRecordDeletesByID;
}

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID; // @synthesize pluginFieldsForRecordDeletesByID=_pluginFieldsForRecordDeletesByID;
@property(copy, nonatomic) NSDictionary *conflictLosersToResolveByRecordID; // @synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID;
@property(copy, nonatomic) NSDictionary *recordIDsToDeleteToEtags; // @synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags;
@property(nonatomic) _Bool markAsParticipantNeedsNewInvitationToken; // @synthesize markAsParticipantNeedsNewInvitationToken=_markAsParticipantNeedsNewInvitationToken;
@property(nonatomic) _Bool shouldOnlySaveAssetContent; // @synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent;
@property(copy, nonatomic) NSDictionary *packageUUIDToExpectedProperties; // @synthesize packageUUIDToExpectedProperties=_packageUUIDToExpectedProperties;
@property(copy, nonatomic) NSDictionary *assetUUIDToExpectedProperties; // @synthesize assetUUIDToExpectedProperties=_assetUUIDToExpectedProperties;
@property(retain, nonatomic) NSMutableSet *packagesToDestroy; // @synthesize packagesToDestroy=_packagesToDestroy;
@property(nonatomic) _Bool shouldReportRecordsInFlight; // @synthesize shouldReportRecordsInFlight=_shouldReportRecordsInFlight;
@property(retain, nonatomic) NSMutableDictionary *assetsByRecordIDAndRecordKey; // @synthesize assetsByRecordIDAndRecordKey=_assetsByRecordIDAndRecordKey;
@property(retain, nonatomic) NSMutableDictionary *recordErrors; // @synthesize recordErrors=_recordErrors;
@property(retain, nonatomic) NSMutableDictionary *recordsByRecordIDs; // @synthesize recordsByRecordIDs=_recordsByRecordIDs;
@property(retain, nonatomic) NSMutableArray *deletedRecordIDs; // @synthesize deletedRecordIDs=_deletedRecordIDs;
@property(retain, nonatomic) NSMutableArray *savedRecords; // @synthesize savedRecords=_savedRecords;
@property(nonatomic) _Bool atomic; // @synthesize atomic=_atomic;
@property(copy, nonatomic) NSData *clientChangeTokenData; // @synthesize clientChangeTokenData=_clientChangeTokenData;
@property(nonatomic) long long savePolicy; // @synthesize savePolicy=_savePolicy;
@property(copy, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property(copy, nonatomic) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)copyStreamingAssetServerFieldsFromServerRecord:(id)arg1 toRecord:(id)arg2;
- (void)handleRecordUploadForRecordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(long long)arg3 signature:(id)arg4 size:(unsigned long long)arg5 paddedFileSize:(unsigned long long)arg6 uploaded:(_Bool)arg7 uploadReceipt:(id)arg8 uploadReceiptExpiration:(double)arg9 wrappedAssetKey:(id)arg10 clearAssetKey:(id)arg11 referenceSignature:(id)arg12;
- (void)handleSaveForRecordID:(id)arg1 etag:(id)arg2 creationDate:(id)arg3 modificationDate:(id)arg4 serverRecord:(id)arg5 protectionData:(id)arg6 pcsKeyID:(id)arg7 allPCSKeyIDs:(id)arg8 zoneishKeyID:(id)arg9 error:(id)arg10;
- (void)handleDeleteForRecordID:(id)arg1 error:(id)arg2;
- (void)handleRecordModificationForRecordID:(id)arg1 didProgress:(double)arg2;
- (void)handleRecordIDsInFlight:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)claimPackagesInRecord:(id)arg1 error:(id *)arg2;
- (void)performCKOperation;
- (void)_trackAssetsToUpload;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)destroyPackagesInRecords:(id)arg1;
- (void)destroyPackages:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)activityCreate;
@property(copy, nonatomic) CDUnknownBlockType recordsInFlightBlock; // @synthesize recordsInFlightBlock=_recordsInFlightBlock;
@property(copy, nonatomic) CDUnknownBlockType modifyRecordsCompletionBlock; // @synthesize modifyRecordsCompletionBlock=_modifyRecordsCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perRecordCompletionBlock; // @synthesize perRecordCompletionBlock=_perRecordCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perRecordProgressBlock; // @synthesize perRecordProgressBlock=_perRecordProgressBlock;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) id <CKModifyRecordsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKModifyRecordsOperationInfo *operationInfo; // @dynamic operationInfo;

@end
