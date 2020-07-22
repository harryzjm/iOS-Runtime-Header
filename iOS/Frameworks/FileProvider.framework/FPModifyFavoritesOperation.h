//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface FPModifyFavoritesOperation
{
    NSArray *_items;
    NSArray *_ranks;
    _Bool _isUnfavorite;
}

- (void).cxx_destruct;
- (void)mainWithExtensionProxy:(id)arg1;
- (void)presendNotifications;
- (id)initWithItemsToUnfavorite:(id)arg1;
- (id)initWithItemsToFavorite:(id)arg1 favoriteRanks:(id)arg2;
- (id)initWithItems:(id)arg1 favoriteRanks:(id)arg2 isUnfavorite:(_Bool)arg3;
- (id)replicateForItems:(id)arg1;

@end

