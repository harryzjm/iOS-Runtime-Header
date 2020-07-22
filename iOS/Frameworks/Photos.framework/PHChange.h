//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface PHChange : NSObject
{
    NSSet *_insertedObjectIDs;
    NSSet *_changedObjectIDs;
    NSSet *_deletedObjectIDs;
    NSDictionary *_changedAttributesByOID;
    NSDictionary *_changedRelationshipsByOID;
    NSMutableDictionary *_updatedObjectsChangedAttributesByEntityName;
    NSMutableDictionary *_updatedObjectsChangedRelationshipsByEntityName;
    NSArray *_changedObjectIDsArray;
    NSMutableDictionary *_changeDetailsForObjects;
    NSMutableDictionary *_collectionChangeDetailsForObjects;
    NSObject<OS_dispatch_queue> *_changeDetailIsolation;
    NSMapTable *_changeHandlingMap;
    _Bool _unknownMergeEvent;
}

+ (id)handlerQueue;
+ (void)pl_simulateChangeWithAssetContainerList:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)description;
- (_Bool)containsChangesForEntityClass:(Class)arg1;
- (id)changeDetailsForFetchResult:(id)arg1;
- (id)changeDetailsForObject:(id)arg1;
- (_Bool)favoriteStateChangedForPHAssetOID:(id)arg1;
- (_Bool)hiddenStateChangedForPHAssetOID:(id)arg1;
- (_Bool)trashedStateChangedForPHAssetOID:(id)arg1;
- (_Bool)contentOrThumbnailChangedForAsset:(id)arg1;
- (_Bool)contentOrThumbnailChangedForPHAssetOID:(id)arg1;
- (_Bool)keyFaceChangedForPersonOID:(id)arg1;
- (id)_preloadChangeDetailsWithClearCacheForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)_preloadChangeDetailsWithRefetchForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)preloadChangeDetailsForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)anyUpdatedObjectsWithChangedRelationships:(unsigned long long)arg1 ofEntity:(id)arg2;
- (_Bool)anyUpdatedObjectsWithChangedAttributes:(unsigned long long)arg1 ofEntity:(id)arg2;
- (void)_prepareCachedValuesForEntity:(id)arg1;
- (id)changedRelationshipsByOID;
- (id)changedAttributesByOID;
- (id)deletedObjectIDs;
- (id)updatedObjectIDs;
- (id)insertedObjectIDs;
@property(readonly, nonatomic) _Bool hasIncrementalChanges;
- (id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(_Bool)arg2;
- (id)init;

@end
