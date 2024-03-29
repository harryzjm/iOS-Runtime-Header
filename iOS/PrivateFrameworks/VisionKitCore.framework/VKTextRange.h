//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexSet, VKTextPosition;

__attribute__((visibility("hidden")))
@interface VKTextRange
{
    NSArray *_nsRangeArray;
    NSArray *_rangeArray;
    NSIndexSet *_indexSet;
    long long _emptyIndex;
}

+ (id)defaultRange;
+ (id)emptyRange;
+ (id)rangeWithVKRanges:(id)arg1;
+ (id)rangeWithNSRanges:(id)arg1;
+ (id)rangeWithNSRange:(struct _NSRange)arg1;
+ (id)emptyRangeWithOffset:(unsigned long long)arg1;
+ (id)emptyRangeWithPosition:(id)arg1;
+ (id)rangeWithStartOffset:(unsigned long long)arg1 endOffset:(unsigned long long)arg2;
+ (id)rangeWithStart:(id)arg1 end:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long emptyIndex; // @synthesize emptyIndex=_emptyIndex;
@property(retain, nonatomic) NSIndexSet *indexSet; // @synthesize indexSet=_indexSet;
@property(retain, nonatomic) NSArray *rangeArray; // @synthesize rangeArray=_rangeArray;
@property(retain, nonatomic) NSArray *nsRangeArray; // @synthesize nsRangeArray=_nsRangeArray;
- (id)description;
- (id)summaryDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)intersectsNSRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) unsigned long long rangeCount;
@property(readonly, nonatomic) unsigned long long totalLength;
@property(readonly, nonatomic) unsigned long long endOffset;
@property(readonly, nonatomic) unsigned long long startOffset;
@property(readonly, nonatomic) _Bool isNSNotFound;
@property(readonly, nonatomic) VKTextPosition *end;
@property(readonly, nonatomic) VKTextPosition *start;
@property(readonly, nonatomic) struct _NSRange nsRange;
@property(readonly, nonatomic) _Bool containsMultipleRanges;
@property(readonly, nonatomic) _Bool isEmpty;
- (_Bool)containsTextPosition:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIndexSet:(id)arg1;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)initWithStartOffset:(unsigned long long)arg1 endOffset:(unsigned long long)arg2;
- (id)initWithStart:(id)arg1 end:(id)arg2;

@end

