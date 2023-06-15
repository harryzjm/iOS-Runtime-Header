//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailUI/MessageListItemHelperDelegate-Protocol.h>

@class MessageListThreadHelper, NSSet;
@protocol EMMessageListItem;

@protocol MessageListThreadHelperDelegate <MessageListItemHelperDelegate>
@property(readonly, copy) NSSet *expandedThreadItemIDs;
- (void)messageListThreadHelper:(MessageListThreadHelper *)arg1 didExpandMessageListItem:(id <EMMessageListItem>)arg2;
- (void)messageListThreadHelper:(MessageListThreadHelper *)arg1 didCollapseMessageListItem:(id <EMMessageListItem>)arg2;
@end

