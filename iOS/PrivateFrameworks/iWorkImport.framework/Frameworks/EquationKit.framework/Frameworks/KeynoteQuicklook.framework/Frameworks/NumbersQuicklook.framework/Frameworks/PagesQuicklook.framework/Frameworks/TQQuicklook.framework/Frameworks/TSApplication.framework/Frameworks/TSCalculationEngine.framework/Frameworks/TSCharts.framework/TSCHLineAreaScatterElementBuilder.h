//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, TSCHElementBuilderCoordinateAdapter;
@protocol OS_dispatch_queue;

@interface TSCHLineAreaScatterElementBuilder
{
    NSMutableDictionary *_pathCache;
    NSObject<OS_dispatch_queue> *_pathCacheQueue;
}

- (void).cxx_destruct;
- (unsigned long long)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(struct CGAffineTransform **)arg4 outNewElementSizes:(struct CGSize **)arg5 outNewClipRects:(struct CGRect **)arg6 outNewStrings:(id *)arg7;
- (unsigned long long)countOfPointsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 outUnitSymbolPath:(const struct CGPath **)arg6 outNewTransformArray:(struct CGAffineTransform **)arg7 outNewGroupIndexArray:(unsigned long long **)arg8;
- (struct CGRect)p_symbolRectWithSymbolPoint:(struct CGPoint)arg1 symbolType:(int)arg2 symbolSize:(double)arg3 stroke:(id)arg4;
- (struct CGAffineTransform)transformForRenderingSeriesElementSymbolsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 outNewElementPath:(const struct CGPath **)arg6;
- (struct CGAffineTransform)transformForRenderingSeriesElementForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 outNewElementPath:(const struct CGPath **)arg6;
- (struct CGAffineTransform)transformForRenderingSeriesElementTopStrokeForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 outNewElementPath:(const struct CGPath **)arg6;
- (_Bool)needsSeparateHitTestingPaths;
- (long long)p_hitCheckPointByDistance:(struct CGPoint)arg1 inSeries:(id)arg2 withSeriesElementPath:(struct CGPath *)arg3;
- (long long)p_hitCheckPoint:(struct CGPoint)arg1 inSeries:(id)arg2 withSeriesElementPath:(struct CGPath *)arg3;
- (_Bool)p_hitCheckPoint:(struct CGPoint)arg1 inSymbolsOfSeries:(id)arg2 withBodyLayout:(id)arg3;
- (long long)hitCheckPoint:(struct CGPoint)arg1 inSeries:(id)arg2 withBodyLayout:(id)arg3;
- (unsigned long long)countOfHitCheckRegionsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementPaths:(const struct CGPath ***)arg4 outSelectionKnobLocations:(id *)arg5;
- (void)p_trendlineInfoForSeries:(id)arg1 forBodyLayout:(id)arg2 outVertical:(_Bool *)arg3 outOffsetInBody:(double *)arg4;
- (unsigned long long)countOfErrorBarsInSeries:(id)arg1 forGroups:(id)arg2 forAxisID:(id)arg3 forBodyLayout:(id)arg4 outClipRect:(struct CGRect *)arg5 outNewErrorBarDescriptors:(struct **)arg6;
- (unsigned long long)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(struct CGRect **)arg4 outNewClipRects:(struct CGRect **)arg5 outNewElementPaths:(const struct CGPath ***)arg6 outSelectionKnobLocations:(id *)arg7 forHighlightPath:(_Bool)arg8;
- (double)p_bubbleMaxForSeries:(id)arg1 inChartBodyLayoutSize:(struct CGSize)arg2;
- (void)p_createElementsForSeries:(id)arg1 forGroups:(id)arg2 inBodyLayout:(id)arg3 outTopStrokePath:(const struct CGPath **)arg4 outTopStrokeClipRect:(struct CGRect *)arg5 outSeriesElementPath:(const struct CGPath **)arg6 outSeriesElementClipRect:(struct CGRect *)arg7 outSymbolElementPath:(const struct CGPath **)arg8 outSymbolElementClipRect:(struct CGRect *)arg9 outSymbolElementHitCheckPath:(const struct CGPath **)arg10 outSelectionKnobLocations:(id *)arg11;
- (id)p_calculateSelectionKnobSet:(id)arg1 bodyLayoutItem:(id)arg2 series:(id)arg3 pointsArray:(CDStruct_460b8ffe *)arg4 withCount:(unsigned long long)arg5;
- (_Bool)p_shouldAddSelectionKnobWithPoint:(struct CGPoint)arg1 previousPoint:(struct CGPoint)arg2 minimumDistanceSquared:(double)arg3 selectionKnobRadius:(double)arg4;
- (void)p_addKnobsForPoint:(struct CGPoint)arg1 strokedUnitSymbolRect:(struct CGRect)arg2 toKnobSet:(id)arg3 symbolsShowing:(_Bool)arg4 includePoint:(_Bool)arg5;
- (id)p_symbolKnobLocationsForSeries:(id)arg1 forGroups:(id)arg2 inBodyLayout:(id)arg3;
- (CDStruct_460b8ffe *)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect)arg2 groupIndexSet:(id)arg3 outCount:(unsigned long long *)arg4;
- (CDStruct_460b8ffe *)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect)arg2 groupIndexSet:(id)arg3 cullBadPoints:(_Bool)arg4 outCount:(unsigned long long *)arg5;
- (void)p_cullLastValidPointIfEqualToFirstValidPointInArray:(CDStruct_460b8ffe *)arg1 pointsArrayCount:(unsigned long long *)arg2;
- (_Bool)p_addBottomStroke:(CDStruct_1cb6887c *)arg1 toPath:(struct CGPath *)arg2 seriesIndex:(unsigned long long)arg3 withPointsArray:(CDStruct_460b8ffe *)arg4 withCount:(unsigned long long)arg5;
- (void)p_addTopStroke:(CDStruct_1cb6887c *)arg1 toPath:(struct CGPath *)arg2 withPointsArray:(CDStruct_460b8ffe *)arg3 withCount:(unsigned long long)arg4 lineType:(int)arg5;
- (_Bool)p_topStrokeShouldBeClosed;
- (void)p_addCurvedTopStroke:(CDStruct_1cb6887c *)arg1 toPath:(struct CGPath *)arg2 withPointsArray:(CDStruct_460b8ffe *)arg3 withCount:(unsigned long long)arg4;
- (void)p_addStraightTopStroke:(CDStruct_1cb6887c *)arg1 toPath:(struct CGPath *)arg2 withPointsArray:(CDStruct_460b8ffe *)arg3 withCount:(unsigned long long)arg4;
- (CDStruct_40a92360 *)p_centerPointsForSeries:(id)arg1 groupIndexSet:(id)arg2 nullsUseIntercept:(_Bool)arg3 plotAreaFrame:(struct CGRect)arg4;
- (struct CGPoint)labelPointForPosition:(unsigned int)arg1 rect:(struct CGRect)arg2 stringSize:(struct CGSize)arg3 symbolType:(int)arg4;
- (struct CGPath *)p_newPlusPath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 context:(struct CGContext *)arg5;
- (struct CGPath *)p_newCrossPath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
- (struct CGPath *)p_newDiamondPath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
- (struct CGPath *)p_newSquarePath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 context:(struct CGContext *)arg5;
- (struct CGPath *)p_newYieldPath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
- (struct CGPath *)p_newTrianglePath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
- (struct CGPath *)p_newCirclePath:(struct CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
- (struct CGPath *)p_newPathForSymbol:(int)arg1 context:(struct CGContext *)arg2 at:(struct CGPoint)arg3 width:(double)arg4 pathLocation:(long long)arg5 stroke:(id)arg6;
- (_Bool)symbolTypeIsClosed:(int)arg1;
- (float)dataPointDimension:(id)arg1 symbolType:(int)arg2 stroke:(id)arg3;
- (id)p_uncachedUnitPathForSymbol:(int)arg1 symbolSize:(double)arg2 stroke:(id)arg3 forHitCheck:(_Bool)arg4;
- (struct CGPath *)p_newUnitPathForSymbol:(int)arg1 symbolSize:(double)arg2 stroke:(id)arg3 forHitCheck:(_Bool)arg4;
@property(readonly, nonatomic) TSCHElementBuilderCoordinateAdapter *coordinateAdapter;
- (id)init;

@end

