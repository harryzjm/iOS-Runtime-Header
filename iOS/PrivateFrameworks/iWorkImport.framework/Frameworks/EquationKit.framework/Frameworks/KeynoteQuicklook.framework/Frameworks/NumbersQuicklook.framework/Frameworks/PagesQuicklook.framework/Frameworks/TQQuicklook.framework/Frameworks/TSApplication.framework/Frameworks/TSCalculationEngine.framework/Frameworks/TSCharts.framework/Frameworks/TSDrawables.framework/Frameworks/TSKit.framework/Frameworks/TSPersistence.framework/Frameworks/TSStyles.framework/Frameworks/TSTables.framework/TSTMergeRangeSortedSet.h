//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSTMergeRangeSortedSet : NSObject
{
    struct set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem>> _set;
    struct os_unfair_lock_s _lock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateMergeRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)addRange:(struct TSUCellRect)arg1 height:(double)arg2 paddingInsets:(struct UIEdgeInsets)arg3 isCheckbox:(_Bool)arg4;
- (id)init;

@end
