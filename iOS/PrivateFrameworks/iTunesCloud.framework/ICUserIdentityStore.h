//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICUserIdentityStoreBackendDelegate-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ACAccountStore, ICDelegateAccountStore, ICDelegateAccountStoreOptions, ICLocalStoreAccountProperties, ICUserIdentityStoreCoding, ICValueHistory, NSString;
@protocol ICUserIdentityStoreBackend, OS_dispatch_queue;

@interface ICUserIdentityStore : NSObject <ICUserIdentityStoreBackendDelegate, NSSecureCoding>
{
    ACAccountStore *_accountStore;
    ICValueHistory *_activeAccountHistory;
    ICValueHistory *_activeLockerAccountHistory;
    id <ICUserIdentityStoreBackend> _backend;
    ICUserIdentityStoreCoding *_codingHelper;
    ICDelegateAccountStore *_delegateAccountStore;
    ICDelegateAccountStoreOptions *_delegateAccountStoreOptions;
    ICLocalStoreAccountProperties *_localStoreAccountProperties;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)testingIdentityStoreWithSingleWriterService:(id)arg1;
+ (id)testingIdentityStoreWithDatabasePath:(id)arg1;
+ (id)nullIdentityStore;
+ (void)_claimSingleWriterStatus;
+ (id)defaultIdentityStore;
- (void).cxx_destruct;
- (id)_icValidStoreAccountsFromACAccounts:(id)arg1;
- (void)_unregisterForDelegateAccountStoreNotifications:(id)arg1;
- (_Bool)_saveIdentityProperties:(id)arg1 andPostAccountChangeNotification:(_Bool)arg2 forUserIdentity:(id)arg3 error:(id *)arg4;
- (void)_registerForDelegateAccountStoreNotifications:(id)arg1;
- (id)_openDelegateAccountStoreForUserIdentity:(id)arg1 error:(id *)arg2;
- (id)_openDelegateAccountStoreWithError:(id *)arg1;
- (void)_initializeLocalStoreAccountProperties;
- (void)_importValuesFromCodingHelper:(id)arg1;
- (id)_existingIdentityPropertiesForUserIdentity:(id)arg1 error:(id *)arg2;
- (id)_dsidForUserIdentity:(id)arg1 error:(id *)arg2;
- (id)_dsidForTimestamp:(unsigned long long)arg1 history:(id)arg2;
- (void)_dispatchDidChangeNotification:(_Bool)arg1 didDelegateAccountStoreChange:(_Bool)arg2;
- (void)_assertNonNullIdentityStoreForSelector:(SEL)arg1;
- (_Bool)_allowsDelegationForUserIdentity:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)_delegateAccountStoreDidChangeNotification:(id)arg1;
- (void)_updateDelegateAccountStoreUsingBlock:(CDUnknownBlockType)arg1;
- (void)_unsafe_deleteDelegateAccountStore;
- (void)_resetDelegateAccountStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_reloadForExternalChange;
- (_Bool)_refreshLocalStoreAccountPropertiesAllowingDidChangeNotification:(_Bool)arg1;
- (void)_prepareDelegateAccountStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <ICUserIdentityStoreBackend> _unsafeBackend;
@property(readonly, nonatomic) long long identityStoreStyle;
- (void)userIdentityStoreBackendDidChange:(id)arg1;
- (void)getuserIdentitiesForAllStoreAccountsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)userIdentitiesForAllStoreAccountsWithError:(id *)arg1;
- (void)updatePropertiesForLocalStoreAccountUsingBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) ICLocalStoreAccountProperties *localStoreAccountProperties;
- (void)getUserIdentitiesForManageableAccountsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)userIdentitiesForManageableAccountsWithError:(id *)arg1;
- (id)DSIDForUserIdentity:(id)arg1 outError:(id *)arg2;
- (void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)synchronize;
- (void)setActiveLockerAccountWithDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setActiveAccountWithDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removePropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeDelegateTokensExpiringBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDelegateTokenForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllDelegateTokensWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)insertPropertiesForUserIdentity:(id)arg1 andPostAccountChangeNotification:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)getVerificationContextForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getPropertiesForUserIdentity:(id)arg1 error:(id *)arg2;
- (void)getPropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPropertiesForActiveICloudAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getDelegationUUIDsForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enumerateDelegateTokensWithType:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enumerateDelegateTokensUsingBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)_initWithStyle:(long long)arg1 delegateAccountStoreOptions:(id)arg2;
- (id)_initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
