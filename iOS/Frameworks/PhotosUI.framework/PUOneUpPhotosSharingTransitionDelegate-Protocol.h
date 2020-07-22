//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PUAssetReference, PUOneUpPhotosSharingTransition, UICollectionViewLayout, UIView;

@protocol PUOneUpPhotosSharingTransitionDelegate
- (void)photosSharingTransitionWillAnimateDismissal:(PUOneUpPhotosSharingTransition *)arg1;
- (void)photosSharingTransitionWillAnimatePresentation:(PUOneUpPhotosSharingTransition *)arg1;
- (UIView *)photosSharingTransitionTransitioningView:(PUOneUpPhotosSharingTransition *)arg1;
- (void)photosSharingTransition:(PUOneUpPhotosSharingTransition *)arg1 setVisibility:(_Bool)arg2 forAssetReference:(PUAssetReference *)arg3;
- (struct CGPoint)photosSharingTransition:(PUOneUpPhotosSharingTransition *)arg1 contentOffsetForAssetReference:(PUAssetReference *)arg2;
- (UICollectionViewLayout *)photosSharingTransition:(PUOneUpPhotosSharingTransition *)arg1 layoutForAssetReference:(PUAssetReference *)arg2;
@end

