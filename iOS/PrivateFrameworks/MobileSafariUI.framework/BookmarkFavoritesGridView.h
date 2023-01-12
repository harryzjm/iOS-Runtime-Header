//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MobileSafariUI/BookmarkFavoritesGridSectionHeaderViewDelegate-Protocol.h>
#import <MobileSafariUI/CollectionViewDelegateBookmarkFavoritesGridLayout-Protocol.h>
#import <MobileSafariUI/SiriSuggestionsCollectionViewCellDelegate-Protocol.h>
#import <MobileSafariUI/UICollectionViewDragDelegate_Private-Protocol.h>
#import <MobileSafariUI/UICollectionViewDropDelegate_Private-Protocol.h>
#import <MobileSafariUI/UIGestureRecognizerDelegate-Protocol.h>
#import <MobileSafariUI/UIScrollViewDelegate-Protocol.h>
#import <MobileSafariUI/_SFSiteIconViewUpdateObserver-Protocol.h>

@class BookmarkFavoriteViewMetrics, BookmarkFavoritesGridLayout, BookmarkFavoritesGridSectionHeaderView, NSArray, NSDictionary, NSMapTable, NSString, SiriSuggestionsCollectionViewCell, UICollectionView, UITapGestureRecognizer, _UICollectionViewDiffableDataSource;
@protocol BookmarkFavoritesGridViewDelegate;

@interface BookmarkFavoritesGridView : UIView <BookmarkFavoritesGridSectionHeaderViewDelegate, CollectionViewDelegateBookmarkFavoritesGridLayout, SiriSuggestionsCollectionViewCellDelegate, UICollectionViewDropDelegate_Private, UICollectionViewDragDelegate_Private, UIGestureRecognizerDelegate, UIScrollViewDelegate, _SFSiteIconViewUpdateObserver>
{
    double _rowHeight;
    double _previousContentViewWidth;
    struct UIEdgeInsets _contentInset;
    UITapGestureRecognizer *_tapOutsideRecognizer;
    _Bool _isShowingFavorites;
    BookmarkFavoritesGridSectionHeaderView *_favoritesHeader;
    BookmarkFavoritesGridSectionHeaderView *_frequentsHeader;
    BookmarkFavoritesGridSectionHeaderView *_siriSuggestionsHeader;
    _Bool _isEditingSiriSuggestions;
    SiriSuggestionsCollectionViewCell *_lastPannedCell;
    double _lastPannedCellStartingOffset;
    NSMapTable *_recommendationMetadataTokens;
    BookmarkFavoritesGridLayout *_collectionViewLayout;
    _UICollectionViewDiffableDataSource *_collectionViewDataSource;
    NSDictionary *_bookmarksByIdentifier;
    NSDictionary *_bookmarkFolderIDToChildCount;
    UIView *_siriSuggestionsWelcomeView;
    NSDictionary *_siriSuggestionsByIdentifier;
    long long _layoutType;
    BookmarkFavoriteViewMetrics *_favoriteViewMetrics;
    _Bool _allowsReordering;
    _Bool _hasTransparentBackground;
    _Bool _showingContextMenu;
    _Bool _showsPrivateBrowsingExplanation;
    _Bool _adjustedForSidebar;
    _Bool _presentedWithinPopover;
    NSArray *_bookmarks;
    NSArray *_frequentlyVisitedSites;
    NSArray *_siriSuggestions;
    id <BookmarkFavoritesGridViewDelegate> _delegate;
    UIView *_contentView;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic, getter=isPresentedWithinPopover) _Bool presentedWithinPopover; // @synthesize presentedWithinPopover=_presentedWithinPopover;
@property(nonatomic, getter=isAdjustedForSidebar) _Bool adjustedForSidebar; // @synthesize adjustedForSidebar=_adjustedForSidebar;
@property(nonatomic) _Bool showsPrivateBrowsingExplanation; // @synthesize showsPrivateBrowsingExplanation=_showsPrivateBrowsingExplanation;
@property(readonly, nonatomic) _Bool showingContextMenu; // @synthesize showingContextMenu=_showingContextMenu;
@property(nonatomic) _Bool hasTransparentBackground; // @synthesize hasTransparentBackground=_hasTransparentBackground;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <BookmarkFavoritesGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowsReordering; // @synthesize allowsReordering=_allowsReordering;
@property(readonly, copy, nonatomic) NSArray *siriSuggestions; // @synthesize siriSuggestions=_siriSuggestions;
@property(readonly, copy, nonatomic) NSArray *frequentlyVisitedSites; // @synthesize frequentlyVisitedSites=_frequentlyVisitedSites;
@property(readonly, copy, nonatomic) NSArray *bookmarks; // @synthesize bookmarks=_bookmarks;
- (void)siteIconViewDidUpdate:(id)arg1;
- (void)bookmarkFavoritesGridSectionHeaderView:(id)arg1 didChangeIsEditing:(_Bool)arg2;
- (void)bookmarkFavoritesGridSectionHeaderViewDidSelectShowLess:(id)arg1;
- (void)bookmarkFavoritesGridSectionHeaderViewDidSelectShowMore:(id)arg1;
- (void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidExit:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;
- (void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;
- (long long)_collectionView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (long long)_collectionView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (id)bookmarkPreviewSourceViewAtLocation:(struct CGPoint)arg1;
- (void)siriSuggestionsCollectionViewCell:(id)arg1 didSelectActionButton:(id)arg2;
- (struct CGRect)collectionView:(id)arg1 layout:(id)arg2 iconRectForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)_didSelectSiriSuggestionsWelcomeViewCloseButton;
- (void)_didTapPrivacyLabel:(id)arg1;
- (void)updateCollectionViewToCurrentStateAnimated:(_Bool)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)setScrollViewScrollsToTop:(_Bool)arg1;
@property(nonatomic, getter=isTapOutsideEnabled) _Bool tapOutsideEnabled;
- (void)_tapOutsideRecognized:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setKeyboardDismissMode:(long long)arg1;
- (void)cancelGestures;
- (void)resetScrollPosition;
@property(readonly, nonatomic) struct CGPoint contentOffset;
@property(nonatomic) struct UIEdgeInsets contentInset;
- (id)bookmarkAtLocation:(struct CGPoint)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)reloadBookmark:(id)arg1;
- (void)filterOutSiriSuggestionsWithSource:(unsigned long long)arg1;
- (void)filterOutSiriSuggestionsWithDomain:(id)arg1;
- (void)reloadSiriSuggestion:(id)arg1;
- (void)setSiriSuggestions:(id)arg1 animated:(_Bool)arg2;
- (void)setBookmarks:(id)arg1 isFavorites:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setFrequentlyVisitedSites:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
