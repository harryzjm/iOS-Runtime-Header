//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol CKFetchShareParticipantKeyOperationCallbacks;

__attribute__((visibility("hidden")))
@interface CKDFetchShareParticipantKeyOperation
{
    _Bool _hasAttemptedShareUpdate;
    CDUnknownBlockType _shareParticipantKeyFetchedBlock;
    NSMutableArray *_shareIDs;
    NSDictionary *_baseTokensByShareID;
    NSDictionary *_childRecordIDsByShareID;
    NSMutableDictionary *_sharesNeedingUpdateByID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasAttemptedShareUpdate; // @synthesize hasAttemptedShareUpdate=_hasAttemptedShareUpdate;
@property(retain, nonatomic) NSMutableDictionary *sharesNeedingUpdateByID; // @synthesize sharesNeedingUpdateByID=_sharesNeedingUpdateByID;
@property(retain, nonatomic) NSDictionary *childRecordIDsByShareID; // @synthesize childRecordIDsByShareID=_childRecordIDsByShareID;
@property(retain, nonatomic) NSDictionary *baseTokensByShareID; // @synthesize baseTokensByShareID=_baseTokensByShareID;
@property(retain, nonatomic) NSMutableArray *shareIDs; // @synthesize shareIDs=_shareIDs;
@property(copy, nonatomic) CDUnknownBlockType shareParticipantKeyFetchedBlock; // @synthesize shareParticipantKeyFetchedBlock=_shareParticipantKeyFetchedBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)updateShares;
- (void)fetchSharesFromServer;
- (void)_handleFetchedShare:(id)arg1 withID:(id)arg2 error:(id)arg3;
- (id)_participantKeyFromShare:(id)arg1 withError:(id *)arg2;
- (void)_sendErrorForFailedShares;
- (void)_performCallbackForShareID:(id)arg1 withParticipantKey:(id)arg2 error:(id)arg3;
- (id)activityCreate;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) id <CKFetchShareParticipantKeyOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end
