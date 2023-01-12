//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TSCHChartAxisAnalysis, TSCHChartAxisID, TSCHChartAxisInterceptAnalysis, TSCHChartModel, TSUFastReadInvalidatingCache, TSULocale;
@protocol TSCHDataFormatter, TSCHStyleActAlike;

@interface TSCHChartAxis : NSObject
{
    TSCHChartAxisID *_axisID;
    TSCHChartModel *_model;
    TSCHChartAxis *_nonTransientCounterpart;
    id <TSCHStyleActAlike> _style;
    id <TSCHStyleActAlike> _nonStyle;
    unsigned long long _styleIndex;
    unsigned long long _nonStyleIndex;
    TSUFastReadInvalidatingCache *_analysisCache;
    TSUFastReadInvalidatingCache *_interceptCache;
    TSUFastReadInvalidatingCache *_multiDataSetAnalysisCache;
}

+ (id)defaultNumberFormat;
+ (id)axisForInfo:(id)arg1;
+ (id)paragraphStyleForLabelsFontForInfo:(id)arg1;
+ (tvec2_84d5962d)sizeOfSeriesLabelsForInfo:(id)arg1;
+ (tvec2_84d5962d)sizeOfSeriesLabelsForInfo:(id)arg1 onlyHeight:(_Bool)arg2;
+ (tvec2_84d5962d)sizeOfLabelsForInfo:(id)arg1 onlyHeight:(_Bool)arg2;
+ (unsigned char)styleOwnerPathType;
- (void).cxx_destruct;
@property(retain, nonatomic) TSUFastReadInvalidatingCache *multiDataSetAnalysisCache; // @synthesize multiDataSetAnalysisCache=_multiDataSetAnalysisCache;
@property(retain, nonatomic) TSUFastReadInvalidatingCache *interceptCache; // @synthesize interceptCache=_interceptCache;
@property(retain, nonatomic) TSUFastReadInvalidatingCache *analysisCache; // @synthesize analysisCache=_analysisCache;
@property(nonatomic) unsigned long long nonStyleIndex; // @synthesize nonStyleIndex=_nonStyleIndex;
@property(nonatomic) unsigned long long styleIndex; // @synthesize styleIndex=_styleIndex;
@property(retain, nonatomic) id <TSCHStyleActAlike> nonStyle; // @synthesize nonStyle=_nonStyle;
@property(retain, nonatomic) id <TSCHStyleActAlike> style; // @synthesize style=_style;
@property(nonatomic) __weak TSCHChartAxis *nonTransientCounterpart; // @synthesize nonTransientCounterpart=_nonTransientCounterpart;
@property(nonatomic) __weak TSCHChartModel *model; // @synthesize model=_model;
@property(retain, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=_axisID;
- (id)nonstyle;
- (void)propertiesWereMutated:(id)arg1;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)swapTuplesForMutations:(id)arg1 forImport:(_Bool)arg2;
- (id)context;
- (id)drawableInfo;
- (id)chartInfo;
- (id)valueForProperty:(int)arg1;
- (id)objectValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (_Bool)hasObjectValueForProperty:(int)arg1 value:(id *)arg2;
- (_Bool)hasFloatValueForProperty:(int)arg1 value:(float *)arg2;
- (_Bool)hasIntValueForProperty:(int)arg1 value:(int *)arg2;
- (int)defaultPropertyForGeneric:(int)arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)defaultProperties;
- (id)p_genericToDefaultPropertyMap;
@property(readonly, nonatomic) unsigned long long axisIndex;
- (void)setNonStyle:(id)arg1 index:(unsigned long long)arg2;
- (void)setStyle:(id)arg1 index:(unsigned long long)arg2;
- (id)formattedStringForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 multiDataSetIndex:(unsigned long long)arg3;
- (void)updateAxisDateInterceptInAnalysis:(id)arg1;
- (unsigned long long)indexForSelectionPathLabelIndex:(unsigned long long)arg1;
- (unsigned long long)selectionPathLabelIndexForMultiDataSetIndex:(unsigned long long)arg1;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1;
- (id)valueForFormattedString:(id)arg1;
- (id)formattedStringForSeries:(id)arg1 groupIndex:(unsigned long long)arg2;
- (id)formattedStringForAxisValue:(id)arg1;
@property(readonly, nonatomic) _Bool supportsLabelAngleBaselineOptions;
@property(readonly, nonatomic) _Bool supportsFormattedStringForInvalidValue;
- (id)inspectorStringForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 value:(id)arg3;
- (id)p_dataFormatterForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 onlyForValidValue:(_Bool)arg3;
- (id)dataFormatterForSeries:(id)arg1 groupIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) id <TSCHDataFormatter> dataFormatter;
- (id)p_axisDataFormatterFromCurrentModel;
- (id)p_fixupNegativeStyleForDataFormatter:(id)arg1;
@property(readonly, nonatomic) _Bool editableFormatForValueStrings;
- (double *)unitSpaceValuesForCountSpaceValuesWithCount:(unsigned long long)arg1;
- (double *)unitSpaceCenterValuesForSeries:(id)arg1 groupIndexSet:(id)arg2 count:(unsigned long long)arg3;
- (double)unitSpaceCenterValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2;
- (double)unitSpaceCenterValueForValue:(double)arg1;
- (double)unitSpaceCenterValueHalfOffsetWithCount:(double)arg1;
- (double)unitSpaceValueForCountSpaceValue:(double)arg1;
- (double)unitSpaceValueForCountSpaceValue:(double)arg1 min:(double)arg2 count:(double)arg3;
- (id)unitSpaceValuesForDataSpaceValues:(id)arg1;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 min:(double)arg2 max:(double)arg3;
- (double *)unitSpaceValuesForSeries:(id)arg1 groupIndexSet:(id)arg2;
- (double)unitSpaceValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2;
- (double *)unitSpaceValuesForSeries:(id)arg1 groupIndexSet:(id)arg2 min:(double)arg3 max:(double)arg4;
- (double)unitSpaceValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 min:(double)arg3 max:(double)arg4;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 series:(id)arg2 groupIndex:(unsigned long long)arg3 addValuesFromAllPreviousSeries:(_Bool)arg4;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg1;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (void)updateMinMaxGridLocationsInAnalysis:(id)arg1;
- (id)gridValueAxisToModelValue:(double)arg1;
- (double)doubleAxisToModelValue:(double)arg1;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
@property(readonly, nonatomic) double currentDataSetModelMedian;
@property(readonly, nonatomic) double currentDataSetModelAverage;
@property(readonly, nonatomic) double currentDataSetModelMax;
@property(readonly, nonatomic) double currentDataSetModelMin;
@property(readonly, nonatomic) double modelMax;
@property(readonly, nonatomic) double modelMin;
- (void)updateMultiDataModelAxisAnalysis:(id)arg1;
- (void)updateModelAxisAnalysis:(id)arg1;
- (_Bool)shouldAnalyzeAxisValue:(double)arg1;
- (int)p_axisGridValueType;
- (_Bool)hasCustomFormatForGridValueType:(int)arg1;
- (id)customFormatForGridValueType:(int)arg1;
@property(readonly, nonatomic) int adjustedNumberFormatType;
@property(readonly, nonatomic) int gridValueType;
- (id)p_multiDataAxisAnalysisFromCurrentModel;
@property(readonly, nonatomic) TSCHChartAxisAnalysis *axisAnalysisFromCurrentModel;
- (id)p_interceptAnalysisFromCurrentModel;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *minorGridLocations;
@property(readonly, nonatomic) NSArray *majorGridLocations;
- (unsigned long long)p_count;
- (unsigned long long)p_rangeCount;
@property(readonly, nonatomic) double range;
@property(readonly, nonatomic) double max;
@property(readonly, nonatomic) double min;
@property(readonly, nonatomic) double axisInterceptPosition;
- (double)interceptForAxis:(id)arg1;
@property(readonly, nonatomic) long long currentAxisScaleSetting;
- (void)invalidateMultiDataSetAnalysis;
- (void)invalidateTransientState;
@property(readonly) TSCHChartAxisAnalysis *multiDataSetAnalysis;
@property(readonly) TSCHChartAxisAnalysis *analysis;
@property(readonly) TSCHChartAxisInterceptAnalysis *interceptAnalysis;
- (id)referenceLineWithUUID:(id)arg1;
- (id)referenceLineAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *referenceLines;
@property(readonly) _Bool supportsReferenceLines;
@property(readonly, nonatomic) TSULocale *locale;
@property(readonly) _Bool isRangeContinuous;
@property(readonly) _Bool isCategory;
- (void)p_setupMultiDataSetAnalysisCacheIfNeeded;
- (id)initWithAxisID:(id)arg1 model:(id)arg2;
- (tvec2_84d5962d)sizeOfLabelsForInfo:(id)arg1 enumerator:(id)arg2 onlyHeight:(_Bool)arg3;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (id)g_genericToDefaultPropertyMap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

