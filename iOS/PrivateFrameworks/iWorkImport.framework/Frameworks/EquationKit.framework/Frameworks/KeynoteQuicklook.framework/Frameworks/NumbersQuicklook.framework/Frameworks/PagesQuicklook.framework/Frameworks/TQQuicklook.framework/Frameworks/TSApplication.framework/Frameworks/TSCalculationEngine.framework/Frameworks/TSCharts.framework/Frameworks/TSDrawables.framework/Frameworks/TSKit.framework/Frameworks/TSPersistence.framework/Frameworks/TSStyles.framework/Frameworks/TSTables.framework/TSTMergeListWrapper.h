//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSTMergeListWrapper : NSObject
{
    vector_e87daf7b _mergeList;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)regionForList;
- (id)mergeListWrapperWithRangesPassingTest:(CDUnknownBlockType)arg1;
- (void)enumerateRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)addRange:(struct TSUCellRect)arg1;
@property(readonly) _Bool isEmpty;
@property(readonly) unsigned long long count;
- (id)initWithMergeList:(const vector_e87daf7b *)arg1;

@end
