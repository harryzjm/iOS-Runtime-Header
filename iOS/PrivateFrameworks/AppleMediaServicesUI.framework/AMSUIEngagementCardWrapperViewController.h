//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonViewController.h"

@class NSString, UINavigationController, UIViewController;

__attribute__((visibility("hidden")))
@interface AMSUIEngagementCardWrapperViewController : AMSUICommonViewController
{
    long long _presentationStyle;
    UIViewController *_viewController;
    UINavigationController *_childNavigationController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UINavigationController *childNavigationController; // @synthesize childNavigationController=_childNavigationController;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(readonly, nonatomic) _Bool allowsPullToDismiss;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long cardStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

