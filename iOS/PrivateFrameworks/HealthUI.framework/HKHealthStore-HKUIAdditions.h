//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKHealthStore.h>

@interface HKHealthStore (HKUIAdditions)
+ (id)localizationStringSuffixForWheelchairUser:(_Bool)arg1;
+ (id)localizationStringAdditionForWheelchairUser;
- (id)_sortedSources:(id)arg1;
- (void)_populateDemographicsWrapper:(id)arg1 withFirstName:(id)arg2 lastName:(id)arg3 meContact:(id)arg4;
- (void)hk_fetchExistingDemographicInformationWithCompletion:(CDUnknownBlockType)arg1;
- (id)hk_sourcesForDevicesWithSources:(id)arg1;
- (id)hk_sourcesForAuthorizationWithSources:(id)arg1;
@end
