//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface TSTHiddenStateIndexSet : NSObject
{
    NSMutableIndexSet *_visibleIndexSet;
}

@property(retain, nonatomic) NSMutableIndexSet *visibleIndexSet; // @synthesize visibleIndexSet=_visibleIndexSet;
- (void)swapIndex:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
- (void)insertRange:(struct _NSRange)arg1;
- (void)deleteRange:(struct _NSRange)arg1;
- (void)moveRangeFrom:(struct _NSRange)arg1 toIndex:(unsigned long long)arg2;
- (unsigned long long)findNthNextVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2;
- (unsigned long long)findNthPreviousVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2;
- (unsigned long long)visibleIndexBeforeAndIncludingIndex:(unsigned long long)arg1;
- (unsigned long long)visibleIndexBeforeIndex:(unsigned long long)arg1;
- (unsigned long long)visibleIndexAfterAndIncludingIndex:(unsigned long long)arg1;
- (unsigned long long)visibleIndexAfterIndex:(unsigned long long)arg1;
- (_Bool)anyHiddenIndicesInRange:(struct _NSRange)arg1;
- (unsigned long long)numberVisibleIndicesInRange:(struct _NSRange)arg1;
- (unsigned long long)numberHiddenIndicesInRange:(struct _NSRange)arg1;
- (_Bool)isIndexHidden:(unsigned long long)arg1;
- (id)visibleIndices;
- (void)setHidden:(_Bool)arg1 inRange:(struct _NSRange)arg2;
- (void)setHidden:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (void)setCount:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end
