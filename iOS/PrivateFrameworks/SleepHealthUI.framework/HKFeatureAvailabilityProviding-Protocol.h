//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString, OS_dispatch_queue;
@protocol HKFeatureAvailabilityProvidingObserver;

@protocol HKFeatureAvailabilityProviding
- (void)resetOnboardingWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)unregisterObserver:(id <HKFeatureAvailabilityProvidingObserver>)arg1;
- (void)registerObserver:(id <HKFeatureAvailabilityProvidingObserver>)arg1 queue:(OS_dispatch_queue *)arg2;
- (NSDate *)earliestDateLowestOnboardingVersionCompletedWithError:(id *)arg1;
- (NSNumber *)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)arg1;
- (NSNumber *)onboardedCountryCodeSupportedStateWithError:(id *)arg1;
- (NSNumber *)canCompleteOnboardingForCountryCode:(NSString *)arg1 error:(id *)arg2;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (NSNumber *)isCurrentOnboardingVersionCompletedWithError:(id *)arg1;
- (NSNumber *)highestOnboardingVersionCompletedWithError:(id *)arg1;
@property(nonatomic, readonly) NSString *featureIdentifier;
@end
