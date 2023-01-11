//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

#import <RemoteManagement/RMSyncableSubObject-Protocol.h>
#import <RemoteManagement/RMUniquelySerializableManagedObject-Protocol.h>

@class NSData, NSString, RMBlueprint;

@interface RMBlueprintConfiguration : NSManagedObject <RMUniquelySerializableManagedObject, RMSyncableSubObject>
{
}

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)delete;
- (id)syncableRootObject;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;

// Remaining properties
@property(retain, nonatomic) RMBlueprint *blueprint; // @dynamic blueprint;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSData *payloadPlist; // @dynamic payloadPlist;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end
