//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITabBarController.h>

#import <TVMLKit/IKAppTabBarController-Protocol.h>
#import <TVMLKit/UITabBarControllerDelegate-Protocol.h>

@class IKAppTabBar, NSArray, NSString;
@protocol _TVAppNavigationControllerDelegate;

@interface _TVRootMenuBarController : UITabBarController <UITabBarControllerDelegate, IKAppTabBarController>
{
    IKAppTabBar *_appTabBar;
    id <_TVAppNavigationControllerDelegate> _appNavigationControllerDelegate;
    NSArray *_appTabBarItems;
    unsigned long long _previousSelectedIndex;
}

@property(nonatomic) unsigned long long previousSelectedIndex; // @synthesize previousSelectedIndex=_previousSelectedIndex;
@property(retain, nonatomic) NSArray *appTabBarItems; // @synthesize appTabBarItems=_appTabBarItems;
@property(nonatomic) __weak id <_TVAppNavigationControllerDelegate> appNavigationControllerDelegate; // @synthesize appNavigationControllerDelegate=_appNavigationControllerDelegate;
@property(retain, nonatomic) IKAppTabBar *appTabBar; // @synthesize appTabBar=_appTabBar;
- (void).cxx_destruct;
- (id)transientTabItemForTabBar:(id)arg1;
- (void)tabBar:(id)arg1 setSelectedTabItem:(id)arg2;
- (id)selectedTabItemForTabBar:(id)arg1;
- (id)tabBar:(id)arg1 setTabItems:(id)arg2;
- (id)tabBar:(id)arg1 tabItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfTabsInTabBar:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
