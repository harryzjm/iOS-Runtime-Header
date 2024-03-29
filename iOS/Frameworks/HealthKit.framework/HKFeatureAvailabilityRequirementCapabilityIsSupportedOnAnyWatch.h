//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementCapabilityIsSupportedOnAnyWatch
{
    _Bool _supportedOnLocalDevice;
    NSUUID *_nanoRegistryCapability;
}

+ (_Bool)supportsSecureCoding;
+ (id)requirementIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSupportedOnLocalDevice) _Bool supportedOnLocalDevice; // @synthesize supportedOnLocalDevice=_supportedOnLocalDevice;
@property(readonly, copy, nonatomic) NSUUID *nanoRegistryCapability; // @synthesize nanoRegistryCapability=_nanoRegistryCapability;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithNanoRegistryCapability:(id)arg1 supportedOnLocalDevice:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

