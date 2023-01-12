//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSNumber, NSString;

@interface NSArray (EmailFoundationAdditions)
@property(readonly, nonatomic) NSNumber *ef_standardDeviation;
@property(readonly, copy, nonatomic) NSArray *ef_mode;
@property(readonly, nonatomic) NSNumber *ef_median;
@property(readonly, nonatomic) NSNumber *ef_mean;
@property(readonly, nonatomic) NSNumber *ef_max;
@property(readonly, nonatomic) NSNumber *ef_min;
@property(readonly, nonatomic) NSNumber *ef_sum;
@property(readonly, nonatomic) _Bool ef_isEmpty;
@property(readonly, nonatomic) NSArray *ef_reverse;
@property(readonly, nonatomic) NSArray *ef_permutations;
- (id)ef_subarraysOfSize:(unsigned long long)arg1;
- (id)ef_groupByObject:(CDUnknownBlockType)arg1 keyOptions:(unsigned long long)arg2 valueOptions:(unsigned long long)arg3;
- (id)ef_groupByObject:(CDUnknownBlockType)arg1;
- (id)ef_groupBy:(CDUnknownBlockType)arg1;
- (id)ef_partition:(CDUnknownBlockType)arg1;
- (id)ef_reduce:(CDUnknownBlockType)arg1;
- (id)ef_flatMap:(CDUnknownBlockType)arg1;
- (id)ef_compactMapSelector:(SEL)arg1;
- (id)ef_compactMap:(CDUnknownBlockType)arg1;
- (id)ef_mapSelector:(SEL)arg1;
- (id)ef_map:(CDUnknownBlockType)arg1;
- (id)ef_uniquifyWithComparator:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *ef_flatten;
- (unsigned long long)ef_countObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)ef_lastObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)ef_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)ef_objectsPassingTest:(CDUnknownBlockType)arg1;
- (id)ef_filter:(CDUnknownBlockType)arg1;
- (_Bool)ef_any:(CDUnknownBlockType)arg1;
- (_Bool)ef_all:(CDUnknownBlockType)arg1;
- (unsigned long long)ef_indexWhereObjectWouldBeInserted:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)ef_objectSameAs:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (unsigned long long)ef_indexOfObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (unsigned long long)ef_indexOfObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)ef_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 overlapBy:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)ef_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)ef_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 objectArrayBlock:(CDUnknownBlockType)arg2;
- (id)ef_indicesOfStringsWithPrefix:(id)arg1;
- (id)ef_arrayByAddingAbsentObjectsFromArray:(id)arg1;
- (id)ef_suffix:(unsigned long long)arg1;
- (id)ef_prefix:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *ef_tail;
@property(readonly, nonatomic) NSArray *ef_notEmpty;
- (id)ef_subarrayWithRange:(struct _NSRange)arg1;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (void)ef_renderSQLExpressionInto:(id)arg1 conjoiner:(id)arg2;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;

// Remaining properties
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

