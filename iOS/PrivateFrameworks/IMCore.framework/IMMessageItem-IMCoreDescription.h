//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMMessageItem.h>

@interface IMMessageItem (IMCoreDescription)
+ (id)displayNameForAddress:(id)arg1;
+ (_Bool)isLoginAddress:(id)arg1;
+ (id)handleForAddress:(id)arg1;
+ (id)bestAccountForAddress:(id)arg1;
+ (Class)contextClass;
+ (_Bool)isIncomingTypingOrCancelTypingMessage:(unsigned long long)arg1 isEditedMessage:(_Bool)arg2;
+ (_Bool)isTypingOrCancelTypingMessage:(unsigned long long)arg1 isEditedMessage:(_Bool)arg2;
+ (_Bool)isCancelTypingMessage:(unsigned long long)arg1 isEditedMessage:(_Bool)arg2;
+ (_Bool)isIncomingTypingMessage:(unsigned long long)arg1;
- (id)descriptionForPurpose:(long long)arg1 isGroupMessage:(_Bool)arg2 messageDataSource:(CDUnknownBlockType)arg3 attachmentDataSource:(CDUnknownBlockType)arg4;
- (id)descriptionForPurpose:(long long)arg1 isGroupMessage:(_Bool)arg2 senderDisplayName:(id)arg3 messageDataSource:(CDUnknownBlockType)arg4 attachmentDataSource:(CDUnknownBlockType)arg5;
- (id)_copyWithFlags:(unsigned long long)arg1;
- (id)_copy;
- (_Bool)_isInvitation;
- (void)_setInivtation:(_Bool)arg1;
- (id)message;
- (_Bool)isExtensibleMessageWithPluginPayload:(id *)arg1 chatContext:(id)arg2;
- (_Bool)isExtensibleMessageWithPluginPayload:(id *)arg1;
- (id)_service;
- (id)_newChatItemsWithChatContext:(id)arg1;
- (id)_newChatItems;
- (_Bool)_hasMessageChatItem;
- (_Bool)isIncomingTypingOrCancelTypingMessage;
- (_Bool)isTypingOrCancelTypingMessage;
- (_Bool)isCancelTypingMessage;
- (_Bool)isIncomingTypingMessage;
@end

