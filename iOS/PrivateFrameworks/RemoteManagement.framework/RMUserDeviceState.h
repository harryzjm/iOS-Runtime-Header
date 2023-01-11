//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagement/RMUniquelySerializableManagedObject-Protocol.h>

@class NSData, NSSet, NSString, RMCoreDevice, RMCoreUser;

@interface RMUserDeviceState <RMUniquelySerializableManagedObject>
{
}

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchLocalUserDeviceStateInContext:(id)arg1 error:(id *)arg2;
+ (id)fetchOrCreateLocalUserDeviceStateInContext:(id)arg1 error:(id *)arg2;
+ (id)fetchRequestMatchingLocalUserDeviceState;
- (void)delete;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSData *capabilitiesPlist; // @dynamic capabilitiesPlist;
@property(nonatomic) _Bool cloudSyncEnabled; // @dynamic cloudSyncEnabled;
@property(copy, nonatomic) NSString *coreDuetIdentifier; // @dynamic coreDuetIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) RMCoreDevice *device; // @dynamic device;
@property(copy, nonatomic) NSData *deviceInfoPlist; // @dynamic deviceInfoPlist;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSSet *installedApps; // @dynamic installedApps;
@property(retain, nonatomic) RMCoreDevice *localDevice; // @dynamic localDevice;
@property(retain, nonatomic) RMCoreUser *localUser; // @dynamic localUser;
@property(nonatomic) _Bool managementEnabled; // @dynamic managementEnabled;
@property(copy, nonatomic) NSString *passcodeOwner; // @dynamic passcodeOwner;
@property(nonatomic) _Bool screenTimeEnabled; // @dynamic screenTimeEnabled;
@property(readonly) Class superclass;
@property(retain, nonatomic) RMCoreUser *user; // @dynamic user;

@end
