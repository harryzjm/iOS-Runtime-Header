//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshAddOn.h"

@class COCapabilityLegacyShim, NSDictionary, NSSet, NSString;
@protocol COCapabilityAddOnDelegate;

__attribute__((visibility("hidden")))
@interface COCapabilityAddOn : COMeshAddOn
{
    struct os_unfair_lock_s _lock;
    NSSet *_supportedCapabilities;
    NSSet *_availableCapabilities;
    NSDictionary *_gatheredCapabilities;
    id <COCapabilityAddOnDelegate> _delegate;
    COCapabilityLegacyShim *_pairLegacyShim;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) COCapabilityLegacyShim *pairLegacyShim; // @synthesize pairLegacyShim=_pairLegacyShim;
- (_Bool)_legacyShimOverridesAvailableCapabilities:(id)arg1;
- (void)legacyShim:(id)arg1 availableCapabilitiesChanged:(id)arg2;
- (void)_enableForPairLegacySupport;
- (void)handleCapabilitiesUpdateNotification:(id)arg1;
- (void)handleCapabilitiesUpdateCommand:(id)arg1;
- (void)handleCapabilitiesReadRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)performCapabilitiesUpdate;
- (void)_setAvailableCapabilities_Unsafe:(id)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (void)_notifyDelegateCapabilitiesChanged;
- (id)availableCapabilitiesForNode:(id)arg1;
@property(nonatomic) __weak id <COCapabilityAddOnDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *gatheredCapabilities; // @synthesize gatheredCapabilities=_gatheredCapabilities;
@property(copy, nonatomic) NSSet *availableCapabilities; // @synthesize availableCapabilities=_availableCapabilities;
@property(copy, nonatomic) NSSet *supportedCapabilities; // @synthesize supportedCapabilities=_supportedCapabilities;
- (void)didChangeNodesForMeshController:(id)arg1;
- (void)willRemoveFromMeshController:(id)arg1;
- (void)didAddToMeshController:(id)arg1;
- (void)meshController:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (id)init;
- (id)initWithSupportedCapabilities:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

