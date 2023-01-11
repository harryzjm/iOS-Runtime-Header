//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBFolderObserver-Protocol.h>
#import <SpringBoardHome/SBIconListLayoutDelegate-Protocol.h>
#import <SpringBoardHome/SBIconListPageControlDelegate-Protocol.h>
#import <SpringBoardHome/SBIconListViewDragDelegate-Protocol.h>
#import <SpringBoardHome/SBIconScrollViewDelegate-Protocol.h>
#import <SpringBoardHome/UITextFieldDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, SBFolder, SBFolderIconImageCache, SBFolderTitleTextField, SBHIconImageCache, SBIconListModel, SBIconListPageControl, SBIconListView, SBIconPageIndicatorImageSetCache, SBIconScrollView, SBIconView, UIPanGestureRecognizer, UIScrollView, _UILegibilitySettings;
@protocol SBFolderViewDelegate, SBIconListLayoutProvider, SBIconViewProviding;

@interface SBFolderView : UIView <SBIconListPageControlDelegate, UITextFieldDelegate, SBIconListLayoutDelegate, SBIconScrollViewDelegate, SBFolderObserver, BSDescriptionProviding, SBIconListViewDragDelegate>
{
    NSMutableArray *_iconListViews;
    NSMutableSet *_scrollingDisabledReasons;
    NSMutableSet *_pageControlDisabledReasons;
    SBIconListPageControl *_pageControl;
    SBIconScrollView *_scrollView;
    SBFolderTitleTextField *_titleTextField;
    NSMutableSet *_scrollViewIsScrollingOverrides;
    NSMutableSet *_parallaxDisabledReasons;
    UIView *_scalingView;
    struct SBVisibleColumnRange _visibleColumnRange;
    struct SBFolderPredictedVisibleColumn _predictedVisibleColumn;
    _Bool _isScalingViewBorrowed;
    _Bool _wasScrolling;
    NSMutableArray *_scrollFrames;
    unsigned long long _scrollFrameCount;
    double _scrollStartContentOffset;
    long long _scrollMinimumVisiblePageIndex;
    long long _scrollMaximumVisiblePageIndex;
    unsigned long long _ignoreScrollingDidEndNotificationsCount;
    NSMutableArray *_scrollCompletionBlocks;
    NSMutableArray *_rotationCompletionBlocks;
    double _headerHeight;
    SBIconView *_cachedHiddenIconView;
    _Bool _isEditing;
    _Bool _rotating;
    _Bool _occluded;
    _Bool _hasEverBeenInAWindow;
    _Bool _suppressesEditingStateForListViews;
    _Bool _automaticallyCreatesIconListViews;
    _Bool _includesHiddenIconListPages;
    long long _currentPageIndex;
    id <SBFolderViewDelegate> _delegate;
    SBFolder *_folder;
    id <SBIconListLayoutProvider> _listLayoutProvider;
    long long _orientation;
    unsigned long long _allowedOrientations;
    id <SBIconViewProviding> _iconViewProvider;
    unsigned long long _userInterfaceLayoutDirectionHandling;
    UIView *_headerView;
    _UILegibilitySettings *_legibilitySettings;
    SBFolderIconImageCache *_folderIconImageCache;
    SBHIconImageCache *_iconImageCache;
    SBIconPageIndicatorImageSetCache *_iconPageIndicatorImageSetCache;
    UIPanGestureRecognizer *_scrollingDisabledGestureRecognizer;
}

