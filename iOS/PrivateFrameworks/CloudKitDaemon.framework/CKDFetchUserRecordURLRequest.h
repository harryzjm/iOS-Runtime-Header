//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord;

@interface CKDFetchUserRecordURLRequest
{
    CDUnknownBlockType _recordFetchedBlock;
    CKRecord *_userRecord;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKRecord *userRecord; // @synthesize userRecord=_userRecord;
@property(copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;

@end
