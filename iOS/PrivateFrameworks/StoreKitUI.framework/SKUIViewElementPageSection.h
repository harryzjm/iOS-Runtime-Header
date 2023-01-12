//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSString, SKUICollectionViewCell, SKUIViewElementLayoutContext;
@protocol SKUIViewElementView;

__attribute__((visibility("hidden")))
@interface SKUIViewElementPageSection : SKUIStorePageSection
{
    Class _cellClass;
    struct UIEdgeInsets _cellContentInset;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    double _firstSectionTopInset;
    SKUICollectionViewCell<SKUIViewElementView> *_lastCell;
    _Bool _rendersWithPerspective;
    NSString *_reuseIdentifier;
    double _sectionBottomInset;
}

- (void).cxx_destruct;
- (_Bool)_stretchesToFitCollectionViewBounds;
- (_Bool)_showsImageReflection;
- (void)_requestCellLayout;
- (void)_reloadViewElementProperties;
@property(readonly, nonatomic) double defaultVerticalInset;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;
- (struct UIEdgeInsets)sectionContentInset;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (struct CGSize)preferredContentSize;
- (struct UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (long long)defaultItemPinningStyle;
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

