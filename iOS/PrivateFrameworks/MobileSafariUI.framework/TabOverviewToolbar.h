//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class BarButton, NSString, UISearchBar, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface TabOverviewToolbar : UIView
{
    BarButton *_addTabButton;
    UIVisualEffectView *_background;
    BarButton *_cancelSearchButton;
    UIView *_contentContainer;
    BarButton *_doneButton;
    _Bool _needsResizeItems;
    double _searchBarMinimumWidth;
    BarButton *_sidebarButton;
    BarButton *_tabGroupButton;
    double _tabGroupButtonPreferredWidth;
    UIView *_toolbarSeparator;
    _Bool _backgroundHidden;
    _Bool _contentBorrowed;
    _Bool _shouldReserveSpaceForSidebarButton;
    long long _placement;
    double _searchBarLeadingMargin;
    UISearchBar *_searchBar;
    long long _tabGroupButtonDisplayStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long tabGroupButtonDisplayStyle; // @synthesize tabGroupButtonDisplayStyle=_tabGroupButtonDisplayStyle;
@property(nonatomic) _Bool shouldReserveSpaceForSidebarButton; // @synthesize shouldReserveSpaceForSidebarButton=_shouldReserveSpaceForSidebarButton;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) double searchBarLeadingMargin; // @synthesize searchBarLeadingMargin=_searchBarLeadingMargin;
@property(nonatomic) long long placement; // @synthesize placement=_placement;
@property(readonly, nonatomic) _Bool contentBorrowed; // @synthesize contentBorrowed=_contentBorrowed;
@property(nonatomic, getter=isBackgroundHidden) _Bool backgroundHidden; // @synthesize backgroundHidden=_backgroundHidden;
- (void)capsuleCollectionView:(id)arg1 relinquishToolbarContentView:(id)arg2;
- (double)capsuleCollectionView:(id)arg1 heightForToolbarContentView:(id)arg2;
- (id)toolbarContentViewForCapsuleCollectionView:(id)arg1;
- (id)snapshotBarContentsAfterScreenUpdates:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)resolvedTintColorForBarButton:(long long)arg1;
- (struct CGRect)rectForBarButton:(long long)arg1;
- (void)removeInteraction:(id)arg1 fromBarButton:(long long)arg2;
- (void)addInteraction:(id)arg1 toBarButton:(long long)arg2;
- (void)removePrimaryAction:(id)arg1 forBarButton:(long long)arg2;
- (void)addPrimaryAction:(id)arg1 forBarButton:(long long)arg2;
- (void)setShowingSearchCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)barButtonIsHidden:(long long)arg1;
- (void)setBarButton:(long long)arg1 hidden:(_Bool)arg2;
- (_Bool)barButtonIsEnabled:(long long)arg1;
- (void)setBarButton:(long long)arg1 enabled:(_Bool)arg2;
- (void)setTabGroupButtonConfiguration:(id)arg1;
- (void)setTabGroupButtonTitle:(id)arg1;
- (id)menuForBarButton:(long long)arg1;
- (void)setMenu:(id)arg1 forBarButton:(long long)arg2;
- (id)_buttonForBarButton:(long long)arg1;
- (_Bool)_canDisplaySearchBarAndSidebarButton;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_resizeItemsIfNeeded;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_layoutForBottomPlacement;
- (void)_layoutForTopPlacement;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

