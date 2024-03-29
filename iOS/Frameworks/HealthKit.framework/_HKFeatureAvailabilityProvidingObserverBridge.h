//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKObserverBridgeHandle, NSString;

__attribute__((visibility("hidden")))
@interface _HKFeatureAvailabilityProvidingObserverBridge : NSObject
{
    HKObserverBridgeHandle *_handle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKObserverBridgeHandle *handle; // @synthesize handle=_handle;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)arg1;
- (void)_notifyObserversWithFeatureAvailabilityProviding:(id)arg1;
- (id)initWithHandle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

