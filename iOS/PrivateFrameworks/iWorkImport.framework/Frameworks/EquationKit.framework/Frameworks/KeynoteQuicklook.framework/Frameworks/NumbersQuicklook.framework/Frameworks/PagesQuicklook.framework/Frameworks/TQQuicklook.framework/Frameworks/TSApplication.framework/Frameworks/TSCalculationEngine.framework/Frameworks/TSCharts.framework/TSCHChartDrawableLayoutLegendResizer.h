//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSCHChartDrawableLayoutLegendResizer : NSObject
{
    int _anchoringStates[2];
    double _anchoringPosition[2];
    _Bool _shouldUpdateConfinedPushableAnchoring;
    NSArray *_legendConfinementBounds;
}

+ (id)legendResizerWithInitialFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1;
+ (struct CGRect)snappedLegendFrame:(struct CGRect)arg1 forChartAreaFrame:(struct CGRect)arg2;
+ (struct CGRect)outerAnchoringFrameFromChartAreaFrame:(struct CGRect)arg1;
+ (struct CGRect)innerAnchoringFrameFromChartAreaFrame:(struct CGRect)arg1;
+ (double)p_sideIntersectionLengthForChartAreaFrame:(struct CGRect)arg1;
+ (double)p_sideIntersectionLengthForChartAreaRange:(struct TSCHLegendAnchorRange)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *p_legendConfinementBounds; // @synthesize p_legendConfinementBounds=_legendConfinementBounds;
@property(nonatomic) _Bool p_shouldUpdateConfinedPushableAnchoring; // @synthesize p_shouldUpdateConfinedPushableAnchoring=_shouldUpdateConfinedPushableAnchoring;
- (id)resizedLegendGeometry:(id)arg1 forLastChartAreaFrame:(struct CGRect)arg2 newChartAreaFrame:(struct CGRect)arg3 isIndirectResizing:(_Bool)arg4;
- (void)p_updateStateForIsIndirectResizing:(_Bool)arg1;
- (struct TSCHLegendAnchorRange)p_resizedLegendForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1 dimension:(long long)arg2;
- (struct TSCHLegendAnchorRange)p_pushedLegendForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1 dimension:(long long)arg2 returningIsConfined:(_Bool *)arg3;
- (_Bool)p_hasConfinedLocationWithinConfinementBoundsForLocation:(double)arg1 dimension:(long long)arg2 returningConfinedLocation:(double *)arg3;
- (_Bool)p_isLegendAnchoredForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1 dimension:(long long)arg2 returningLegendLocation:(double *)arg3;
- (void)p_updateLegendConfinementBoundsForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1;
- (void)p_updateLegendConfinementBoundsForChartAreaFrame:(struct CGRect)arg1 legendFrame:(struct CGRect)arg2;
- (_Bool)p_isInFrontOfLine:(struct TSCHLegendAnchorLine)arg1 forRect:(struct CGRect)arg2;
- (_Bool)p_isConfinedPushableAnchoring;
- (void)p_initializeAnchoringStateForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1;
- (int)p_anchoringStateForLegendFrame:(struct CGRect)arg1 chartAreaFrame:(struct CGRect)arg2 dimension:(long long)arg3 returningAnchoringPosition:(double *)arg4;
- (id)initWithInitialFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1;

@end

