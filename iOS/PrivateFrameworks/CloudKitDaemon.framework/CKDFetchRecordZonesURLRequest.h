//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSMutableDictionary;

@interface CKDFetchRecordZonesURLRequest : CKDURLRequest
{
    _Bool _onlyFetchPCSInfo;
    NSArray *_recordZones;
    CDUnknownBlockType _recordZoneFetchedBlock;
    CDUnknownBlockType _errorFetchingAllRecordZonesBlock;
    CDUnknownBlockType _anonymousRecordZoneTuplesFetchedBlock;
    NSArray *_zoneIDs;
    NSMutableDictionary *_zoneIDByRequestID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *zoneIDByRequestID; // @synthesize zoneIDByRequestID=_zoneIDByRequestID;
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
@property(copy, nonatomic) CDUnknownBlockType anonymousRecordZoneTuplesFetchedBlock; // @synthesize anonymousRecordZoneTuplesFetchedBlock=_anonymousRecordZoneTuplesFetchedBlock;
@property(copy, nonatomic) CDUnknownBlockType errorFetchingAllRecordZonesBlock; // @synthesize errorFetchingAllRecordZonesBlock=_errorFetchingAllRecordZonesBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneFetchedBlock; // @synthesize recordZoneFetchedBlock=_recordZoneFetchedBlock;
@property(nonatomic) _Bool onlyFetchPCSInfo; // @synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo;
@property(readonly, nonatomic) NSArray *recordZones; // @synthesize recordZones=_recordZones;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (_Bool)requiresCKAnonymousUserIDs;
- (_Bool)handlesAnonymousCKUserIDPropagation;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (_Bool)allowsAnonymousAccount;
- (id)initWithOperation:(id)arg1 recordZoneIDs:(id)arg2;

@end

