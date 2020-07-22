//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/PSTimeRangeCellDelegate-Protocol.h>

@class CBClient, NSDateFormatter, NSTimer, PSSpecifier;

@interface PSUIColorTemperatureController : PSListController <PSTimeRangeCellDelegate>
{
    CBClient *_brightnessClient;
    NSDateFormatter *_timeFormatter;
    _Bool _temperatureSliderWasTracking;
    NSTimer *_blueLightReductionLabelRefreshTimer;
    _Bool _showColorTemperature;
    _Bool _showingScheduleRange;
    PSSpecifier *_scheduleRangeSpecifier;
    PSSpecifier *_scheduleSwitchSpecifier;
    PSSpecifier *_manualSwitchSpecifier;
    PSSpecifier *_temperatureSlider;
}

- (void).cxx_destruct;
- (id)toDetailForCell:(id)arg1;
- (id)fromDetailForCell:(id)arg1;
- (id)localizedTimeForTime:(CDStruct_1ef3fb1f)arg1;
- (id)blueLightReductionFooter;
- (void)colorTemperatureSliderDidChange;
- (void)setTemperatureStrength:(id)arg1 specifier:(id)arg2;
- (id)temperatureStrength:(id)arg1;
- (void)showAlertToDisableAccessibilityFiltersForBlueLightReduction:(CDUnknownBlockType)arg1 cancel:(CDUnknownBlockType)arg2;
- (void)setBlueLightReductionSchedule:(id)arg1 forSpecifier:(id)arg2;
- (id)getBlueLightReductionScheduleEnabled:(id)arg1;
- (void)setBlueLightReductionEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)getBlueLightReductionEnabled:(id)arg1;
- (void)handleBlueLightStatusChanged:(CDStruct_f4084295 *)arg1;
- (void)showScheduleRange:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_printBlueLightStatus:(CDStruct_f4084295 *)arg1;
- (id)specifiers;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

