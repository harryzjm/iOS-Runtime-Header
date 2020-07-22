//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/NSObject-Protocol.h>

@class IMChat, IMChatItem, IMItem, NSArray, NSMutableArray;

@protocol IMChatItemRules <NSObject>
- (IMItem *)_itemWithChatItemsDeleted:(NSArray *)arg1 fromItem:(IMItem *)arg2;
- (_Bool)_shouldReloadChatItemWithAssociatedChatItems:(NSArray *)arg1 oldAssociatedChatItems:(NSArray *)arg2;
- (_Bool)_shouldReloadChatItem:(IMChatItem *)arg1 oldChatItem:(IMChatItem *)arg2;
- (void)_didProcessChatItems:(NSMutableArray *)arg1;
- (_Bool)_shouldRegenerateChatItemsForItem:(IMItem *)arg1 previousItem:(IMItem *)arg2 oldPreviousItem:(IMItem *)arg3;
- (NSArray *)_chatItemsForItem:(IMItem *)arg1 previousItem:(IMItem *)arg2;
- (IMChatItem *)_nextStaleChatItem;
- (void)_setNextStaleChatItem:(IMChatItem *)arg1;
- (NSMutableArray *)_chatItems;
- (void)_setItems:(NSArray *)arg1;
- (NSArray *)_items;
- (id)_initWithChat:(IMChat *)arg1;
@end

