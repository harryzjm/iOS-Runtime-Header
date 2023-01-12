//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKQuantityType, HKUnit, NSArray, NSDateInterval, NSMutableArray, NSMutableDictionary, NSNumber, _HKDateIntervalCollection;

@interface HDValueHistogramCollectionCalculator : NSObject
{
    HKQuantityType *_quantityType;
    NSArray *_quantityRanges;
    _HKDateIntervalCollection *_intervalCollection;
    HKUnit *_canonicalUnit;
    NSArray *_valueRangesInCanonicalUnit;
    NSMutableArray *_currentIntervalCountsByValueRange;
    NSDateInterval *_currentInterval;
    NSNumber *_currentIntervalIndex;
    NSMutableDictionary *_finalizedHistogramsByDateIntervalIndex;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) _HKDateIntervalCollection *intervalCollection; // @synthesize intervalCollection=_intervalCollection;
@property(readonly, copy, nonatomic) NSArray *quantityRanges; // @synthesize quantityRanges=_quantityRanges;
@property(readonly, copy, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
- (id)result;
- (void)addSampleValue:(double)arg1 startTime:(double)arg2;
- (id)initWithQuantityType:(id)arg1 quantityRanges:(id)arg2 intervalCollection:(id)arg3;

@end
