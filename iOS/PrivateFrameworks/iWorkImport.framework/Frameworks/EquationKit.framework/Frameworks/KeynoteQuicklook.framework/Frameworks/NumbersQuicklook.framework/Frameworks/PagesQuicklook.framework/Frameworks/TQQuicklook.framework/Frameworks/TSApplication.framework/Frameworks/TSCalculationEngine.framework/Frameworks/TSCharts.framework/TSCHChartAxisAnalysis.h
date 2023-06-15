//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface TSCHChartAxisAnalysis : NSObject
{
    double _min;
    double _max;
    double _modelMin;
    double _modelMax;
    double _dataSetModelMin;
    double _dataSetModelMax;
    double _modelAverage;
    double _modelMedian;
    NSArray *_majorGridLocations;
    NSArray *_minorGridLocations;
    NSArray *_totals;
    NSDictionary *_seriesIndexToValueIndexesWhereSeriesIsLastSeries;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *seriesIndexToValueIndexesWhereSeriesIsLastSeries; // @synthesize seriesIndexToValueIndexesWhereSeriesIsLastSeries=_seriesIndexToValueIndexesWhereSeriesIsLastSeries;
@property(copy, nonatomic) NSArray *totals; // @synthesize totals=_totals;
@property(copy, nonatomic) NSArray *minorGridLocations; // @synthesize minorGridLocations=_minorGridLocations;
@property(copy, nonatomic) NSArray *majorGridLocations; // @synthesize majorGridLocations=_majorGridLocations;
@property(nonatomic) double modelMedian; // @synthesize modelMedian=_modelMedian;
@property(nonatomic) double modelAverage; // @synthesize modelAverage=_modelAverage;
@property(nonatomic) double dataSetModelMax; // @synthesize dataSetModelMax=_dataSetModelMax;
@property(nonatomic) double dataSetModelMin; // @synthesize dataSetModelMin=_dataSetModelMin;
@property(nonatomic) double modelMax; // @synthesize modelMax=_modelMax;
@property(nonatomic) double modelMin; // @synthesize modelMin=_modelMin;
@property(nonatomic) double max; // @synthesize max=_max;
@property(nonatomic) double min; // @synthesize min=_min;

@end

