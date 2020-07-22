//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSString, PKPaymentProvisioningController, PKPeerPaymentAccount, PKPeerPaymentCredential;

@protocol PKPeerPaymentWebServiceTargetDeviceProtocol <NSObject>
- (void)provisionPeerPaymentPassWithProvisioningController:(PKPaymentProvisioningController *)arg1 credential:(PKPeerPaymentCredential *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)setUserHasDisabledPeerPayment:(_Bool)arg1;
- (_Bool)userHasDisabledPeerPayment;
- (NSString *)bridgedClientInfo;
- (void)updateAccountWithCompletion:(void (^)(PKPeerPaymentAccount *))arg1;
- (PKPeerPaymentAccount *)account;
- (void)downloadPassIfNecessaryWithCompletion:(void (^)(_Bool))arg1;
@end
