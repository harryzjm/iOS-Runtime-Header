//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSCHChartPieStraightLineLabelPlacement
{
    NSDictionary *mSeriesIndexToWedgeLayoutInfo;
    NSDictionary *mSeriesIndexToAllWedgeLayoutInfosToTheLeft;
    unsigned long long mCGPointCellSize;
    NSMutableDictionary *mSpatialMap;
    NSMutableDictionary *mSeriesIndexToConflictingWedgeLayoutInfos;
}

- (void).cxx_destruct;
- (struct CGPoint)calloutLineEndpointForWedgeLayoutInfo:(id)arg1;
- (struct CGPoint)calloutLineStartpointForWedgeLayoutInfo:(id)arg1;
- (id)newCalloutLinePaths:(id)arg1 startLineEnd:(id)arg2 outStartLineEndPath:(id *)arg3 endLineEnd:(id)arg4 outEndLineEndPath:(id *)arg5 stroke:(id)arg6 outStroke:(id *)arg7 context:(struct CGContext *)arg8 contextScale:(float)arg9;
- (id)wedgeLayoutInfo:(id)arg1 conflictsWithWedgeLayoutInfos:(id)arg2;
- (id)wedgeLayoutInfosThatShareCellsWithWedgeLayoutInfo:(id)arg1;
- (_Bool)conflictsExist;
- (void)shiftLabelOutwards:(id)arg1 shiftAmount:(double)arg2;
- (double)shiftAmountForWedgeLayoutInfo:(id)arg1;
- (_Bool)shouldShiftWedgeLayoutInfo:(id)arg1;
- (void)fixConflictsForWedgeLayoutInfos;
- (id)wedgeLayoutInfosToTheLeftOfWedgeLayoutInfo:(id)arg1;
- (unsigned long long)spatialMapCellSize;
- (struct CGPoint)cellForPoint:(struct CGPoint)arg1;
- (id)setOfKeysForWedgeLayoutInfo:(id)arg1;
- (void)updateConflictsForWedgeLayoutInfo:(id)arg1 wedgeLayoutInfosThatShareCells:(id)arg2;
- (void)updateSeriesIndexToConflictingWedgeLayoutInfosMapForInvalidatedWedgeLayoutInfo:(id)arg1 oldSetOfKeysForWedgeLayoutInfo:(id)arg2;
- (void)updateSpatialMapWithInvalidatedWedgeLayoutInfo:(id)arg1 oldSetOfKeysForWedgeLayoutInfo:(id)arg2;
- (void)invalidateWedgeLayoutInfo:(id)arg1 oldSetOfKeysForWedgeLayoutInfo:(id)arg2;
- (void)createSeriesIndexToConflictingWedgeLayoutInfosMap;
- (void)createSpatialMap;
- (void)createSeriesIndexToAllWedgeLayoutInfosToTheLeftMap;
- (void)createSeriesIndexToWedgeLayoutInfoMap;
- (void)setUpCaches;
- (id)updateLabelTransformsToPreventOverlap;

@end

