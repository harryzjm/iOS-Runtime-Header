//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DOMHTMLInputElement, NSString, UIDatePicker;

__attribute__((visibility("hidden")))
@interface UIWebDefaultDateTimePicker : NSObject
{
    DOMHTMLInputElement *_inputElement;
    UIDatePicker *_datePicker;
    NSString *_formatString;
    _Bool _shouldRemoveTimeZoneInformation;
    _Bool _isTimeInput;
}

@property(retain, nonatomic) UIDatePicker *_datePicker; // @synthesize _datePicker;
@property(retain, nonatomic) DOMHTMLInputElement *_inputElement; // @synthesize _inputElement;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)_sanitizeInputValueForFormatter:(id)arg1;
- (id)controlView;
- (void)dealloc;
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;
- (void)_dateChangeHandler:(id)arg1;
- (void)_dateChanged;
- (void)_dateChangedSetAsString;
- (void)_dateChangedSetAsNumber;
- (long long)_timeZoneOffsetFromGMT:(id)arg1;

@end

