//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSMapTable, NSMutableDictionary, NSMutableIndexSet, NSString, SKUIClientContext, SKUIGridComponent, SKUIMissingItemLoader, SKUIProductPageOverlayController, SKUIVideoImageDataConsumer;

__attribute__((visibility("hidden")))
@interface SKUIGridPageSection : SKUIStorePageSection
{
    NSMapTable *_artworkRequests;
    SKUIClientContext *_clientContext;
    _Bool _containsLockups;
    NSMapTable *_editorialLayouts;
    NSMutableIndexSet *_hiddenIconIndexSet;
    _Bool _isLandscape;
    _Bool _isPad;
    struct CGSize _lockupImageBoundingSize;
    SKUIMissingItemLoader *_missingItemLoader;
    NSString *_moreButtonTitle;
    long long _numberOfColumns;
    SKUIProductPageOverlayController *_overlayController;
    long long _overlaySourceItemIndex;
    long long _screenScale;
    NSMapTable *_lockupArtworkContexts;
    SKUIVideoImageDataConsumer *_videoImageDataConsumer;
    NSMutableDictionary *_videoPlaceholderImages;
}

- (void).cxx_destruct;
- (id)_videoThumbnailImageForVideo:(id)arg1 thumbnailSize:(struct CGSize)arg2;
- (void)_updateVisibileEditorialWithEditorialOrientation:(long long)arg1;
- (void)_showProductPageWithItem:(id)arg1 index:(long long)arg2 animated:(_Bool)arg3;
- (void)_setPositionForClickEvent:(id)arg1 withElementIndex:(long long)arg2;
- (void)_selectItem:(id)arg1 withIndex:(long long)arg2;
- (void)_reloadItemCell:(id)arg1 withLockup:(id)arg2 index:(long long)arg3;
- (void)_reloadEditorialLockupCell:(id)arg1 withLockup:(id)arg2 index:(long long)arg3;
- (id)_popSourceViewForOverlayController:(id)arg1;
- (long long)_numberOfPortraitColumnsWithGridType:(long long)arg1;
- (long long)_numberOfLandscapeColumnsWithGridType:(long long)arg1;
- (id)_newSizeToFitArtworkRequestWithArtwork:(id)arg1 mediaIndex:(long long)arg2;
- (id)_missingItemLoader;
- (double)_mediaWidthForMediaIndex:(long long)arg1 gridWidth:(double)arg2;
- (id)_mediaCellWithMedia:(id)arg1 indexPath:(id)arg2;
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (void)_loadImageForVideo:(id)arg1 thumbnailSize:(struct CGSize)arg2 loader:(id)arg3 reason:(long long)arg4;
- (void)_loadImageForItem:(id)arg1 lockupSize:(long long)arg2 loader:(id)arg3 reason:(long long)arg4;
- (id)_itemForIndex:(long long)arg1;
- (id)_itemCellWithLockups:(id)arg1 indexPath:(id)arg2;
- (double)_heightForMediaAtIndexPath:(id)arg1;
- (double)_heightForMedia:(id)arg1 width:(double)arg2;
- (double)_heightForLockupAtIndexPath:(id)arg1 gridType:(long long)arg2;
- (double)_heightForEditorialLockupAtIndexPath:(id)arg1;
- (double)_heightForEditorialLockup:(id)arg1;
- (double)_heightForEditorialAtIndexPath:(id)arg1;
- (void)_enumerateVisibleItemsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateVisibleIndexPathsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateItemsFromStartIndex:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_editorialLockupCellWithLockups:(id)arg1 indexPath:(id)arg2;
- (id)_editorialLayoutForLockup:(id)arg1;
- (id)_editorialLayoutForEditorial:(id)arg1;
- (id)_editorialCellWithEditorials:(id)arg1 indexPath:(id)arg2;
- (struct UIEdgeInsets)_contentInsetForVideoLockupIndex:(long long)arg1;
- (struct UIEdgeInsets)_contentInsetForMediaIndex:(long long)arg1;
- (id)_cellImageForItem:(id)arg1 lockupSize:(long long)arg2;
- (id)_artworkContextForLockupSize:(long long)arg1;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;
- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willHideInContext:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (long long)numberOfCells;
- (id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewDidTapVideoAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1;
- (id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUIGridComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

