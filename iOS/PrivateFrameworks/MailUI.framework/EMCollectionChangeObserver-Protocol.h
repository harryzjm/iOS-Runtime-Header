//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailUI/NSObject-Protocol.h>

@class EMCollection, NSArray, NSDictionary;
@protocol EMCollectionItemID;

@protocol EMCollectionChangeObserver <NSObject>
- (void)collection:(EMCollection *)arg1 replacedExistingItemID:(id <EMCollectionItemID>)arg2 withNewItemID:(id <EMCollectionItemID>)arg3;
- (void)collection:(EMCollection *)arg1 deletedItemIDs:(NSArray *)arg2;
- (void)collection:(EMCollection *)arg1 changedItemIDs:(NSArray *)arg2;
- (void)collection:(EMCollection *)arg1 movedItemIDs:(NSArray *)arg2 after:(id <EMCollectionItemID>)arg3;
- (void)collection:(EMCollection *)arg1 movedItemIDs:(NSArray *)arg2 before:(id <EMCollectionItemID>)arg3;
- (void)collection:(EMCollection *)arg1 addedItemIDs:(NSArray *)arg2 after:(id <EMCollectionItemID>)arg3;
- (void)collection:(EMCollection *)arg1 addedItemIDs:(NSArray *)arg2 before:(id <EMCollectionItemID>)arg3;

@optional
- (void)collection:(EMCollection *)arg1 shouldHighlightSnippetHints:(NSDictionary *)arg2;
- (void)didFinishRemoteSearchForCollection:(EMCollection *)arg1;
- (void)didFinishRecoveryForCollection:(EMCollection *)arg1;
- (void)collectionDidFinishInitialLoad:(EMCollection *)arg1;
@end

