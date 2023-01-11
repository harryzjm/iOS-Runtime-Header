//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SFExternalCredentialIdentityStoreManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)removeCredentialIdentityStoreForAppBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_credentialIdentityStoreForBundleIdentifier:(id)arg1;
- (void)getCredentialIdentityStoreForAppBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPrimaryCredentialIdentityStoreWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

