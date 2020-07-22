//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCKPrivateDatabase, NSArray, NSMutableArray, NSMutableDictionary;

@interface FCCKPrivateBatchedDeleteRecordsOperation
{
    _Bool _skipPreflight;
    _Bool _handleIdentityLoss;
    FCCKPrivateDatabase *_database;
    NSArray *_recordIDsToDelete;
    CDUnknownBlockType _deleteRecordsCompletionBlock;
    NSMutableArray *_remainingBatchesOfRecordIDsToDelete;
    NSMutableArray *_resultDeletedRecordIDs;
    NSMutableDictionary *_resultErrorsByRecordID;
}

@property(retain, nonatomic) NSMutableDictionary *resultErrorsByRecordID; // @synthesize resultErrorsByRecordID=_resultErrorsByRecordID;
@property(retain, nonatomic) NSMutableArray *resultDeletedRecordIDs; // @synthesize resultDeletedRecordIDs=_resultDeletedRecordIDs;
@property(retain, nonatomic) NSMutableArray *remainingBatchesOfRecordIDsToDelete; // @synthesize remainingBatchesOfRecordIDsToDelete=_remainingBatchesOfRecordIDsToDelete;
@property(copy, nonatomic) CDUnknownBlockType deleteRecordsCompletionBlock; // @synthesize deleteRecordsCompletionBlock=_deleteRecordsCompletionBlock;
@property(nonatomic) _Bool handleIdentityLoss; // @synthesize handleIdentityLoss=_handleIdentityLoss;
@property(nonatomic) _Bool skipPreflight; // @synthesize skipPreflight=_skipPreflight;
@property(copy, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property(retain, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (void)_continueModifying;
- (void)operationWillFinishWithError:(id)arg1;
- (void)resetForRetry;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end

