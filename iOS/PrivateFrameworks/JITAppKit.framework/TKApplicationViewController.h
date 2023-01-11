//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, NSURL;
@protocol TKApplicationViewControllerDelegate;

@interface TKApplicationViewController : UIViewController
{
    NSURL *_bundleURL;
    NSString *_viewName;
    UIViewController *_childViewController;
    UIViewController *_loadingViewController;
    id <TKApplicationViewControllerDelegate> _delegate;
}

+ (id)applicationViewController:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TKApplicationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *loadingViewController; // @synthesize loadingViewController=_loadingViewController;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(readonly, nonatomic) NSString *viewName; // @synthesize viewName=_viewName;
@property(readonly, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
- (void)dismissApplicationControllerAnimated:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didLoadViewController:(id)arg1;
- (_Bool)handleApplicationControllerError;
- (id)initWithBundleURL:(id)arg1 viewName:(id)arg2 delegate:(CDUnknownBlockType)arg3;
- (id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 withDataRequest:(id)arg3;
- (id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 withData:(id)arg3;
- (id)initWithBundleURL:(id)arg1 loadPage:(id)arg2;

@end
