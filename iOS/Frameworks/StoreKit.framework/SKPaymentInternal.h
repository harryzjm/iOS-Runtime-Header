//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, SKPaymentAppleIDAuthorizationRequest, SKPaymentDiscount;

__attribute__((visibility("hidden")))
@interface SKPaymentInternal : NSObject
{
    NSString *_applicationUsername;
    NSString *_partnerIdentifier;
    NSString *_partnerTransactionIdentifier;
    NSString *_productIdentifier;
    long long _quantity;
    NSData *_requestData;
    NSDictionary *_requestParameters;
    _Bool _simulatesAskToBuyInSandbox;
    _Bool _isStoreOriginated;
    SKPaymentDiscount *_paymentDiscount;
    SKPaymentAppleIDAuthorizationRequest *_appleIDAuthorizationClientInfo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

