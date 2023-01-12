//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HeartRhythmUI/HKOnboardingManagerDataSource-Protocol.h>
#import <HeartRhythmUI/HKOnboardingManagerDelegate-Protocol.h>

@class HKFeatureAvailabilityStore, HKOnboardingManager, NPSManager, NSString;
@protocol HRAtrialFibrillationOnboardingManagerDelegate;

@interface HRAtrialFibrillationOnboardingManager : NSObject <HKOnboardingManagerDataSource, HKOnboardingManagerDelegate>
{
    long long _provenance;
    HKOnboardingManager *_onboardingManager;
    NPSManager *_nanoPreferenceSyncManager;
    id <HRAtrialFibrillationOnboardingManagerDelegate> _delegate;
    HKFeatureAvailabilityStore *_featureAvailabilityStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKFeatureAvailabilityStore *featureAvailabilityStore; // @synthesize featureAvailabilityStore=_featureAvailabilityStore;
@property(nonatomic) __weak id <HRAtrialFibrillationOnboardingManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NPSManager *nanoPreferenceSyncManager; // @synthesize nanoPreferenceSyncManager=_nanoPreferenceSyncManager;
@property(readonly, nonatomic) HKOnboardingManager *onboardingManager; // @synthesize onboardingManager=_onboardingManager;
@property(readonly, nonatomic) long long provenance; // @synthesize provenance=_provenance;
- (void)_wrapUpOnboardingWithNotificationsEnabled:(_Bool)arg1;
- (void)didCompleteOnboardingForOnboardingManager:(id)arg1;
- (void)didCancelOnboardingForOnboardingManager:(id)arg1;
- (void)_setOnboardingCompletedForCountryCode:(id)arg1;
- (void)onboardingManager:(id)arg1 willMoveToPage:(id)arg2;
- (void)didBeginOnboardingForOnboardingManager:(id)arg1;
- (id)onboardingManager:(id)arg1 sequenceForStep:(long long)arg2 onboardingType:(long long)arg3;
- (id)availableOnboardingStepsForOnboardingManager:(id)arg1;
- (void)dismissOnboarding;
- (id)onboardingNavigationController;
- (id)initWithOnboardingType:(long long)arg1 isFirstTimeOnboarding:(_Bool)arg2 healthStore:(id)arg3 dateCache:(id)arg4 provenance:(long long)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
