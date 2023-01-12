//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class INIntent, NSArray, NSData, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURL, NSUUID, SBFloatingDockViewController, SBFolder, SBFolderController, SBHAddWidgetSheetViewController, SBHCustomIconElement, SBHIconAnimationSettings, SBHIconImageCache, SBHIconManager, SBHWidget, SBHomeScreenIconTransitionAnimator, SBIcon, SBIconListModel, SBIconListView, SBIconView, SBLeafIcon, SBModalWidgetIntroductionHomeScreenPreview, SBNestingViewController, SBRootFolderController, SBRootFolderControllerConfiguration, SBRootFolderViewPageManagementLayoutManager, SBSApplicationShortcutItem, SBViewControllerTransitionContext, SBWidgetIcon, UIColor, UIStatusBar, UIStatusBarStyleRequest, UIView, UIViewController, UIViewPropertyAnimator, UIWindow, UIWindowScene, _UIContextMenuStyle;
@protocol BSInvalidatable, SBHFeatureIntroductionProviding, SBHIconRootViewProviding, SBHIconViewConfigurationInteraction, SBIconDragPreview, SBIconDragPreviewContaining, SBIconViewSnapshotProviding, SBLeafIconDataSource, SBRecycledViewsContainerProviding, SBViewControllerTransitionCoordinator, UIDragSession, UIDropSession, UIViewImplicitlyAnimating;

@protocol SBHIconManagerDelegate <NSObject>

