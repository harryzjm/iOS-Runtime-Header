//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagement/RMReconcilableObject-Protocol.h>

@class NSData, NSDate, NSSet, NSString, NSUUID;

@interface RMCloudDevice <RMReconcilableObject>
{
}

+ (_Bool)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id *)arg3;
+ (id)createOrReturnDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchRequest;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSSet *apps; // @dynamic apps;
@property(retain, nonatomic) NSData *capabilitiesPlist; // @dynamic capabilitiesPlist;
@property(copy, nonatomic) NSString *ckRecordID; // @dynamic ckRecordID;
@property(retain, nonatomic) NSData *ckRecordSystemFields; // @dynamic ckRecordSystemFields;
@property(retain, nonatomic) NSData *deviceInfoPlist; // @dynamic deviceInfoPlist;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSDate *lastUsageEventDate; // @dynamic lastUsageEventDate;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSUUID *sortKey; // @dynamic sortKey;
@property(retain, nonatomic) NSSet *usageIdentifiers; // @dynamic usageIdentifiers;
@property(retain, nonatomic) NSSet *userDevicePairs; // @dynamic userDevicePairs;

@end
