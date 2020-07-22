//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UIFont, UILabel, UIStackView;

@interface HUTitleValueCell
{
    _Bool _hideTitle;
    _Bool _hideValue;
    _Bool _titleColorFollowsTintColor;
    _Bool _valueColorFollowsTintColor;
    _Bool _allowCopyValueToPasteboard;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    NSString *_titleText;
    UIFont *_titleFont;
    NSString *_valueText;
    UIFont *_valueFont;
    long long _compressionResistancePolicy;
    NSArray *_stackViewConstraints;
    UIStackView *_labelsStackView;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UIStackView *labelsStackView; // @synthesize labelsStackView=_labelsStackView;
@property(retain, nonatomic) NSArray *stackViewConstraints; // @synthesize stackViewConstraints=_stackViewConstraints;
@property(nonatomic) long long compressionResistancePolicy; // @synthesize compressionResistancePolicy=_compressionResistancePolicy;
@property(nonatomic) _Bool allowCopyValueToPasteboard; // @synthesize allowCopyValueToPasteboard=_allowCopyValueToPasteboard;
@property(nonatomic) _Bool valueColorFollowsTintColor; // @synthesize valueColorFollowsTintColor=_valueColorFollowsTintColor;
@property(nonatomic) _Bool titleColorFollowsTintColor; // @synthesize titleColorFollowsTintColor=_titleColorFollowsTintColor;
@property(nonatomic) _Bool hideValue; // @synthesize hideValue=_hideValue;
@property(retain, nonatomic) UIFont *valueFont; // @synthesize valueFont=_valueFont;
@property(retain, nonatomic) NSString *valueText; // @synthesize valueText=_valueText;
@property(nonatomic) _Bool hideTitle; // @synthesize hideTitle=_hideTitle;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)_updateCompressionResistance;
- (void)_updateValue;
- (void)_updateTitle;
- (void)_addValueLabel;
- (void)_addTitleLabel;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)ensureCorrectHeaderViewOrientation;
- (void)updateConstraints;
- (void)setDisabled:(_Bool)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)tintColorDidChange;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