@optional
- (NSArray *)testSetupHomeScreenForWidgetScrollPerformanceTest:(SBHIconManager *)arg1;
- (NSArray *)testSetupForIconManagerWidgetScrollTest:(SBHIconManager *)arg1;
- (NSArray *)testSetupForIconManagerAddWidgetsToEachPage:(SBHIconManager *)arg1;
- (NSArray *)testSetupForIconManagerWidgetScrollPerformanceTest:(SBHIconManager *)arg1;
- (void)iconManagerDidAddOrRemoveWidgetIcon:(SBHIconManager *)arg1;
- (NSArray *)libraryViewControllersForIconManager:(SBHIconManager *)arg1;
- (_Bool)iconManager:(SBHIconManager *)arg1 isViewOnMainDisplayWindowScene:(UIView *)arg2;
- (SBFloatingDockViewController *)iconManager:(SBHIconManager *)arg1 floatingDockViewControllerForViewController:(UIViewController *)arg2;
- (SBFloatingDockViewController *)iconManager:(SBHIconManager *)arg1 floatingDockViewControllerForView:(UIView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 setTemporaryIntent:(INIntent *)arg2 forIconWithIdentifier:(NSString *)arg3 widgetUniqueIdentifier:(NSString *)arg4;
- (void)iconManager:(SBHIconManager *)arg1 displayFeatureIntroductionItemIfUnlocked:(id <SBHFeatureIntroductionProviding>)arg2;
- (void)iconManager:(SBHIconManager *)arg1 displayFeatureIntroductionItem:(id <SBHFeatureIntroductionProviding>)arg2 atLocation:(unsigned long long)arg3;
- (SBModalWidgetIntroductionHomeScreenPreview *)widgetIntroductionPreviewViewForIconManager:(SBHIconManager *)arg1;
- (_Bool)iconManagerShouldShowWidgetIntroductionPopoverForDefaultWidgets:(SBHIconManager *)arg1;
- (NSArray *)iconManager:(SBHIconManager *)arg1 willAddDefaultFirstPageWidgetsBasedOnPinnedWidgets:(NSArray *)arg2 suggestionWidgets:(NSArray *)arg3;
- (NSArray *)fallbackDefaultFirstPageWidgetsForIconManager:(SBHIconManager *)arg1;
- (_Bool)iconManager:(SBHIconManager *)arg1 canCustomElementAlignWithGrid:(SBHCustomIconElement *)arg2;
- (Class)iconManager:(SBHIconManager *)arg1 iconClassForApplicationWithBundleIdentifier:(NSString *)arg2 proposedClass:(Class)arg3;
- (void)iconManager:(SBHIconManager *)arg1 prepareAddSheetViewController:(SBHAddWidgetSheetViewController *)arg2;
- (_Bool)iconManager:(SBHIconManager *)arg1 isCustomElementValid:(SBHCustomIconElement *)arg2;
- (_Bool)iconManager:(SBHIconManager *)arg1 isWidgetValid:(SBHWidget *)arg2;
- (_Bool)iconManager:(SBHIconManager *)arg1 shouldPlaceIconOnIgnoredList:(SBIcon *)arg2;
- (_Bool)iconManager:(SBHIconManager *)arg1 canAddIconToIgnoredList:(SBIcon *)arg2;
- (_Bool)iconManager:(SBHIconManager *)arg1 canAddIcon:(SBIcon *)arg2 toIconList:(SBIconListModel *)arg3 inFolder:(SBFolder *)arg4;
- (void)iconManagerWillAnimateWidgetInsertion:(SBHIconManager *)arg1;
- (void)iconManagerDidDismissWidgetEditing:(SBHIconManager *)arg1;
- (void)iconManagerWillPresentWidgetEditing:(SBHIconManager *)arg1;
- (void)iconManager:(SBHIconManager *)arg1 didDismissPageManagementWithLayoutManager:(SBRootFolderViewPageManagementLayoutManager *)arg2 context:(NSMutableDictionary *)arg3;
- (void)iconManager:(SBHIconManager *)arg1 willDismissPageManagementUsingAnimator:(id <UIViewImplicitlyAnimating>)arg2 context:(NSMutableDictionary *)arg3;
- (void)iconManager:(SBHIconManager *)arg1 willPresentPageManagementWithLayoutManager:(SBRootFolderViewPageManagementLayoutManager *)arg2 animator:(id <UIViewImplicitlyAnimating>)arg3 context:(NSMutableDictionary *)arg4;
- (void)iconManager:(SBHIconManager *)arg1 prepareForPageHidingEducationWithCompletionHandler:(void (^)(_Bool))arg2;
- (void)iconManager:(SBHIconManager *)arg1 didRemoveConfigurableDataSource:(id <SBLeafIconDataSource>)arg2 ofIcon:(SBLeafIcon *)arg3;
- (void)iconManager:(SBHIconManager *)arg1 dataSource:(id <SBLeafIconDataSource>)arg2 ofIcon:(SBLeafIcon *)arg3 didUpdateConfigurationData:(NSData *)arg4;
- (NSData *)iconManager:(SBHIconManager *)arg1 configurationDataForDataSource:(id <SBLeafIconDataSource>)arg2 ofIcon:(SBLeafIcon *)arg3;
- (void)iconManager:(SBHIconManager *)arg1 willRemoveViewControllerForIdentifier:(NSString *)arg2;
- (_Bool)iconManager:(SBHIconManager *)arg1 shouldCacheRecentViewController:(UIViewController *)arg2 forIdentifier:(NSString *)arg3;
- (UIViewController *)iconManager:(SBHIconManager *)arg1 viewControllerForCustomIcon:(SBWidgetIcon *)arg2 element:(id <SBLeafIconDataSource>)arg3;
- (void)iconManager:(SBHIconManager *)arg1 rootFolderController:(SBRootFolderController *)arg2 didEndOverscrollOnLastPageWithVelocity:(double)arg3 translation:(double)arg4;
- (void)iconManager:(SBHIconManager *)arg1 rootFolderController:(SBRootFolderController *)arg2 didOverscrollOnLastPageByAmount:(double)arg3;
- (void)iconManager:(SBHIconManager *)arg1 rootFolderController:(SBRootFolderController *)arg2 didEndOverscrollOnFirstPageWithVelocity:(double)arg3 translation:(double)arg4;
- (void)iconManager:(SBHIconManager *)arg1 rootFolderController:(SBRootFolderController *)arg2 didOverscrollOnFirstPageByAmount:(double)arg3;
- (void)iconManager:(SBHIconManager *)arg1 rootFolderController:(SBRootFolderController *)arg2 didChangeEffectiveSidebarVisibilityProgress:(double)arg3;
- (void)iconManager:(SBHIconManager *)arg1 rootFolderController:(SBRootFolderController *)arg2 didChangeSidebarVisibilityProgress:(double)arg3;
- (void)iconManager:(SBHIconManager *)arg1 rootFolderController:(SBRootFolderController *)arg2 willUsePropertyAnimator:(UIViewPropertyAnimator *)arg3 toTransitionToState:(long long)arg4;
- (void)iconManager:(SBHIconManager *)arg1 rootFolderController:(SBRootFolderController *)arg2 willUseTransitionContext:(SBViewControllerTransitionContext *)arg3 toTransitionToState:(long long)arg4;
- (void)iconManagerDidNoteIconStateChangedExternally:(SBHIconManager *)arg1;
- (_Bool)listsAllowRotatedLayoutForIconManager:(SBHIconManager *)arg1;
- (NSArray *)iconManager:(SBHIconManager *)arg1 defaultAutomaticFavoriteIconIdentifiersWithMaximumCount:(unsigned long long)arg2;
- (_Bool)iconManager:(SBHIconManager *)arg1 shouldAvoidPlacingIconOnFirstPage:(SBLeafIcon *)arg2;
- (NSDictionary *)defaultIconStateForIconManager:(SBHIconManager *)arg1;
- (unsigned long long)maximumListCountForFoldersForIconManager:(SBHIconManager *)arg1;
- (void)dismissOverlaysForIconManager:(SBHIconManager *)arg1;
- (void)dismissLibraryForIconManager:(SBHIconManager *)arg1 windowScene:(UIWindowScene *)arg2 animated:(_Bool)arg3;
- (void)presentLibraryForIconManager:(SBHIconManager *)arg1 windowScene:(UIWindowScene *)arg2 animated:(_Bool)arg3;
- (void)dismissTodayOverlayForIconManager:(SBHIconManager *)arg1;
- (void)presentTodayOverlayForIconManager:(SBHIconManager *)arg1;
- (_Bool)isFloatingDockVisibleForIconManager:(SBHIconManager *)arg1;
- (_Bool)isFloatingDockSupportedForIconManager:(SBHIconManager *)arg1;
- (UIColor *)iconManager:(SBHIconManager *)arg1 accessibilityTintColorForScreenRect:(struct CGRect)arg2;
- (SBHIconAnimationSettings *)iconManager:(SBHIconManager *)arg1 animator:(SBHomeScreenIconTransitionAnimator *)arg2 animationSettingsForOperation:(unsigned long long)arg3 childViewController:(SBNestingViewController *)arg4;
- (void)iconManagerDidSaveIconState:(SBHIconManager *)arg1;
- (_Bool)iconManagerCanSaveIconState:(SBHIconManager *)arg1;
- (void)iconManager:(SBHIconManager *)arg1 nestingViewController:(SBNestingViewController *)arg2 willPerformOperation:(long long)arg3 onViewController:(SBNestingViewController *)arg4 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg5;
- (Class)iconManager:(SBHIconManager *)arg1 folderControllerClassForFolderClass:(Class)arg2 proposedClass:(Class)arg3;
- (double)distanceToTopOfSpotlightIconsForIconManager:(SBHIconManager *)arg1;
- (void)iconManager:(SBHIconManager *)arg1 wantsToAdjustLeadingCustomContentForEdgeBounceForScrollOffset:(struct CGPoint)arg2;
- (_Bool)iconManagerCanUseSeparateWindowForRotation:(SBHIconManager *)arg1;
- (double)iconManager:(SBHIconManager *)arg1 minimumHomeScreenScaleForFolderController:(SBFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 folderControllerDidEndScrolling:(SBFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 folderControllerWillBeginScrolling:(SBFolderController *)arg2;
- (void)iconManagerFolderAnimatingDidChange:(SBHIconManager *)arg1;
- (void)iconManager:(SBHIconManager *)arg1 willCloseFolderController:(SBFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willOpenFolderController:(SBFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 didCloseFolder:(SBFolder *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willCloseFolder:(SBFolder *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 didOpenFolder:(SBFolder *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willOpenFolder:(SBFolder *)arg2;
- (NSString *)iconManager:(SBHIconManager *)arg1 localizedFolderNameForDefaultDisplayName:(NSString *)arg2;
- (NSString *)localizedDefaultFolderNameForIconManager:(SBHIconManager *)arg1;
- (struct UIEdgeInsets)iconManager:(SBHIconManager *)arg1 contentOverlayInsetsFromParentIfAvailableForFolderController:(SBFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 statusBarInsetsDidChange:(struct UIEdgeInsets)arg2;
- (struct UIEdgeInsets)iconManager:(SBHIconManager *)arg1 statusBarEdgeInsetsForFolderController:(SBFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willRemoveFakeStatusBar:(UIStatusBar *)arg2 forFolderController:(SBFolderController *)arg3;
- (UIStatusBarStyleRequest *)iconManager:(SBHIconManager *)arg1 statusBarStyleRequestForFolderController:(SBFolderController *)arg2;
- (UIStatusBar *)iconManager:(SBHIconManager *)arg1 fakeStatusBarForFolderController:(SBFolderController *)arg2;
- (id <BSInvalidatable>)iconManager:(SBHIconManager *)arg1 wantsToHideStatusBarForFolderController:(SBFolderController *)arg2 animated:(_Bool)arg3;
- (_Bool)iconManager:(SBHIconManager *)arg1 folderController:(SBFolderController *)arg2 canChangeCurrentPageIndexToIndex:(long long)arg3;
- (void)iconManager:(SBHIconManager *)arg1 didSpringLoadIconView:(SBIconView *)arg2;
- (unsigned long long)iconManager:(SBHIconManager *)arg1 supportedMultitaskingShortcutActionsForIconView:(SBIconView *)arg2;
- (NSArray *)iconManager:(SBHIconManager *)arg1 applicationShortcutItemsForIconView:(SBIconView *)arg2;
- (_Bool)iconManager:(SBHIconManager *)arg1 shouldActivateApplicationShortcutItem:(SBSApplicationShortcutItem *)arg2 atIndex:(unsigned long long)arg3 forIconView:(SBIconView *)arg4;
- (void)iconManager:(SBHIconManager *)arg1 iconDropSessionDidEnter:(id <UIDropSession>)arg2;
- (void)iconManager:(SBHIconManager *)arg1 didEndIconDragWithUniqueIdentifier:(NSUUID *)arg2 numberOfDraggedItems:(unsigned long long)arg3;
- (void)iconManager:(SBHIconManager *)arg1 didAddItemsToIconDragWithUniqueIdentifier:(NSUUID *)arg2 numberOfDraggedItems:(unsigned long long)arg3;
- (void)iconManager:(SBHIconManager *)arg1 willBeginIconDragWithUniqueIdentifier:(NSUUID *)arg2 numberOfDraggedItems:(unsigned long long)arg3;
- (void)iconManagerIconDraggingDidChange:(SBHIconManager *)arg1;
- (UIWindow<SBIconDragPreviewContaining> *)windowForIconDragPreviewsForIconManager:(SBHIconManager *)arg1 forWindowScene:(UIWindowScene *)arg2;
- (UIView<SBIconDragPreview> *)iconManager:(SBHIconManager *)arg1 dragPreviewForIconView:(SBIconView *)arg2;
- (_Bool)iconManagerCanBeginIconDrags:(SBHIconManager *)arg1;
- (id <SBRecycledViewsContainerProviding>)recycledViewsContainerProviderForIconManager:(SBHIconManager *)arg1;
- (id <SBIconViewSnapshotProviding>)iconManager:(SBHIconManager *)arg1 screenSnapshotProviderForComponentsOfIconView:(SBIconView *)arg2;
- (_Bool)iconManager:(SBHIconManager *)arg1 shouldContinueToUseBackgroundView:(UIView *)arg2 forComponentsOfIconView:(SBIconView *)arg3;
- (UIView *)iconManager:(SBHIconManager *)arg1 backgroundViewForEditingDoneButtonForRootFolderController:(SBRootFolderController *)arg2;
- (UIView *)iconManager:(SBHIconManager *)arg1 backgroundViewForDockForRootFolderController:(SBRootFolderController *)arg2;
- (UIView *)iconManager:(SBHIconManager *)arg1 backgroundViewForComponentsOfIconView:(SBIconView *)arg2;
- (long long)iconManager:(SBHIconManager *)arg1 draggingStartLocationForIconView:(SBIconView *)arg2 proposedStartLocation:(long long)arg3;
- (double)iconManager:(SBHIconManager *)arg1 additionalDragLiftScaleForIconView:(SBIconView *)arg2;
- (_Bool)iconManager:(SBHIconManager *)arg1 canAcceptDropInSession:(id <UIDropSession>)arg2 inIconListView:(SBIconListView *)arg3;
- (_Bool)iconManager:(SBHIconManager *)arg1 canAddDragItemsToSession:(id <UIDragSession>)arg2 fromIconView:(SBIconView *)arg3;
- (_Bool)iconManager:(SBHIconManager *)arg1 canBeginDragForIconView:(SBIconView *)arg2;
- (UIViewController *)containerViewControllerForPopOversForIconManager:(SBHIconManager *)arg1;
- (UIViewController *)iconManager:(SBHIconManager *)arg1 popoverContentViewControllerForIcon:(SBIcon *)arg2;
- (UIViewController *)viewControllerForPresentingViewControllersForIconManager:(SBHIconManager *)arg1;
- (void)iconManagerDidFinishInstallForIcon:(SBHIconManager *)arg1;
- (UIColor *)iconManager:(SBHIconManager *)arg1 accessibilityTintColorForIconView:(SBIconView *)arg2;
- (unsigned long long)iconManager:(SBHIconManager *)arg1 focusEffectTypeForIconView:(SBIconView *)arg2;
- (_Bool)isFocusAllowedForIconManager:(SBHIconManager *)arg1;
- (_Bool)iconManager:(SBHIconManager *)arg1 allowsBadgingForIconLocation:(NSString *)arg2;
- (_Bool)iconManager:(SBHIconManager *)arg1 allowsBadgingForIcon:(SBIcon *)arg2;
- (long long)iconManager:(SBHIconManager *)arg1 closeBoxTypeForIconView:(SBIconView *)arg2 proposedType:(long long)arg3;
- (void)iconManager:(SBHIconManager *)arg1 wantsUninstallForIcon:(SBIcon *)arg2 location:(NSString *)arg3;
- (_Bool)iconManager:(SBHIconManager *)arg1 iconViewDisplaysLabel:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 iconCloseBoxTapped:(SBIconView *)arg2;
- (_Bool)iconManager:(SBHIconManager *)arg1 iconViewDisplaysCloseBox:(SBIconView *)arg2;
- (UIView *)iconManager:(SBHIconManager *)arg1 homeScreenContentViewForModalInteractionFromIconView:(SBIconView *)arg2;
- (UIViewController *)iconManager:(SBHIconManager *)arg1 containerViewControllerForModalInteractionFromIconView:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 iconView:(SBIconView *)arg2 configurationDidEndWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg3;
- (void)iconManager:(SBHIconManager *)arg1 iconView:(SBIconView *)arg2 configurationWillEndWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg3;
- (void)iconManager:(SBHIconManager *)arg1 iconView:(SBIconView *)arg2 configurationWillBeginWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg3;
- (UIView *)iconManager:(SBHIconManager *)arg1 homeScreenContentViewForConfigurationOfIconView:(SBIconView *)arg2;
- (struct CGRect)iconManager:(SBHIconManager *)arg1 contentBoundingRectForConfigurationOfIconView:(SBIconView *)arg2;
- (UIViewController *)iconManager:(SBHIconManager *)arg1 containerViewControllerForConfigurationOfIconView:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 iconView:(SBIconView *)arg2 willUseContextMenuStyle:(_UIContextMenuStyle *)arg3;
- (UIView *)iconManager:(SBHIconManager *)arg1 containerViewForPresentingContextMenuForIconView:(SBIconView *)arg2;
- (NSURL *)iconManager:(SBHIconManager *)arg1 launchURLForIconView:(SBIconView *)arg2;
- (NSSet *)iconManager:(SBHIconManager *)arg1 launchActionsForIconView:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 wantsLaunchForWidgetURL:(NSURL *)arg2;
- (_Bool)iconManager:(SBHIconManager *)arg1 isIconVisibleForBundleIdentifier:(NSString *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 launchIcon:(SBIcon *)arg2 location:(NSString *)arg3 animated:(_Bool)arg4 completionHandler:(void (^)(_Bool))arg5;
- (void)iconManager:(SBHIconManager *)arg1 touchesEndedForIconView:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 launchIconForIconView:(SBIconView *)arg2 withActions:(NSSet *)arg3;
- (void)iconManager:(SBHIconManager *)arg1 launchIconForIconView:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 didReceiveTapOnLaunchDisabledIconView:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willPrepareIconViewForLaunch:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 possibleUserIconTapBeganAfterInformingIcon:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 possibleUserIconTapBegan:(SBIconView *)arg2;
- (NSString *)iconManager:(SBHIconManager *)arg1 reasonToDisallowInteractionOnIconView:(SBIconView *)arg2;
- (NSString *)iconManager:(SBHIconManager *)arg1 reasonToDisallowTapOnIconView:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 configureIconView:(SBIconView *)arg2 forIcon:(SBIcon *)arg3;
- (void)iconManagerListLayoutProviderDidChange:(SBHIconManager *)arg1;
- (void)iconManager:(SBHIconManager *)arg1 willUseIconImageCache:(SBHIconImageCache *)arg2;
- (_Bool)iconManager:(SBHIconManager *)arg1 isPartialEditingAllowedForIconLocation:(NSString *)arg2;
- (void)iconManagerEditingDidChange:(SBHIconManager *)arg1;
- (_Bool)isEditingAllowedForIconManager:(SBHIconManager *)arg1;
- (_Bool)isIconContentPossiblyVisibleOverApplicationForIconManager:(SBHIconManager *)arg1;
- (_Bool)isRootFolderContentVisibleForIconManager:(SBHIconManager *)arg1;
- (unsigned long long)possibleInterfaceOrientationsForIconManager:(SBHIconManager *)arg1;
- (unsigned long long)allowedInterfaceOrientationsForIconManager:(SBHIconManager *)arg1;
- (long long)interfaceOrientationForIconManager:(SBHIconManager *)arg1;
- (void)iconManager:(SBHIconManager *)arg1 didCreateRootViewController:(UIViewController<SBHIconRootViewProviding> *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willDestroyRootViewController:(UIViewController<SBHIconRootViewProviding> *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 didCreateRootFolderController:(SBRootFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willDestroyRootFolderController:(SBRootFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willUseRootFolderControllerConfiguration:(SBRootFolderControllerConfiguration *)arg2;
@end

