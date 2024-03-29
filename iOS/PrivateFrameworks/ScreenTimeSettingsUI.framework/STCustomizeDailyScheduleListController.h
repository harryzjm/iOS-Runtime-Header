//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSDateComponents, PSSpecifier, STBlueprintScheduleCustomDayItem;

__attribute__((visibility("hidden")))
@interface STCustomizeDailyScheduleListController : PSListController
{
    _Bool _weekdayEnabled;
    STBlueprintScheduleCustomDayItem *_dailySchedule;
    unsigned long long _weekdayIndex;
    NSDateComponents *_minimumStartTime;
    PSSpecifier *_dailyScheduleGroupSpecifier;
    PSSpecifier *_startTimeSpecifier;
    PSSpecifier *_startTimePickerSpecifier;
    PSSpecifier *_endTimeSpecifier;
    PSSpecifier *_endTimePickerSpecifier;
}

- (void).cxx_destruct;
@property(readonly) PSSpecifier *endTimePickerSpecifier; // @synthesize endTimePickerSpecifier=_endTimePickerSpecifier;
@property(readonly) PSSpecifier *endTimeSpecifier; // @synthesize endTimeSpecifier=_endTimeSpecifier;
@property(readonly) PSSpecifier *startTimePickerSpecifier; // @synthesize startTimePickerSpecifier=_startTimePickerSpecifier;
@property(readonly) PSSpecifier *startTimeSpecifier; // @synthesize startTimeSpecifier=_startTimeSpecifier;
@property(readonly) PSSpecifier *dailyScheduleGroupSpecifier; // @synthesize dailyScheduleGroupSpecifier=_dailyScheduleGroupSpecifier;
@property(readonly, copy) NSDateComponents *minimumStartTime; // @synthesize minimumStartTime=_minimumStartTime;
@property(readonly) unsigned long long weekdayIndex; // @synthesize weekdayIndex=_weekdayIndex;
@property(copy) STBlueprintScheduleCustomDayItem *dailySchedule; // @synthesize dailySchedule=_dailySchedule;
@property(getter=isWeekdayEnabled) _Bool weekdayEnabled; // @synthesize weekdayEnabled=_weekdayEnabled;
- (id)datePickerForSpecifier:(id)arg1;
- (void)datePickerChanged:(id)arg1;
- (void)_updateTimeSpecifierDetailTextLabelColors:(_Bool)arg1 selectedSpecifier:(id)arg2 unselectedSpecifier:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_endTime:(id)arg1;
- (id)_startTime:(id)arg1;
- (void)_setWeekdayEnabled:(id)arg1 specifier:(id)arg2;
- (id)_getWeekdayEnabled:(id)arg1;
- (id)specifiers;
- (void)_didEndEditingDailySchedule:(_Bool)arg1;
- (void)willResignActive;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (id)initWithDailySchedule:(id)arg1 weekdayIndex:(unsigned long long)arg2 weekdayName:(id)arg3 minimumStartTime:(id)arg4;

@end

