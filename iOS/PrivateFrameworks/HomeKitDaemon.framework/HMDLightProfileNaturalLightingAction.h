//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDLightProfile, NSArray, NSNotificationCenter, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDLightProfileNaturalLightingAction
{
    struct os_unfair_lock_s _lock;
    _Bool _naturalLightingEnabled;
    HMDLightProfile *_lightProfile;
    NSUUID *_lightProfileUUID;
    NSNotificationCenter *_notificationCenter;
    NSArray *_lightServices;
}

+ (id)logCategory;
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)actionWithDictionaryRepresentation:(id)arg1 actionSet:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *lightServices; // @synthesize lightServices=_lightServices;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, copy) NSUUID *lightProfileUUID; // @synthesize lightProfileUUID=_lightProfileUUID;
- (id)attributeDescriptions;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (Class)modelClass;
- (id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id *)arg3;
- (void)handleAccessoryProfileAddedNotification:(id)arg1;
- (id)stateDump;
- (void)configureWithHome:(id)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)type;
- (_Bool)isActionForCharacteristic:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(getter=isNaturalLightingEnabled) _Bool naturalLightingEnabled; // @synthesize naturalLightingEnabled=_naturalLightingEnabled;
@property(retain) HMDLightProfile *lightProfile; // @synthesize lightProfile=_lightProfile;
- (id)writeRequestForTransitionStartWithLightProfile:(id)arg1 startDate:(id)arg2 type:(unsigned long long)arg3;
- (_Bool)isUnsecuringAction;
- (id)associatedAccessories;
- (_Bool)isStaleWithAccessory:(id)arg1;
- (_Bool)isCompatibleWithAction:(id)arg1;
- (_Bool)isAssociatedWithAccessory:(id)arg1;
- (id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(_Bool)arg3 actionSet:(id)arg4;
- (id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(_Bool)arg3 actionSet:(id)arg4 notificationCenter:(id)arg5;

@end

