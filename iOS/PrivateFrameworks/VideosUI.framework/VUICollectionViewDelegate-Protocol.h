//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, VUICollectionView;

@protocol VUICollectionViewDelegate <UICollectionViewDelegate>

@optional
- (_Bool)collectionViewCanBecomeFocused:(VUICollectionView *)arg1;
- (void)collectionView:(VUICollectionView *)arg1 didReceiveLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(VUICollectionView *)arg1 shouldHandleLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(VUICollectionView *)arg1 didReceivePhysicalPlayForItemAtIndexPath:(NSIndexPath *)arg2;
@end
