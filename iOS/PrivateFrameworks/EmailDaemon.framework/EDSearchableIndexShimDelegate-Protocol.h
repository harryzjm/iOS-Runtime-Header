//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class NSArray;
@protocol EDSearchIndexable;

@protocol EDSearchableIndexShimDelegate <NSObject>
- (void)searchableIndex:(id <EDSearchIndexable>)arg1 reindexSearchableItemsWithIdentifiers:(NSArray *)arg2 acknowledgementHandler:(void (^)(void))arg3;
- (void)searchableIndex:(id <EDSearchIndexable>)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(void (^)(void))arg2;
@end
