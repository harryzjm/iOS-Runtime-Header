//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSError, NSString, PKAuthorizedPeerPaymentQuote, PKPaymentAuthorizationController, PKServiceProviderPurchase;

@protocol PKPaymentAuthorizationControllerPrivateDelegate <NSObject>

@optional
- (NSString *)presentationSceneBundleIdentifierForPaymentAuthorizationController:(PKPaymentAuthorizationController *)arg1;
- (NSString *)presentationSceneIdentifierForPaymentAuthorizationController:(PKPaymentAuthorizationController *)arg1;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizeContextWithHandler:(void (^)(PKPaymentAuthorizationResult *))arg2;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizePeerPaymentQuote:(PKAuthorizedPeerPaymentQuote *)arg2 handler:(void (^)(PKPaymentAuthorizationResult *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizePurchase:(PKServiceProviderPurchase *)arg2 completion:(void (^)(long long))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didRequestMerchantSession:(void (^)(PKPaymentMerchantSession *, NSError *))arg2;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 willFinishWithError:(NSError *)arg2;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
@end

