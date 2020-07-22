//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class HKSleepChartPointUserInfo, NSArray, NSDate, NSNumber, NSString;

@interface HKSleepPeriodChartPoint : NSObject <HKChartPoint>
{
    _Bool _highlighted;
    NSArray *_asleepOffsets;
    NSArray *_inBedOffsets;
    NSDate *_xValue;
    NSNumber *_upperGoal;
    NSNumber *_lowerGoal;
    HKSleepChartPointUserInfo *_userInfo;
}

@property(retain, nonatomic) HKSleepChartPointUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) NSNumber *lowerGoal; // @synthesize lowerGoal=_lowerGoal;
@property(retain, nonatomic) NSNumber *upperGoal; // @synthesize upperGoal=_upperGoal;
@property(retain, nonatomic) NSDate *xValue; // @synthesize xValue=_xValue;
@property(retain, nonatomic) NSArray *inBedOffsets; // @synthesize inBedOffsets=_inBedOffsets;
@property(retain, nonatomic) NSArray *asleepOffsets; // @synthesize asleepOffsets=_asleepOffsets;
- (void).cxx_destruct;
- (id)allYValues;
- (id)yValueForKey:(id)arg1;
- (id)yValue;
- (id)maxYValue;
- (id)minYValue;
- (id)maxXValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)xValueAsGenericType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

