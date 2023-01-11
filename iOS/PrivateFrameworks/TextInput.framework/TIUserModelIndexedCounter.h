//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface TIUserModelIndexedCounter : NSObject
{
    NSMutableArray *_persisted;
    NSMutableArray *_current;
    int _dataType;
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)doPersist:(id)arg1 forDate:(id)arg2 forContext:(id)arg3;
- (id)_createEmptyCountsArray;
- (void)updateWithLoadedInteger:(int)arg1 andDouble:(double)arg2 forIndex:(int)arg3 andDaysPrior:(int)arg4;
- (void)updateWithDouble:(double)arg1 forIndex:(int)arg2;
- (void)updateWithInteger:(int)arg1 forIndex:(int)arg2;
- (void)extendToNumberOfDays:(int)arg1;
- (id)aggregatedCountForNumberOfDays:(int)arg1;
@property(readonly, nonatomic) NSNumber *aggregatedCount;
- (id)countsForNumberOfDays:(int)arg1;
@property(readonly, nonatomic) NSArray *counts;
@property(readonly, nonatomic) NSArray *currentCounts;
@property(readonly, nonatomic) int days;
- (void)prepareBuckets;
@property(readonly, nonatomic) int bucketCount;
- (id)initWithName:(id)arg1;

@end
