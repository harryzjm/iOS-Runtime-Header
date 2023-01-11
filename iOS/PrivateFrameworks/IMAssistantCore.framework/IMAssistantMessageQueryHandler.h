//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IMAssistantMessageQueryHandler
{
}

- (void)messagesMatchingMessageIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)searchMessagesWithContents:(id)arg1 messageIdentifiers:(id)arg2 notificationIdentifiers:(id)arg3 chatNames:(id)arg4 conversationIdentifiers:(id)arg5 recipients:(id)arg6 senders:(id)arg7 dateTimeRange:(id)arg8 attributes:(unsigned long long)arg9 completion:(CDUnknownBlockType)arg10;
- (id)chatsForChatNames:(id)arg1;
- (id)chatsWithGuids:(id)arg1;
- (id)chatsContainingRequiredParticipants:(id)arg1;
- (id)chatParticipantsForSPIHandles:(id)arg1;
- (id)chatParticipantForSPIHandle:(id)arg1;
- (id)messageContentsPredicate:(id)arg1;
- (id)vocabularyIdentifiersFromSpeakableStrings:(id)arg1;
- (id)spokenPhrasesForSpeakableStrings:(id)arg1;
- (id)sendersPredicate:(id)arg1;
- (id)recipientsPredicate:(id)arg1;
- (void)SPIQueryMessagesWithRowIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)SPIQueryMessagesWithGUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)SPIQueryUnreadMessages:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)SPIQueryMessagesForSenders:(id)arg1 limit:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)handlesAndServicesForPersons:(id)arg1 services:(id *)arg2;
- (void)SPIQueryMessagesForChatsWithIdentifiers:(id)arg1 services:(id)arg2 limit:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)SPIQueryMessagesForChats:(id)arg1 limit:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)serviceNamesForChats:(id)arg1;
- (id)idenfiersForChats:(id)arg1;
- (id)allIMHandlesForHandle:(id)arg1;
- (id)resolveDateTimeRange:(id)arg1;
- (_Bool)resolvePersons:(id)arg1 forIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

