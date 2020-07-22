//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IBFoundation/IBMutableCollection-Protocol.h>
#import <IBFoundation/IBOrderedCollection-Protocol.h>

@protocol IBCollection;

@protocol IBMutableOrderedCollection <IBOrderedCollection, IBMutableCollection>
- (void)sortUsingComparator:(long long (^)(id, id))arg1;
- (void)ib_addObjectToSortedCollectionUsingBinarySearch:(id)arg1 comparisonSelector:(SEL)arg2;
- (void)ib_addObjectToSortedCollectionUsingBinarySearch:(id)arg1 comparator:(long long (^)(id, id))arg2;
- (void)ib_insertObjects:(id <IBCollection>)arg1 atIndex:(long long)arg2;
- (void)insertObject:(id)arg1 atIndex:(long long)arg2;
@end

