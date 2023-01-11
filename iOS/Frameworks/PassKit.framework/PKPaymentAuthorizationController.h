//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKit/PKPaymentAuthorizationCoordinatorDelegate-Protocol.h>
#import <PassKit/PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h>

@class NSString, PKPaymentAuthorizationCoordinator;
@protocol PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate;

@interface PKPaymentAuthorizationController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>
{
    PKPaymentAuthorizationController *_retainSelf;
    id <PKPaymentAuthorizationControllerDelegate> _delegate;
    PKPaymentAuthorizationCoordinator *_paymentCoordinator;
    id <PKPaymentAuthorizationControllerPrivateDelegate> _privateDelegate;
}

+ (_Bool)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2;
+ (_Bool)canMakePaymentsUsingNetworks:(id)arg1;
+ (_Bool)canMakePayments;
@property(nonatomic) id <PKPaymentAuthorizationControllerPrivateDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(retain, nonatomic) PKPaymentAuthorizationCoordinator *paymentCoordinator; // @synthesize paymentCoordinator=_paymentCoordinator;
@property(nonatomic) __weak id <PKPaymentAuthorizationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)paymentAuthorizationCoordinator:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didRequestMerchantSession:(CDUnknownBlockType)arg2;
- (void)paymentAuthorizationCoordinator:(id)arg1 willFinishWithError:(id)arg2;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingAddress:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinatorWillAuthorizePayment:(id)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPaymentRequest:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

