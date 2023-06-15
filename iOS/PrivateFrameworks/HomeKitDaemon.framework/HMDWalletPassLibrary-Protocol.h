//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDHomeWalletKey, NSData, NSSet, NSString, NSURL;
@protocol HMDWalletPassLibraryDelegate;

@protocol HMDWalletPassLibrary <NSObject>
@property(readonly, getter=isWalletVisible) _Bool walletVisible;
@property(readonly, copy) NSSet *walletKeys;
@property(readonly, copy) NSString *secureElementIdentifier;
@property __weak id <HMDWalletPassLibraryDelegate> delegate;
- (_Bool)isExpressModeEnabledForPassUniqueIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (NSURL *)createTemporaryPassDirectoryURL;
- (_Bool)removePassWithTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (void)deleteKeyMaterialForSubCredentialId:(NSString *)arg1;
- (void)fetchExpressEnablementConflictingPassDescriptionForPassAtURL:(NSURL *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)fetchIsExpressEnabledForPassWithTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)fetchTransactionKeyForPassWithTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(NSString *)arg2 completion:(void (^)(PKAssertion *, NSError *))arg3;
- (void)generateHomeKeyNFCInfoWithReaderPublicKey:(NSData *)arg1 readerIdentifier:(NSData *)arg2 completion:(void (^)(HMDHomeWalletKeySecureElementInfo *, NSError *))arg3;
- (void)fetchHomeKeySupportedWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (NSURL *)urlForWalletKeyWithTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (HMDHomeWalletKey *)walletKeyWithTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (NSString *)passUniqueIDOfWalletKeyWithTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (void)enableExpressWithAuthData:(NSData *)arg1 passTypeIdentifier:(NSString *)arg2 serialNumber:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)updatePassAtURL:(NSURL *)arg1 completion:(void (^)(NSError *))arg2;
- (void)addPassAtURL:(NSURL *)arg1 completion:(void (^)(NSError *))arg2;
- (void)start;
@end

