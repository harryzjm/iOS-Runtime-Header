//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSCHChartAbstractLineElementsRenderer
{
}

- (void)p_renderLabelsWithLabelCount:(unsigned long long)arg1 transforms:(struct CGAffineTransform *)arg2 clipRects:(struct CGRect *)arg3 strings:(id)arg4 context:(struct CGContext *)arg5 tLayerRect:(struct CGRect)arg6 textEngine:(id)arg7 paragraphStyle:(id)arg8 viewScale:(double)arg9;
- (void)p_renderLabelsIntoContext:(struct CGContext *)arg1 seriesIndex:(unsigned long long)arg2 model:(id)arg3 modelCache:(id)arg4 bodyLayoutItem:(id)arg5 groupIndexSet:(id)arg6;
- (void)p_renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)p_finishContextAfterRendering:(struct CGContext *)arg1 modelCache:(id)arg2 didEnableTransparencyLayer:(_Bool)arg3;
- (void)p_setupContextForRendering:(struct CGContext *)arg1 layerRect:(struct CGRect)arg2 modelCache:(id)arg3 shadow:(id)arg4 outDidEnableTransparencyLayer:(_Bool *)arg5;
- (id)symbolTransformsForRenderingElements;
- (struct CGAffineTransform)p_adjustTransformForAADefeatInContext:(struct CGContext *)arg1 inTransform:(struct CGAffineTransform)arg2 forSeriesShape:(struct CGPath *)arg3 inBodyBounds:(struct CGRect)arg4;
- (id)p_findChartRootLayoutItem:(id)arg1;
- (void)p_clipOutSymbolsInContext:(struct CGContext *)arg1 withTransformArray:(struct CGAffineTransform *)arg2 withCount:(unsigned long long)arg3 forSeries:(id)arg4;
- (_Bool)useBlendModeCopyForTransparencyLayer;
- (int)chunkPlane;

@end

