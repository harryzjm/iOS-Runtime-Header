//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, TSCHChartAxis;

__attribute__((visibility("hidden")))
@interface TSCHChartAxisAnalyzer : NSObject
{
    TSCHChartAxis *mAxis;
    _Bool mShouldCalculateMedian;
    double mMin;
    double mMax;
    double mMedian;
    unsigned long long mNumValues;
    double mSumOfValues;
    _Bool mFirstValue;
    _Bool mDidCalculateMedian;
    NSMutableArray *mValues;
}

+ (id)analyzerForAxis:(id)arg1 needsMedian:(_Bool)arg2;
- (double)average;
- (double)median;
- (double)max;
- (double)min;
- (void)addGridValue:(id)arg1 forSeries:(id)arg2;
- (_Bool)p_hasMedianReferenceLine;
- (void)dealloc;
- (id)initForAxis:(id)arg1 needsMedian:(_Bool)arg2;

@end

