//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class UIViewController;
@protocol SKUITabBarController, UIViewControllerTransitionCoordinator;

@protocol SKUITabBarControllerDelegate <NSObject>

@optional
- (void)tabBarController:(UIViewController<SKUITabBarController> *)arg1 didEndDisplayingViewController:(UIViewController *)arg2;
- (void)tabBarController:(UIViewController<SKUITabBarController> *)arg1 willDisplayViewController:(UIViewController *)arg2;
- (void)tabBarController:(UIViewController<SKUITabBarController> *)arg1 willTransitionToSize:(struct CGSize)arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (void)tabBarController:(UIViewController<SKUITabBarController> *)arg1 didReselectViewController:(UIViewController *)arg2;
- (_Bool)tabBarController:(UIViewController<SKUITabBarController> *)arg1 shouldFallbackToRootForController:(UIViewController *)arg2;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(UIViewController<SKUITabBarController> *)arg1;
- (void)tabBarController:(UIViewController<SKUITabBarController> *)arg1 didSelectViewController:(UIViewController *)arg2;
- (_Bool)tabBarController:(UIViewController<SKUITabBarController> *)arg1 shouldSelectViewController:(UIViewController *)arg2;
@end

