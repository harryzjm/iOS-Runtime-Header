//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact, PKAccountServicePaymentMethod, PKApplePayTrustSignature, PKAuthorizedPeerPaymentQuote, PKDisbursementVoucher, PKPayment, PKPaymentMethod, PKServiceProviderPurchase, PKShippingMethod;

@interface PKPaymentAuthorizationClientCallbackStateParam
{
    long long _kind;
    id _object;
}

+ (id)paramWithCallbackKind:(long long)arg1 object:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) long long kind; // @synthesize kind=_kind;
- (id)description;
@property(readonly, nonatomic) PKAccountServicePaymentMethod *accountServicePaymentMethod;
@property(readonly, nonatomic) PKApplePayTrustSignature *applePayTrustSignature;
@property(readonly, nonatomic) PKDisbursementVoucher *disbursementVoucher;
@property(readonly, nonatomic) PKAuthorizedPeerPaymentQuote *authorizedPeerPaymentQuote;
@property(readonly, nonatomic) PKServiceProviderPurchase *purchase;
@property(readonly, nonatomic) PKPayment *payment;
@property(readonly, nonatomic) PKShippingMethod *shippingMethod;
@property(readonly, nonatomic) PKPaymentMethod *paymentMethod;
@property(readonly, nonatomic) CNContact *shippingContact;

@end
