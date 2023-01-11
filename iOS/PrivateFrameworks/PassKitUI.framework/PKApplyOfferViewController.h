//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKApplyFlowControllerProtocol-Protocol.h>

@class CLInUseAssertion, NSString, PKAccountFlowController, PKApplyOfferCreditCardView, PKPaymentInstallmentConfiguration;

@interface PKApplyOfferViewController <PKApplyFlowControllerProtocol>
{
    PKAccountFlowController *_accountController;
    PKApplyOfferCreditCardView *_offerView;
    NSString *_offerTermsIdentifier;
    CLInUseAssertion *_inUseAssertion;
    _Bool _useCompactLayout;
    PKPaymentInstallmentConfiguration *_installmentConfiguration;
    _Bool _hasSufficientOTBForInstallment;
}

- (void).cxx_destruct;
- (void)_termsAccepted:(_Bool)arg1;
- (void)_terminateApplyFlowWithoutDeclining;
- (void)_openTermsAndConditions;
- (void)_setupForBroadwayApplication:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
