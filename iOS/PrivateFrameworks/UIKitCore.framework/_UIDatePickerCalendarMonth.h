//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarMonth
{
    _UIDatePickerCalendarMonth *_previousMonth;
    _UIDatePickerCalendarMonth *_nextMonth;
}

+ (unsigned long long)representedCalendarUnits;
- (void).cxx_destruct;
@property(readonly, nonatomic) _UIDatePickerCalendarMonth *nextMonth;
@property(readonly, nonatomic) _UIDatePickerCalendarMonth *previousMonth;
- (id)_monthWithOffset:(long long)arg1;
- (id)dayMatchingOrdinalDay:(id)arg1;
- (id)dayWithDate:(id)arg1 assignedMonth:(id)arg2;

@end

