//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailUI/NSObject-Protocol.h>

@class NSArray, UICollectionView;

@protocol UICollectionViewDataSourcePrefetching <NSObject>
- (void)collectionView:(UICollectionView *)arg1 prefetchItemsAtIndexPaths:(NSArray *)arg2;

@optional
- (void)collectionView:(UICollectionView *)arg1 cancelPrefetchingForItemsAtIndexPaths:(NSArray *)arg2;
@end

