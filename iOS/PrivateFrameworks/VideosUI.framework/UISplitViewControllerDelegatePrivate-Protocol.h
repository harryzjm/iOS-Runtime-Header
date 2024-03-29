//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIGestureRecognizer, UISplitViewController, UIViewController;

@protocol UISplitViewControllerDelegatePrivate

@optional
- (_Bool)_splitViewController:(UISplitViewController *)arg1 shouldDisplaySidebarWithReason:(long long)arg2;
- (void)_splitViewController:(UISplitViewController *)arg1 didChangeFromDisplayMode:(long long)arg2 toDisplayMode:(long long)arg3;
- (void)_splitViewController:(UISplitViewController *)arg1 didFinishExpandToDisplayMode:(long long)arg2;
- (void)_splitViewController:(UISplitViewController *)arg1 didEndResizingColumn:(long long)arg2;
- (void)_splitViewController:(UISplitViewController *)arg1 willBeginResizingColumn:(long long)arg2;
- (double)_splitViewController:(UISplitViewController *)arg1 constrainSupplementaryColumnWidthForResizeWidth:(double)arg2;
- (double)_splitViewController:(UISplitViewController *)arg1 constrainPrimaryColumnWidthForResizeWidth:(double)arg2;
- (_Bool)_splitViewControllerShouldRestoreResponderAfterTraitCollectionTransition:(UISplitViewController *)arg1;
- (void)_splitViewControllerInteractiveSidebarGestureDidEnd:(UISplitViewController *)arg1;
- (void)_splitViewControllerInteractiveSidebarGestureWillBegin:(UISplitViewController *)arg1;
- (_Bool)_splitViewController:(UISplitViewController *)arg1 collapseSecondaryViewController:(UIViewController *)arg2 ontoPrimaryViewController:(UIViewController *)arg3 forRestorationOfCollapsedWhileSuspendedWithPrimaryVisible:(_Bool)arg4;
- (_Bool)_splitViewControllerIsPrimaryVisible:(UISplitViewController *)arg1;
- (_Bool)_splitViewController:(UISplitViewController *)arg1 allowInteractivePresentationGesture:(UIGestureRecognizer *)arg2 inContentsOfColumn:(long long)arg3;
@end

