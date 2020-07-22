//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDuet/NSObject-Protocol.h>

@class CSSearchableItem, CSUserAction, NSArray, NSDate, NSString;

@protocol SpotlightReceiver <NSObject>

@optional
- (void)deleteAllInteractionsWithBundleID:(NSString *)arg1 protectionClass:(NSString *)arg2;
- (void)deleteInteractionsWithGroupIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3;
- (void)deleteInteractionsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3;
- (void)addInteractions:(NSArray *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3;
- (NSArray *)supportedINIntentClassNames;
- (void)addUserAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2;
- (void)purgeSearchableItemsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)deleteSearchableItemsSinceDate:(NSDate *)arg1 bundleID:(NSString *)arg2;
- (void)deleteAllSearchableItemsWithBundleID:(NSString *)arg1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)addOrUpdateSearchableItems:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (NSArray *)supportedBundleIDs;
- (NSArray *)supportedContentTypes;
@end

