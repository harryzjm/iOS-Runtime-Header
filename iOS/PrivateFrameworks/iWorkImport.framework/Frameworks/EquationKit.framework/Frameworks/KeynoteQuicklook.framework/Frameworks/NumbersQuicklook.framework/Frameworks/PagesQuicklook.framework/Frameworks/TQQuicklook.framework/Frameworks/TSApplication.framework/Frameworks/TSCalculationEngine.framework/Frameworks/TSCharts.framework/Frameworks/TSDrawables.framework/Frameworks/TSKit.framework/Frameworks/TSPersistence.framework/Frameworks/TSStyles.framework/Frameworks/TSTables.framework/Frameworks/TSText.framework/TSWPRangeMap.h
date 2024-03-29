//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSWPRangeMap : NSObject
{
    struct _NSRange _subRange;
    vector_c03e297f _unmappedIndexes;
    vector_c03e297f _mappedIndexes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) vector_c03e297f mappedIndexes; // @synthesize mappedIndexes=_mappedIndexes;
@property(nonatomic) vector_c03e297f unmappedIndexes; // @synthesize unmappedIndexes=_unmappedIndexes;
@property(nonatomic) struct _NSRange subRange; // @synthesize subRange=_subRange;
- (void)adjustByDelta:(long long)arg1 startingAt:(unsigned long long)arg2;
- (struct _NSRange)unmappedCharRange:(struct _NSRange)arg1;
- (struct _NSRange)mappedCharRange:(struct _NSRange)arg1;
- (unsigned long long)p_extendRightMappedIndex:(unsigned long long)arg1;
- (unsigned long long)p_extendLeftMappedIndex:(unsigned long long)arg1;
- (unsigned long long)unmappedCharIndex:(unsigned long long)arg1;
- (unsigned long long)mappedCharIndex:(unsigned long long)arg1;
- (id)initWithSubRange:(struct _NSRange)arg1 unmappedIndexes:(const void *)arg2 affinity:(int)arg3;
- (id)initWithSubRange:(struct _NSRange)arg1 unmappedIndexes:(const void *)arg2 isBackwardAffinities:(const void *)arg3;
- (id)initWithSubRange:(struct _NSRange)arg1 unmappedPairIndexes:(const void *)arg2;

@end

