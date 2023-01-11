//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPickerViewDataSource-Protocol.h>
#import <UIKitCore/UIPickerViewDelegate-Protocol.h>

@class NSCalendar, NSDate, NSDateComponents, NSLocale, NSString, NSTimeZone, UIDatePicker, UIFont, UILabel, _UIDatePickerChineseCalendar, _UIDatePickerMode;

__attribute__((visibility("hidden")))
@interface _UIDatePickerView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    long long _loadingDate;
    NSDate *_userSuppliedDate;
    NSDate *_userSuppliedMinimumDate;
    NSDate *_userSuppliedMaximumDate;
    NSLocale *_compositeLocale;
    NSLocale *_userProvidedLocale;
    NSCalendar *_userProvidedCalendar;
    _UIDatePickerChineseCalendar *_chineseWrapperCalendar;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    NSDateComponents *_lastSelectedDateComponents;
    _Bool _allowsZeroTimeInterval;
    _UIDatePickerMode *_mode;
    NSTimeZone *_timeZone;
    double _timeInterval;
    UILabel *_hourLabel;
    UILabel *_minuteLabel;
    UIDatePicker *_datePickerDelegate;
    id _delegateOfDatePicker;
    int _expectedAMPM;
    struct {
        unsigned int staggerTimeIntervals:1;
        unsigned int loadingDateOrTime:1;
        unsigned int highlightsToday:1;
        unsigned int usesBlackChrome:1;
    } _datePickerFlags;
}

@property(nonatomic) __weak id delegateOfDatePicker; // @synthesize delegateOfDatePicker=_delegateOfDatePicker;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_userSuppliedMaximumDate;
@property(copy, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_userSuppliedMinimumDate;
- (void).cxx_destruct;
- (id)_viewForSelectedRowInComponent:(long long)arg1;
@property(nonatomic, getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:) _Bool allowsZeroTimeInterval;
@property(nonatomic, getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:) _Bool allowsZeroCountDownDuration;
@property(nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) _Bool usesBlackChrome;
- (void)_setHidesLabels:(_Bool)arg1;
- (void)_resetSelectionOfTables;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)shadowColor;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
@property(readonly, nonatomic) double contentWidth; // @dynamic contentWidth;
@property(nonatomic) double timeInterval;
- (void)_updateEnabledCellsIncludingWMDCells:(_Bool)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)_fadeLabelForCalendarUnit:(unsigned long long)arg1 toText:(id)arg2 animated:(_Bool)arg3;
- (void)_updateTextColorForCalendarUnitLabel:(id)arg1;
- (id)_makeNewCalendarUnitLabel;
- (id)_contentViewForSizingLabelForPositioningInComponent:(long long)arg1;
- (void)_positionLabel:(id)arg1 forCalendarUnit:(unsigned long long)arg2 relativeTo:(id)arg3 order:(long long)arg4;
- (void)_setLabel:(id)arg1 forCalendarUnit:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)_labelForCalendarUnit:(unsigned long long)arg1 createIfNecessary:(_Bool)arg2;
- (void)_UIAppearance_setTextColor:(id)arg1;
- (void)_setTextColor:(id)arg1;
- (void)_updateLabelColors;
- (void)_updateLabels:(_Bool)arg1;
- (_Bool)_updatedLastSelectedComponentsByValidatingSelectedDateWithLastManipulatedComponent:(long long)arg1;
- (id)_componentsSelectedAfterEnforcingValidityOfComponents:(id)arg1 withLastManipulatedComponent:(long long)arg2;
- (int)_selectedMinuteForColumn:(int)arg1;
- (int)_selectedHourForColumn:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)_selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(_Bool)arg3 notify:(_Bool)arg4;
- (void)_loadDate:(id)arg1 animated:(_Bool)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3;
@property(nonatomic) long long minuteInterval;
@property(nonatomic) long long datePickerMode;
- (void)_setMode:(id)arg1;
@property(readonly, nonatomic, getter=_isTimeIntervalMode) _Bool isTimeIntervalMode; // @dynamic isTimeIntervalMode;
- (long long)numberOfComponentsInPickerView:(id)arg1;
@property(copy, nonatomic) NSDate *date;
- (void)_setDate:(id)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3;
- (void)setDate:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=_hasCustomLocale) _Bool hasCustomLocale; // @dynamic hasCustomLocale;
@property(retain, nonatomic) NSLocale *userProvidedLocale;
@property(readonly, nonatomic, getter=_hasCustomCalendar) _Bool hasCustomCalendar; // @dynamic hasCustomCalendar;
@property(copy, nonatomic) NSCalendar *userProvidedCalendar;
- (_Bool)_isCurrentCalendar:(id)arg1;
- (void)_rebuildCompositeLocale;
- (_Bool)_showingDate;
- (void)_doneLoadingDateOrTime;
- (id)_orientationImageSuffix;
- (id)pickerImageNamePrefix;
- (double)_tableRowHeight;
- (void)_datePickerReset:(id)arg1;
- (void)_todayChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (int)second;
- (int)minute;
- (int)hour;
@property(copy, nonatomic) NSDateComponents *dateComponents; // @dynamic dateComponents;
@property(nonatomic) _Bool staggerTimeIntervals; // @dynamic staggerTimeIntervals;
@property(readonly, nonatomic, getter=_hrMinFont) UIFont *hrMinFont; // @dynamic hrMinFont;
- (id)_hoursStringForHour:(long long)arg1;
- (id)_minutesStringForHour:(long long)arg1 minutes:(long long)arg2;
- (long long)_selectionBarRowInComponent:(long long)arg1;
- (_Bool)_updateDateOrTime;
@property(readonly, nonatomic, getter=_amPmValue) long long amPmValue; // @dynamic amPmValue;
@property(readonly, nonatomic, getter=_lastSelectedDateComponents) NSDateComponents *lastSelectedDateComponents; // @dynamic lastSelectedDateComponents;
- (id)_existingLabelForCalendarUnit:(unsigned long long)arg1;
- (id)_labelTextForCalendarUnit:(unsigned long long)arg1;
- (id)_selectedTextForCalendarUnit:(unsigned long long)arg1;
@property(readonly, nonatomic) NSLocale *locale; // @dynamic locale;
@property(readonly, nonatomic) NSCalendar *calendar; // @dynamic calendar;
@property(nonatomic) _Bool highlightsToday; // @dynamic highlightsToday;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
