//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSCHChartPieLabelPlacement : NSObject
{
    NSArray *_allWedgeLayoutInfos;
    NSArray *_allWedgeLayoutInfosSortedBySeriesIndex;
    struct CGRect _titleRect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect titleRect; // @synthesize titleRect=_titleRect;
- (struct CGRect)paddedTitleRectWithRect:(struct CGRect)arg1;
- (struct CGRect)paddedLabelRectWithRect:(struct CGRect)arg1;
- (double)distanceFromCenterToChordOfLength:(double)arg1 wedgeAngle:(double)arg2;
- (double)minimumNecessaryDistanceFromWedgeTipToWedgeLabelToPreventOverlapForWedgeLayoutInfo:(id)arg1 adjacentWedgeLayoutInfo:(id)arg2;
- (double)minimumNecessaryDistanceFromWedgeTipForWedgeLayoutInfo:(id)arg1;
- (struct CGAffineTransform)transformOutwardsAlongWedgeBisectionForWedgeLayoutInfo:(id)arg1 withMinimumNecessaryDistance:(double)arg2;
- (id)newPathForLineEnd:(id)arg1 startPoint:(struct CGPoint)arg2 angle:(double)arg3 stroke:(id)arg4;
- (double)lineEndLength:(id)arg1 stroke:(id)arg2;
- (long long)calloutLineRenderAmount:(id)arg1 startLineEnd:(id)arg2 endLineEnd:(id)arg3 stroke:(id)arg4;
- (_Bool)calloutLineEndpointPastStartpoint:(id)arg1;
- (_Bool)calloutLineEndsOutsidePieWedge:(id)arg1;
- (struct CGPoint)calloutLineStartpointForWedgeLayoutInfo:(id)arg1;
- (struct CGPoint)calloutLineEndpointForWedgeLayoutInfo:(id)arg1;
- (id)newCalloutLinePaths:(id)arg1 startLineEnd:(id)arg2 outStartLineEndPath:(id *)arg3 endLineEnd:(id)arg4 outEndLineEndPath:(id *)arg5 stroke:(id)arg6 outStroke:(id *)arg7 context:(struct CGContext *)arg8 contextScale:(float)arg9;
- (id)updateLabelTransformsToPreventOverlap;
@property(readonly, nonatomic) _Bool shouldPreventOverlapWithTitle;
@property(readonly, nonatomic) NSArray *allWedgeLayoutInfos;
- (id)initWithArrayOfWedgeLayoutInfos:(id)arg1;
- (id)initWithArrayOfWedgeLayoutInfos:(id)arg1 titleRectInWedgeElementSpace:(struct CGRect)arg2;

@end

