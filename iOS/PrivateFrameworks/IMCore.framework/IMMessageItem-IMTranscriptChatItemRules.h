//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMMessageItem.h>

@interface IMMessageItem (IMTranscriptChatItemRules)
- (_Bool)isExtensibleMessageWithPluginPayload:(id *)arg1;
- (id)_service;
- (id)_newChatItemsWithFilteredChat:(_Bool)arg1 isBusiness:(_Bool)arg2 parentChatIsSpam:(_Bool)arg3 hasKnownParticipants:(_Bool)arg4;
- (id)_newChatItems;
- (_Bool)_hasMessageChatItem;
@end

