//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOrderedSet.h>

@class NSString;

@interface NSOrderedSet (IBBinaryArchivingAdditions)
+ (id)ib_orderedCollectionWithOrderedCollection:(id)arg1;
+ (id)ib_collectionWithObject:(id)arg1;
+ (id)ib_emptyCollection;
+ (Class)ib_mutableClass;
+ (id)ib_orderedSetFromContentsOfObjectBufferPopulatedBy:(CDUnknownBlockType)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)ib_getObjects:(id *)arg1;
- (void)ib_removeObjectsInReceiverFromArray:(id)arg1;
- (void)ib_removeObjectsInReceiverFromOrderedSet:(id)arg1;
- (void)ib_removeObjectsInReceiverFromSet:(id)arg1;
- (id)ib_maximumObjectUsingComparator:(CDUnknownBlockType)arg1;
- (id)ib_minimumObjectUsingComparator:(CDUnknownBlockType)arg1;
- (id)ib_arrayBySortingUsingComparator:(CDUnknownBlockType)arg1;
- (long long)ib_numberOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)ib_arrayBySortingUsingSelector:(SEL)arg1 onKeyPath:(id)arg2;
- (id)ib_arrayBySortingUsingSelector:(SEL)arg1;
- (void)ib_enumerateCopyOfObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)ib_enumerateObjectsUsingMutatingBlock:(CDUnknownBlockType)arg1;
- (_Bool)ib_binarySearchForObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)ib_dictionaryWithObjectToLastIndex;
- (unsigned long long)ib_indexOfFirstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)ib_collectionByKeepingObjectsInSet:(id)arg1;
- (id)ib_collectionByRemovingObjectsInSet:(id)arg1;
- (id)ib_collectionByRemovingObjectsFromCollection:(id)arg1;
- (id)ib_collectionByAddingObjectsFromCollection:(id)arg1;
- (id)ib_collectionByReversingObjects;
- (id)ib_collectionByRemovingObject:(id)arg1;
- (id)ib_collectionByInsertingObjects:(id)arg1 atIndex:(long long)arg2;
- (id)ib_collectionByInsertingObject:(id)arg1 atIndex:(long long)arg2;
- (id)ib_collectionByAddingObject:(id)arg1;
- (id)ib_collectionByMappingBlock:(CDUnknownBlockType)arg1;
- (id)ib_collectionByMappingAndFilteringWithBlock:(CDUnknownBlockType)arg1;
- (id)ib_orderedSetByMappingAndFilteringWithBlock:(CDUnknownBlockType)arg1;
- (id)ib_orderedSetByMappingBlock:(CDUnknownBlockType)arg1;
- (id)ib_collectionByFilteringUsingBlock:(CDUnknownBlockType)arg1;
- (id)ib_collectionByRemovingNulls;
- (id)ib_onlyObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)ib_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)ib_objectsAreStrictlyContainedBySet:(id)arg1;
- (_Bool)ib_objectsAreContainedBySet:(id)arg1;
- (_Bool)ib_anyObjectsPassTest:(CDUnknownBlockType)arg1;
- (_Bool)ib_allObjectsPassTest:(CDUnknownBlockType)arg1;
- (id)ib_arrayByMappingBlock:(CDUnknownBlockType)arg1;
- (id)ib_setByMappingBlock:(CDUnknownBlockType)arg1;
- (Class)ib_mutableClass;
- (id)ib_uniqueObjects;
- (id)allObjects;
- (id)ib_setByFilteringUsingBlock:(CDUnknownBlockType)arg1;
- (id)ib_prefixOrderedSetUpToObject:(id)arg1;
- (id)ib_objectsConformingToProtocol:(id)arg1;
- (id)ib_objectsOfClass:(Class)arg1;
- (id)ib_orderedSetByFilteringUsingBlock:(CDUnknownBlockType)arg1;
- (id)ib_orderedSetByMoveObjectsAtIndexes:(id)arg1 toIndex:(long long)arg2;
- (id)ib_orderedSetByInsertingObject:(id)arg1 atIndex:(long long)arg2;
- (id)ib_orderedSetByAddingObject:(id)arg1;
- (id)ib_orderedSetByRemovingObjects:(id)arg1;
- (id)ib_orderedSetByRemovingObject:(id)arg1;
- (id)ib_onlyObject;
- (id)anyObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

