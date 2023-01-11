//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKLineSeriesPointMarkerStyle, HKStrokeStyle, NSArray;

@interface HKSleepPeriodSeries
{
    HKStrokeStyle *_strokeStyle;
    HKStrokeStyle *_tiledStrokeStyle;
    NSArray *_defaultFillStyles;
    NSArray *_highlightedFillStyles;
    NSArray *_inactiveFillStyles;
    HKStrokeStyle *_goalLineStrokeStyle;
    HKLineSeriesPointMarkerStyle *_upperGoalLineMarkerStyle;
    HKLineSeriesPointMarkerStyle *_lowerGoalLineMarkerStyle;
    CDUnknownBlockType _startOfDayTransform;
    struct CGSize _cornerRadii;
}

+ (id)inBedImageCompatibleWithFont:(id)arg1 withColor:(id)arg2;
+ (id)asleepImageCompatibleWithFont:(id)arg1 withColor:(id)arg2;
+ (id)_sleepCircleImageWithWidth:(double)arg1 diameter:(double)arg2 color:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType startOfDayTransform; // @synthesize startOfDayTransform=_startOfDayTransform;
@property(retain, nonatomic) HKLineSeriesPointMarkerStyle *lowerGoalLineMarkerStyle; // @synthesize lowerGoalLineMarkerStyle=_lowerGoalLineMarkerStyle;
@property(retain, nonatomic) HKLineSeriesPointMarkerStyle *upperGoalLineMarkerStyle; // @synthesize upperGoalLineMarkerStyle=_upperGoalLineMarkerStyle;
@property(copy, nonatomic) HKStrokeStyle *goalLineStrokeStyle; // @synthesize goalLineStrokeStyle=_goalLineStrokeStyle;
@property(copy, nonatomic) NSArray *inactiveFillStyles; // @synthesize inactiveFillStyles=_inactiveFillStyles;
@property(copy, nonatomic) NSArray *highlightedFillStyles; // @synthesize highlightedFillStyles=_highlightedFillStyles;
@property(copy, nonatomic) NSArray *defaultFillStyles; // @synthesize defaultFillStyles=_defaultFillStyles;
@property(copy, nonatomic) HKStrokeStyle *tiledStrokeStyle; // @synthesize tiledStrokeStyle=_tiledStrokeStyle;
@property(copy, nonatomic) HKStrokeStyle *strokeStyle; // @synthesize strokeStyle=_strokeStyle;
@property(nonatomic) struct CGSize cornerRadii; // @synthesize cornerRadii=_cornerRadii;
- (id)_attributedAxisString:(id)arg1;
- (id)_stringFromTimeSinceNoon:(id)arg1;
- (void)_addAnnotationForValue:(double)arg1;
- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (double)_maximumYForCoordinate:(id)arg1;
- (double)_minimumYForCoordinate:(id)arg1;
- (_Bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect)arg1 blockCoordinate:(id)arg2;
- (void)_assertCoordinateCompatibility:(id)arg1;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;
- (void)_drawGoalLinePath:(id)arg1 goalMarkerPoints:(id)arg2 markerImage:(id)arg3 context:(struct CGContext *)arg4;
- (void)_drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform)arg3 context:(struct CGContext *)arg4 axisRect:(struct CGRect)arg5;
- (double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(struct CGRect)arg2 minimumSpacing:(double)arg3;
- (long long)_visibleBarCountWithZoomLevelConfiguration:(id)arg1;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (_Bool)supportsMultiTouchSelection;
- (_Bool)shouldInvertAxis;
- (void)clearCaches;

@end
