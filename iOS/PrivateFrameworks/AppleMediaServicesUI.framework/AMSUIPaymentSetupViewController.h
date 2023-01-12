//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class PKPaymentSetupRequest;
@protocol AMSUIPaymentSetupViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AMSUIPaymentSetupViewController : UIViewController
{
    id <AMSUIPaymentSetupViewControllerDelegate> _delegate;
    PKPaymentSetupRequest *_paymentSetupRequest;
    UIViewController *_childViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(readonly, nonatomic) PKPaymentSetupRequest *paymentSetupRequest; // @synthesize paymentSetupRequest=_paymentSetupRequest;
@property(nonatomic) __weak id <AMSUIPaymentSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)_setup;
- (id)initWithPaymentSetupRequest:(id)arg1;

@end
