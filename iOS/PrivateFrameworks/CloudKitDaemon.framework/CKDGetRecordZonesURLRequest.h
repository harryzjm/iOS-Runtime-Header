//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDGetRecordZonesURLRequest
{
    _Bool _onlyFetchPCSInfo;
    NSArray *_recordZones;
    CDUnknownBlockType _recordZoneFetchedBlock;
    NSArray *_zoneIDs;
    NSMutableDictionary *_zoneIDByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *zoneIDByRequestID; // @synthesize zoneIDByRequestID=_zoneIDByRequestID;
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
@property(copy, nonatomic) CDUnknownBlockType recordZoneFetchedBlock; // @synthesize recordZoneFetchedBlock=_recordZoneFetchedBlock;
@property(nonatomic) _Bool onlyFetchPCSInfo; // @synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo;
@property(readonly, nonatomic) NSArray *recordZones; // @synthesize recordZones=_recordZones;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (int)operationType;
- (_Bool)allowsAnonymousAccount;
- (id)initWithRecordZoneIDs:(id)arg1;

@end

