//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeNetworkRouterManagingDeviceSettingsModel
{
}

+ (id)properties;
+ (id)defaultModelForHomeUUID:(id)arg1;
+ (id)modelIDForHomeUUID:(id)arg1;
+ (id)modelNamespace;
+ (Class)cd_entityClass;
- (id)dependentUUIDs;
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *primaryNetworkRouterManagingDeviceUUID; // @dynamic primaryNetworkRouterManagingDeviceUUID;
@property(readonly) Class superclass;

@end

