//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDPCSKeySyncCoreAnalytics, NSArray, NSMutableArray, NSMutableDictionary;
@protocol CKModifyRecordZonesOperationCallbacks;

@interface CKDModifyRecordZonesOperation
{
    _Bool _hasZoneSaves;
    _Bool _hasZoneDeletes;
    _Bool _allowDefaultZoneSave;
    _Bool _markZonesAsUserPurged;
    _Bool _dontFetchFromServer;
    _Bool _didSynchronizeUserKeyRegistry;
    int _numZoneSaveAttempts;
    CDUnknownBlockType _saveCompletionBlock;
    CDUnknownBlockType _deleteCompletionBlock;
    NSMutableArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    NSMutableDictionary *_recordZonesByZoneID;
    NSMutableDictionary *_retryableErrorsByZoneID;
    long long _maxZoneSaveAttempts;
    NSMutableArray *_zonesWaitingOnKeyRegistrySync;
    CKDPCSKeySyncCoreAnalytics *_keySyncAnalytics;
}

+ (long long)isPredominatelyDownload;
- (void).cxx_destruct;
@property(retain, nonatomic) CKDPCSKeySyncCoreAnalytics *keySyncAnalytics; // @synthesize keySyncAnalytics=_keySyncAnalytics;
@property(retain, nonatomic) NSMutableArray *zonesWaitingOnKeyRegistrySync; // @synthesize zonesWaitingOnKeyRegistrySync=_zonesWaitingOnKeyRegistrySync;
@property(nonatomic) _Bool didSynchronizeUserKeyRegistry; // @synthesize didSynchronizeUserKeyRegistry=_didSynchronizeUserKeyRegistry;
@property(nonatomic) _Bool dontFetchFromServer; // @synthesize dontFetchFromServer=_dontFetchFromServer;
@property(nonatomic) long long maxZoneSaveAttempts; // @synthesize maxZoneSaveAttempts=_maxZoneSaveAttempts;
@property(nonatomic) int numZoneSaveAttempts; // @synthesize numZoneSaveAttempts=_numZoneSaveAttempts;
@property(nonatomic) _Bool markZonesAsUserPurged; // @synthesize markZonesAsUserPurged=_markZonesAsUserPurged;
@property(nonatomic) _Bool allowDefaultZoneSave; // @synthesize allowDefaultZoneSave=_allowDefaultZoneSave;
@property(retain, nonatomic) NSMutableDictionary *retryableErrorsByZoneID; // @synthesize retryableErrorsByZoneID=_retryableErrorsByZoneID;
@property(retain, nonatomic) NSMutableDictionary *recordZonesByZoneID; // @synthesize recordZonesByZoneID=_recordZonesByZoneID;
@property(retain, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
@property(retain, nonatomic) NSMutableArray *recordZonesToSave; // @synthesize recordZonesToSave=_recordZonesToSave;
@property(copy, nonatomic) CDUnknownBlockType deleteCompletionBlock; // @synthesize deleteCompletionBlock=_deleteCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType saveCompletionBlock; // @synthesize saveCompletionBlock=_saveCompletionBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_checkAndPrepareZones;
- (void)_fetchPCSDataForZonesFromServer:(_Bool)arg1;
- (void)_fetchPCSDataForZone:(id)arg1 fromServer:(_Bool)arg2;
- (void)_createNewPCSForZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isOperationType:(int)arg1;
- (int)operationType;
- (_Bool)_saveZonesToServer;
- (void)_handleRecordZoneDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleRecordZoneSaved:(id)arg1 responseCode:(id)arg2 serverCapabilities:(unsigned long long)arg3 expirationDate:(id)arg4 expired:(_Bool)arg5;
- (void)_sendErrorForFailedZones;
- (void)_sendCoreAnalyticsEventForKeySync;
- (void)_synchronizeUserKeyRegistryIfNeeded;
- (_Bool)supportsClearAssetEncryption;
- (id)relevantZoneIDs;
- (id)nameForState:(unsigned long long)arg1;
- (id)activityCreate;
- (_Bool)makeStateTransition;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;

// Remaining properties
@property(retain, nonatomic) id <CKModifyRecordZonesOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

