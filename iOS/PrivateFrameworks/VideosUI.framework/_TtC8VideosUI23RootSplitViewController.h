//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UISplitViewController.h>

@class MISSING_TYPE, UINavigationController, UIViewController;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI23RootSplitViewController : UISplitViewController
{
    MISSING_TYPE *rootControllerConfig;
    MISSING_TYPE *mode;
    MISSING_TYPE *libraryOnly;
    MISSING_TYPE *$__lazy_storage_$_sideBarController;
    MISSING_TYPE *sideBarSections;
    MISSING_TYPE *memoryPressureNotificationSource;
    MISSING_TYPE *controllerMap;
    MISSING_TYPE *tvTitle;
    MISSING_TYPE *defaultSectionManager;
    MISSING_TYPE *lastSelectedIdentifier;
    MISSING_TYPE *hasPostedViewControllerDidChangeNotificationOnLaunch;
    MISSING_TYPE *hasDroppedOnTab;
    MISSING_TYPE *selectedIndex;
    MISSING_TYPE *previousIndex;
    MISSING_TYPE *appContext;
    MISSING_TYPE *$__lazy_storage_$_splitTabBarController;
    MISSING_TYPE *tabBarItems;
    MISSING_TYPE *libraryTitle;
    MISSING_TYPE *libraryManager;
    MISSING_TYPE *secondaryColumnHostingController;
    MISSING_TYPE *sideBarOnlyItemIdentifiers;
    MISSING_TYPE *stagedLibrarySidebarItems;
    MISSING_TYPE *lastSelectedIdentifierInSectionMap;
    MISSING_TYPE *needsModeEvaluationOnDidAppear;
    MISSING_TYPE *isSidebarDisabled;
    MISSING_TYPE *stagedMode;
    MISSING_TYPE *viewIsVisible;
    MISSING_TYPE *userHasHiddenSidebar;
    MISSING_TYPE *tipPlacementId;
    MISSING_TYPE *tipPlacementTabBarItemIndex;
    MISSING_TYPE *tipPlacementSideBarItemIdentifier;
    MISSING_TYPE *presentedTipViewController;
    MISSING_TYPE *accountMessageViewModel;
    MISSING_TYPE *accountMessageViewController;
    MISSING_TYPE *sidebarOpeningInProgress;
    MISSING_TYPE *waitingForPresentationDismissal;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)willEnterForeground:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic) long long preferredDisplayMode;
@property(nonatomic, readonly) UIViewController *currentViewController;
@property(nonatomic, readonly) UINavigationController *currentNavigationController;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)messageViewController:(id)arg1 didSelectActionWithDialogResult:(id)arg2;
- (void)messageViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)messageViewController:(id)arg1 didUpdateSize:(struct CGSize)arg2;

@end

