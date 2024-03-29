//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TSDLayout.h"

@class TSDDefaultPartitioner;

@interface TSDPartitionedPartialLayout : TSDLayout
{
    struct CGRect _bounds;
    TSDDefaultPartitioner *_partitioner;
    _Bool _isLayoutRTL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool p_isLayoutRTL; // @synthesize p_isLayoutRTL=_isLayoutRTL;
@property(readonly, nonatomic) TSDDefaultPartitioner *partitioner; // @synthesize partitioner=_partitioner;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (void)updateChildrenFromInfo;
- (void)processChanges:(id)arg1;
- (id)computeLayoutGeometry;
- (Class)repClassOverride;
- (id)initWithInfo:(id)arg1 bounds:(struct CGRect)arg2 partitioner:(id)arg3 isLayoutRTL:(_Bool)arg4;

@end

