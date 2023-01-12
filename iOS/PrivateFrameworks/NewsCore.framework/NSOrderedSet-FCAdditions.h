//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOrderedSet.h>

@interface NSOrderedSet (FCAdditions)
+ (id)fc_orderedSet:(CDUnknownBlockType)arg1;
- (_Bool)fc_isEqualToOrderedSet:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)fc_orderedSetByAddingObject:(id)arg1;
- (id)fc_orderedSetByCollectingObjectsWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_orderedSetByMinusingOrderedSet:(id)arg1;
- (id)fc_orderedSetWithObjectsAtIndexes:(id)arg1;
- (id)fc_orderedSetWithObjectsInRange:(struct _NSRange)arg1;
- (id)fc_orderedSetOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)fc_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_indexesOfObjectsInOrderedSet:(id)arg1;
- (id)fc_diffAgainstOrderedSet:(id)arg1;
- (id)fc_diffAgainstOrderedSet:(id)arg1 withEqualityTest:(CDUnknownBlockType)arg2 identityValueProvider:(CDUnknownBlockType)arg3;
- (id)fc_objectInSortedOrderedCollectionWithFeature:(id)arg1 usingFeatureProvider:(CDUnknownBlockType)arg2 comparator:(CDUnknownBlockType)arg3;
- (id)fc_diffAgainstSortedOrderedCollection:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (_Bool)fc_isSortedUsingComparator:(CDUnknownBlockType)arg1;
- (void)fc_enumerateObjectsPairwiseUsingBlock:(CDUnknownBlockType)arg1;
- (id)fc_orderedSetByTransformingWithBlock:(CDUnknownBlockType)arg1;
@end

