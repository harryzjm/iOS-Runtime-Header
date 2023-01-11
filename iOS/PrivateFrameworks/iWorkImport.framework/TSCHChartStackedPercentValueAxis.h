//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSCHChartAxisAnalysis;

__attribute__((visibility("hidden")))
@interface TSCHChartStackedPercentValueAxis
{
    TSCHChartAxisAnalysis *mInProgressAnalysisForErrorBarData;
}

- (void).cxx_destruct;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg1;
- (id)valueForFormattedString:(id)arg1;
- (id)formattedStringForSeries:(id)arg1 index:(unsigned long long)arg2;
- (id)dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2;
- (_Bool)usesPercentNumberFormatPropertyForSeriesDataFormatting;
- (_Bool)editableFormatForValueStrings;
- (id)dataFormatter;
- (double *)unitSpaceValuesForSeries:(id)arg1 indexes:(struct _NSRange)arg2 min:(double)arg3 max:(double)arg4;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 series:(id)arg2 index:(unsigned long long)arg3;
- (double)unitSpaceValueForSeries:(id)arg1 index:(unsigned long long)arg2 min:(double)arg3 max:(double)arg4;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (id)formattedStringForAxisValue:(id)arg1;
- (double)interceptForAxis:(id)arg1;
- (double)doubleAxisToModelValue:(double)arg1;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (void)updateModelMinMaxForErrorBarsOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3;
- (void)updateMultiDataModelAxisAnalysis:(id)arg1;
- (void)updateModelAxisAnalysis:(id)arg1;
- (double)totalForGroup:(unsigned long long)arg1;
- (id)userMin;
- (id)userMax;
- (_Bool)supportsReferenceLines;

@end

