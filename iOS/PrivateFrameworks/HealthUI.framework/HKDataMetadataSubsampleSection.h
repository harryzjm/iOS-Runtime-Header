//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKDisplayTypeController, HKHealthStore, HKSample, HKUnitPreferenceController, NSArray, NSMutableDictionary;
@protocol HKDataMetadataSubsampleDelegate;

@interface HKDataMetadataSubsampleSection
{
    HKSample *_sample;
    NSArray *_subSampleTypes;
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
    id <HKDataMetadataSubsampleDelegate> _subsampleDelegate;
    NSMutableDictionary *_aggregationValue;
}

@property(retain, nonatomic) NSMutableDictionary *aggregationValue; // @synthesize aggregationValue=_aggregationValue;
@property(readonly, nonatomic) id <HKDataMetadataSubsampleDelegate> subsampleDelegate; // @synthesize subsampleDelegate=_subsampleDelegate;
@property(readonly, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(readonly, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, nonatomic) NSArray *subSampleTypes; // @synthesize subSampleTypes=_subSampleTypes;
@property(readonly, nonatomic) HKSample *sample; // @synthesize sample=_sample;
- (void).cxx_destruct;
- (id)displayNameForSampleType:(id)arg1 displayTypeController:(id)arg2;
- (id)_trimAndSortSampleTypes:(id)arg1;
- (id)_mergeTypesForFixedValues:(id)arg1 subSampleTypes:(id)arg2;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;
- (void)_submitSubSampleAggregateQueriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_submitCountStandHourQueryForSampleType:(id)arg1 aggregateQueryFinishedBlock:(CDUnknownBlockType)arg2;
- (void)_submitSingleValueQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(CDUnknownBlockType)arg2;
- (void)_submitAverageAggregateQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(CDUnknownBlockType)arg2;
- (void)_submitSumAggregateQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(CDUnknownBlockType)arg2;
- (id)_subSampleAggregatePredicate:(id)arg1;
- (id)_formattedValueWithUnits:(id)arg1 sampleType:(id)arg2;
- (void)_updateAggregateValue:(id)arg1 sampleType:(id)arg2 aggregateQueryFinishedBlock:(CDUnknownBlockType)arg3;
- (id)initWithSample:(id)arg1 subSampleTypes:(id)arg2 healthStore:(id)arg3 displayTypeController:(id)arg4 unitController:(id)arg5 subsampleDelegate:(id)arg6;

@end

