//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NPKPaymentProvisioningFlowControllerDigitalIssuanceAmountStepContext, NPKPaymentProvisioningFlowControllerRequestContext, NPKPaymentProvisioningFlowPickerItem, NPKPaymentProvisioningFlowPickerSection, NSArray, NSDecimalNumber, NSError, NSString, PKAddPaymentPassRequest, PKAddPaymentPassRequestConfiguration, PKDigitalIssuanceServiceProviderItem, PKDigitalIssuanceServiceProviderProduct, PKPaymentCredential, PKPaymentPass, PKPaymentSetupProduct, PKVerificationChannel;
@protocol NPKPaymentProvisioningFlowControllerDelegate;

@protocol NPKPaymentProvisioningFlowControllerProtocol <NSObject>
@property(nonatomic) __weak id <NPKPaymentProvisioningFlowControllerDelegate> delegate;
- (void)presentTransitServiceProviderProductsWithRequestContext:(NPKPaymentProvisioningFlowControllerDigitalIssuanceAmountStepContext *)arg1;
- (void)acknowledgeAppleBalanceAccountDetailsWithProduct:(PKPaymentSetupProduct *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)chooseEMoneyProductFromFlowPickerSection:(NPKPaymentProvisioningFlowPickerSection *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)chooseTransitProductFromFlowPickerSection:(NPKPaymentProvisioningFlowPickerSection *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)chooseCardsOnFileFlowForProduct:(PKPaymentSetupProduct *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2 preloadMetadata:(_Bool)arg3;
- (void)handleIssuerApplicationAddRequest:(PKAddPaymentPassRequest *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)skipIssuerVerification:(NPKPaymentProvisioningFlowControllerRequestContext *)arg1;
- (void)handleIssuerVerificationCode:(NSString *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)handleIssuerVerificationFields:(NSArray *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)handleIssuerVerificationChannel:(PKVerificationChannel *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)acknowledgeMoreInformation:(NPKPaymentProvisioningFlowControllerRequestContext *)arg1;
- (void)skipProvisioning:(NPKPaymentProvisioningFlowControllerRequestContext *)arg1;
- (void)acceptTerms:(NPKPaymentProvisioningFlowControllerRequestContext *)arg1;
- (void)handlePasscodeUpgradeCompleteWithSuccess:(_Bool)arg1 error:(NSError *)arg2 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg3;
- (void)handleProductSelection:(PKPaymentSetupProduct *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)handleManualEntryFields:(NSArray *)arg1 credential:(PKPaymentCredential *)arg2 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg3;
- (void)chooseManualEntry:(NPKPaymentProvisioningFlowControllerRequestContext *)arg1;
- (void)chooseCredentials:(NSArray *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)handleReaderModeFields:(NSArray *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)chooseReaderMode:(NPKPaymentProvisioningFlowControllerRequestContext *)arg1;
- (void)handleDigitalIssuanceAmount:(NSDecimalNumber *)arg1 serviceProviderProduct:(PKDigitalIssuanceServiceProviderProduct *)arg2 item:(PKDigitalIssuanceServiceProviderItem *)arg3 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg4;
- (void)handleDigitalIssuanceAmount:(NSDecimalNumber *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)chooseProduct:(PKPaymentSetupProduct *)arg1 includeCardsOnFile:(_Bool)arg2 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg3;
- (void)chooseProduct:(PKPaymentSetupProduct *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)chooseFlowForPickerItem:(NPKPaymentProvisioningFlowPickerItem *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)acknowledgeWelcome:(NPKPaymentProvisioningFlowControllerRequestContext *)arg1;
- (void)startInAppProvisioningFlowWithConfiguration:(PKAddPaymentPassRequestConfiguration *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)startIssuerVerificationFlowForPaymentPass:(PKPaymentPass *)arg1 requestContext:(NPKPaymentProvisioningFlowControllerRequestContext *)arg2;
- (void)startProvisioningFlow:(NPKPaymentProvisioningFlowControllerRequestContext *)arg1;
- (void)reset;
- (void)setSeparateLocalDeviceEntryRequired:(_Bool)arg1;
- (void)setDigitalIssuanceSupported:(_Bool)arg1;
- (void)setReaderModeProvisioningSupported:(_Bool)arg1;
@end

