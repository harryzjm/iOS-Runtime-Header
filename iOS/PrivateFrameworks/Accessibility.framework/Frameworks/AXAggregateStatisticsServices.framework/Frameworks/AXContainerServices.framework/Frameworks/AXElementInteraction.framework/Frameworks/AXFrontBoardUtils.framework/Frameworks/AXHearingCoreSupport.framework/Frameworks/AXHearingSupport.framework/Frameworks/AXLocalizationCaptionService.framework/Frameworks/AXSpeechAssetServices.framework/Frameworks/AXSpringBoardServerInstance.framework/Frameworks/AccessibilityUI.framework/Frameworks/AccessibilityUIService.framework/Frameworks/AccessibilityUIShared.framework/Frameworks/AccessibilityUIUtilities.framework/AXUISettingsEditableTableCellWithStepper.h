//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel, UIStepper;
@protocol AXUISettingsEditableTableCellWithStepperDelegate;

@interface AXUISettingsEditableTableCellWithStepper
{
    _Bool _testingUseNoPreferencesDelegate;
    UIStepper *_stepper;
    id <AXUISettingsEditableTableCellWithStepperDelegate> _delegate;
    UILabel *_secondsLabel;
}

@property(nonatomic) _Bool testingUseNoPreferencesDelegate; // @synthesize testingUseNoPreferencesDelegate=_testingUseNoPreferencesDelegate;
@property(retain, nonatomic) UILabel *secondsLabel; // @synthesize secondsLabel=_secondsLabel;
@property(nonatomic) __weak id <AXUISettingsEditableTableCellWithStepperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIStepper *stepper; // @synthesize stepper=_stepper;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didMoveToSuperview;
- (void)_updateSecondsLabelForDelegate:(id)arg1;
- (void)_updateSecondsLabel;
- (void)updateWithValue:(double)arg1 shouldUpdateTextField:(_Bool)arg2;
@property(readonly, nonatomic) _Bool shouldResizeTextFieldOnUpdate;
- (void)_textFieldChanged:(id)arg1;
- (void)_stepperChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)_stepperValueFormatString;
- (void)_updateAccessibilityLabelForTextField;
- (id)_axStepperStringValue;
- (void)_axStepperSetValue:(double)arg1;
- (double)_axStepperStepValue;
- (double)_axStepperValue;
- (id)_axStepperUnitString;
- (long long)_axStepperKeyboardType;
- (double)_axStepperMinimumValue;
- (double)_axStepperMaximumValue;
- (void)initializeView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

