//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateFormatter, NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_DateAndTime
{
    _Bool _weekdayLast;
    double _wmdWeekMonthDayWidth;
    double _wmdHourWidth;
    double _wmdMinuteWidth;
    double _wmdAMPMWidth;
    double _wmdWeekdayWidth;
    NSString *_weekdayFormat;
    NSString *_monthDayFormat;
    NSString *_hourFormat;
    NSString *_minuteFormat;
    NSDateFormatter *_relativeFormatter;
    NSDateFormatter *_weekdayFormatter;
}

+ (unsigned long long)extractableCalendarUnits;
+ (long long)datePickerMode;
- (void).cxx_destruct;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (void)updateEnabledStateOfViewForRow:(long long)arg1 inComponent:(long long)arg2;
- (id)viewForRow:(long long)arg1 inComponent:(long long)arg2 reusingView:(id)arg3;
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;
- (_Bool)_shouldEnableWeekMonthDayForRow:(long long)arg1;
- (id)_dateForWeekMonthDayRow:(long long)arg1;
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;
- (id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;
- (_Bool)isWeekdayLast;
- (double)weekdayWidth;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (double)componentWidthForDateTimeCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (id)baseDateComponents;
- (void)_takeBaseDateComponentsFromDate:(id)arg1;
- (void)_resetBaseDateComponentsIfNecessaryFromDate:(id)arg1;
- (void)loadDate:(id)arg1 animated:(_Bool)arg2;
- (unsigned long long *)elements;
- (long long)displayedCalendarUnits;
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;
- (id)localizedFormatString;
- (id)weekdayFormatter;
- (id)relativeFormatter;
- (void)noteCalendarChanged;
- (void)resetComponentWidths;
- (void)_shouldReset:(id)arg1;

@end

