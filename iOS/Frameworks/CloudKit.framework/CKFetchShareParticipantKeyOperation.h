//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKFetchShareParticipantKeyOperation
{
    NSDictionary *_baseTokensByShareID;
    NSDictionary *_childRecordIDsByShareID;
    CDUnknownBlockType _shareParticipantKeyFetchedBlock;
    CDUnknownBlockType _shareParticipantKeyCompletionBlock;
    NSArray *_shareIDs;
    NSMutableDictionary *_errorsByShareID;
}

@property(retain, nonatomic) NSMutableDictionary *errorsByShareID; // @synthesize errorsByShareID=_errorsByShareID;
@property(retain, nonatomic) NSArray *shareIDs; // @synthesize shareIDs=_shareIDs;
@property(copy, nonatomic) CDUnknownBlockType shareParticipantKeyCompletionBlock; // @synthesize shareParticipantKeyCompletionBlock=_shareParticipantKeyCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType shareParticipantKeyFetchedBlock; // @synthesize shareParticipantKeyFetchedBlock=_shareParticipantKeyFetchedBlock;
@property(retain, nonatomic) NSDictionary *childRecordIDsByShareID; // @synthesize childRecordIDsByShareID=_childRecordIDsByShareID;
@property(retain, nonatomic) NSDictionary *baseTokensByShareID; // @synthesize baseTokensByShareID=_baseTokensByShareID;
- (void).cxx_destruct;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (Class)operationInfoClass;
- (id)initWithShareIDs:(id)arg1;

@end

