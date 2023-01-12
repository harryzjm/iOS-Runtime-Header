//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocs/NSObject-Protocol.h>

@class NSArray;

@protocol BRItemCollectionGathererDelegate <NSObject>
- (void)itemCollectionGathererDidReceiveUpdates:(NSArray *)arg1 deleteItemsWithIDs:(NSArray *)arg2;
- (void)itemCollectionGathererReloadedItems:(NSArray *)arg1;
- (void)itemCollectionGathererGatheredItems:(NSArray *)arg1;
- (void)itemCollectionGathererFinishedGathering;
@end

