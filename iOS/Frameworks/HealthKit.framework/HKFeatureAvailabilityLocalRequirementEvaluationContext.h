//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityLocalRequirementEvaluationContext
{
    long long __unitTest_cacheHits;
    NSMutableDictionary *_eligibilityByFeatureIdentifier;
    NSMutableDictionary *_onboardingRecordByFeatureIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *onboardingRecordByFeatureIdentifier; // @synthesize onboardingRecordByFeatureIdentifier=_onboardingRecordByFeatureIdentifier;
@property(retain, nonatomic) NSMutableDictionary *eligibilityByFeatureIdentifier; // @synthesize eligibilityByFeatureIdentifier=_eligibilityByFeatureIdentifier;
@property(nonatomic) long long _unitTest_cacheHits; // @synthesize _unitTest_cacheHits=__unitTest_cacheHits;
- (id)onboardingRecordForFeatureWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)onboardingEligibilityForFeatureWithIdentifier:(id)arg1 error:(id *)arg2;

@end
