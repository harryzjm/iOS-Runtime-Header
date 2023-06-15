//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSIndexPath, UICollectionView, UICollectionViewDropProposal, UIDragPreviewParameters;
@protocol UICollectionViewDropCoordinator, UIDropSession;

@protocol UICollectionViewDropDelegate <NSObject>
- (void)collectionView:(UICollectionView *)arg1 performDropWithCoordinator:(id <UICollectionViewDropCoordinator>)arg2;

@optional
- (UIDragPreviewParameters *)collectionView:(UICollectionView *)arg1 dropPreviewParametersForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 dropSessionDidEnd:(id <UIDropSession>)arg2;
- (void)collectionView:(UICollectionView *)arg1 dropSessionDidExit:(id <UIDropSession>)arg2;
- (UICollectionViewDropProposal *)collectionView:(UICollectionView *)arg1 dropSessionDidUpdate:(id <UIDropSession>)arg2 withDestinationIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 dropSessionDidEnter:(id <UIDropSession>)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 canHandleDropSession:(id <UIDropSession>)arg2;
@end

