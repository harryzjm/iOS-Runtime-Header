//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class EDSearchableIndex, EDSearchableIndexUpdates, EFCancelationToken, NSArray, NSDictionary, NSString;
@protocol EDIndexableItem;

@protocol EDSearchableIndexDataSource <NSObject>
- (NSDictionary *)verificationDataSamplesForSearchableIndex:(EDSearchableIndex *)arg1 count:(unsigned long long)arg2 lastVerifiedMessageID:(long long)arg3;
- (NSArray *)searchableIndex:(EDSearchableIndex *)arg1 invalidateItemsInTransactions:(NSArray *)arg2;
- (void)searchableIndex:(EDSearchableIndex *)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2;
- (NSArray *)searchableIndex:(EDSearchableIndex *)arg1 assignTransaction:(long long)arg2 updates:(EDSearchableIndexUpdates *)arg3;
- (NSArray *)childIdentifiersToRemoveFromSearchableIndex:(EDSearchableIndex *)arg1 whenRemovingParentIdentifiers:(NSArray *)arg2;
- (void)searchableIndex:(EDSearchableIndex *)arg1 willRemoveIdentifiers:(NSArray *)arg2 type:(long long)arg3;
- (void)searchableIndex:(EDSearchableIndex *)arg1 assignIndexingType:(long long)arg2 forIdentifiers:(NSArray *)arg3;
- (long long)indexingTypeForSearchableIndex:(EDSearchableIndex *)arg1 item:(id <EDIndexableItem>)arg2;
- (EDSearchableIndexUpdates *)updatesForSearchableIndex:(EDSearchableIndex *)arg1 excludingIdentifiers:(NSArray *)arg2 count:(unsigned long long)arg3 cancelationToken:(EFCancelationToken *)arg4;

@optional
- (void)searchableIndex:(EDSearchableIndex *)arg1 prepareToIndexAttachmentsForMessageWithIdentifier:(NSString *)arg2;
- (void)searchableIndex:(EDSearchableIndex *)arg1 foundAttachmentPaths:(NSArray *)arg2 forMessagePersistentID:(NSString *)arg3;
@end
