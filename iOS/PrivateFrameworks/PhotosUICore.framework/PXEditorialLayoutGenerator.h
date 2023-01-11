//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexSet, PXEditorialLayoutMetrics, PXMagazineLayoutTileMaker;

@interface PXEditorialLayoutGenerator
{
    _Bool _isPrepared;
    PXMagazineLayoutTileMaker *_tileMaker;
    struct CGSize _actualSize;
    struct _PXLayoutGeometry *_geometries;
    struct CGRect *_rects;
    unsigned long long _geometriesCount;
    NSIndexSet *_geometrySet;
}

- (void).cxx_destruct;
- (struct _PXLayoutGeometry)_geometryFromFrame:(struct CGRect)arg1 index:(unsigned long long)arg2;
- (void)_prepareIfNeeded;
- (void)_prepareBuffersForCount:(unsigned long long)arg1;
- (struct CGSize)size;
- (struct CGSize)estimatedSize;
- (void)_getHeaderGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2;
- (void)_getContentGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (void)invalidate;
- (unsigned long long)numberOfGeometriesWithKind:(long long)arg1;
- (id)geometryKinds;
- (void)dealloc;
- (id)initWithMetrics:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) PXEditorialLayoutMetrics *metrics; // @dynamic metrics;

@end

