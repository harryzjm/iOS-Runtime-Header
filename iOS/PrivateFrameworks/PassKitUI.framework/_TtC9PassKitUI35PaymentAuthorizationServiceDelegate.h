//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9PassKitUI35PaymentAuthorizationServiceDelegate : NSObject
{
    MISSING_TYPE *stateMachine;
    MISSING_TYPE *context;
}

- (void).cxx_destruct;
- (id)init;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg1;
- (void)handleDismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleHostApplicationDidCancel;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationWillResignActive:(_Bool)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2;
- (void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)arg1;

@end

