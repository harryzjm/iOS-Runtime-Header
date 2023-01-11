//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKMultiPolyline, VKVectorOverlayPolylineGroup;

@interface MKMultiPolylineRenderer
{
    VKVectorOverlayPolylineGroup *_vectorGeometry;
    double _strokeStart;
    double _strokeEnd;
}

+ (Class)_mapkitLeafClass;
- (void).cxx_destruct;
- (void)_updateRenderColors;
- (id)vectorDataForOverlay:(id)arg1;
- (_Bool)overlayCanProvideVectorData:(id)arg1;
- (id)_vectorGeometry;
- (_Bool)_canProvideVectorGeometry;
- (void)setMiterLimit:(double)arg1;
- (void)setLineCap:(int)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setAlpha:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (void)createPath;
@property(nonatomic, getter=_strokeEnd, setter=_setStrokeEnd:) double strokeEnd;
@property(nonatomic, getter=_strokeStart, setter=_setStrokeStart:) double strokeStart;
@property(readonly, nonatomic) MKMultiPolyline *multiPolyline;
- (void)_performInitialConfiguration;
- (id)initWithMultiPolyline:(id)arg1;

@end
