//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCalendar, NSLocale, UIDatePicker, _UIDatePickerCalendarMonth, _UIDatePickerDateRange;
@protocol _UIDatePickerCalendarMonthYearSelectorDelegate;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarMonthYearSelector
{
    UIDatePicker *_datePicker;
    id <_UIDatePickerCalendarMonthYearSelectorDelegate> _delegate;
    NSCalendar *_calendar;
    NSLocale *_locale;
    _UIDatePickerDateRange *_dateRange;
    _UIDatePickerCalendarMonth *_selectedMonth;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UIDatePickerCalendarMonth *selectedMonth; // @synthesize selectedMonth=_selectedMonth;
@property(readonly, nonatomic) _UIDatePickerDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(nonatomic) __weak id <_UIDatePickerCalendarMonthYearSelectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didSelectDate:(id)arg1;
- (void)_setSelectedMonth:(id)arg1 animated:(_Bool)arg2 updatePicker:(_Bool)arg3 notifyDelegate:(_Bool)arg4;
- (void)setSelectedMonth:(id)arg1 animated:(_Bool)arg2;
- (void)reloadWithCalendar:(id)arg1 locale:(id)arg2 dateRange:(id)arg3 selectedMonth:(id)arg4;
- (void)_reload;
- (void)_setupViewHierarchy;
- (id)initWithFrame:(struct CGRect)arg1;

@end
