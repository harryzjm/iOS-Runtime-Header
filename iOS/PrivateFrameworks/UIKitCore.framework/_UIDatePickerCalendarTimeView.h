//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <UIKitCore/_UIDatePickerCalendarTimeLabelDelegate-Protocol.h>
#import <UIKitCore/_UIPassthroughScrollInteractionDelegate-Protocol.h>

@class NSArray, NSCalendar, NSDateFormatter, NSLocale, NSString, UILabel, UISegmentedControl, _UIDatePickerCalendarTime, _UIDatePickerCalendarTimeFormat, _UIDatePickerCalendarTimeLabel, _UIDatePickerNumericKeyboardViewController, _UIPassthroughScrollInteraction;
@protocol _UIDatePickerCalendarTimeViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarTimeView <_UIDatePickerCalendarTimeLabelDelegate, UIPopoverPresentationControllerDelegate, _UIPassthroughScrollInteractionDelegate>
{
    struct {
        unsigned int isPendingManualKeyboardPresentation:1;
        unsigned int isPresentingManualKeyboard:1;
        unsigned int needsLabelUpdateOnResignFirstResponder:1;
        unsigned int showsTimeLabel:1;
    } _flags;
    NSDateFormatter *_formatter;
    long long _currentLayout;
    NSArray *_clockLayoutConstraints;
    _UIPassthroughScrollInteraction *_passthroughInteraction;
    _Bool _shouldShowTimeLabel;
    id <_UIDatePickerCalendarTimeViewDelegate> _delegate;
    NSCalendar *_calendar;
    NSLocale *_locale;
    NSString *_customFontDesign;
    _UIDatePickerCalendarTime *_selectedTime;
    UILabel *_timeLabel;
    _UIDatePickerCalendarTimeLabel *_timeTextField;
    UISegmentedControl *_timeOfDaySelector;
    _UIDatePickerNumericKeyboardViewController *_numericKeyboardViewController;
    _UIDatePickerCalendarTimeFormat *_timeFormat;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UIDatePickerCalendarTimeFormat *timeFormat; // @synthesize timeFormat=_timeFormat;
@property(retain, nonatomic) _UIDatePickerNumericKeyboardViewController *numericKeyboardViewController; // @synthesize numericKeyboardViewController=_numericKeyboardViewController;
@property(readonly, nonatomic) UISegmentedControl *timeOfDaySelector; // @synthesize timeOfDaySelector=_timeOfDaySelector;
@property(readonly, nonatomic) _UIDatePickerCalendarTimeLabel *timeTextField; // @synthesize timeTextField=_timeTextField;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) _Bool shouldShowTimeLabel; // @synthesize shouldShowTimeLabel=_shouldShowTimeLabel;
@property(retain, nonatomic) _UIDatePickerCalendarTime *selectedTime; // @synthesize selectedTime=_selectedTime;
@property(retain, nonatomic) NSString *customFontDesign; // @synthesize customFontDesign=_customFontDesign;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(nonatomic) __weak id <_UIDatePickerCalendarTimeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)passthroughScrollInteractionDidRecognize:(id)arg1;
- (_Bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;
@property(nonatomic, getter=isPassthroughInteractionEnabled) _Bool passthroughInteractionEnabled;
- (void)_updateTextFieldsFromSelectedDateComponents;
- (void)_updateSelectedDateComponentsFromTextFields;
- (void)_notifyDelegate;
- (void)_dismissManualKeyboard;
- (void)presentationControllerWillDismiss:(id)arg1;
- (void)timeLabelDidEndEditing:(id)arg1;
- (void)timeLabelDidBeginEditing:(id)arg1;
- (void)timeLabelDidResignFirstResponder:(id)arg1;
- (void)timeLabelDidFailToBecomeFirstResponder:(id)arg1;
- (void)timeLabelDidBecomeFirstResponder:(id)arg1;
- (void)timeLabelWillBecomeFirstResponder:(id)arg1;
- (_Bool)timeLabelShouldSuppressSoftwareKeyboard:(id)arg1;
- (long long)keyboardTypeForTimeLabel:(id)arg1;
- (void)timeLabel:(id)arg1 didUpdateText:(id)arg2;
- (_Bool)timeLabel:(id)arg1 didReceiveText:(id)arg2;
- (void)didUpdateTimeOfDayValue:(id)arg1;
- (void)_updateFonts;
- (void)traitCollectionDidChange:(id)arg1;
@property(nonatomic) long long minuteInterval;
- (void)reloadWithCalendar:(id)arg1 locale:(id)arg2 selectedTime:(id)arg3;
- (void)_reload;
- (void)_reloadTimeOfDaySelector;
- (void)_reloadDateFormatters;
- (id)primaryFirstResponder;
- (void)_updateClockLayout;
- (void)_setupViewHierarchy;
- (void)_setupDateFormatter;
- (void)_disableCustomKeyboardIfNecessary;
- (void)_enableCustomKeyboardIfNecessary;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
