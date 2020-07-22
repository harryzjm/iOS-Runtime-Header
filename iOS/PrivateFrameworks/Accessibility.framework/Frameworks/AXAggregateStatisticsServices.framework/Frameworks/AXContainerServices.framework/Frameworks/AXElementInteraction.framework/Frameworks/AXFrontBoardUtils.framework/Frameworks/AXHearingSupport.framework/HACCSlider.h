//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <AXHearingSupport/HACCContentModule-Protocol.h>

@class AXHAStepSlider, NSNumberFormatter, NSString, UILabel, UIVisualEffectView;
@protocol HACCContentModuleDelegate;

@interface HACCSlider : UIControl <HACCContentModule>
{
    UIVisualEffectView *_titleContainer;
    UIVisualEffectView *_subtitleContainer;
    unsigned long long module;
    id <HACCContentModuleDelegate> delegate;
    unsigned long long _numberOfSteps;
    double _value;
    NSNumberFormatter *_numberFormatter;
    long long _style;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_statusLabel;
    AXHAStepSlider *_slider;
}

@property(retain, nonatomic) AXHAStepSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) id <HACCContentModuleDelegate> delegate; // @synthesize delegate;
@property(nonatomic) unsigned long long module; // @synthesize module;
- (void).cxx_destruct;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)contentValue;
- (void)updateValue;
- (void)updateValueString;
- (void)sliderDidChange:(id)arg1;
@property(nonatomic) unsigned long long numberOfSteps; // @synthesize numberOfSteps=_numberOfSteps;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1 andStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
