//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLFaceRebuildDescription-Protocol.h>

@class NSString;

@interface PLDetectedFaceJournalEntryPayload <PLFaceRebuildDescription>
{
}

+ (_Bool)isValidForPersistenceWithObjectDictionary:(id)arg1;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (unsigned int)payloadVersion;
+ (id)payloadClassID;
+ (id)modelProperties;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelPropertiesDescription;
- (_Bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (_Bool)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3;
@property(readonly, nonatomic, getter=isClusterRejected) _Bool clusterRejected;
@property(readonly, nonatomic) int cloudNameSource;
@property(readonly, nonatomic) int nameSource;
@property(readonly, nonatomic, getter=isRepresentative) _Bool representative;
@property(readonly, nonatomic, getter=isManual) _Bool manual;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic) double size;
@property(readonly, nonatomic) double centerY;
@property(readonly, nonatomic) double centerX;
- (_Bool)isKeyFace;
- (id)personUUID;
- (long long)assetIdentifierType;
- (id)assetID;
- (_Bool)insertFaceFromDataInManagedObjectContext:(id)arg1 allowDeferred:(_Bool *)arg2;
- (id)_insertDeferredRebuildFacesFromDataInManagedObjectContext:(id)arg1;
- (id)_insertDetectedFaceFromDataInManagedObjectContext:(id)arg1;
- (id)_insertDeferredRebuildFaceForPersonUUID:(id)arg1 inManagedObjectContext:(id)arg2;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
