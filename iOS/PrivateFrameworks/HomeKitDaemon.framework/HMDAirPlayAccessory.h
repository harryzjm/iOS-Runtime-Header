//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFExponentialBackoffTimer, HMFPairingIdentity, NSString;

__attribute__((visibility("hidden")))
@interface HMDAirPlayAccessory
{
    HMFPairingIdentity *_pairingIdentity;
    NSString *_password;
    long long _minimumUserPriviledge;
    HMFExponentialBackoffTimer *_configurationRetryTimer;
}

+ (id)logCategory;
+ (_Bool)supportsSecureCoding;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMFExponentialBackoffTimer *configurationRetryTimer; // @synthesize configurationRetryTimer=_configurationRetryTimer;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)pairingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeUserPairingIdentity:(id)arg1 isOwner:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addUserPairingIdentity:(id)arg1 isOwner:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) _Bool supportsUserManagement;
- (void)disassociatePairingIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)disassociateWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) _Bool supportsDisassociation;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (id)backingStoreObjects:(long long)arg1;
- (void)setMinimumUserPriviledge:(long long)arg1;
@property(readonly) long long minimumUserPriviledge; // @synthesize minimumUserPriviledge=_minimumUserPriviledge;
- (void)setPassword:(id)arg1;
@property(readonly, copy) NSString *password; // @synthesize password=_password;
- (void)setPairingIdentity:(id)arg1;
@property(readonly, copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (void)handleUpdatedPassword:(id)arg1;
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;
- (_Bool)supportsMinimumUserPrivilege;
- (id)messageSendPolicy;
- (void)_handleUpdatedName:(id)arg1;
- (void)handleUpdatedAdvertisement:(id)arg1;
- (void)setAdvertisement:(id)arg1;
- (id)advertisement;
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(_Bool)arg4;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

