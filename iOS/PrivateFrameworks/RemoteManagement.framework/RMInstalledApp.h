//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagement/RMUniquelySerializableManagedObject-Protocol.h>

@class NSString, RMUserDeviceState;

@interface RMInstalledApp <RMUniquelySerializableManagedObject>
{
}

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)bundleIdentifiersInstalledForDSID:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)createOrReturnInstalledAppWithBundleIdentifier:(id)arg1 userDeviceState:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (void)delete;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) RMUserDeviceState *userDeviceState; // @dynamic userDeviceState;

@end

