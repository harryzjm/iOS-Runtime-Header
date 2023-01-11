//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDPersistence/NSObject-Protocol.h>

@class CSSearchableItemAttributeSet, NSArray, NSDictionary;

@protocol IMDCoreSpotlightIndexer <NSObject>
+ (NSArray *)auxiliaryItemsForPrimaryAttributes:(CSSearchableItemAttributeSet *)arg1 withItem:(NSDictionary *)arg2 chat:(NSDictionary *)arg3 isReindexing:(_Bool)arg4;
+ (void)indexItem:(NSDictionary *)arg1 withChat:(NSDictionary *)arg2 isReindexing:(_Bool)arg3 metadataToUpdate:(CSSearchableItemAttributeSet *)arg4;
+ (_Bool)cancelIndexingForItem:(NSDictionary *)arg1;
@end
