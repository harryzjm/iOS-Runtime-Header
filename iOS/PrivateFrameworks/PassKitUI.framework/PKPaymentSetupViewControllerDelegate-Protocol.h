//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSError, UIViewController;

@protocol PKPaymentSetupViewControllerDelegate <NSObject>
- (void)viewControllerDidTerminateSetupFlow:(UIViewController *)arg1;

@optional
- (void)viewControllerDidShowEligibilityIssue:(UIViewController *)arg1;
- (void)viewController:(UIViewController *)arg1 didShowProvisioningError:(NSError *)arg2;
@end
