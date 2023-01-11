//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKDataMetadataViewControllerDelegate-Protocol.h>

@class HKDataMetadataSimpleTableViewCell, HKDisplayTypeController, HKHealthStore, HKQuantitySample, HKSample, HKUnitPreferenceController, NSString;
@protocol HKDataMetadataSubsampleDelegate;

@interface HKDataMetadataOxygenSaturationSection <HKDataMetadataViewControllerDelegate>
{
    HKSample *_sample;
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
    id <HKDataMetadataSubsampleDelegate> _subsampleDelegate;
    HKDataMetadataSimpleTableViewCell *_cell;
    HKQuantitySample *_heartRateSample;
}

- (void).cxx_destruct;
- (id)heartRateFromSample:(id)arg1;
- (id)displayNameForSampleType:(id)arg1 displayTypeController:(id)arg2;
- (void)queryForData;
- (id)formattedHeartRateFromSample:(id)arg1;
- (id)unitController;
- (id)displayTypeController;
@property(readonly, nonatomic) HKHealthStore *healthStore;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 subsampleDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
