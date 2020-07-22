//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSTransactionLogSyncTask, NSObject;
@protocol IDSTransactionLogTaskHandlerDelegate, OS_dispatch_queue;

@interface IDSTransactionLogSyncTaskHandler
{
    IDSTransactionLogSyncTask *_syncTask;
    NSObject<OS_dispatch_queue> *_queue;
    id <IDSTransactionLogTaskHandlerDelegate> _delegate;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <IDSTransactionLogTaskHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDSTransactionLogSyncTask *syncTask; // @synthesize syncTask=_syncTask;
- (void).cxx_destruct;
- (id)_transactionMessageFromTransportMessage:(id)arg1 withDecryptedPayload:(id)arg2 accountInfo:(id)arg3;
- (id)_transactionMessageFromTransportMessage:(id)arg1 withParticipants:(id)arg2 accountInfo:(id)arg3;
- (id)_transactionMessageFromTransportMessage:(id)arg1 withGroupID:(id)arg2 groups:(id)arg3 accountInfo:(id)arg4;
- (id)_transactionMessageFromTransportMessage:(id)arg1 groups:(id)arg2 participants:(id)arg3 accountInfo:(id)arg4;
- (id)_participantsByAliasFromParticipants:(id)arg1;
- (id)_groupsByGroupIDFromGroups:(id)arg1;
- (id)_groupIDsFromMessages:(id)arg1;
- (id)_destinationsInMessages:(id)arg1;
- (void)_completeWithError:(id)arg1;
- (void)_transactionMessagesFromTransportMessages:(id)arg1 withParticipants:(id)arg2 groups:(id)arg3 accountInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)qFetchParticipantsFromDeviceMessges:(id)arg1 andGroupsFromGroupMessages:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)qIngestMessages:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)qPerformWithToken:(id)arg1;
- (void)perform;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 queue:(id)arg3;

@end

