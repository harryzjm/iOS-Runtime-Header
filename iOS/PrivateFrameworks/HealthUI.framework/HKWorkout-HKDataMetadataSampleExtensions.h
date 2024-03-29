//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKWorkout.h>

@interface HKWorkout (HKDataMetadataSampleExtensions)
+ (id)hkui_localizedWorkoutStringForValue:(id)arg1;
- (id)hk_defaultDistanceQuantityType;
- (id)hk_additionalMetadataSectionsWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 subsampleDelegate:(id)arg4;
- (id)hkui_localizedActivityTypeName;
- (void)fetchSubSampleTypesWithHealthStore:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addDetailValuesToSection:(id)arg1;
- (id)subSampleSectionTitle;
- (id)subSamplePredicate;
- (id)fixedAggregateValuesWithDisplayTypeController:(id)arg1 unitController:(id)arg2;
@end

