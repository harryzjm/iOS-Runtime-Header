//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HKCardioFitnessPopulationNormsViewModel
{
}

- (double)minimumSampleValueQuantity;
- (double)maximumSampleValueQuantity;
- (unsigned long long)maximumUserAgeBucketIndex;
- (id)currentDataForBiologicalSex;
- (id)localizedClassificationNameForIndex:(unsigned long long)arg1;
- (id)localizedClassificationDescriptionForIndex:(unsigned long long)arg1;
- (id)localizedClassificationTitleForIndex:(unsigned long long)arg1;
- (_Bool)shouldShowClassificationTitle;
- (unsigned long long)numberOfClassifications;
- (id)seriesHighlightedSegmentColor;
- (id)seriesHighlightedColor;
- (id)footerText;
- (id)ageBucketsTitle;
- (id)quantityUnitTitle;
- (id)levelsTitle;
- (id)chartTitle;
- (id)viewTitle;
- (id)classificationIndexForSampleValue:(double)arg1 age:(long long)arg2 sex:(long long)arg3;
- (id)associatedSampleType;

@end
