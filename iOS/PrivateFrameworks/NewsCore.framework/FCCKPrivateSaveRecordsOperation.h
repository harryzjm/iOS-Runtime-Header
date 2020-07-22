//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface FCCKPrivateSaveRecordsOperation
{
    NSArray *_recordsToSave;
    long long _savePolicy;
    CDUnknownBlockType _saveRecordsCompletionBlock;
    NSArray *_resultSavedRecords;
}

@property(retain, nonatomic) NSArray *resultSavedRecords; // @synthesize resultSavedRecords=_resultSavedRecords;
@property(copy, nonatomic) CDUnknownBlockType saveRecordsCompletionBlock; // @synthesize saveRecordsCompletionBlock=_saveRecordsCompletionBlock;
@property(nonatomic) long long savePolicy; // @synthesize savePolicy=_savePolicy;
@property(copy, nonatomic) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end
