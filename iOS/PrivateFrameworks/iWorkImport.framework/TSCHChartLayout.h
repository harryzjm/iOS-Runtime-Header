//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCHChartInfo, TSCHChartModel;

__attribute__((visibility("hidden")))
@interface TSCHChartLayout : NSObject
{
    _Bool mNeedsLayout;
    TSCHChartInfo *mChartInfo;
    CDStruct_b1c75024 mLayoutSettings;
    struct CGRect _legendModelGeometryFrame;
}

+ (id)propertiesThatInvalidateLayout;
+ (struct CGSize)legendSizeForChartInfo:(id)arg1 initialWidth:(double)arg2;
+ (id)chartLayoutWithChartInfo:(id)arg1;
@property struct CGRect legendModelGeometryFrame; // @synthesize legendModelGeometryFrame=_legendModelGeometryFrame;
@property CDStruct_b1c75024 layoutSettings; // @synthesize layoutSettings=mLayoutSettings;
@property(readonly) TSCHChartInfo *chartInfo; // @synthesize chartInfo=mChartInfo;
- (void).cxx_destruct;
- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (id)hitChartElements:(struct CGPoint)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)setForceTitleAtTop:(_Bool)arg1;
- (void)setForceOmitLabelPlacement:(_Bool)arg1;
- (void)setForceOmitLegend:(_Bool)arg1;
- (struct CGRect)convertNaturalSpaceRectToChartLayoutSpaceRect:(struct CGRect)arg1;
- (struct CGRect)convertChartLayoutSpaceRectToNaturalSpaceRect:(struct CGRect)arg1;
- (struct CGPoint)convertNaturalSpaceToChartLayoutSpace:(struct CGPoint)arg1;
- (struct CGPoint)convertChartLayoutSpaceToNaturalSpace:(struct CGPoint)arg1;
- (struct CGAffineTransform)transformToConvertChartLayoutToNatural;
- (id)renderersWithRep:(id)arg1;
- (void)endResize;
- (void)takeSizeFromTracker:(id)arg1;
- (void)beginResize;
- (void)setLegendSize:(struct CGSize)arg1;
- (void)layoutForResizingSize:(struct CGSize)arg1;
- (struct CGRect)boundsForResize;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (void)invalidateCachedOriginRelativeToChartAreaFrame;
- (_Bool)isValid;
- (void)invalidate;
- (void)processChanges:(id)arg1;
- (_Bool)layoutFrameShouldEncloseInfoGeometry;
- (void)layoutForChartBodySize:(struct CGSize)arg1;
- (void)layoutForChartAreaSize:(struct CGSize)arg1;
- (void)layoutForCircumscribingSize:(struct CGSize)arg1;
@property unsigned long long dataSetIndex;
@property(readonly) struct CGRect chartBodyFrame;
@property struct CGRect legendGeometryFrame;
@property(readonly) struct CGRect legendDrawingFrame;
@property(readonly) struct CGRect titleFrame;
@property(readonly) struct CGRect legendFrame;
@property(readonly) struct CGRect chartAreaFrame;
@property(readonly) struct CGRect outerShadowFrame;
@property(readonly) struct CGRect outerLayoutFrame;
@property(readonly) TSCHChartModel *model;
- (id)initWithChartInfo:(id)arg1;

@end

