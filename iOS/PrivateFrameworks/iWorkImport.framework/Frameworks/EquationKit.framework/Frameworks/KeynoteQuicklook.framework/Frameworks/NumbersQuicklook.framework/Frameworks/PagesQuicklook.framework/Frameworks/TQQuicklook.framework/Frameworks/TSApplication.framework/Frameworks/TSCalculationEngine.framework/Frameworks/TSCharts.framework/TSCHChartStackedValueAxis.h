//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSCHChartStackedValueAxis
{
}

- (id)groupIndexesWhereSeriesIsLastSeries:(id)arg1 fromRenderGroupIndexSet:(id)arg2;
- (double)totalForValueIndex:(unsigned long long)arg1;
- (double)totalForGroupIndex:(unsigned long long)arg1;
- (double)interceptForAxis:(id)arg1;
- (double)doubleAxisToModelValue:(double)arg1;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg1;
- (double *)unitSpaceValuesForSeries:(id)arg1 groupIndexSet:(id)arg2 min:(double)arg3 max:(double)arg4;
- (double)unitSpaceValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 min:(double)arg3 max:(double)arg4;
- (void)updateMultiDataModelAxisAnalysis:(id)arg1;
- (void)updateModelAxisAnalysis:(id)arg1;
- (id)p_orthogonalAxisForSeries:(id)arg1;
- (_Bool)supportsSummaryValueLabels;
- (_Bool)supportsReferenceLines;

@end

