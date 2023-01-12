//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UITabBar;

@interface UITabBarControllerTemplate
{
    id _delegate;
    NSArray *_viewControllers;
    UITabBar *_tabBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)syncTabBarItems;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

