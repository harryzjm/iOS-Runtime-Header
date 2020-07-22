//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel, UIStepper;
@protocol AXUISettingsEditableTableCellWithStepperDelegate;

@interface AXUISettingsEditableTableCellWithStepper
{
    UIStepper *_stepper;
    id <AXUISettingsEditableTableCellWithStepperDelegate> _delegate;
    UILabel *_secondsLabel;
}

@property(retain, nonatomic) UILabel *secondsLabel; // @synthesize secondsLabel=_secondsLabel;
@property(nonatomic) __weak id <AXUISettingsEditableTableCellWithStepperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIStepper *stepper; // @synthesize stepper=_stepper;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)_updateSecondsLabelForDelegate:(id)arg1;
- (void)_updateSecondsLabel;
- (void)_updateValue:(double)arg1 andText:(_Bool)arg2;
- (void)_textFieldChanged:(id)arg1;
- (void)_stepperChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)_stepperValueFormatString;
- (void)_updateAccessibilityLabelForTextField;
- (void)initializeView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
