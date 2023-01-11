//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKAddBankAccountInformationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKExplanationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupViewControllerDelegate-Protocol.h>

@class NSString, PKBankAccountInformation, PKPaymentPass, PKPeerPaymentAccount, PKPeerPaymentTermsController, PKPeerPaymentWebService;
@protocol PKPeerPaymentActionControllerDelegate;

@interface PKPeerPaymentActionController : NSObject <PKPaymentSetupViewControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKExplanationViewControllerDelegate>
{
    PKPaymentPass *_pass;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentAccount *_account;
    long long _context;
    PKPeerPaymentTermsController *_termsController;
    _Bool _performingAction;
    unsigned long long _controllerAction;
    id <PKPeerPaymentActionControllerDelegate> _delegate;
    PKBankAccountInformation *_bankInformation;
}

+ (id)alertControllerForPeerPaymentActionUnableReason:(unsigned long long)arg1 displayableError:(id)arg2 addCardActionHandler:(CDUnknownBlockType)arg3;
+ (id)displayableErrorForPeerPaymentAction:(unsigned long long)arg1 andReason:(unsigned long long)arg2;
+ (_Bool)canPerformPeerPaymentAction:(unsigned long long)arg1 account:(id)arg2 unableReason:(unsigned long long *)arg3 displayableError:(id *)arg4;
@property(readonly, nonatomic) PKBankAccountInformation *bankInformation; // @synthesize bankInformation=_bankInformation;
@property(readonly, nonatomic) id <PKPeerPaymentActionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long controllerAction; // @synthesize controllerAction=_controllerAction;
- (void).cxx_destruct;
- (void)presentAddDebitCardViewController;
- (void)presentAddBankAccountViewController;
- (void)_updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)_peerPaymentControllerModeForAction;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1;
- (void)_presentTermsAndConditionsWithError:(id)arg1;
- (void)_presentIdentityVerificationWithError:(id)arg1;
- (void)_handleError:(id)arg1;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (void)_peerPaymentActionHasCompletedWithState:(unsigned long long)arg1;
- (void)performActionWithCurrencyAmount:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 webService:(id)arg2 context:(long long)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
