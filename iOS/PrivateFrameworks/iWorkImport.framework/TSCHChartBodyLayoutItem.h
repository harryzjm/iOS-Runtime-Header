//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface TSCHChartBodyLayoutItem
{
    _Bool mVertical;
}

- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (id)p_refLineSubselectionKnobsForStyleSwapIndex:(unsigned long long)arg1;
- (id)p_trendLineR2SubselectionKnobsForSeries:(id)arg1;
- (id)p_trendLineEquationSubselectionKnobsForSeries:(id)arg1;
- (id)p_trendLineSubselectionKnobsForSeries:(id)arg1;
- (id)p_errorBarSubselectionKnobsForSeries:(id)arg1 axisID:(id)arg2;
- (id)p_valueLabelSubselectionKnobsForSeries:(id)arg1;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)countOfElementsForModel:(id)arg1 series:(id)arg2 forGroupsBySeries:(id)arg3 outNewElementBounds:(struct CGRect **)arg4 outNewClipRects:(struct CGRect **)arg5 outNewElementPaths:(const struct CGPath ***)arg6;
- (struct CGAffineTransform)transformForRenderingLabelForSeries:(unsigned long long)arg1 forGroup:(unsigned long long)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4;
- (struct CGAffineTransform)p_transformForRenderingLabelForLineAreaSeries:(unsigned long long)arg1 forGroup:(unsigned long long)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4;
- (struct CGAffineTransform)p_transformForRenderingLabelForBarColSeries:(unsigned long long)arg1 forGroup:(unsigned long long)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4;
- (void)p_nudgeBarElementFrame:(struct CGRect *)arg1 usingBarModelCache:(id)arg2 unitSpaceValueBegin:(double)arg3 unitSpaceValueEnd:(double)arg4;
- (id)renderersWithRep:(id)arg1;
- (void)p_addRendererOfClass:(Class)arg1 andRep:(id)arg2 toArray:(id)arg3;
- (void)p_layoutOutward;
- (struct CGRect)calcOverhangRect;
- (struct CGRect)p_calcDrawingRectForModel:(id)arg1;
- (struct CGRect)p_exactLabelsDrawingRectForSeries:(id)arg1;
- (struct CGRect)p_calcDrawingRectForReferenceLinesForModel:(id)arg1;
- (struct CGRect)calcDrawingRect;
@property(readonly, copy, nonatomic) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
- (id)initWithParent:(id)arg1;

@end

