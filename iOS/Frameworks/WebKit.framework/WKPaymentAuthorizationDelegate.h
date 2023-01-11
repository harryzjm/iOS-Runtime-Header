//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WKPaymentAuthorizationDelegate : NSObject
{
    struct RetainPtr<PKPaymentRequest> _request;
    struct RetainPtr<NSArray<PKPaymentSummaryItem *>> _summaryItems;
    struct RetainPtr<NSArray<PKShippingMethod *>> _shippingMethods;
    struct WeakPtr<WebKit::PaymentAuthorizationPresenter> _presenter;
    struct BlockPtr<void (PKPaymentAuthorizationResult *)> _didAuthorizePaymentCompletion;
    struct BlockPtr<void (PKPaymentMerchantSession *, NSError *)> _didRequestMerchantSessionCompletion;
    struct BlockPtr<void (PKPaymentRequestPaymentMethodUpdate *)> _didSelectPaymentMethodCompletion;
    struct BlockPtr<void (PKPaymentRequestShippingContactUpdate *)> _didSelectShippingContactCompletion;
    struct BlockPtr<void (PKPaymentRequestShippingMethodUpdate *)> _didSelectShippingMethodCompletion;
    _Bool _didReachFinalState;
}

@property(readonly, nonatomic) _Bool didReachFinalState; // @synthesize didReachFinalState=_didReachFinalState;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invalidate;
- (void)completeShippingMethodSelection:(id)arg1;
- (void)completeShippingContactSelection:(long long)arg1 summaryItems:(id)arg2 shippingMethods:(id)arg3 errors:(id)arg4;
- (void)completePaymentSession:(long long)arg1 errors:(id)arg2 didReachFinalState:(_Bool)arg3;
- (void)completePaymentMethodSelection:(id)arg1;
- (void)completeMerchantValidation:(id)arg1 error:(id)arg2;
@property(readonly, nonatomic) NSArray *shippingMethods;
@property(readonly, nonatomic) NSArray *summaryItems;
- (void)_willFinishWithError:(id)arg1;
- (void)_getPaymentServicesMerchantURL:(CDUnknownBlockType)arg1;
- (void)_didSelectShippingMethod:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didSelectShippingContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didSelectPaymentMethod:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didRequestMerchantSession:(CDUnknownBlockType)arg1;
- (void)_didFinish;
- (void)_didAuthorizePayment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_initWithRequest:(id)arg1 presenter:(struct PaymentAuthorizationPresenter *)arg2;

@end
