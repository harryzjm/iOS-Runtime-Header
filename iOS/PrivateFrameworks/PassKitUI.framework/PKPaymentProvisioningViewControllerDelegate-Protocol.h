//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPaymentSetupProvisioningFieldsViewController;

@protocol PKPaymentProvisioningViewControllerDelegate <NSObject>
- (void)provisioningViewController:(PKPaymentSetupProvisioningFieldsViewController *)arg1 didFinishWithSuccess:(_Bool)arg2;

@optional
- (void)provisioningViewControllerDidSelectManualEntry:(PKPaymentSetupProvisioningFieldsViewController *)arg1;
@end

