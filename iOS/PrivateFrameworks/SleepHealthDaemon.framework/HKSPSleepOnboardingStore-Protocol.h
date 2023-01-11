//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKSPMutableSleepEventRecord, HKSPSleepEventRecord, HKSPSleepSettings;
@protocol HKSPSleepStoreObserver;

@protocol HKSPSleepOnboardingStore
- (void)removeObserver:(id <HKSPSleepStoreObserver>)arg1;
- (void)addObserver:(id <HKSPSleepStoreObserver>)arg1;
- (void)saveCurrentSleepEventRecord:(HKSPMutableSleepEventRecord *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setSleepWindDownShortcutsOnboardingCompletedVersion:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setSleepTrackingOnboardingCompletedVersion:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setSleepCoachingOnboardingCompletedVersion:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (HKSPSleepSettings *)currentSleepSettingsWithError:(id *)arg1;
- (void)currentSleepEventRecordWithCompletion:(void (^)(HKSPSleepEventRecord *, NSError *))arg1;
- (HKSPSleepEventRecord *)currentSleepEventRecordWithError:(id *)arg1;
@end
