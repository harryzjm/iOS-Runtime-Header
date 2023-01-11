//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HAMenstrualAlgorithmsStats : NSObject
{
    NSNumber *_medianCycleLength;
    NSNumber *_medianMenstruationLength;
    NSNumber *_lowerCycleLengthPercentile;
    NSNumber *_lowerMenstruationLengthPercentile;
    NSNumber *_upperCycleLengthPercentile;
    NSNumber *_upperMenstruationLengthPercentile;
    NSNumber *_numberOfCyclesFound;
    NSNumber *_julianDayOfFirstCycleStart;
    NSNumber *_julianDayOfLastCycleStart;
}

@property(retain, nonatomic) NSNumber *julianDayOfLastCycleStart; // @synthesize julianDayOfLastCycleStart=_julianDayOfLastCycleStart;
@property(retain, nonatomic) NSNumber *julianDayOfFirstCycleStart; // @synthesize julianDayOfFirstCycleStart=_julianDayOfFirstCycleStart;
@property(retain, nonatomic) NSNumber *numberOfCyclesFound; // @synthesize numberOfCyclesFound=_numberOfCyclesFound;
@property(retain, nonatomic) NSNumber *upperMenstruationLengthPercentile; // @synthesize upperMenstruationLengthPercentile=_upperMenstruationLengthPercentile;
@property(retain, nonatomic) NSNumber *upperCycleLengthPercentile; // @synthesize upperCycleLengthPercentile=_upperCycleLengthPercentile;
@property(retain, nonatomic) NSNumber *lowerMenstruationLengthPercentile; // @synthesize lowerMenstruationLengthPercentile=_lowerMenstruationLengthPercentile;
@property(retain, nonatomic) NSNumber *lowerCycleLengthPercentile; // @synthesize lowerCycleLengthPercentile=_lowerCycleLengthPercentile;
@property(retain, nonatomic) NSNumber *medianMenstruationLength; // @synthesize medianMenstruationLength=_medianMenstruationLength;
@property(retain, nonatomic) NSNumber *medianCycleLength; // @synthesize medianCycleLength=_medianCycleLength;
- (void).cxx_destruct;

@end
