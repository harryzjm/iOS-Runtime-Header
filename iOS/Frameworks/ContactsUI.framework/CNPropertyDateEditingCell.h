//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNPickerControllerDelegate-Protocol.h>
#import <ContactsUI/UITextFieldDelegate-Protocol.h>

@class CNDatePickerContainerView, NSString, UIDatePicker, UIViewController;

__attribute__((visibility("hidden")))
@interface CNPropertyDateEditingCell <UITextFieldDelegate, CNPickerControllerDelegate>
{
    _Bool _shouldEditDatesTextually;
    UIDatePicker *_datePicker;
    CNDatePickerContainerView *_datePickerContainerView;
    UIViewController *_contentViewController;
    NSString *_currentCalendarIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentCalendarIdentifier; // @synthesize currentCalendarIdentifier=_currentCalendarIdentifier;
@property(readonly, nonatomic) _Bool shouldEditDatesTextually; // @synthesize shouldEditDatesTextually=_shouldEditDatesTextually;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) CNDatePickerContainerView *datePickerContainerView; // @synthesize datePickerContainerView=_datePickerContainerView;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void)regainFocus;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)applyCalendarAndDate;
- (void)updateValueWithPropertyItem:(id)arg1;
- (_Bool)_shouldUseYearlessPickerForDateComponents:(id)arg1;
- (void)dateChanged:(id)arg1;
- (void)labelButtonClicked:(id)arg1;
- (void)localeUpdated:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
