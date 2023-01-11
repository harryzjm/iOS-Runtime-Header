//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDaemon/CKDURLRequestPipelining-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordZoneChangesURLRequest <CKDURLRequestPipelining>
{
    _Bool _shouldFetchAssetContent;
    NSArray *_recordZoneIDs;
    NSDictionary *_configurationsByRecordZoneID;
    long long _changeTypes;
    NSSet *_desiredAssetKeys;
    CDUnknownBlockType _recordsChangedBlock;
    CDUnknownBlockType _recordDeletedBlock;
    NSMutableDictionary *_zoneIDsByRequestOperationUUID;
    NSMutableDictionary *_requestResultsByRecordZoneID;
    NSMutableDictionary *_nodeErrorsByZoneID;
    NSMutableArray *_recordResponses;
}

@property(retain, nonatomic) NSMutableArray *recordResponses; // @synthesize recordResponses=_recordResponses;
@property(retain, nonatomic) NSMutableDictionary *nodeErrorsByZoneID; // @synthesize nodeErrorsByZoneID=_nodeErrorsByZoneID;
@property(retain, nonatomic) NSMutableDictionary *requestResultsByRecordZoneID; // @synthesize requestResultsByRecordZoneID=_requestResultsByRecordZoneID;
@property(retain, nonatomic) NSMutableDictionary *zoneIDsByRequestOperationUUID; // @synthesize zoneIDsByRequestOperationUUID=_zoneIDsByRequestOperationUUID;
@property(copy, nonatomic) CDUnknownBlockType recordDeletedBlock; // @synthesize recordDeletedBlock=_recordDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordsChangedBlock; // @synthesize recordsChangedBlock=_recordsChangedBlock;
@property(retain, nonatomic) NSSet *desiredAssetKeys; // @synthesize desiredAssetKeys=_desiredAssetKeys;
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(nonatomic) long long changeTypes; // @synthesize changeTypes=_changeTypes;
@property(retain, nonatomic) NSDictionary *configurationsByRecordZoneID; // @synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID;
@property(copy, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
- (void).cxx_destruct;
- (void)requestDidComplete;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)_handleRecordChanges:(id)arg1;
- (id)generateRequestOperations;
- (_Bool)requestGETPreAuth;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (int)operationType;
@property(readonly, nonatomic) NSDictionary *resultsByRecordZoneID;
@property(readonly, nonatomic) NSDictionary *zoneErrorsByZoneID;
- (id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

