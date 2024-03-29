//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString, STCoreDevice, STCoreUser;

__attribute__((visibility("hidden")))
@interface STUserDeviceAddress : NSManagedObject
{
}

+ (id)fetchOrCreateUserDeviceAddressWithUser:(id)arg1 device:(id)arg2 context:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(retain, nonatomic) STCoreDevice *device; // @dynamic device;
@property(retain, nonatomic) NSString *idsURI; // @dynamic idsURI;
@property(retain, nonatomic) STCoreUser *user; // @dynamic user;

@end

