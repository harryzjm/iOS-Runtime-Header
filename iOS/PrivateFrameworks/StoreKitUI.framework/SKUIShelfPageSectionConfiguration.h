//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKViewElementStyle, SKUIShelfLayoutData, SKUIStorePageSectionContext, SKUIViewElementLayoutContext, UICollectionView, UIColor;
@protocol SKUIShelfPageSectionConfigurationDataSource, UICollectionViewDataSource, UICollectionViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIShelfPageSectionConfiguration : NSObject
{
    long long _lockupType;
    UICollectionView *_shelfCollectionView;
    _Bool _needsShelfCollectionViewReload;
    _Bool _needsShelfCollectionViewLayout;
    _Bool _rendersWithParallax;
    _Bool _rendersWithPerspective;
    _Bool _topSection;
    _Bool _wantsZoomingShelfLayout;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    id <SKUIShelfPageSectionConfigurationDataSource> _dataSource;
    SKUIStorePageSectionContext *_pageSectionContext;
    long long _sectionIndex;
    UIColor *_shelfCollectionViewBackgroundColor;
    id <UICollectionViewDataSource> _shelfCollectionViewDataSource;
    id <UICollectionViewDelegate> _shelfCollectionViewDelegate;
    SKUIShelfLayoutData *_shelfLayoutData;
    IKViewElementStyle *_shelfViewElementStyle;
    double _zoomingShelfLayoutFocusedItemHorizontalCenterOffset;
    double _zoomingShelfLayoutInterItemSpacing;
    double _zoomingShelfLayoutItemWidth;
    double _zoomingShelfLayoutScaledItemWidth;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double zoomingShelfLayoutScaledItemWidth; // @synthesize zoomingShelfLayoutScaledItemWidth=_zoomingShelfLayoutScaledItemWidth;
@property(readonly, nonatomic) double zoomingShelfLayoutItemWidth; // @synthesize zoomingShelfLayoutItemWidth=_zoomingShelfLayoutItemWidth;
@property(readonly, nonatomic) double zoomingShelfLayoutInterItemSpacing; // @synthesize zoomingShelfLayoutInterItemSpacing=_zoomingShelfLayoutInterItemSpacing;
@property(readonly, nonatomic) double zoomingShelfLayoutFocusedItemHorizontalCenterOffset; // @synthesize zoomingShelfLayoutFocusedItemHorizontalCenterOffset=_zoomingShelfLayoutFocusedItemHorizontalCenterOffset;
@property(readonly, nonatomic) _Bool wantsZoomingShelfLayout; // @synthesize wantsZoomingShelfLayout=_wantsZoomingShelfLayout;
@property(nonatomic, getter=isTopSection) _Bool topSection; // @synthesize topSection=_topSection;
@property(retain, nonatomic) IKViewElementStyle *shelfViewElementStyle; // @synthesize shelfViewElementStyle=_shelfViewElementStyle;
@property(readonly, nonatomic) SKUIShelfLayoutData *shelfLayoutData; // @synthesize shelfLayoutData=_shelfLayoutData;
@property(nonatomic) id <UICollectionViewDelegate> shelfCollectionViewDelegate; // @synthesize shelfCollectionViewDelegate=_shelfCollectionViewDelegate;
@property(nonatomic) id <UICollectionViewDataSource> shelfCollectionViewDataSource; // @synthesize shelfCollectionViewDataSource=_shelfCollectionViewDataSource;
@property(retain, nonatomic) UIColor *shelfCollectionViewBackgroundColor; // @synthesize shelfCollectionViewBackgroundColor=_shelfCollectionViewBackgroundColor;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) _Bool rendersWithPerspective; // @synthesize rendersWithPerspective=_rendersWithPerspective;
@property(nonatomic) _Bool rendersWithParallax; // @synthesize rendersWithParallax=_rendersWithParallax;
@property(retain, nonatomic) SKUIStorePageSectionContext *pageSectionContext; // @synthesize pageSectionContext=_pageSectionContext;
@property(nonatomic) _Bool needsShelfCollectionViewLayout; // @synthesize needsShelfCollectionViewLayout=_needsShelfCollectionViewLayout;
@property(nonatomic) _Bool needsShelfCollectionViewReload; // @synthesize needsShelfCollectionViewReload=_needsShelfCollectionViewReload;
@property(nonatomic) __weak id <SKUIShelfPageSectionConfigurationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SKUIViewElementLayoutContext *cellLayoutContext; // @synthesize cellLayoutContext=_cellLayoutContext;
- (void)_updateShelfLayoutDataContentInset;
- (id)_styledShelfCollectionViewLayoutForExistingLayout:(id)arg1;
- (id)_shelfItemViewElementAtIndex:(long long)arg1;
- (id)_reloadShelfLayoutDataWithNumberOfShelfItems:(long long)arg1;
- (double)_perspectiveHeightForContentSize:(double)arg1;
- (Class)_lockupCellClassWithLockup:(id)arg1;
- (id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (double)_columnSpacingForShelfItemViewElements:(id)arg1;
- (Class)_cellClassForEffectiveShelfItemViewElement:(id)arg1;
- (_Bool)supportsDuplicateShelfItems;
- (void)shelfItemsCollectionView:(id)arg1 willApplyLayoutAttributes:(id)arg2 forViewElement:(id)arg3 withItemIndex:(long long)arg4;
- (struct UIEdgeInsets)sectionContentInsetAdjustedFromValue:(struct UIEdgeInsets)arg1 forShelfViewElement:(id)arg2 withSectionIndex:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)requestCellLayoutForViewElement:(id)arg1 withColumnWidth:(double)arg2;
- (void)reloadShelfLayoutDataForShelfViewElement:(id)arg1 withShelfItemViewElements:(id)arg2 requestCellLayouts:(_Bool)arg3 numberOfShelfItems:(long long)arg4;
- (void)reloadLockupTypeForShelfViewElement:(id)arg1;
- (void)registerReusableClassesForCollectionView:(id)arg1;
- (_Bool)prefetchResourcesForShelfItemViewElement:(id)arg1 reason:(long long)arg2;
- (long long)numberOfSectionCells;
- (unsigned long long)numberOfCellsForNumberOfShelfItems:(unsigned long long)arg1;
- (id)normalizedShelfItemIndexPathFromActualIndexPath:(id)arg1 numberOfShelfItems:(unsigned long long)arg2;
- (long long)lockupTypeForLockup:(id)arg1;
- (id)effectiveViewElementForShelfItemViewElement:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (id)cellForShelfItemViewElement:(id)arg1 indexPath:(id)arg2;
- (struct CGSize)cellSizeForShelfViewElement:(id)arg1 indexPath:(id)arg2 numberOfShelfItems:(long long)arg3;
- (id)cellForShelfViewElement:(id)arg1 indexPath:(id)arg2;
- (id)backgroundColorForShelfViewElement:(id)arg1;
- (id)actualIndexPathOfShelfItemClosestToVisibleBoundsForNormalizedIndexPath:(id)arg1 numberOfShelfItems:(unsigned long long)arg2;
@property(readonly, nonatomic) UICollectionView *shelfCollectionView;
@property(readonly, nonatomic) unsigned long long numberOfIterations;
@property(readonly, nonatomic) UICollectionView *existingShelfCollectionView;

@end

