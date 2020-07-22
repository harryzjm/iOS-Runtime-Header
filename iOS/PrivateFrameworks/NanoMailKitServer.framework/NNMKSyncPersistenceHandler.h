//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NNMKBatchRequestHandler, NNMKSyncController, NNMKSyncSessionController;
@protocol NNMKDeviceRegistryHolder, NNMKSyncStateManager;

@interface NNMKSyncPersistenceHandler : NSObject
{
    id <NNMKDeviceRegistryHolder> _delegate;
    id <NNMKSyncStateManager> _syncStateManager;
    NNMKSyncController *_syncController;
    NNMKBatchRequestHandler *_batchRequestHandler;
    NNMKSyncSessionController *_sessionController;
}

@property(retain, nonatomic) NNMKSyncSessionController *sessionController; // @synthesize sessionController=_sessionController;
@property(retain, nonatomic) NNMKBatchRequestHandler *batchRequestHandler; // @synthesize batchRequestHandler=_batchRequestHandler;
@property(retain, nonatomic) NNMKSyncController *syncController; // @synthesize syncController=_syncController;
@property(nonatomic) __weak id <NNMKSyncStateManager> syncStateManager; // @synthesize syncStateManager=_syncStateManager;
@property(nonatomic) __weak id <NNMKDeviceRegistryHolder> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)currentDeviceRegistry;
- (id)protoMessageFromMessage:(id)arg1;
- (id)addMessageContent:(id)arg1 forMessage:(id)arg2 mailbox:(id)arg3 isProtectedData:(_Bool)arg4;
- (id)updateMessagesFromConversation:(id)arg1 withNotifyConversationState:(_Bool)arg2 mailbox:(id)arg3;
- (id)deleteMessagesWithIds:(id)arg1 mailbox:(id)arg2;
- (id)updateMessagesStatus:(id)arg1 mailbox:(id)arg2;
- (id)addMessagesToResend:(id)arg1 mailbox:(id)arg2 isProtectedData:(_Bool)arg3;
- (id)addMoreConversationSpecificMessages:(id)arg1 conversationId:(id)arg2 mailbox:(id)arg3 isProtectedData:(_Bool)arg4;
- (id)addMoreMessages:(id)arg1 mailbox:(id)arg2 isProtectedData:(_Bool)arg3;
- (id)addMessages:(id)arg1 containsNewMessages:(_Bool)arg2 mailbox:(id)arg3;
- (id)updateMailboxListForAccount:(id)arg1 mailboxListChanged:(_Bool *)arg2;
- (void)_createDefaultMailbox:(id)arg1;
- (id)persistAccounts:(id)arg1;

@end
