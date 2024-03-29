//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CKDDecryptRecordsOperation
{
    _Bool _forcePCSDecrypt;
    _Bool _started;
    _Bool _markedToFinish;
    NSMutableArray *_outstandingDecryptions;
    NSObject<OS_dispatch_group> *_recordDecryptGroup;
    NSObject<OS_dispatch_queue> *_recordDecryptQueue;
    unsigned long long _maxUnwrapAttempts;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // @synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID;
@property(nonatomic) unsigned long long maxUnwrapAttempts; // @synthesize maxUnwrapAttempts=_maxUnwrapAttempts;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recordDecryptQueue; // @synthesize recordDecryptQueue=_recordDecryptQueue;
@property(getter=isMarkedToFinish) _Bool markedToFinish; // @synthesize markedToFinish=_markedToFinish;
@property(getter=isStarted) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *recordDecryptGroup; // @synthesize recordDecryptGroup=_recordDecryptGroup;
@property(retain, nonatomic) NSMutableArray *outstandingDecryptions; // @synthesize outstandingDecryptions=_outstandingDecryptions;
@property(nonatomic) _Bool forcePCSDecrypt; // @synthesize forcePCSDecrypt=_forcePCSDecrypt;
- (_Bool)supportsClearAssetEncryption;
- (void)main;
- (id)_possiblyWrapError:(id)arg1 forRecordWithID:(id)arg2 withCode:(long long)arg3 format:(id)arg4;
- (void)_finishDecryptOperation;
- (void)finishDecryption;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)_unwrapEncryptedPropertiesOnRecord:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)_unwrapEncryptedPropertiesForRecordValueStore:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)_unwrapMergeableRecordValue:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(struct _OpaquePCSShareProtection *)arg4;
- (id)_unwrapPackageAssets:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(struct _OpaquePCSShareProtection *)arg4;
- (id)_unwrapAssetKeyForAsset:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(struct _OpaquePCSShareProtection *)arg4;
- (void)_handleProtectionDataForRecordInfo:(id)arg1;
- (void)_handleShareProtectionDataForRecordInfo:(id)arg1;
- (id)_decryptRecordPCSForRecord:(id)arg1 usingChainPCS:(id)arg2;
- (id)_decryptRecordPCSForRecord:(id)arg1 usingSharePCS:(id)arg2;
- (id)_decryptRecordPCSForRecord:(id)arg1 usingZonePCS:(id)arg2;
- (void)_handleZoneProtectionDataForRecordInfo:(id)arg1;
- (void)_decryptRecordInfo:(id)arg1 usingWebSharingIdentityData:(id)arg2;
- (void)_decryptRecordInfo:(id)arg1;
- (void)_clearProtectionDataForRecordInfo:(id)arg1;
- (_Bool)shouldCheckAppVersion;
- (void)_recordInfoWasDecrypted:(id)arg1 nextSteps:(CDUnknownBlockType)arg2;
- (void)decryptRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;

@end

