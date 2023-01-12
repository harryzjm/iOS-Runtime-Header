//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKSample.h>

@class NSDictionary;

@interface HKSample (HKDataMetadataReportSection)
+ (id)createWithCodableNotificationSample:(id)arg1;
+ (id)createWithCodableChartData:(id)arg1;
- (id)detailedReportName;
- (id)dataProviderValue;
- (id)hk_additionalMetadataSectionsWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 subsampleDelegate:(id)arg4;
- (double)duration;
- (id)dataForSharingWithHealthStore:(id)arg1;
- (void)fetchSubSampleTypesWithHealthStore:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addDetailValuesToSection:(id)arg1;
- (id)subSampleSectionTitle;
- (id)subSamplePredicate;
- (id)fixedAggregateValuesWithDisplayTypeController:(id)arg1 unitController:(id)arg2;
- (id)codableSampleChartData;

// Remaining properties
@property(readonly, nonatomic) NSDictionary *metadata;
@end

