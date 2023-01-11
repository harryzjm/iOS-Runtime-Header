//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthExperienceUI/UIPickerViewDataSource-Protocol.h>
#import <HealthExperienceUI/UIPickerViewDelegate-Protocol.h>

@class NSString, UIPickerView, WDManualDataEntryTableViewCell;

@interface _WDHeightPickerManualEntryItem <UIPickerViewDelegate, UIPickerViewDataSource>
{
    UIPickerView *_heightPicker;
    WDManualDataEntryTableViewCell *_tableViewCell;
    NSString *_feetUnitString;
    NSString *_inchUnitString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *inchUnitString; // @synthesize inchUnitString=_inchUnitString;
@property(retain, nonatomic) NSString *feetUnitString; // @synthesize feetUnitString=_feetUnitString;
- (void)setTitle:(id)arg1;
- (void)beginEditing;
- (id)generateValue;
- (void)_updateTableViewCell;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)tableViewCells;
- (id)_setupHeightPicker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
