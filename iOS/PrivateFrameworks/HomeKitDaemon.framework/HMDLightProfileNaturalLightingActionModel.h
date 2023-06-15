//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDLightProfileNaturalLightingActionModel
{
}

+ (id)properties;
+ (Class)cd_entityClass;
- (id)dependentUUIDs;
@property(getter=isNaturalLightingEnabled) _Bool naturalLightingEnabled;
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;

// Remaining properties
@property(retain) NSUUID *accessoryUUID; // @dynamic accessoryUUID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) NSUUID *lightProfileUUID; // @dynamic lightProfileUUID;
@property(retain) NSNumber *naturalLightingEnabledField; // @dynamic naturalLightingEnabledField;
@property(retain) NSSet *serviceUUIDs; // @dynamic serviceUUIDs;
@property(readonly) Class superclass;

@end

