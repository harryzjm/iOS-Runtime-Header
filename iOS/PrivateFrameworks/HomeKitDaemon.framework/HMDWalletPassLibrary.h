//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSSet, NSString, PKPassLibrary;
@protocol HMDWalletPassLibraryDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDWalletPassLibrary : HMFObject
{
    id <HMDWalletPassLibraryDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    PKPassLibrary *_passLibrary;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) PKPassLibrary *passLibrary; // @synthesize passLibrary=_passLibrary;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDWalletPassLibraryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, getter=isWalletVisible) _Bool walletVisible;
- (void)deleteKeyMaterialForSubCredentialId:(id)arg1;
- (void)handlePassLibraryDidChangeNotification:(id)arg1;
- (void)fetchTransactionKeyForPassWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)createTemporaryPassDirectoryURL;
- (void)generateHomeKeyNFCInfoWithReaderPublicKey:(id)arg1 readerIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchExpressEnablementConflictingPassDescriptionForPassAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *secureElementIdentifier;
- (id)passUniqueIDOfWalletKeyWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)fetchIsExpressEnabledForPassWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isExpressModeEnabledForPassUniqueIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)enableExpressWithAuthData:(id)arg1 passTypeIdentifier:(id)arg2 serialNumber:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchHomeKeySupportedWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)removePassWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)urlForWalletKeyWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)walletKeyWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)updatePassAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addPassAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)start;
@property(readonly, copy) NSSet *walletKeys;
- (id)initWithWorkQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

