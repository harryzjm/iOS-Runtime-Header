//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface NTKRichComplicationSegmentedView
{
    NSMutableArray *_segments;
}

+ (_Bool)isXL;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
- (id)_shapeStrokeColor;
- (double)_arcAngleWithOuterRadius:(double)arg1 segmentGapAngle:(double)arg2 numberOfSegments:(unsigned long long)arg3;
- (long long)_segmentShapeStyleForIndex:(unsigned long long)arg1 angle:(double)arg2;
- (id)_colorForSegment:(id)arg1;
- (void)_addSegmentsToLayer:(id)arg1;
- (void)_setupShapeLayer:(id)arg1;
- (void)_updateSegmentsWithColors:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setGradientColors:(id)arg1;

@end
