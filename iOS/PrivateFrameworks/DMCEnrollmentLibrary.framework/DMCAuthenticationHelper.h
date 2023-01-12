//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DMCAuthenticationHelper : NSObject
{
}

+ (id)_createManagedAppleAccountInvalidatedError;
+ (id)_createGeneralServerError;
+ (id)_createMissingBearerTokenError;
+ (void)performExchangeMAIDForBearerTokenAtURL:(id)arg1 rmAccountIdentifier:(id)arg2 anchorCertificateRefs:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (unsigned long long)enrollmentMethodFromAuthenticateString:(id)arg1 outURL:(id *)arg2;

@end
