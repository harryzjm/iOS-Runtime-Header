//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, PKPaymentSetupCredentialsViewController;

@protocol PKPaymentSetupCredentialsViewControllerFlowDelegate <NSObject>
- (void)credentialsViewController:(PKPaymentSetupCredentialsViewController *)arg1 didSelectCredentials:(NSArray *)arg2;
- (void)credentialsViewControllerDidSelectManualEntry:(PKPaymentSetupCredentialsViewController *)arg1;
- (void)credentialsViewControllerDidTerminate:(PKPaymentSetupCredentialsViewController *)arg1;
@end

