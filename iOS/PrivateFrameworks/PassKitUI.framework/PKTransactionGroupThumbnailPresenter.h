//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItemPresenter-Protocol.h>

@class NSCache, NSString, PKMapsSnapshotManager, PKPaymentTransactionIconGenerator, PKPeerPaymentContactResolver, PKThumbnailCollectionViewCell, UIImage;

@interface PKTransactionGroupThumbnailPresenter : NSObject <PKDashboardItemPresenter>
{
    PKPaymentTransactionIconGenerator *_iconGenerator;
    PKPeerPaymentContactResolver *_contactResolver;
    NSCache *_iconsPerMerchantCategory;
    UIImage *_mapsPlaceholderImage;
    PKMapsSnapshotManager *_snapshotManager;
    PKThumbnailCollectionViewCell *_sampleCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKMapsSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
- (id)mapsPlaceholderImage;
- (void)_updateTitleOnThumbnailCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3;
- (void)_updateAvatarOnThumbnailCell:(id)arg1 contact:(id)arg2;
- (id)_contactKeysToFetch;
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;
- (struct CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(CDUnknownBlockType)arg5;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewCellClasses;
- (Class)itemClass;
- (double)thumbnailWidth;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
