//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate, NSDateComponents, NSNumber;

@interface ACHActivityAwardingDateCache : NSObject
{
    NSNumber *_dayOfWeekForToday;
    NSNumber *_dayOfWeekForLastDayOfFitnessWeek;
    NSNumber *_numberOfDaysInThisMonth;
    NSNumber *_dayOfMonthForToday;
    NSDateComponents *_currentDateComponents;
    NSCalendar *_calendar;
    NSDate *_currentDate;
}

@property(retain, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSDateComponents *currentDateComponents; // @synthesize currentDateComponents=_currentDateComponents;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *dayOfMonthForToday; // @synthesize dayOfMonthForToday=_dayOfMonthForToday;
@property(readonly, nonatomic) NSNumber *numberOfDaysInThisMonth; // @synthesize numberOfDaysInThisMonth=_numberOfDaysInThisMonth;
@property(readonly, nonatomic) NSNumber *dayOfWeekForLastDayOfFitnessWeek; // @synthesize dayOfWeekForLastDayOfFitnessWeek=_dayOfWeekForLastDayOfFitnessWeek;
@property(readonly, nonatomic) NSNumber *dayOfWeekForToday; // @synthesize dayOfWeekForToday=_dayOfWeekForToday;
- (void)_clearDateVariables;
- (id)initWithCalendar:(id)arg1;

@end

