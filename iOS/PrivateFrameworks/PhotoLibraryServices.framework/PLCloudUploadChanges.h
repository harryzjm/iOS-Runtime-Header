//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface PLCloudUploadChanges : NSObject
{
    NSMutableArray *_insertedAssets;
    NSMutableArray *_updatedAssets;
    NSMutableSet *_adjustedAssetUuids;
    NSMutableSet *_propertyChangedAssetUuids;
    NSMutableSet *_faceChangedAssetUuids;
    NSMutableArray *_deletedAssets;
    NSMutableArray *_albumInserts;
    NSMutableArray *_albumChanges;
    NSMutableArray *_albumsToDelete;
    NSMutableArray *_memoryChanges;
    NSMutableArray *_memoriesToDelete;
    NSMutableArray *_personChanges;
    NSMutableArray *_personsToDelete;
    NSMutableArray *_faceCropChanges;
    NSMutableArray *_faceCropsToDelete;
    NSMutableSet *_updatedRelationship;
}

@property(retain, nonatomic) NSMutableSet *updatedRelationship; // @synthesize updatedRelationship=_updatedRelationship;
@property(retain, nonatomic) NSMutableArray *faceCropsToDelete; // @synthesize faceCropsToDelete=_faceCropsToDelete;
@property(retain, nonatomic) NSMutableArray *faceCropChanges; // @synthesize faceCropChanges=_faceCropChanges;
@property(retain, nonatomic) NSMutableArray *personsToDelete; // @synthesize personsToDelete=_personsToDelete;
@property(retain, nonatomic) NSMutableArray *personChanges; // @synthesize personChanges=_personChanges;
@property(retain, nonatomic) NSMutableArray *memoriesToDelete; // @synthesize memoriesToDelete=_memoriesToDelete;
@property(retain, nonatomic) NSMutableArray *memoryChanges; // @synthesize memoryChanges=_memoryChanges;
@property(retain, nonatomic) NSMutableArray *albumsToDelete; // @synthesize albumsToDelete=_albumsToDelete;
@property(retain, nonatomic) NSMutableArray *albumChanges; // @synthesize albumChanges=_albumChanges;
@property(retain, nonatomic) NSMutableArray *albumInserts; // @synthesize albumInserts=_albumInserts;
@property(retain, nonatomic) NSMutableArray *deletedAssets; // @synthesize deletedAssets=_deletedAssets;
@property(retain, nonatomic) NSMutableSet *faceChangedAssetUuids; // @synthesize faceChangedAssetUuids=_faceChangedAssetUuids;
@property(retain, nonatomic) NSMutableSet *propertyChangedAssetUuids; // @synthesize propertyChangedAssetUuids=_propertyChangedAssetUuids;
@property(retain, nonatomic) NSMutableSet *adjustedAssetUuids; // @synthesize adjustedAssetUuids=_adjustedAssetUuids;
@property(retain, nonatomic) NSMutableArray *updatedAssets; // @synthesize updatedAssets=_updatedAssets;
@property(retain, nonatomic) NSMutableArray *insertedAssets; // @synthesize insertedAssets=_insertedAssets;
- (id)summaryDescription;
- (_Bool)isEmpty;
- (void)dealloc;
- (id)init;

@end
