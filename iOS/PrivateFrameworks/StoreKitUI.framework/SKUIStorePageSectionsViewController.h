//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewController.h"

@class NSArray, NSIndexPath, NSMapTable, NSMutableArray, NSMutableIndexSet, NSNumber, NSString, SKUICollectionView, SKUIColorScheme, SKUIIndexBarControl, SKUILayoutCache, SKUIMetricsController, SKUIMetricsImpressionSession, SKUIProductPageOverlayController, SKUIResourceLoader, SKUIStackedBar, SKUIStorePageSplitsDescription, UICollectionView, UIRefreshControl, UITapGestureRecognizer, UIView;
@protocol SKUICollectionViewPullToRefreshDelegate, SKUIStorePageSectionsDelegate, UIViewControllerPreviewing;

__attribute__((visibility("hidden")))
@interface SKUIStorePageSectionsViewController : SKUIViewController
{
    SKUIProductPageOverlayController *_activeOverlayController;
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;
    SKUICollectionView *_collectionView;
    UITapGestureRecognizer *_collectionViewTapGestureRecognizer;
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets _contentInsetAdjustments;
    id _deferredSplitsDescription;
    id <SKUIStorePageSectionsDelegate> _delegate;
    _Bool _delegateWantsDidScroll;
    _Bool _delegateWantsWillScrollToOffsetVisibleRange;
    _Bool _didInitialReload;
    NSMapTable *_entityProviderToRelevantSections;
    NSMapTable *_expandSectionContexts;
    NSMutableIndexSet *_expandInsertSections;
    NSMutableIndexSet *_expandRemoveSections;
    long long _ignoreSectionsChangeCount;
    SKUIIndexBarControl *_indexBarControl;
    NSIndexPath *_indexPathOfEditedCell;
    NSArray *_initialOverlayURLs;
    NSNumber *_lastKnownWidth;
    long long _layoutStyle;
    NSMapTable *_menuSectionContexts;
    SKUIMetricsController *_metricsController;
    SKUIProductPageOverlayController *_overlayController;
    long long _pinningTransitionStyle;
    id <UIViewControllerPreviewing> _viewControllerPreviewing;
    id <SKUICollectionViewPullToRefreshDelegate> _pullToRefreshDelegate;
    UIRefreshControl *_refreshControl;
    _Bool _rendersWithParallax;
    _Bool _rendersWithPerspective;
    SKUIResourceLoader *_resourceLoader;
    _Bool _scrollOffsetHasChanged;
    NSMutableArray *_sections;
    SKUIStorePageSplitsDescription *_splitsDescription;
    UIView *_splitsDividerView;
    SKUIStackedBar *_stackedBar;
    SKUILayoutCache *_textLayoutCache;
    long long _lastInterfaceOrientation;
    _Bool _itemsChangedStateWhileDisappeared;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (_Bool)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
@property(retain, nonatomic) SKUIIndexBarControl *indexBarControl; // @synthesize indexBarControl=_indexBarControl;
@property(retain, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <SKUICollectionViewPullToRefreshDelegate> pullToRefreshDelegate; // @synthesize pullToRefreshDelegate=_pullToRefreshDelegate;
@property(nonatomic) long long pinningTransitionStyle; // @synthesize pinningTransitionStyle=_pinningTransitionStyle;
@property(retain, nonatomic) SKUIMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(nonatomic) __weak id <SKUIStorePageSectionsDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) SKUIMetricsImpressionSession *activeMetricsImpressionSession; // @synthesize activeMetricsImpressionSession=_activeMetricsImpressionSession;
- (void)_updateSectionsAfterMenuChange;
- (void)_updateCollectionViewWithUpdates:(CDUnknownBlockType)arg1;
- (void)_unregisterForNotificationsForEntityProvider:(id)arg1;
- (id)_textLayoutCache;
- (id)_splitForSectionIndex:(long long)arg1;
- (void)_setPageSize:(struct CGSize)arg1;
- (void)_scrollFirstAppearanceSectionToView;
- (void)_reloadRelevantEntityProviders;
- (void)_reloadCollectionView;
- (void)_registerForNotificationsForEntityProvider:(id)arg1;
- (id)_prepareLayoutForSections;
- (void)_prefetchArtworkForVisibleSections;
- (id)_newStorePageCollectionViewLayout;
- (id)_newSectionsWithPageComponents:(id)arg1;
- (id)_newSectionsWithPageComponent:(id)arg1;
- (id)_newSectionContext;
- (id)_menuContextForMenuComponent:(id)arg1;
- (id)_expandContextForMenuComponent:(id)arg1;
- (void)_invalidateLayoutWithNewSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (void)_invalidateIfLastKnownWidthChanged;
- (void)_enumerateVisibleSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSectionContextsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_endAllPendingActiveImpression;
- (void)_deselectCellsForAppearance:(_Bool)arg1;
- (id)_defaultSectionForSwooshComponent:(id)arg1;
- (id)_defaultSectionForGridComponent:(id)arg1;
- (id)_currentBackdropGroupName;
- (id)_createSectionsForExpandPageComponent:(id)arg1 context:(id)arg2 newSections:(id)arg3 sectionCount:(long long)arg4 sectionsByViewElement:(id)arg5 updateStyle:(long long)arg6;
- (id)_collectionViewSublayouts;
- (id)_childSectionsForMenuComponent:(id)arg1 selectedIndex:(long long)arg2;
- (void)_beginActiveImpressionsForImpressionableViewElements;
- (void)_applyColorScheme:(id)arg1 toIndexBarControl:(id)arg2;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (void)_handleTap:(id)arg1;
- (id)_impressionableViewElements;
- (id)_visibleMetricsImpressionsString;
- (void)_updateSectionsForIndex:(long long)arg1 menuSection:(id)arg2;
- (void)_setSelectedIndex:(long long)arg1 forMenuSection:(id)arg2;
- (void)_setRendersWithParallax:(_Bool)arg1;
- (void)_setRendersWithPerspective:(_Bool)arg1;
- (void)_setActiveProductPageOverlayController:(id)arg1;
- (void)_pageSectionDidDismissOverlayController:(id)arg1;
- (void)_insertSectionsWithComponents:(id)arg1 afterSection:(id)arg2;
- (void)_endIgnoringSectionChanges;
- (void)_beginIgnoringSectionChanges;
- (void)_contentSizeChangeNotification:(id)arg1;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)skuiCollectionViewWillLayoutSubviews:(id)arg1;
- (void)itemCollectionView:(id)arg1 didTapVideoForCollectionViewCell:(id)arg2;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 performDefaultActionForViewElement:(id)arg2 indexPath:(id)arg3;
- (void)collectionView:(id)arg1 expandEditorialForLabelElement:(id)arg2 indexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 withClickInfo:(id)arg3 forItemAtIndexPath:(id)arg4;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)performTestWithName:(id)arg1 options:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)indexPathsForGradientItemsInCollectionView:(id)arg1 layout:(id)arg2;
- (id)indexPathsForPinningItemsInCollectionView:(id)arg1 layout:(id)arg2;
- (void)collectionView:(id)arg1 willBeginEditingItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningTransitionStyleForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningGroupForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningStyleForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 pinningContentInsetForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndEditingItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canScrollCellAtIndexPath:(id)arg2;
- (id)backgroundColorForSection:(long long)arg1;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)collectionView:(id)arg1 editorialView:(id)arg2 didSelectLink:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)skui_viewWillAppear:(_Bool)arg1;
- (void)_longPressAction:(id)arg1;
- (void)_startRefresh:(id)arg1;
- (void)setUsePullToRefresh:(_Bool)arg1;
- (id)SKUIStackedBar;
- (void)showOverlayWithProductPage:(id)arg1 metricsPageEvent:(id)arg2;
- (void)setSKUIStackedBar:(id)arg1;
- (void)setSectionsWithSplitsDescription:(id)arg1;
- (void)setSectionsWithPageComponents:(id)arg1;
- (void)reloadSections:(id)arg1;
@property(readonly, nonatomic, getter=isDisplayingOverlays) _Bool displayingOverlays;
- (void)invalidateAndReload;
- (void)dismissOverlays;
- (id)defaultSectionForComponent:(id)arg1;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayoutStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

