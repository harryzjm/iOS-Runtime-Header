//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSSearchableItem, CSUserAction, NSArray;

@protocol SGPortraitRequestProtocol
- (void)extractionsFromUserAction:(CSUserAction *)arg1 searchableItem:(CSSearchableItem *)arg2 completion:(void (^)(PPExtractionSet *, NSError *))arg3;
- (void)extractionsFromSearchableItems:(NSArray *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
@end
