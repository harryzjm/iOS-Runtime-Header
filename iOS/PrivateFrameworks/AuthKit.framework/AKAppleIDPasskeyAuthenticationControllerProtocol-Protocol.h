//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKit/NSObject-Protocol.h>

@class AKAppleIDPasskeyCredentialRequestContext;

@protocol AKAppleIDPasskeyAuthenticationControllerProtocol <NSObject>
- (void)appleIDPasskeyStatusWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)createPasskeyWithContext:(AKAppleIDPasskeyCredentialRequestContext *)arg1 completion:(void (^)(AKAppleIDPasskeyCredential *, NSError *))arg2;
@end

