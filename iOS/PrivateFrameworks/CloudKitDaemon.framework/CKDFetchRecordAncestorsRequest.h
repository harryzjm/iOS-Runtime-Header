//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordAncestorsRequest
{
    CDUnknownBlockType _ancestorFetchedBlock;
    CDUnknownBlockType _shareRecordFetchedBlock;
    NSArray *_recordIDs;
    NSMutableDictionary *_recordIDByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *recordIDByRequestID; // @synthesize recordIDByRequestID=_recordIDByRequestID;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(copy, nonatomic) CDUnknownBlockType shareRecordFetchedBlock; // @synthesize shareRecordFetchedBlock=_shareRecordFetchedBlock;
@property(copy, nonatomic) CDUnknownBlockType ancestorFetchedBlock; // @synthesize ancestorFetchedBlock=_ancestorFetchedBlock;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (int)operationType;
- (id)initWithRecordIDs:(id)arg1;

@end

