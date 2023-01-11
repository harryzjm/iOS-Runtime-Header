//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CertOperations : NSObject
{
}

+ (_Bool)verifyCertData:(id)arg1 withCert:(struct __SecCertificate **)arg2 withPubKey:(struct __SecKey **)arg3 stingray:(_Bool)arg4 enroll:(_Bool)arg5 env:(id)arg6 duplicate:(_Bool)arg7 sigVerification:(_Bool)arg8 error:(id *)arg9;
+ (id)rootCurrentVersionForRootType:(unsigned int)arg1 inEnvironment:(id)arg2;
+ (id)rootTrustedVersionsForRootType:(unsigned int)arg1 inEnvironment:(id)arg2 duplicate:(_Bool)arg3;
+ (id)rootBaseVersionsForRootType:(unsigned int)arg1 inEnvironment:(id)arg2 duplicate:(_Bool)arg3;
+ (id)certVersion:(struct __SecCertificate *)arg1;

@end
