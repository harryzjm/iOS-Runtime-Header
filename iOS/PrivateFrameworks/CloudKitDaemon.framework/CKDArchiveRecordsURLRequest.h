//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDArchiveRecordsURLRequest
{
    CDUnknownBlockType _recordArchivedBlock;
    NSMutableDictionary *_zoneIDToRecordIDs;
    NSMutableDictionary *_recordZoneIDByRequestID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID; // @synthesize recordZoneIDByRequestID=_recordZoneIDByRequestID;
@property(retain, nonatomic) NSMutableDictionary *zoneIDToRecordIDs; // @synthesize zoneIDToRecordIDs=_zoneIDToRecordIDs;
@property(copy, nonatomic) CDUnknownBlockType recordArchivedBlock; // @synthesize recordArchivedBlock=_recordArchivedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (id)initWithOperation:(id)arg1 recordIDsToArchive:(id)arg2;

@end
