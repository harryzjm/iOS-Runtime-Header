//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKAccount, PKBusinessChatController, PKTransactionSource, UIViewController;
@protocol PKAccountBillPaymentObserver, PKAccountServiceAccountResolutionControllerDelegate;

@interface PKAccountServiceAccountResolutionController : NSObject
{
    PKBusinessChatController *_businessChatController;
    PKAccount *_account;
    PKTransactionSource *_transactionSource;
    id <PKAccountServiceAccountResolutionControllerDelegate> _delegate;
    id <PKAccountBillPaymentObserver> _billPaymentObserver;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <PKAccountBillPaymentObserver> billPaymentObserver; // @synthesize billPaymentObserver=_billPaymentObserver;
@property(nonatomic) __weak id <PKAccountServiceAccountResolutionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKTransactionSource *transactionSource; // @synthesize transactionSource=_transactionSource;
@property(retain, nonatomic) PKAccount *account; // @synthesize account=_account;
- (void)_openBusinessChatWithContext:(id)arg1;
- (void)_callIssuer;
- (id)_alertControllerForBusinessChatContext:(id)arg1;
- (void)_handleAccountServiceAccountDidChangeNotification:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_presentAccountServiceAction:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentFlowForAccountResolution:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAccount:(id)arg1 transactionSource:(id)arg2;

@end
