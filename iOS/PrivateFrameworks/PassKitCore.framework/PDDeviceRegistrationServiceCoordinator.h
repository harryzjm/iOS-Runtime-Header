//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator;

@interface PDDeviceRegistrationServiceCoordinator : NSObject
{
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;
}

@property(retain, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator; // @synthesize peerPaymentWebServiceCoordinator=_peerPaymentWebServiceCoordinator;
@property(retain, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator; // @synthesize paymentWebServiceCoordinator=_paymentWebServiceCoordinator;
- (void).cxx_destruct;
- (void)_canAutomaticallyRegisterWithWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performDeviceRegistrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)notePasscodeChanged;

@end

