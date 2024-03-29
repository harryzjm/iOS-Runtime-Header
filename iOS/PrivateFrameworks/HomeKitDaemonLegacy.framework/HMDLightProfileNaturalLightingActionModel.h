//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSSet, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDLightProfileNaturalLightingActionModel
{
}

+ (id)properties;
- (id)dependentUUIDs;
@property(getter=isNaturalLightingEnabled) _Bool naturalLightingEnabled;

// Remaining properties
@property(retain) NSUUID *accessoryUUID; // @dynamic accessoryUUID;
@property(retain) NSUUID *lightProfileUUID; // @dynamic lightProfileUUID;
@property(retain) NSNumber *naturalLightingEnabledField; // @dynamic naturalLightingEnabledField;
@property(retain) NSSet *serviceUUIDs; // @dynamic serviceUUIDs;

@end

