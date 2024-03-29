//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIStorePageSection.h"

@class IKColor, NSArray, NSString, SUUIGridComponent, SUUIGridViewElementPageSectionConfiguration, SUUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SUUIGridViewElementPageSection : SUUIStorePageSection
{
    IKColor *_backgroundColor;
    SUUIViewElementLayoutContext *_cellLayoutContext;
    double _cellPaddingInteriorHorizontal;
    double _cellPaddingLeftEdgeHorizontal;
    double _cellPaddingRightEdgeHorizontal;
    SUUIGridViewElementPageSectionConfiguration *_configuration;
    _Bool _editing;
    NSArray *_indexPathsForBackgroundItems;
    long long _lastNeedsMoreCount;
    NSArray *_viewElements;
}

- (void).cxx_destruct;
- (void)_resetLayoutProperties;
- (void)_requestLayoutForCells;
- (void)_reloadViewElementProperties;
- (void)_enumerateVisibleViewElementsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_containsOnlyShelfElements;
- (id)gridViewElementPageSectionConfiguration:(id)arg1 viewElementForIndexPath:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
- (void)_setContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2;
- (struct UIEdgeInsets)sectionContentInset;
- (_Bool)requestLayoutWithReloadReason:(long long)arg1;
- (void)reloadVisibleCellsWithReason:(long long)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (long long)numberOfCells;
- (id)indexPathsForBackgroundItems;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (void)deselectItemsAnimated:(_Bool)arg1;
- (void)collectionViewWillScrollToOffset:(struct CGPoint)arg1 visibleRange:(struct SUUIIndexPathRange)arg2;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidLongPressItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)backgroundColorForSection;
- (long long)applyUpdateType:(long long)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SUUIGridComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

