//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKRecordZoneID, NSArray, NSData, NSMutableArray, NSString;

@interface CKDFetchDatabaseChangesURLRequest : CKDURLRequest
{
    NSMutableArray *_changedZoneIDs;
    NSMutableArray *_deletedZoneIDs;
    NSMutableArray *_purgedZoneIDs;
    NSMutableArray *_encryptedDataResetDeletedZoneIDs;
    unsigned long long _resultsLimit;
    NSData *_serverChangeTokenData;
    long long _status;
    CDUnknownBlockType _zoneChangedBlock;
    CDUnknownBlockType _zoneDeletedBlock;
    CDUnknownBlockType _zonePurgedBlock;
    CDUnknownBlockType _zoneDeletedDueToEncryptedDataResetBlock;
    CDUnknownBlockType _anonymousShareProcessingBlock;
    CKRecordZoneID *_recordZoneID;
    NSData *_previousServerChangeTokenData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *previousServerChangeTokenData; // @synthesize previousServerChangeTokenData=_previousServerChangeTokenData;
@property(retain, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
@property(copy, nonatomic) CDUnknownBlockType anonymousShareProcessingBlock; // @synthesize anonymousShareProcessingBlock=_anonymousShareProcessingBlock;
@property(copy, nonatomic) CDUnknownBlockType zoneDeletedDueToEncryptedDataResetBlock; // @synthesize zoneDeletedDueToEncryptedDataResetBlock=_zoneDeletedDueToEncryptedDataResetBlock;
@property(copy, nonatomic) CDUnknownBlockType zonePurgedBlock; // @synthesize zonePurgedBlock=_zonePurgedBlock;
@property(copy, nonatomic) CDUnknownBlockType zoneDeletedBlock; // @synthesize zoneDeletedBlock=_zoneDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType zoneChangedBlock; // @synthesize zoneChangedBlock=_zoneChangedBlock;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSArray *encryptedDataResetDeletedZoneIDs; // @synthesize encryptedDataResetDeletedZoneIDs=_encryptedDataResetDeletedZoneIDs;
@property(retain, nonatomic) NSData *serverChangeTokenData; // @synthesize serverChangeTokenData=_serverChangeTokenData;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(readonly, nonatomic) NSArray *purgedZoneIDs; // @synthesize purgedZoneIDs=_purgedZoneIDs;
@property(readonly, nonatomic) NSArray *deletedZoneIDs; // @synthesize deletedZoneIDs=_deletedZoneIDs;
@property(readonly, nonatomic) NSArray *changedZoneIDs; // @synthesize changedZoneIDs=_changedZoneIDs;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (_Bool)requiresCKAnonymousUserIDs;
- (_Bool)allowsAnonymousAccount;
- (id)initWithOperation:(id)arg1 previousServerChangeTokenData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

