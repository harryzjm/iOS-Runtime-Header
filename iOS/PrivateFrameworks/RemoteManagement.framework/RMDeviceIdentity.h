//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RMDeviceIdentity : NSObject
{
}

+ (id)identityWithServerCapabilities:(id)arg1 identityPersistentID:(id)arg2 error:(id *)arg3;
- (void)signPropertyList:(id)arg1 detachedSignature:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signData:(id)arg1 detachedSignature:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deviceIdentityWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)validateIdentityForServer:(struct __SecTrust *)arg1;

@end

