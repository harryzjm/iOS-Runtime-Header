//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveRemoteDevice.h"

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveWatch : _HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveRemoteDevice
{
    _Bool _supportedOnLocalDevice;
}

+ (_Bool)supportsSecureCoding;
+ (id)requirementIdentifier;
@property(readonly, nonatomic) _Bool supportedOnLocalDevice; // @synthesize supportedOnLocalDevice=_supportedOnLocalDevice;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;
- (id)requirementDescription;
- (id)initWithFeatureIdentifier:(id)arg1 supportedOnLocalDevice:(_Bool)arg2;

@end

