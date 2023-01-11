//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagement/RMReconcilableObject-Protocol.h>
#import <RemoteManagement/RMSerializableManagedObject-Protocol.h>

@class NSData, NSSet, NSString, NSUUID, RMCloudOrganization;

@interface RMCloudActivation <RMReconcilableObject, RMSerializableManagedObject>
{
}

+ (_Bool)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id *)arg3;
+ (id)fetchRequest;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSData *activationPlist; // @dynamic activationPlist;
@property(nonatomic) long long activationType; // @dynamic activationType;
@property(copy, nonatomic) NSString *ckRecordID; // @dynamic ckRecordID;
@property(retain, nonatomic) NSData *ckRecordSystemFields; // @dynamic ckRecordSystemFields;
@property(retain, nonatomic) NSSet *configurations; // @dynamic configurations;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) RMCloudOrganization *organization; // @dynamic organization;
@property(copy, nonatomic) NSUUID *sortKey; // @dynamic sortKey;
@property(readonly) Class superclass;

@end
