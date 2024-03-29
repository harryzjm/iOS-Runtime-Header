//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSUIndexSetObj : NSObject
{
    struct TSUIndexSet _indexSet;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeIndexesInRange:(struct TSUIndexRangeStruct)arg1;
- (void)addIndexesInRange:(struct TSUIndexRangeStruct)arg1;
- (void)removeIndex:(long long)arg1;
- (void)addIndex:(long long)arg1;
- (void)removeAllIndexes;
- (void)removeIndexes:(id)arg1;
- (void)addIndexes:(id)arg1;
- (void)enumerateRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateIndexesInRange:(struct TSUIndexRangeStruct)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)intersectsIndexesInRange:(struct TSUIndexRangeStruct)arg1;
- (_Bool)containsIndexes:(id)arg1;
- (_Bool)containsIndexesInRange:(struct TSUIndexRangeStruct)arg1;
- (_Bool)containsIndex:(long long)arg1;
- (unsigned long long)countOfIndexesInRange:(struct TSUIndexRangeStruct)arg1;
- (long long)indexLessThanOrEqualToIndex:(long long)arg1;
- (long long)indexGreaterThanOrEqualToIndex:(long long)arg1;
- (long long)indexLessThanIndex:(long long)arg1;
- (long long)indexGreaterThanIndex:(long long)arg1;
- (long long)nthIndex:(unsigned long long)arg1;
- (long long)lastIndex;
- (long long)firstIndex;
- (unsigned long long)count;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct TSUIndexSet *)indexSet;
- (id)initWithNSIndexSet:(id)arg1;
- (id)initWithIndexSet:(id)arg1;
- (id)initWithIndexSetCpp:(const struct TSUIndexSet *)arg1;
- (id)init;

@end

