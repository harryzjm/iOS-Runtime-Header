//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITabBarController.h>

@class PKPaymentTransaction, PKTransactionCloudKitDebugDetailsViewController, PKTransactionSource, PKTransactionSpotlightDebugDetailsViewController, UIBarButtonItem;

@interface PKTransactionDebugDetailsTabBarController : UITabBarController
{
    UIBarButtonItem *_shareButton;
    PKPaymentTransaction *_transaction;
    PKTransactionSource *_transactionSource;
    PKTransactionCloudKitDebugDetailsViewController *_cloudKitViewController;
    PKTransactionSpotlightDebugDetailsViewController *_spotlightViewController;
}

- (void).cxx_destruct;
- (void)_handleShareButton:(id)arg1;
- (id)initWithTransaction:(id)arg1 transactionSource:(id)arg2;

@end
