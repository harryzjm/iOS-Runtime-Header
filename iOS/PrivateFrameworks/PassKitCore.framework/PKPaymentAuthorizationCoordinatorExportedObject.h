//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentAuthorizationHostProtocol-Protocol.h>

@class NSString, PKPaymentAuthorizationCoordinator;
@protocol OS_dispatch_queue, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationServiceProtocol;

@interface PKPaymentAuthorizationCoordinatorExportedObject : NSObject <PKPaymentAuthorizationHostProtocol>
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <PKPaymentAuthorizationCoordinatorDelegate> _delegate;
    id <PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate;
    PKPaymentAuthorizationCoordinator *_controller;
    id <PKPaymentAuthorizationServiceProtocol> _serviceProxy;
}

@property(retain, nonatomic) id <PKPaymentAuthorizationServiceProtocol> serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(nonatomic) PKPaymentAuthorizationCoordinator *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PKPaymentAuthorizationCoordinatorPrivateDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(nonatomic) __weak id <PKPaymentAuthorizationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationWillStart;
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;
- (void)authorizationDidPresent;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

