//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLJournalEntryPayload-Protocol.h>
#import <PhotoLibraryServices/PLJournalEntryPayloadValidation-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol PLJournalEntryPayloadID;

@interface PLJournalEntryPayload : NSObject <PLJournalEntryPayload, PLJournalEntryPayloadValidation>
{
    NSMutableDictionary *_payloadAttributes;
    NSMutableSet *_nilProperties;
    id <PLJournalEntryPayloadID> _payloadID;
    unsigned int _payloadVersion;
}

+ (id)sortedObjectsToAddWithUUIDs:(id)arg1 uuidKey:(id)arg2 andExistingObjects:(id)arg3 fetchBlock:(CDUnknownBlockType)arg4;
+ (void)loadModelPropertiesDescription:(id)arg1 parentPayloadProperty:(id)arg2;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelPropertiesDescription;
+ (id)payloadClassID;
+ (id)payloadWithData:(id)arg1 forPayloadID:(id)arg2 version:(unsigned int)arg3 andNilProperties:(id)arg4 error:(id *)arg5;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (unsigned int)payloadVersion;
+ (id)modelProperties;
+ (id)additionalEntityNames;
+ (_Bool)isValidForPersistenceWithObjectDictionary:(id)arg1;
+ (void)validatePayloadPropertiesForManagedObjectModel:(id)arg1;
+ (void)_validateModelProperties:(id)arg1 nonPersistedModelProperties:(id)arg2 forEntityDescription:(id)arg3;
- (void).cxx_destruct;
- (void)addAttributesDescriptionToBuilder:(id)arg1;
- (void)addNilPropertiesToBuilder:(id)arg1;
- (id)descriptionForEntry:(id)arg1 withBuilder:(id)arg2;
- (id)descriptionWithBuilder:(id)arg1;
- (id)prettyDescriptionForEntry:(id)arg1 indent:(long long)arg2;
- (id)descriptionForEntry:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)applyPayloadToManagedObject:(id)arg1;
- (id)UUIDStringForData:(id)arg1;
- (id)UUIDDataForString:(id)arg1;
- (id)setForUUIDEncodedData:(id)arg1;
- (id)orderedSetForUUIDEncodedData:(id)arg1;
- (id)encodedDataForUUIDs:(id)arg1 count:(unsigned long long)arg2;
- (_Bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3;
- (void)migrateDecodedAttributes:(id)arg1;
- (void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (_Bool)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3;
- (void)migrateMergedPayload;
- (void)mergePayload:(id)arg1;
- (_Bool)decodePayloadData:(id)arg1 error:(id *)arg2;
- (id)payloadDataWithError:(id *)arg1;
@property(readonly, nonatomic) NSSet *nilProperties;
@property(readonly, nonatomic) unsigned int payloadVersion;
@property(readonly, nonatomic) id <PLJournalEntryPayloadID> payloadID;
- (void)_applyPayloadToManagedObject:(id)arg1 forModelProperties:(id)arg2;
- (void)_updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forModelProperties:(id)arg3;
- (void)_updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forModelProperties:(id)arg3;
- (void)_applyModelProperties:(id)arg1 toPayloadAttributes:(id)arg2 forManagedObject:(id)arg3 changedKeys:(id)arg4;
- (void)_applyNilPropertiesWithModelProperties:(id)arg1;
- (id)_payloadAttributesListForSubRelationshipProperty:(id)arg1 withManagedObjects:(id)arg2;
- (id)initWithPayloadID:(id)arg1 payloadVersion:(unsigned int)arg2 nilProperties:(id)arg3 managedObject:(id)arg4 changedKeys:(id)arg5 modelProperties:(id)arg6;
- (id)initWithPayloadID:(id)arg1 payloadVersion:(unsigned int)arg2 nilProperties:(id)arg3;
- (id)initWithManagedObject:(id)arg1 changedKeys:(id)arg2;
- (_Bool)comparePayloadToObjectDictionary:(id)arg1 usingModelProperties:(id)arg2 errorDescriptions:(id)arg3;
- (void)_resolveRelationshipsInObjectDictionary:(id)arg1 atKeyPath:(id)arg2 forPayloadProperty:(id)arg3;
- (_Bool)_comparePayloadAttributes:(id)arg1 toObjectDictionary:(id)arg2 currentKeyPath:(id)arg3 usingModelProperties:(id)arg4 errorDescriptions:(id)arg5;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
