//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISplitViewController.h>

@class MISSING_TYPE, UINavigationController, UIViewController;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI23RootSplitViewController : UISplitViewController
{
    MISSING_TYPE *libraryManager;
    MISSING_TYPE *sideBarController;
    MISSING_TYPE *secondaryColumnHostingController;
    MISSING_TYPE *mainBarItems;
    MISSING_TYPE *libraryBarItems;
    MISSING_TYPE *stagedLibraryBarItems;
    MISSING_TYPE *libraryNeedsUpdate;
    MISSING_TYPE *lastSelectedLibraryIdentifier;
    MISSING_TYPE *splitTabBarController;
    MISSING_TYPE *tabBarItems;
    MISSING_TYPE *mode;
    MISSING_TYPE *controllerMap;
    MISSING_TYPE *lastSelectedIdentifier;
    MISSING_TYPE *selectedIndexPath;
    MISSING_TYPE *previousIndexPath;
    MISSING_TYPE *appContext;
    MISSING_TYPE *libraryOnly;
    MISSING_TYPE *stagedMode;
    MISSING_TYPE *viewIsVisible;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, readonly) UIViewController *currentViewController;
@property(nonatomic, readonly) UINavigationController *currentNavigationController;

@end
