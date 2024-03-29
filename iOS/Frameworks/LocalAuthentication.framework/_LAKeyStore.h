//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAKeyStoreSecretCoder, NSString;
@protocol LAKeyStoreBackend;

__attribute__((visibility("hidden")))
@interface _LAKeyStore : NSObject
{
    id <LAKeyStoreBackend> _backend;
    LAKeyStoreSecretCoder *_coder;
}

- (void).cxx_destruct;
- (void)decryptData:(id)arg1 publicKeyHash:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)encryptData:(id)arg1 publicKeyHash:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeItemsWithDomain:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchItemsWithDomain:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeGenericPasswordsWithDomain:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchGenericPasswordWithIdentifier:(id)arg1 domain:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchGenericPasswordsWithDomain:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storeGenericPassword:(id)arg1 identifier:(id)arg2 domain:(id)arg3 protectedBy:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeKeysWithDomain:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchKeyWithPublicKeyHash:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchKeyWithIdentifier:(id)arg1 domain:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchKeysWithDomain:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storeKeyWithIdentifier:(id)arg1 domain:(id)arg2 protectedBy:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

