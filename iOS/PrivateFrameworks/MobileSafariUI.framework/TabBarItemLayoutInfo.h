//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TabBar, TabBarItem, TabBarItemView, UIView;

__attribute__((visibility("hidden")))
@interface TabBarItemLayoutInfo : NSObject
{
    TabBarItemView *_tabBarItemView;
    UIView *_itemSnapshotView;
    _Bool _canClose;
    _Bool _reordering;
    _Bool _leadingEdgeVisible;
    _Bool _trailingEdgeVisible;
    _Bool _trailingActiveItem;
    _Bool _hidesTitleText;
    _Bool _visibleInTabBar;
    _Bool _removedFromTabBar;
    TabBar *_tabBar;
    TabBarItem *_tabBarItem;
    double _titleLayoutWidth;
    double _titleAnchorAdditionalOffset;
    unsigned long long _activeAnimationCount;
    struct CGRect _frame;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long activeAnimationCount; // @synthesize activeAnimationCount=_activeAnimationCount;
@property(nonatomic, getter=isRemovedFromTabBar) _Bool removedFromTabBar; // @synthesize removedFromTabBar=_removedFromTabBar;
@property(nonatomic, getter=isVisibleInTabBar) _Bool visibleInTabBar; // @synthesize visibleInTabBar=_visibleInTabBar;
@property(nonatomic) double titleAnchorAdditionalOffset; // @synthesize titleAnchorAdditionalOffset=_titleAnchorAdditionalOffset;
@property(nonatomic) _Bool hidesTitleText; // @synthesize hidesTitleText=_hidesTitleText;
@property(nonatomic) double titleLayoutWidth; // @synthesize titleLayoutWidth=_titleLayoutWidth;
@property(nonatomic, getter=isTrailingActiveItem) _Bool trailingActiveItem; // @synthesize trailingActiveItem=_trailingActiveItem;
@property(nonatomic, getter=isTrailingEdgeVisible) _Bool trailingEdgeVisible; // @synthesize trailingEdgeVisible=_trailingEdgeVisible;
@property(nonatomic, getter=isLeadingEdgeVisible) _Bool leadingEdgeVisible; // @synthesize leadingEdgeVisible=_leadingEdgeVisible;
@property(nonatomic, getter=isReordering) _Bool reordering; // @synthesize reordering=_reordering;
@property(nonatomic) _Bool canClose; // @synthesize canClose=_canClose;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) __weak TabBarItem *tabBarItem; // @synthesize tabBarItem=_tabBarItem;
@property(readonly, nonatomic) __weak TabBar *tabBar; // @synthesize tabBar=_tabBar;
- (void)_updateHidesTitleText;
- (_Bool)_requiresViews;
@property(readonly, nonatomic) _Bool hasViews;
@property(readonly, nonatomic) TabBarItemView *tabBarItemView;
- (void)_clearViews;
- (void)_clearViewsIfNeeded;
- (void)_clearView:(id)arg1;
@property(readonly, nonatomic) UIView *viewForDragPreview;
- (id)_reusableView;
- (void)updateTabBarStyle;
- (void)updateTitleTruncation;
- (long long)_visibleEdge;
- (void)mediaStateMuteButtonTapped:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (void)itemDidUpdateMediaState;
- (void)itemDidUpdateIsPlaceholder;
- (void)itemDidUpdateIsActive;
- (void)itemDidUpdateIcon;
- (void)itemDidUpdateTitle;
- (void)dealloc;
- (id)initWithTabBar:(id)arg1 item:(id)arg2;
- (id)init;

@end
