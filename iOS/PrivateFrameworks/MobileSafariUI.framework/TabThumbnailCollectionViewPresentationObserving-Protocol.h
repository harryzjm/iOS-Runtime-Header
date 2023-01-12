//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class UIView;
@protocol TabThumbnailCollectionView;

@protocol TabThumbnailCollectionViewPresentationObserving <NSObject>

@optional
- (void)tabCollectionViewDidDismiss:(UIView<TabThumbnailCollectionView> *)arg1;
- (void)tabCollectionViewDidCancelDismissal:(UIView<TabThumbnailCollectionView> *)arg1;
- (void)tabCollectionViewWillDismiss:(UIView<TabThumbnailCollectionView> *)arg1;
- (void)tabCollectionViewDidPresent:(UIView<TabThumbnailCollectionView> *)arg1;
- (void)tabCollectionViewWillPresent:(UIView<TabThumbnailCollectionView> *)arg1;
@end