+ (unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;
+ (unsigned long long)_pageOffsetForOffset:(double)arg1 behavior:(long long)arg2 pageWidth:(double)arg3 pageSpacing:(double)arg4 pageCount:(unsigned long long)arg5 userInterfaceLayoutDirection:(long long)arg6 fractionOfDistanceThroughPage:(double *)arg7;
+ (id)defaultIconLocation;
+ (Class)defaultIconListViewClass;
+ (Class)_scrollViewClass;
- (void).cxx_destruct;
@property(nonatomic) _Bool includesHiddenIconListPages; // @synthesize includesHiddenIconListPages=_includesHiddenIconListPages;
@property(nonatomic) _Bool automaticallyCreatesIconListViews; // @synthesize automaticallyCreatesIconListViews=_automaticallyCreatesIconListViews;
@property(nonatomic) _Bool suppressesEditingStateForListViews; // @synthesize suppressesEditingStateForListViews=_suppressesEditingStateForListViews;
@property(retain, nonatomic) SBIconListPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIPanGestureRecognizer *scrollingDisabledGestureRecognizer; // @synthesize scrollingDisabledGestureRecognizer=_scrollingDisabledGestureRecognizer;
@property(nonatomic) _Bool hasEverBeenInAWindow; // @synthesize hasEverBeenInAWindow=_hasEverBeenInAWindow;
@property(retain, nonatomic) SBIconPageIndicatorImageSetCache *iconPageIndicatorImageSetCache; // @synthesize iconPageIndicatorImageSetCache=_iconPageIndicatorImageSetCache;
@property(retain, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property(retain, nonatomic) SBFolderIconImageCache *folderIconImageCache; // @synthesize folderIconImageCache=_folderIconImageCache;
@property(nonatomic, getter=isOccluded) _Bool occluded; // @synthesize occluded=_occluded;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) unsigned long long userInterfaceLayoutDirectionHandling; // @synthesize userInterfaceLayoutDirectionHandling=_userInterfaceLayoutDirectionHandling;
@property(readonly, nonatomic) __weak id <SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
@property(nonatomic, getter=isRotating) _Bool rotating; // @synthesize rotating=_rotating;
@property(readonly, nonatomic) unsigned long long allowedOrientations; // @synthesize allowedOrientations=_allowedOrientations;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) id <SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property(retain, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property(nonatomic) __weak id <SBFolderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isScalingViewBorrowed) _Bool scalingViewBorrowed; // @synthesize scalingViewBorrowed=_isScalingViewBorrowed;
@property(readonly, nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(readonly, nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_isEditing;
- (void)_updateScrollingIfNeeded;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)willMoveToWindow:(id)arg1;
- (void)_backgroundContrastDidChange:(id)arg1;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettingsForIconListViews;
- (id)accessibilityLegibilitySettingsForRect:(struct CGRect)arg1 tintStyle:(unsigned long long)arg2;
- (id)accessibilityTintColorForRect:(struct CGRect)arg1 tintStyle:(unsigned long long)arg2;
- (void)_updateIconListLegibilitySettings;
- (void)_updateTitleLegibilitySettings;
- (id)_legibilitySettingsWithPrimaryColor:(id)arg1;
- (void)folder:(id)arg1 didMoveList:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)_noteFolderListsDidChange:(unsigned long long)arg1;
- (id)iconListView:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2;
- (void)iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2;
- (_Bool)iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3;
- (void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3;
- (void)iconListView:(id)arg1 willUseIconView:(id)arg2 forDroppingIconDragItem:(id)arg3;
- (void)iconListView:(id)arg1 performIconDrop:(id)arg2;
- (void)iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2;
- (void)iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(struct CGPoint)arg3;
- (id)iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2;
- (void)iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2;
- (_Bool)iconListView:(id)arg1 canHandleIconDropSession:(id)arg2;
- (id)iconListView:(id)arg1 animatorForRemovingIcons:(id)arg2 proposedAnimator:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)_setFolderName:(id)arg1;
- (void)pageControlDidReceiveButtonTap:(id)arg1;
- (void)pageControl:(id)arg1 didMoveCurrentPageToPage:(long long)arg2 withScrubbing:(_Bool)arg3;
- (_Bool)iconScrollView:(id)arg1 shouldSetAutoscrollContentOffset:(struct CGPoint)arg2;
- (_Bool)iconScrollView:(id)arg1 shouldSetContentOffset:(struct CGPoint *)arg2 animated:(_Bool)arg3;
- (void)iconScrollViewDidCancelTouchTracking:(id)arg1;
- (void)iconScrollViewWillCancelTouchTracking:(id)arg1;
- (struct CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(struct CGSize)arg3;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)animatesRotationForAllVisibleIconListViews;
- (void)transitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)cleanUpAfterTransition;
- (void)prepareForTransition;
- (void)prepareToOpen;
- (unsigned int)userInterfaceLayoutDirectionAwareScrollingDirection;
- (unsigned int)scrollingDirection;
- (void)_handleClippingScrollViewDidScroll:(id)arg1;
- (void)_updateHiddenIconViewForScrolling:(_Bool)arg1;
- (_Bool)_shouldManageScrolledHiddenClippedIconView;
- (id)_findHiddenIconView;
- (void)_updateScrollingState:(_Bool)arg1;
- (void)_checkIfScrollStateChanged;
- (void)removeScrollViewIsScrollingOverrideReason:(id)arg1;
- (void)addScrollViewIsScrollingOverrideReason:(id)arg1;
- (_Bool)_shouldIgnoreScrollingDidEndNotifications;
- (void)_unignoreScrollingDidEndNotifications;
- (void)_ignoreScrollingDidEndNotifications;
- (void)_markListViewsAsPurged;
- (void)noteUserIsInteractingWithIcons;
- (void)getLeadingVisiblePageIndex:(long long *)arg1 trailingVisiblePageIndex:(long long *)arg2;
- (void)validateVisibleColumnRange;
- (_Bool)isVisibleColumnRangeValid:(struct SBVisibleColumnRange)arg1;
- (void)clearVisibleColumnRange;
- (void)updateVisibleColumnRange;
- (void)updateVisibleColumnRangeWithTotalLists:(unsigned long long)arg1 columnsPerList:(unsigned long long)arg2 iconVisibilityHandling:(long long)arg3;
@property(readonly, nonatomic) _Bool updatesPredictedVisibleColumnWhileScrolling;
@property(readonly, nonatomic) long long iconVisibilityHandling;
- (void)updateIconListIndexAndVisibility:(_Bool)arg1;
- (void)updateIconListIndexAndVisibility;
@property(readonly, nonatomic) double additionalScrollWidthToKeepVisibleInOneDirection;
@property(readonly, nonatomic) unsigned long long countOfAdditionalPagesToKeepVisibleInOneDirection;
- (struct SBVisibleColumnRange)visibleColumnRangeWithTotalLists:(unsigned long long)arg1 columnsPerList:(unsigned long long)arg2 iconVisibilityHandling:(long long)arg3 predictedVisibleColumn:(struct SBFolderPredictedVisibleColumn *)arg4;
@property(readonly, nonatomic) double maximumVisibleScrollOffset;
@property(readonly, nonatomic) double minimumVisibleScrollOffset;
@property(readonly, nonatomic) double scrollableWidthForVisibleColumnRange;
- (void)_updateEditingStateAnimated:(_Bool)arg1;
- (void)layoutIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(_Bool)arg3;
- (void)resetIconListViews;
- (void)tearDownListViews;
- (id)allIconListViews;
- (id)additionalIconListViews;
@property(readonly, nonatomic) SBIconListModel *currentIconListModel;
@property(readonly, nonatomic) SBIconListView *currentIconListView;
- (id)iconListViewAtScrollPoint:(struct CGPoint)arg1;
- (id)iconListViewForDrag:(id)arg1;
- (id)iconListViewForTouch:(id)arg1;
- (id)iconListViewAtPoint:(struct CGPoint)arg1;
- (id)lastIconListView;
- (id)firstIconListView;
- (id)iconListViewForIconListModelIndex:(unsigned long long)arg1;
- (id)iconListViewForPageIndex:(long long)arg1;
- (id)iconListViewAtIndex:(unsigned long long)arg1;
- (long long)_pageIndexForOffset:(double)arg1 behavior:(long long)arg2 fractionOfDistanceThroughPage:(double *)arg3;
- (long long)_pageIndexForOffset:(double)arg1;
- (struct CGRect)_iconListFrameForPageRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (struct CGSize)_scrollViewContentSize;
- (struct CGRect)_frameForIconListAtIndex:(unsigned long long)arg1;
- (void)_updateIconListFrames;
- (struct CGSize)_iconListViewSize;
- (void)_updateIconListContainment:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_updateIconListViewsWithCurrentPageIndex:(long long)arg1 currentIconListModel:(id)arg2;
- (void)_updateIconListViewsWithCurrentIconListModel:(id)arg1;
- (void)_updateIconListViews:(long long)arg1;
- (void)updateIconListViews;
- (void)_resetIconListViews;
- (void)_addIconListViewsForModels:(id)arg1;
- (id)_createIconListViewForList:(id)arg1;
- (id)iconLocationForList:(id)arg1;
@property(readonly, copy, nonatomic) NSString *iconLocation;
- (Class)listViewClass;
- (id)_interactionTintColor;
- (void)enumerateScrollViewPageViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateIconListViewsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateIconListViewsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfIconListView:(id)arg1;
- (id)iconListViewDisplayingIconView:(id)arg1;
- (id)iconListViewWithList:(id)arg1;
- (void)_didRemoveIconListView:(id)arg1;
- (void)_removeIconListView:(id)arg1 purge:(_Bool)arg2;
- (void)_removeIconListView:(id)arg1;
- (void)_didAddIconListView:(id)arg1;
- (void)_configureIconListView:(id)arg1;
- (void)_addIconListView:(id)arg1 atEnd:(_Bool)arg2;
- (void)_addIconListView:(id)arg1;
- (void)_enableUserInteractionAfterSignificantAnimation;
- (void)_disableUserInteractionBeforeSignificantAnimation;
- (double)_titleFontSize;
- (_Bool)_showsTitle;
- (void)_precacheIconImages;
- (_Bool)_isValidIconListViewIndex:(long long)arg1;
- (_Bool)_isValidPageIndex:(long long)arg1;
- (struct SBHFloatRange)_scrollRangeForContentAtPageIndex:(long long)arg1 pageWidth:(double)arg2;
- (struct SBHFloatRange)_scrollRangeForPageAtIndex:(long long)arg1 pageWidth:(double)arg2;
- (struct SBHFloatRange)_scrollRangeForPageAtIndex:(long long)arg1;
- (struct CGPoint)_scrollOffsetForContentAtPageIndex:(long long)arg1;
- (struct CGPoint)_scrollOffsetForPageAtIndex:(long long)arg1 pageWidth:(double)arg2;
- (struct CGPoint)_scrollOffsetForPageAtIndex:(long long)arg1;
- (struct CGPoint)_scrollOffsetForFirstListView;
- (double)_pageSpacing;
- (double)_pageWidth;
- (_Bool)isPageTypeIcon:(long long)arg1;
- (unsigned long long)typeForPage:(long long)arg1;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) long long maximumPageIndex;
@property(readonly, nonatomic) long long minimumPageIndex;
- (_Bool)_hasTrailingCustomPages;
- (unsigned long long)_trailingCustomPageCount;
- (_Bool)_hasLeadingCustomPages;
- (unsigned long long)_leadingCustomPageCount;
- (_Bool)hasIconPages;
- (unsigned long long)iconPageCount;
@property(readonly, nonatomic) long long lastIconPageIndex;
@property(readonly, nonatomic) long long firstIconPageIndex;
@property(readonly, nonatomic) long long defaultPageIndex;
@property(readonly, nonatomic) double pageControlAreaHeight;
- (void)_updatePageControlNumberOfPages;
- (long long)_pageCountForPageControl;
- (double)_offsetToCenterPageControlInSpaceForPageControl;
- (_Bool)_useParallaxOnPageControl;
- (id)_newPageControl;
@property(readonly, nonatomic) double headerHeight;
- (void)_updateScalingViewFrame;
- (struct CGRect)_frameForScalingView;
- (void)_layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)minimumHomeScreenScaleDidChange;
- (void)_updateParallaxSettings;
@property(readonly, nonatomic, getter=isParallaxEnabled) _Bool parallaxEnabled;
- (void)_setParallaxDisabled:(_Bool)arg1 forReason:(id)arg2;
@property(readonly, nonatomic, getter=isRTL) _Bool RTL;
@property(readonly, nonatomic) long long userInterfaceLayoutDirection;
- (void)updateAccessibilityTintColors;
- (void)didAddSubview:(id)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
@property(readonly, nonatomic, getter=_titleTextField) SBFolderTitleTextField *titleTextField;
- (void)setContentAlpha:(double)arg1;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (void)didTransitionAnimated:(_Bool)arg1;
- (void)willTransitionAnimated:(_Bool)arg1 withSettings:(id)arg2;
- (_Bool)locationCountsAsInsideFolder:(struct CGPoint)arg1;
- (void)returnScalingView;
- (id)borrowScalingView;
- (struct CGRect)scalingViewFrame;
- (void)_willScrollToPageIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_setScrollViewContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)animateScrollToDefaultPageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetContentOffsetToCurrentPageAnimated:(_Bool)arg1;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)canChangeCurrentPageIndexToIndex:(unsigned long long)arg1;
- (_Bool)doesPageContainIconListView:(long long)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)closestIconPageIndexForPageIndex:(long long)arg1;
- (unsigned long long)iconListViewIndexForIconListModelIndex:(unsigned long long)arg1;
- (long long)pageIndexForIconListModel:(id)arg1;
- (long long)pageIndexForIconListModelIndex:(unsigned long long)arg1;
- (long long)pageIndexForIconListViewIndex:(unsigned long long)arg1;
- (unsigned long long)iconListModelIndexForPageIndex:(long long)arg1;
- (unsigned long long)iconListViewIndexForPageIndex:(long long)arg1;
@property(readonly, nonatomic) unsigned long long iconListViewCount;
@property(readonly, copy, nonatomic) NSArray *iconListViews;
- (void)_orientationDidChange:(long long)arg1;
@property(nonatomic) double pageControlAlpha;
@property(nonatomic, getter=isPageControlHidden) _Bool pageControlHidden;
- (void)_updatePageControlCurrentPage;
- (void)_updatePageControlToIndex:(long long)arg1;
- (void)_currentPageIndexDidChangeFromPageIndex:(long long)arg1;
- (void)_currentPageIndexDidChange;
- (void)_setCurrentPageIndex:(long long)arg1 deferringPageControlUpdate:(_Bool)arg2;
- (void)_setCurrentPageIndex:(long long)arg1;
- (void)scrollingDisabledGestureDidUpdate:(id)arg1;
- (void)_setScrollingDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_setPageControlDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_addScrollingCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancelScrolling;
@property(readonly, nonatomic, getter=isScrolling) _Bool scrolling;
@property(readonly, nonatomic) UIView *scalingView;
- (void)folderDidChange;
- (void)folderWillChange:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
