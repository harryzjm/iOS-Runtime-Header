//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/NSObject-Protocol.h>

@class ECLocalMessageAction, ECMessageFlagChange, ECTransferMessageAction, ECTransferMessageActionResults, NSArray, NSData, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURL;
@protocol EDBaseMessage, EDPersistedMessage, EDReceivingAccount;

@protocol EDMessageChangeManagerSubClassMethods <NSObject>
- (_Bool)mailboxPartOfAllMail:(NSURL *)arg1;
- (_Bool)mailboxIsAllMail:(NSURL *)arg1;
- (void)messageWasAppended:(id <EDBaseMessage>)arg1;
- (void)displayErrorForTransferAction:(ECTransferMessageAction *)arg1 withResults:(ECTransferMessageActionResults *)arg2;
- (void)actionHasChangedAccount:(ECLocalMessageAction *)arg1;
- (void)checkForNewActionsInMailboxID:(long long)arg1;
- (void)setData:(NSData *)arg1 onMessage:(id <EDBaseMessage>)arg2;
- (void)setRemoteID:(NSString *)arg1 onMessageWithDatabaseID:(long long)arg2;
- (NSArray *)addLabels:(NSSet *)arg1 removeLabels:(NSSet *)arg2 toMessagesInDatabase:(NSArray *)arg3;
- (void)resetStatusCountsForMailboxWithURL:(NSURL *)arg1;
- (void)applyVIPStatus:(_Bool)arg1 toMessagesInDatabase:(NSArray *)arg2;
- (NSArray *)applyFlagChange:(ECMessageFlagChange *)arg1 toMessagesInDatabase:(NSArray *)arg2;
- (_Bool)haveCompleteMIMEForMessage:(id <EDBaseMessage>)arg1;
- (void)deletePersistedMessages:(NSArray *)arg1;
- (_Bool)persistNewMessages:(NSArray *)arg1 mailboxURL:(NSURL *)arg2 oldMessagesByNewMessage:(NSMutableDictionary *)arg3 fromSyncing:(_Bool)arg4;
- (NSDictionary *)iterateMessagesInMailboxURLs:(NSArray *)arg1 excludingMessages:(NSArray *)arg2 batchSize:(unsigned long long)arg3 returnMessagesForFlagChange:(ECMessageFlagChange *)arg4 handler:(void (^)(NSArray *))arg5;
- (NSArray *)messagesForRemoteIDs:(NSArray *)arg1 mailboxURL:(NSURL *)arg2;
- (id <EDPersistedMessage>)messageForDatabaseID:(long long)arg1;
- (id <EDReceivingAccount>)accountForMailboxURL:(NSURL *)arg1;
- (long long)mailboxDatabaseIDForURL:(NSURL *)arg1;
@end

