//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKAxisLabelDataSource-Protocol.h>
#import <HealthUI/NSCopying-Protocol.h>

@class HKAxisLabelCache, HKAxisStyle, HKCoordinateTransform, HKValueRange, NSMutableArray, NSString;
@protocol HKAxisLabelDataSource, HKZoomScale;

@interface HKAxis : NSObject <NSCopying, HKAxisLabelDataSource>
{
    _Bool _requiresScaling;
    _Bool _automaticallyFitData;
    HKAxisStyle *_preferredStyle;
    HKAxisStyle *_secondaryStyle;
    long long _maxLabels;
    long long _minLabels;
    long long _axisLabelEndings;
    HKCoordinateTransform *_transform;
    id <HKZoomScale> _zoomScale;
    id <HKAxisLabelDataSource> _labelDataSource;
    HKValueRange *_chartableValueRange;
    NSMutableArray *_axisAnnotations;
    HKAxisLabelCache *_axisLabelCache;
    struct HKLinearTransform _pointTransform;
}

+ (struct HKAxisMinMaxDefinition)contractByPointsLow:(double)arg1 high:(double)arg2 modelRange:(struct HKAxisMinMaxDefinition)arg3 pointRange:(struct HKAxisMinMaxDefinition)arg4;
+ (struct HKAxisMinMaxDefinition)expandByPointsLow:(double)arg1 high:(double)arg2 modelRange:(struct HKAxisMinMaxDefinition)arg3 pointRange:(struct HKAxisMinMaxDefinition)arg4;
@property(retain, nonatomic) HKAxisLabelCache *axisLabelCache; // @synthesize axisLabelCache=_axisLabelCache;
@property(retain, nonatomic) NSMutableArray *axisAnnotations; // @synthesize axisAnnotations=_axisAnnotations;
@property(retain, nonatomic) HKValueRange *chartableValueRange; // @synthesize chartableValueRange=_chartableValueRange;
@property(nonatomic) __weak id <HKAxisLabelDataSource> labelDataSource; // @synthesize labelDataSource=_labelDataSource;
@property(nonatomic) struct HKLinearTransform pointTransform; // @synthesize pointTransform=_pointTransform;
@property(readonly, nonatomic) id <HKZoomScale> zoomScale; // @synthesize zoomScale=_zoomScale;
@property(readonly, nonatomic) HKCoordinateTransform *transform; // @synthesize transform=_transform;
@property(nonatomic) long long axisLabelEndings; // @synthesize axisLabelEndings=_axisLabelEndings;
@property(nonatomic) long long minLabels; // @synthesize minLabels=_minLabels;
@property(nonatomic) long long maxLabels; // @synthesize maxLabels=_maxLabels;
@property(nonatomic) _Bool automaticallyFitData; // @synthesize automaticallyFitData=_automaticallyFitData;
@property(retain, nonatomic) HKAxisStyle *secondaryStyle; // @synthesize secondaryStyle=_secondaryStyle;
@property(retain, nonatomic) HKAxisStyle *preferredStyle; // @synthesize preferredStyle=_preferredStyle;
@property(readonly, nonatomic) _Bool requiresScaling; // @synthesize requiresScaling=_requiresScaling;
- (void).cxx_destruct;
- (void)clearAnnotations;
- (long long)axisAnnotationCount;
- (void)addAxisAnnotation:(id)arg1 textColor:(id)arg2 modelCoordinate:(id)arg3;
- (void)_renderTickMarksForModelRange:(id)arg1 chartRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 style:(id)arg5 renderView:(id)arg6;
- (void)_addTickMarksForPosition:(unsigned long long)arg1 axisRect:(struct CGRect)arg2 modelRange:(id)arg3 zoomScale:(double)arg4 contentOffset:(struct CGPoint)arg5 toBezierPath:(id)arg6 style:(id)arg7;
- (id)_gridLinesForModelRange:(id)arg1 axisRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 style:(id)arg5 gridLineType:(long long)arg6;
- (id)_baselineForModelRange:(id)arg1 axisRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 style:(id)arg5;
- (double)_baselineYCoordinateForModelRange:(id)arg1 axisRect:(struct CGRect)arg2 zoomScale:(double)arg3;
- (double)_maxLabelWidthFromLabels:(id)arg1 font:(id)arg2;
- (double)_axisFillWidthForStyle:(id)arg1 labels:(id)arg2 font:(id)arg3;
- (void)_drawTextBackgroundWithLabels:(id)arg1 font:(id)arg2 offset:(double)arg3 rect:(struct CGRect)arg4 style:(id)arg5 renderView:(id)arg6;
- (struct CGRect)_labelBackgroundRectWithLabels:(id)arg1 font:(id)arg2 offset:(double)arg3 rect:(struct CGRect)arg4 style:(id)arg5;
- (struct CGPoint)renderPositionForLabel:(id)arg1 rect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(_Bool)arg6 optionalOffset:(struct CGPoint)arg7;
- (void)_drawTextForModelRange:(id)arg1 inRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 renderView:(id)arg5 style:(id)arg6 maximumLabelSize:(struct CGSize *)arg7;
- (long long)dateZoomForZoomScale:(double)arg1;
- (id)zoomScaleEngine;
- (void)offsetForValueRange:(id)arg1 chartRect:(struct CGRect)arg2 zoomScaleOut:(double *)arg3 contentOffsetOut:(struct CGPoint *)arg4;
- (id)rangeForChartRect:(struct CGRect)arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint)arg3;
- (void)_offsetForChartRect:(struct CGRect)arg1 chartRange:(struct HKRange)arg2 zoomScaleOut:(double *)arg3 contentOffsetOut:(struct CGPoint *)arg4;
- (struct HKRange)_chartRangeForChartRect:(struct CGRect)arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint)arg3;
- (_Bool)_styleIsHorizontal:(id)arg1;
- (void)drawGridlinesForModelRange:(id)arg1 chartRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 renderView:(id)arg5 blendMode:(int)arg6;
- (void)drawBaselineForModelRange:(id)arg1 chartRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 renderView:(id)arg5;
- (void)drawLabelsWithModelRange:(id)arg1 chartRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 renderView:(id)arg5 maximumLabelSize:(struct CGSize *)arg6;
- (struct CGRect)labelRectWithModelRange:(id)arg1 chartRect:(struct CGRect)arg2 zoomScale:(double)arg3;
- (double)_axisOffsetWithStyle:(id)arg1 chartRect:(struct CGRect)arg2 horizontalAlignmentOut:(long long *)arg3;
- (id)adjustedRangeForFittedRange:(id)arg1 chartRange:(struct HKRange)arg2;
- (void)enumerateTickCoordinatesInModelRange:(id)arg1 zoomScale:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (id)adjustValueRangeForLabels:(id)arg1;
- (id)_cachedAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (struct HKLinearTransform)_pointTransformFromSeriesRanges:(id)arg1 linearTransform:(struct HKLinearTransform)arg2 chartRange:(struct HKRange)arg3;
- (struct HKLinearTransform)pointTransformFittingValueRange:(id)arg1 toChartRange:(struct HKRange)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToAxis:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTransform:(id)arg1 zoomScale:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

