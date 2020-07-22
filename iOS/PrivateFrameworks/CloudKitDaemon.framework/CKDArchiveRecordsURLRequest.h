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

@property(retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID; // @synthesize recordZoneIDByRequestID=_recordZoneIDByRequestID;
@property(retain, nonatomic) NSMutableDictionary *zoneIDToRecordIDs; // @synthesize zoneIDToRecordIDs=_zoneIDToRecordIDs;
@property(copy, nonatomic) CDUnknownBlockType recordArchivedBlock; // @synthesize recordArchivedBlock=_recordArchivedBlock;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (int)operationType;
- (id)initWithRecordIDsToArchive:(id)arg1;

@end
