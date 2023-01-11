//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AXSSInterDeviceSecurityHelper : NSObject
{
    struct __SecIdentity *_cachedAppleIDIdentity;
    NSArray *_cachedCertificateChain;
    NSArray *_cachedSecurityIdentity;
}

- (void).cxx_destruct;
- (void)verifyCertificate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)securityIdentity;
- (id)_certificateChain;
- (struct __SecIdentity *)_appleIDIdentity;
- (void)_appleIDsDidChange;
- (void)dealloc;
- (id)init;

@end
