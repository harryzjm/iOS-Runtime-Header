//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, NSURL, PKPaymentSetupFieldsModel, PKProvisioningError;

@protocol PKProvisioningWatchUICoordinatorDelegate <NSObject>
- (void)didUpdateFieldModel;
- (void)didTransitionTo:(unsigned long long)arg1 loading:(_Bool)arg2;
- (void)showWithProvisioningError:(PKProvisioningError *)arg1;
- (void)didFinishWithSuccessWithPasses:(NSArray *)arg1 error:(PKProvisioningError *)arg2;
- (void)showEligibilityIssueWithReason:(long long)arg1 learnMoreUrl:(NSURL *)arg2;
- (void)presentTermsWithTermsUrl:(NSURL *)arg1 completion:(void (^)(_Bool))arg2;
- (void)presentSecondaryFieldsViewControllerWithFieldsModel:(PKPaymentSetupFieldsModel *)arg1;
- (void)presentSEStorageCleanupWithCompletion:(void (^)(_Bool))arg1;
- (void)presentPasscodeUpgradeWithCompletion:(void (^)(_Bool))arg1;
- (void)presentExitLostModeAlertWithCompletion:(void (^)(_Bool))arg1;
@end

