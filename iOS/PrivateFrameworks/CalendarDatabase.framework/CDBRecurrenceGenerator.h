//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSCalendar, NSDate, NSTimeZone;

@interface CDBRecurrenceGenerator : NSObject
{
    NSCalendar *_calendar;
    NSDate *_eventStartDate;
    NSDate *_eventEndDate;
    NSTimeZone *_eventTimeZone;
    unsigned long long _duration;
    _Bool _allDay;
    int _interval;
    int _frequency;
    NSDate *_endDate;
    int _weekStart;
    _Bool _shouldPinMonthDays;
    NSArray *_daysOfTheWeek;
    NSArray *_daysOfTheMonth;
    NSArray *_daysOfTheYear;
    NSArray *_weeksOfTheYear;
    NSArray *_monthsOfTheYear;
    NSArray *_setPositions;
}

@property(copy, nonatomic) NSArray *setPositions; // @synthesize setPositions=_setPositions;
@property(copy, nonatomic) NSArray *monthsOfTheYear; // @synthesize monthsOfTheYear=_monthsOfTheYear;
@property(copy, nonatomic) NSArray *weeksOfTheYear; // @synthesize weeksOfTheYear=_weeksOfTheYear;
@property(copy, nonatomic) NSArray *daysOfTheYear; // @synthesize daysOfTheYear=_daysOfTheYear;
@property(copy, nonatomic) NSArray *daysOfTheMonth; // @synthesize daysOfTheMonth=_daysOfTheMonth;
@property(copy, nonatomic) NSArray *daysOfTheWeek; // @synthesize daysOfTheWeek=_daysOfTheWeek;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(nonatomic) _Bool allDay; // @synthesize allDay=_allDay;
@property(copy, nonatomic) NSTimeZone *eventTimeZone; // @synthesize eventTimeZone=_eventTimeZone;
@property(copy, nonatomic) NSDate *eventEndDate; // @synthesize eventEndDate=_eventEndDate;
@property(copy, nonatomic) NSDate *eventStartDate; // @synthesize eventStartDate=_eventStartDate;
- (void).cxx_destruct;
- (id)_copyYearlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;
- (id)_copySimpleYearlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;
- (_Bool)_validateCalDate:(CDStruct_79f9e052)arg1 pinned:(_Bool)arg2;
- (id)_copyMonthlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;
- (id)_copyWeeklyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;
- (id)_copyDailyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;
- (id)copyOccurrenceDatesBetweenStartDate:(CDStruct_79f9e052)arg1 endDate:(CDStruct_79f9e052)arg2 timeZone:(id)arg3 limit:(long long)arg4;
- (double)_convertAbsoluteTime:(double)arg1 fromTimeZone:(id)arg2 toTimeZone:(id)arg3;
- (_Bool)_isSimpleYearlyRecurrence;
- (id)computeRecurrenceEndDateForCalEvent:(void *)arg1 recurrenceRule:(void *)arg2 count:(unsigned long long)arg3 locked:(_Bool)arg4;
- (id)computeRecurrenceEndDate:(unsigned long long)arg1;
- (void)_prepareForCalRecurrence:(void *)arg1 locked:(_Bool)arg2;
- (id)copyOccurrenceDatesWithInitialDate:(id)arg1 calRecurrences:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 timeZone:(id)arg5;
- (id)copyOccurrenceDatesWithCalEvent:(void *)arg1 startDate:(CDStruct_79f9e052)arg2 endDate:(CDStruct_79f9e052)arg3 timeZone:(id)arg4 limit:(long long)arg5 locked:(_Bool)arg6;
- (id)_copyOccurrenceDatesWithBirthdayEvent:(void *)arg1 startDate:(CDStruct_79f9e052)arg2 endDate:(CDStruct_79f9e052)arg3 timeZone:(id)arg4 limit:(long long)arg5 locked:(_Bool)arg6;
- (void)_setupForCalEvent:(void *)arg1 locked:(_Bool)arg2;
- (id)init;

@end

