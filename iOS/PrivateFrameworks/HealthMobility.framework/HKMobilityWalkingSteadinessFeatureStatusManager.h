//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthMobility/HKMobilityWalkingSteadinessFeatureStatusManagerClient-Protocol.h>
#import <HealthMobility/_HKXPCExportable-Protocol.h>

@class HKObserverSet, HKTaskServerProxyProvider, NSString;

@interface HKMobilityWalkingSteadinessFeatureStatusManager : NSObject <HKMobilityWalkingSteadinessFeatureStatusManagerClient, _HKXPCExportable>
{
    HKObserverSet *_observers;
    HKTaskServerProxyProvider *_proxyProvider;
    long long _onboardingState;
    long long _notificationState;
}

- (void).cxx_destruct;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (void)client_didUpdateFitnessTrackingEnabled:(_Bool)arg1;
- (void)client_didUpdateNotificationStatus:(id)arg1;
- (void)client_didUpdateOnboardingStatus:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (_Bool)isFitnessTrackingEnabled;
- (void)setNotificationsEnabled:(_Bool)arg1;
- (id)notificationStatusWithError:(id *)arg1;
- (void)resetOnboarding;
- (id)onboardingStatusWithError:(id *)arg1;
- (id)initWithHealthStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
