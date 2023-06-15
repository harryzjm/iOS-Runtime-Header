//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface PublishedLocalStatus : NSManagedObject
{
}

+ (id)identifierKeyPath;
+ (id)predicateForPublishedLocalStatusIdentifiers:(id)arg1;
+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSSet *deliveredDevices; // @dynamic deliveredDevices;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *keyDomain; // @dynamic keyDomain;
@property(copy, nonatomic) NSString *keyName; // @dynamic keyName;
@property(copy, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(retain, nonatomic) NSData *payload; // @dynamic payload;
@property(retain, nonatomic) NSSet *pendingDevices; // @dynamic pendingDevices;
@property(nonatomic) long long targetDevicesFlags; // @dynamic targetDevicesFlags;

@end

