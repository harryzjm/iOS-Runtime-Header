//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDAccessoryAssociation-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMFPairingIdentity, NSString;

@interface HMDUnassociatedAirPlayAccessory <HMFLogging, HMDAccessoryAssociation>
{
    HMFPairingIdentity *_pairingIdentity;
}

+ (id)logCategory;
+ (id)modelForChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)associateToHome:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) _Bool supportsAssociation;
@property(copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
