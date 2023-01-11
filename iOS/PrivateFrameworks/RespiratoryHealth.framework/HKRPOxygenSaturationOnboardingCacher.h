//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RespiratoryHealth/HKFeatureAvailabilityProvidingObserver-Protocol.h>

@class NSUserDefaults;
@protocol HKFeatureAvailabilityProviding, HKRPUserDefaultsSyncProviding, OS_dispatch_queue;

@interface HKRPOxygenSaturationOnboardingCacher : NSObject <HKFeatureAvailabilityProvidingObserver>
{
    id <HKFeatureAvailabilityProviding> _featureAvailabilityProvider;
    NSUserDefaults *_userDefaults;
    id <HKRPUserDefaultsSyncProviding> _userDefaultsSyncProvider;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_queue_featureAvailabilityDidChange;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)dealloc;
- (id)initWithFeatureAvailabilityProviding:(id)arg1 userDefaults:(id)arg2 userDefaultsSyncProvider:(id)arg3 didStart:(CDUnknownBlockType)arg4;
- (id)initWithFeatureAvailabilityProviding:(id)arg1 userDefaults:(id)arg2 userDefaultsSyncProvider:(id)arg3;

@end
