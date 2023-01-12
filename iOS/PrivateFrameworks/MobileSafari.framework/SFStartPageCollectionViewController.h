//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMapTable, NSString, SFSectionModel, UICollectionView, UICollectionViewDiffableDataSource, UIScrollView, UITapGestureRecognizer, UIView, UIVisualEffectView;
@protocol SFStartPageCollectionDataSource, SFStartPageCollectionDelegate><SFStartPagePreviewProviding, SFStartPageVisualStyleProviding;

__attribute__((visibility("hidden")))
@interface SFStartPageCollectionViewController : UIViewController
{
    SFSectionModel *_cachedCustomizationSection;
    UICollectionViewDiffableDataSource *_collectionDataSource;
    UICollectionView *_collectionView;
    _Bool _hasActiveDrag;
    _Bool _hasAppliedInitialSnapshot;
    _Bool _hasDeferredUpdates;
    _Bool _hasMadeFirstCommit;
    double _keyboardBottomInset;
    long long _lastLayoutOrientation;
    double _lastLayoutWidth;
    UIVisualEffectView *_navigationBarBackdrop;
    UIView *_navigationBarSeparator;
    UIVisualEffectView *_statusBarBackdrop;
    UITapGestureRecognizer *_tapToDismissGestureRecognizer;
    id <SFStartPageVisualStyleProviding> _visualStyleProvider;
    NSMapTable *_contextMenuToItemIdentifierMap;
    _Bool _displaysSectionHeaders;
    _Bool _hidesEmptyNavigationBar;
    _Bool _wantsWallpaperHiddenForCurrentBackgroundStyle;
    id <SFStartPageCollectionDataSource> _dataSource;
    id <SFStartPageCollectionDataSource> _strongDataSource;
    id <SFStartPageCollectionDelegate><SFStartPagePreviewProviding> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool wantsWallpaperHiddenForCurrentBackgroundStyle; // @synthesize wantsWallpaperHiddenForCurrentBackgroundStyle=_wantsWallpaperHiddenForCurrentBackgroundStyle;
@property(nonatomic) _Bool hidesEmptyNavigationBar; // @synthesize hidesEmptyNavigationBar=_hidesEmptyNavigationBar;
@property(nonatomic) _Bool displaysSectionHeaders; // @synthesize displaysSectionHeaders=_displaysSectionHeaders;
@property(nonatomic) __weak id <SFStartPageCollectionDelegate><SFStartPagePreviewProviding> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SFStartPageCollectionDataSource> strongDataSource; // @synthesize strongDataSource=_strongDataSource;
@property(nonatomic) __weak id <SFStartPageCollectionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (long long)_collectionView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidExit:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;
- (id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (long long)_collectionView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)_updateInteractionEnabledForView:(id)arg1;
- (void)_updateInteractionEnabled;
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;
- (void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;
- (_Bool)_canDrop;
- (_Bool)collectionView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;
- (id)_dragPreviewParametersForSourceView:(id)arg1 atIndexPath:(id)arg2;
- (id)_previewForCellAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (id)_makeCollectionViewLayout;
- (id)_layoutForSectionAtIndex:(long long)arg1 inEnvironment:(id)arg2;
- (id)_siteRowSectionLayoutForEnvironment:(id)arg1;
- (id)_richLinkSectionLayoutForEnvironment:(id)arg1;
- (id)_siteCardSectionLayoutForEnvironment:(id)arg1;
- (id)_siteIconSectionLayoutForEnvironment:(id)arg1;
- (CDStruct_4eba780f)_siteIconLayoutForEnvironment:(id)arg1 sectionInsets:(struct NSDirectionalEdgeInsets)arg2;
- (id)_bannerSectionLayoutForEnvironment:(id)arg1 includingHeader:(_Bool)arg2;
- (struct NSDirectionalEdgeInsets)_sectionContentInsets;
- (id)_toggleExpandedActionForSectionIdentifier:(id)arg1;
- (unsigned long long)_collapsedCapacityForSection:(id)arg1;
- (unsigned long long)_itemLimitForSection:(id)arg1;
- (id)_customizationSection;
- (void)cancelGestures;
- (id)_currentSnapshot;
- (void)_applyCurrentSnapshotAnimatingDifferences:(_Bool)arg1;
- (void)_configureHeader:(id)arg1 forSection:(id)arg2 atIndexPath:(id)arg3;
- (id)_collectionView:(id)arg1 supplementaryViewWithKind:(id)arg2 forIndexPath:(id)arg3;
- (void)_configureCell:(id)arg1 forIdentifier:(id)arg2 indexPath:(id)arg3;
- (id)_reuseIdentifierForCellWithIdentifier:(id)arg1 indexPath:(id)arg2;
- (void)_setUpDataSource:(id)arg1;
- (id)_sectionForIdentifier:(id)arg1;
- (id)sections;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (_Bool)_shouldShowContextMenuForCellAtIndexPath:(id)arg1 fromPoint:(struct CGPoint)arg2;
- (void)_updateCustomTopBackdrops;
- (void)reloadNavigationItemAnimated:(_Bool)arg1;
- (void)reloadSection:(id)arg1 animated:(_Bool)arg2;
- (void)reloadDataAnimatingDifferences:(_Bool)arg1;
- (void)updateCollectionViewContentInset;
- (void)updateKeyboardBottomInsetFromKeyboardFrame:(struct CGRect)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)_receivedTapToDismissGesture;
- (void)updateBackgroundStyle;
@property(readonly, nonatomic, getter=isTrackingDropSession) _Bool trackingDropSession;
- (void)_updateNavigationItemAnimated:(_Bool)arg1;
- (void)navigationBarPositionDidChange;
- (void)scrollToTop;
- (void)presentViewController:(id)arg1 fromItemWithIdentifier:(id)arg2;
- (void)configureModelWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (double)scrollDistance;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewLayoutMarginsDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewIsAppearing:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithVisualStyleProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

