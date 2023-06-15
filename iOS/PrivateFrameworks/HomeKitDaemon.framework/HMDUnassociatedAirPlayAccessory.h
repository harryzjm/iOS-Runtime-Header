//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFPairingIdentity, NSString;

__attribute__((visibility("hidden")))
@interface HMDUnassociatedAirPlayAccessory
{
    HMFPairingIdentity *_pairingIdentity;
}

+ (id)logCategory;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)associateToHome:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) _Bool supportsAssociation;
@property(copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;
- (id)modelForChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

