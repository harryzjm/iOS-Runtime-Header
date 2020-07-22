//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSIndexSet, PXMemoriesSpec;

@interface PXMemoriesFeedEntryLayoutGenerator
{
    struct CGSize _size;
    PXMemoriesSpec *_spec;
    NSIndexSet *_geometryKinds;
    struct CGRect _sectionHeaderRect;
    NSDictionary *_rectsByIndexByKind;
    _Bool _isPrepared;
    long long _layoutAxis;
}

@property(nonatomic) long long layoutAxis; // @synthesize layoutAxis=_layoutAxis;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_prepareLayoutIfNeeded;
- (void)invalidate;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (unsigned long long)numberOfGeometriesWithKind:(long long)arg1;
- (id)geometryKinds;
- (struct CGSize)size;
- (struct CGSize)estimatedSize;
- (id)initWithMetrics:(id)arg1;

@end

