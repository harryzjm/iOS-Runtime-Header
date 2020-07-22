//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIMissingItemDelegate-Protocol.h>
#import <StoreKitUI/UICollectionViewDataSource-Protocol.h>
#import <StoreKitUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSObject, NSString, SKUICarouselPageComponent, SKUIMissingItemLoader, SKUIProgressIndicatorViewElement, SKUIViewElementLayoutContext, UICollectionView;
@protocol OS_dispatch_source;

@interface SKUICarouselPageSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_carouselCollectionView;
    long long _cellCount;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    NSObject<OS_dispatch_source> *_cycleTimer;
    struct CGSize _itemSize;
    double _itemSpacing;
    SKUIMissingItemLoader *_missingItemLoader;
    NSArray *_modelObjects;
    _Bool _needsHeightCalculation;
    _Bool _needsReload;
    double _itemWidth;
    long long _progressIndicatorCellIndex;
    SKUIProgressIndicatorViewElement *_progressIndicatorElement;
    NSIndexPath *_reloadIndexPath;
}

- (void).cxx_destruct;
- (void)_scrollToItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)_startCycleTimerIfNecessary;
- (void)_reloadViewElementProperties;
- (void)_reloadLegacySizing;
- (id)_missingItemLoader;
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (double)_legacyItemSpacing;
- (struct CGSize)_legacyItemSize;
- (_Bool)_isItemEnabledAtIndexPath:(id)arg1;
- (_Bool)_indexPathIsProgressIndicator:(id)arg1;
- (void)_fireCycleTimer;
- (id)_dequeueCellForViewElement:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (long long)_currentPageIndex;
- (Class)_cellClassForViewElement:(id)arg1;
- (Class)_cellClassForLockup:(id)arg1;
- (id)_carouselCollectionView;
- (void)_cancelCycleTimer;
- (void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2;
- (double)_actualContentWidth;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 carouselLayout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (struct UIEdgeInsets)sectionContentInset;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (long long)numberOfCells;
- (void)invalidateCachedLayoutInformation;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (long long)defaultItemPinningStyle;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUICarouselPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

