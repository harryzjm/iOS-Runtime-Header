//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLSyncableObject-Protocol.h>

@class NSDate, NSManagedObject, NSSet, NSString;

@interface PLCloudMaster <PLSyncableObject>
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)_originalTypes;
+ (void)resetCloudMastersStateInManagedObjectContext:(id)arg1 hardReset:(_Bool)arg2;
+ (void)deleteAllCloudMastersInManagedObjectContext:(id)arg1;
+ (id)cloudMastersByGUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)cloudMastersWithGUIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)cloudMasterWithGUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)insertIntoPhotoLibrary:(id)arg1 withCloudMasterGUID:(id)arg2;
- (id)cplFullRecord;
@property(readonly, retain, nonatomic) id localID;
- (_Bool)allOriginalsAreLocallyAvailableForAssetUuid:(id)arg1;
- (_Bool)allOriginalsAreUploaded;
- (unsigned long long)sizeOfOriginal;
@property(readonly, copy) NSString *description;
- (void)applyResourcesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)applyPropertiesFromCPLMasterChange:(id)arg1;
- (id)cloudResourcesForResourceType:(unsigned long long)arg1;
- (id)assetUUIDToCloudResources;
- (id)cloudResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2;
- (void)awakeFromInsert;
- (void)deleteAllResourcesForAssetUuid:(id)arg1;
- (id)cplResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSSet *assets; // @dynamic assets;
@property(nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property(retain, nonatomic) NSString *cloudMasterGUID; // @dynamic cloudMasterGUID;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) short fullSizeJPEGSource; // @dynamic fullSizeJPEGSource;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSDate *importDate; // @dynamic importDate;
@property(retain, nonatomic) NSString *importSessionID; // @dynamic importSessionID;
@property(retain, nonatomic) NSManagedObject *mediaMetadata; // @dynamic mediaMetadata;
@property(retain, nonatomic) NSString *mediaMetadataType; // @dynamic mediaMetadataType;
@property(retain, nonatomic) NSString *originalFilename; // @dynamic originalFilename;
@property(nonatomic) short originalOrientation; // @dynamic originalOrientation;
@property(copy, nonatomic) NSString *originatingAssetIdentifier; // @dynamic originatingAssetIdentifier;
@property(retain, nonatomic) NSSet *resources; // @dynamic resources;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *uniformTypeIdentifier; // @dynamic uniformTypeIdentifier;

@end
