//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/UIPickerViewDataSource-Protocol.h>
#import <HealthUI/UIPickerViewDelegate-Protocol.h>

@class NSNumber, NSString, UIPickerView;

@interface HKMedicalIDEditorHeightCell <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_picker;
    _Bool _usesImperialUnits;
    NSNumber *_centimeterValue;
}

+ (double)defaultCentimeterValue;
@property(retain, nonatomic) NSNumber *centimeterValue; // @synthesize centimeterValue=_centimeterValue;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)commitEditing;
- (void)beginEditing;
- (void)_hidePicker;
- (void)dealloc;
- (void)_showPicker;
- (id)formattedValue;
- (void)_localeDidChange:(id)arg1;
- (void)_commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

