//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthToolbox/NSObject-Protocol.h>

@class HKDataMetadataDetailSection, HKDisplayTypeController, HKHealthStore, HKSample, HKSampleType, HKUnitPreferenceController, NSPredicate, NSString, UIViewController;

@protocol HKDataMetadataViewControllerDelegate <NSObject>
@property(readonly, nonatomic) HKHealthStore *healthStore;

@optional
- (HKDataMetadataDetailSection *)detailSectionForSample:(HKSample *)arg1;
- (_Bool)shareDocumentUsingSample:(HKSample *)arg1;
- (UIViewController *)accessViewControllerForSample:(HKSample *)arg1 healthStore:(HKHealthStore *)arg2;
- (UIViewController *)viewControllerForSampleType:(HKSampleType *)arg1 subSamplePredicate:(NSPredicate *)arg2 title:(NSString *)arg3;
- (NSPredicate *)defaultPredicateForSampleType:(HKSampleType *)arg1;
- (HKUnitPreferenceController *)unitController;
- (HKDisplayTypeController *)displayTypeController;
@end

