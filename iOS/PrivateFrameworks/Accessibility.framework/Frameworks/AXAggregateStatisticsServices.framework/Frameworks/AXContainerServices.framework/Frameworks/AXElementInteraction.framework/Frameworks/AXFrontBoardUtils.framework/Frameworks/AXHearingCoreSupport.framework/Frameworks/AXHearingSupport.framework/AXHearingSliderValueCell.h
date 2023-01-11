//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class AXHAStepSlider, NSNumberFormatter, UILabel, UIView;

@interface AXHearingSliderValueCell : PSTableCell
{
    UIView *_leftView;
    AXHAStepSlider *_slider;
    UILabel *_valueLabel;
    NSNumberFormatter *_numberFormatter;
    double _sliderMargin;
    double _valueWidth;
}

- (void).cxx_destruct;
- (id)description;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (void)layoutSubviews;
- (short)numberOfSteps;
- (void)updateValue;
- (id)valueString;
- (id)value;
- (void)setValue:(id)arg1;
- (void)sliderValueDidChange:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
