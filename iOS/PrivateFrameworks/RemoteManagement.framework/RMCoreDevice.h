//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, RMUserDeviceState;

@interface RMCoreDevice : NSManagedObject
{
}

+ (id)fetchOrCreateLocalDeviceInContext:(id)arg1 error:(id *)arg2;
+ (id)fetchOrCreateDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) RMUserDeviceState *localUserDeviceState; // @dynamic localUserDeviceState;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *usages; // @dynamic usages;
@property(retain, nonatomic) NSSet *userDeviceAddresses; // @dynamic userDeviceAddresses;
@property(retain, nonatomic) NSSet *userDeviceStates; // @dynamic userDeviceStates;

@end

