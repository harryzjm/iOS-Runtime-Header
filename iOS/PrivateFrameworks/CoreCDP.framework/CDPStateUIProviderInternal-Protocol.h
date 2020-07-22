//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CDPContext, NSArray, NSError, NSNumber;
@protocol CDPLocalDeviceSecretHandlerProtocol, CDPRecoveryKeyValidatorInternal, CDPRemoteDeviceSecretValidatorProtocol;

@protocol CDPStateUIProviderInternal
- (void)cdpContext:(CDPContext *)arg1 promptForRecoveryKeyWithValidator:(id <CDPRecoveryKeyValidatorInternal>)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)cdpContext:(CDPContext *)arg1 presentRecoveryKeyWithValidator:(id <CDPRecoveryKeyValidatorInternal>)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)cdpContext:(CDPContext *)arg1 showError:(NSError *)arg2 withDefaultIndex:(long long)arg3 withCompletion:(void (^)(long long))arg4;
- (void)cdpContext:(CDPContext *)arg1 showError:(NSError *)arg2 withCompletion:(void (^)(long long))arg3;
- (void)cdpContext:(CDPContext *)arg1 promptForInteractiveAuthenticationWithCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForAdoptionOfMultipleICSC:(void (^)(_Bool, NSError *))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForICSCWithIsNumeric:(_Bool)arg2 numericLength:(NSNumber *)arg3 isRandom:(_Bool)arg4 validator:(id <CDPRemoteDeviceSecretValidatorProtocol>)arg5;
- (void)cdpContext:(CDPContext *)arg1 promptForRemoteSecretWithDevices:(NSArray *)arg2 offeringRemoteApproval:(_Bool)arg3 validator:(id <CDPRemoteDeviceSecretValidatorProtocol>)arg4;
- (void)cdpContext:(CDPContext *)arg1 beginRemoteApprovalWithValidator:(id <CDPRemoteDeviceSecretValidatorProtocol>)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)cdpContext:(CDPContext *)arg1 promptForLocalSecretWithHandler:(id <CDPLocalDeviceSecretHandlerProtocol>)arg2;
@end

