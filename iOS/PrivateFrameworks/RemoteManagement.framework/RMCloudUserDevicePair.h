//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagement/RMReconcilableObject-Protocol.h>

@class NSData, NSString, NSUUID, RMCloudDevice, RMCloudUser;

@interface RMCloudUserDevicePair <RMReconcilableObject>
{
}

+ (_Bool)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id *)arg3;
+ (id)fetchRequest;
- (id)computeUniqueIdentifier;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;

// Remaining properties
@property(copy, nonatomic) NSString *altURI; // @dynamic altURI;
@property(copy, nonatomic) NSString *ckRecordID; // @dynamic ckRecordID;
@property(retain, nonatomic) NSData *ckRecordSystemFields; // @dynamic ckRecordSystemFields;
@property(copy, nonatomic) NSUUID *sortKey; // @dynamic sortKey;
@property(retain, nonatomic) RMCloudDevice *sourceDevice; // @dynamic sourceDevice;
@property(retain, nonatomic) RMCloudUser *sourceUser; // @dynamic sourceUser;

@end
