//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementOnboardingRecordsArePresentForPrerequisiteFeatures
{
    NSArray *_prerequisiteFeatureIdentifiers;
}

+ (_Bool)supportsSecureCoding;
+ (id)requirementIdentifier;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *prerequisiteFeatureIdentifiers; // @synthesize prerequisiteFeatureIdentifiers=_prerequisiteFeatureIdentifiers;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithPrerequisiteFeatureIdentifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

