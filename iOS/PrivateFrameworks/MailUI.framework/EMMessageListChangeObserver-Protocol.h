//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailUI/EMCollectionChangeObserver-Protocol.h>

@class EMCollection, NSArray, NSDictionary;
@protocol EMCollectionItemID;

@protocol EMMessageListChangeObserver <EMCollectionChangeObserver>
- (void)collection:(EMCollection *)arg1 addedItemIDs:(NSArray *)arg2 toThreadWithItemID:(id <EMCollectionItemID>)arg3 after:(id <EMCollectionItemID>)arg4 unreadItemIDs:(NSArray *)arg5;
- (void)collection:(EMCollection *)arg1 addedItemIDs:(NSArray *)arg2 toThreadWithItemID:(id <EMCollectionItemID>)arg3 before:(id <EMCollectionItemID>)arg4 unreadItemIDs:(NSArray *)arg5;

@optional
- (void)collection:(EMCollection *)arg1 oldestItemsUpdatedForMailboxes:(NSDictionary *)arg2;
- (void)collection:(EMCollection *)arg1 didFinishInitialLoadForThreadWithItemID:(id <EMCollectionItemID>)arg2;
- (void)collection:(EMCollection *)arg1 changedItemIDs:(NSArray *)arg2 itemIDsWithCountChanges:(NSArray *)arg3;
@end

