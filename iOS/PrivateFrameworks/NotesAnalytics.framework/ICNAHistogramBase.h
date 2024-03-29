//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface ICNAHistogramBase : NSObject
{
    NSArray *_bucketLeftBounds;
    double _valuePrecision;
    NSNumber *_valueMax;
    NSMutableArray *_countsForEachBucket;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *countsForEachBucket; // @synthesize countsForEachBucket=_countsForEachBucket;
@property(retain, nonatomic) NSNumber *valueMax; // @synthesize valueMax=_valueMax;
@property(nonatomic) double valuePrecision; // @synthesize valuePrecision=_valuePrecision;
@property(retain, nonatomic) NSArray *bucketLeftBounds; // @synthesize bucketLeftBounds=_bucketLeftBounds;
- (unsigned long long)roundedCount:(unsigned long long)arg1;
- (double)roundedValue:(double)arg1;
- (id)icasHistogram;
- (void)reportValue:(double)arg1;
- (void)setup;
- (id)init;

@end

