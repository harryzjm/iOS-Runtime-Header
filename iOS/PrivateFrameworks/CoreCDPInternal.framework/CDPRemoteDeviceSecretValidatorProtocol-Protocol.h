//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSError, NSString;

@protocol CDPRemoteDeviceSecretValidatorProtocol
@property(nonatomic) unsigned long long supportedEscapeOfferMask;
- (void)supportedEscapeOfferMaskCompletion:(void (^)(unsigned long long))arg1;
- (void)resetAccountCDPState;
- (void)cancelApproveFromAnotherDevice;
- (void)approveFromAnotherDeviceWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)cancelValidationWithError:(NSError *)arg1;
- (void)validateRecoveryKey:(NSString *)arg1 withCompletion:(void (^)(_Bool, _Bool, NSError *))arg2;
- (void)validateSecret:(NSString *)arg1 devices:(NSArray *)arg2 type:(unsigned long long)arg3 withCompletion:(void (^)(_Bool, _Bool, NSError *))arg4;
@end

