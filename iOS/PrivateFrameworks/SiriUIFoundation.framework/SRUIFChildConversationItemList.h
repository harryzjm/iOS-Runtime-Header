//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, SRUIFConversation;

@interface SRUIFChildConversationItemList : NSObject
{
    SRUIFConversation *_conversation;
    NSUUID *_parentItemIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_parentItemIdentifier) NSUUID *parentItemIdentifier; // @synthesize parentItemIdentifier=_parentItemIdentifier;
@property(readonly, nonatomic, getter=_conversation) SRUIFConversation *conversation; // @synthesize conversation=_conversation;
- (void)_addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3 asChildrenOfItemWithIdentifier:(id)arg4;
- (id)_indexPathForLastRestoredItem;
- (id)_indexPathForItemAtIndex:(long long)arg1;
- (id)_identifierOfItemAtIndex:(long long)arg1;
- (_Bool)itemIsRestoredAtIndex:(long long)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (id)identifiersForItemsAtIndexes:(id)arg1;
- (void)addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3 asChildrenOfItemAtIndex:(long long)arg4;
- (void)addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3;
- (id)itemWithIdentifier:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithConversation:(id)arg1 parentItemIdentifier:(id)arg2;

@end
