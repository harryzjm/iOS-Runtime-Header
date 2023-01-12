//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (TSUAdditions)
+ (id)tsu_indexSetWithIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)tsu_indexSetByOutsettingRangesBy:(unsigned long long)arg1;
- (void)tsu_enumerateRangesConcurrentlyUsingBeginBlock:(CDUnknownBlockType)arg1 concurrentBlock:(CDUnknownBlockType)arg2 finalBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)tsu_nsIndexSetConcurrencyFactor;
- (id)tsu_indexSetChunkIndex:(unsigned long long)arg1 ofChunkCount:(unsigned long long)arg2;
- (void)tsu_enumerateUniquePermutationsUsingBlock:(CDUnknownBlockType)arg1;
- (struct _NSRange)tsu_boundingRange;
- (id)tsu_localizedDescription;
- (unsigned long long)tsu_firstCommonIndexWithIndexes:(id)arg1;
- (struct _NSRange)tsu_trailingRangeInRange:(struct _NSRange)arg1;
- (struct _NSRange)tsu_leadingRangeInRange:(struct _NSRange)arg1;
- (void)tsu_enumerateIndexesAndPositionsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)tsu_positionOfIndex:(unsigned long long)arg1;
- (unsigned long long)tsu_indexAtPosition:(unsigned long long)arg1;
- (id)tsu_indexSetByExcludingIndexes:(id)arg1;
- (id)tsu_indexSetByExcludingIndex:(unsigned long long)arg1;
- (id)tsu_indexSetByIntersectingWithIndexes:(id)arg1;
- (id)tsu_indexSetByIntersectingWithRange:(struct _NSRange)arg1;
- (id)tsu_indexSetByInsertingIndexes:(id)arg1 inRange:(struct _NSRange)arg2;
- (_Bool)tsu_intersectsIndexesInIndexSet:(id)arg1;
@property(readonly, nonatomic) _Bool tsu_isSingleContiguousRange;
- (id)tsu_indexSetByAddingIndexes:(id)arg1;
- (id)tsu_indexSetByAddingIndex:(unsigned long long)arg1;
- (id)tsu_initWithIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;
@end

