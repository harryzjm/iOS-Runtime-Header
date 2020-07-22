//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/UIPickerViewDataSource-Protocol.h>
#import <HealthUI/UIPickerViewDelegate-Protocol.h>

@class NSArray, NSString, UIPickerView;

@interface HKMedicalIDEditorPickerCell <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_picker;
    long long _chosenValueIndex;
    NSArray *_possibleValues;
}

@property(retain, nonatomic) NSArray *possibleValues; // @synthesize possibleValues=_possibleValues;
@property(nonatomic) long long chosenValueIndex; // @synthesize chosenValueIndex=_chosenValueIndex;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)commitEditing;
- (void)beginEditing;
- (void)dealloc;
- (void)_hidePicker;
- (void)_showPicker;
- (id)formattedValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

