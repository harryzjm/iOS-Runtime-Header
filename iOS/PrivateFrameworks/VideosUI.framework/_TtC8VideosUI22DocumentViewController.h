//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI22DocumentViewController : UIViewController
{
    MISSING_TYPE *templateViewController;
    MISSING_TYPE *document;
    MISSING_TYPE *isTransitioning;
    MISSING_TYPE *loadingView;
    MISSING_TYPE *navBarOpacity;
    MISSING_TYPE *navBarTitleOpacity;
    MISSING_TYPE *navBarTintColor;
    MISSING_TYPE *pagePerformanceReporter;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) _Bool shouldAutomaticallyForwardAppearanceMethods;
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
- (void)traitCollectionDidChange:(id)arg1;
- (id)overrideTraitCollectionForChildViewController:(id)arg1;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end
