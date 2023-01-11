//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKWorkout, NSArray;

@interface HKLocationReadings : NSObject
{
    _Bool _isSmoothed;
    HKWorkout *_workout;
    NSArray *_allValidLocations;
    NSArray *_inOrderLocationArrays;
    double _averageSpeed;
    double _topSpeed;
    double _bottomSpeed;
}

@property(readonly, nonatomic) double bottomSpeed; // @synthesize bottomSpeed=_bottomSpeed;
@property(readonly, nonatomic) double topSpeed; // @synthesize topSpeed=_topSpeed;
@property(readonly, nonatomic) double averageSpeed; // @synthesize averageSpeed=_averageSpeed;
@property(readonly, nonatomic) NSArray *inOrderLocationArrays; // @synthesize inOrderLocationArrays=_inOrderLocationArrays;
@property(readonly, nonatomic) NSArray *allValidLocations; // @synthesize allValidLocations=_allValidLocations;
@property(readonly, nonatomic) HKWorkout *workout; // @synthesize workout=_workout;
@property(readonly, nonatomic) _Bool isSmoothed; // @synthesize isSmoothed=_isSmoothed;
- (void).cxx_destruct;
- (id)lastObject;
- (id)firstObject;
- (long long)count;
- (void)_filterLocationsByActiveTimePeriod:(id)arg1;
- (void)_calculateSpeeds;
- (id)description;
- (id)debugDescription;
- (id)initWithLocation:(id)arg1 workout:(id)arg2;
- (id)initWithLocations:(id)arg1 workout:(id)arg2 isSmoothed:(_Bool)arg3;

@end

