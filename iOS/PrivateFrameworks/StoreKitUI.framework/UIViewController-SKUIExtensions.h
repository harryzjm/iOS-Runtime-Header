//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class SKUIScrollingSegmentedController, SKUIScrollingTabBarController, SKUIStackedBar, _UIBackdropView;

@interface UIViewController (SKUIExtensions)
- (id)_SKUIView;
- (void)unregisterForPreviewing:(id)arg1;
- (id)registerForPreviewingFromSourceView:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(nonatomic) double SKUIStackedBarSplit;
@property(readonly, nonatomic) SKUIStackedBar *SKUIStackedBar;
- (void)setNeedsNestedPagingScrollViewUpdate;
@property(readonly, nonatomic) SKUIScrollingTabBarController *scrollingTabBarController;
- (void)setNeedsScrollingSegmentContentScrollViewUpdate;
@property(readonly, nonatomic) SKUIScrollingSegmentedController *scrollingSegmentedController;
@property(readonly, nonatomic) _UIBackdropView *SKUIPinnedHeaderView;
- (void)setNeedsNavigationBarAppearanceUpdate;
@end

