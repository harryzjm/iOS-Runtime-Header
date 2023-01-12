//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DMCServiceDiscoveryHelper : NSObject
{
}

- (id)_serverURLForAppleMAID;
- (void)_serviceURLFromWellKnownURL:(id)arg1 anchorCertificateRefs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_discoverServiceURLForDomain:(id)arg1 port:(id)arg2 userIdentifier:(id)arg3 anchorCertificateRefs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchEnrollmentProfileWithServiceURL:(id)arg1 authToken:(id)arg2 machineInfo:(id)arg3 anchorCertificateRefs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)abstractWebAuthCredentialTokenFromCallBackURL:(id)arg1;
- (id)webAuthenticationURLForUserAuthURL:(id)arg1 withUserIdentifierQuery:(id)arg2;
- (void)exchangeMAIDForBearerTokenWithRMAccountIdentifier:(id)arg1 userAuthURL:(id)arg2 machineInfo:(id)arg3 anchorCertificateRefs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)discoverEnrollmentMethodWithServiceURL:(id)arg1 enrollmentType:(unsigned long long)arg2 machineInfo:(id)arg3 anchorCertificateRefs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)discoverServiceURLForUserIdentifier:(id)arg1 anchorCertificateRefs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
