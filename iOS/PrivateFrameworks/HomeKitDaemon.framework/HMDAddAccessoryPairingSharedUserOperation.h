//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDAddAccessoryPairingSharedUserOperation
{
}

+ (id)logCategory;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (_Bool)mainWithError:(id *)arg1;
- (id)initWithAccessoryUUID:(id)arg1 accessoryIdentifier:(id)arg2 forSharedUser:(id)arg3 sharedUserPairingIdentity:(id)arg4 asOwner:(_Bool)arg5 asSharedAdmin:(_Bool)arg6 homeUUIDWhereAccessoryWasPaired:(id)arg7;
- (id)initWithAccessory:(id)arg1 forSharedUser:(id)arg2 sharedUserPairingIdentity:(id)arg3 asOwner:(_Bool)arg4 asSharedAdmin:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

