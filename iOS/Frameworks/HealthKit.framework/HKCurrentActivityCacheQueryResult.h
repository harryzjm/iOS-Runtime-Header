//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKActivityCache, NSArray;

@interface HKCurrentActivityCacheQueryResult : NSObject <NSSecureCoding>
{
    HKActivityCache *_currentActivityCache;
    NSArray *_activeEnergyResults;
    NSArray *_appleMoveTimeResults;
    NSArray *_appleExerciseTimeResults;
    NSArray *_appleStandHourResults;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *appleStandHourResults; // @synthesize appleStandHourResults=_appleStandHourResults;
@property(copy, nonatomic) NSArray *appleExerciseTimeResults; // @synthesize appleExerciseTimeResults=_appleExerciseTimeResults;
@property(copy, nonatomic) NSArray *appleMoveTimeResults; // @synthesize appleMoveTimeResults=_appleMoveTimeResults;
@property(copy, nonatomic) NSArray *activeEnergyResults; // @synthesize activeEnergyResults=_activeEnergyResults;
@property(retain, nonatomic) HKActivityCache *currentActivityCache; // @synthesize currentActivityCache=_currentActivityCache;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
