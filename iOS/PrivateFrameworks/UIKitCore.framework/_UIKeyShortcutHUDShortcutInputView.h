//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIColor, UILabel, UIStackView, UIView, _UIKeyShortcutHUDShortcut;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDShortcutInputView
{
    _Bool _wantsCompressedWidth;
    _Bool _inputStyledAsSingleCharacterOrSymbol;
    _UIKeyShortcutHUDShortcut *_shortcut;
    UILabel *_modifiersLabel;
    UILabel *_inputLabel;
    UIView *_inputLabelContainer;
    UIStackView *_labelStackView;
    NSLayoutConstraint *_reservedInputWidthConstraint;
    NSLayoutConstraint *_reservedInputWidthSpacingConstraint;
    NSLayoutConstraint *_modifiersLabelWidthConstraint;
    NSLayoutConstraint *_inputLabelWidthConstraint;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isInputStyledAsSingleCharacterOrSymbol) _Bool inputStyledAsSingleCharacterOrSymbol; // @synthesize inputStyledAsSingleCharacterOrSymbol=_inputStyledAsSingleCharacterOrSymbol;
@property(retain, nonatomic) NSLayoutConstraint *inputLabelWidthConstraint; // @synthesize inputLabelWidthConstraint=_inputLabelWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *modifiersLabelWidthConstraint; // @synthesize modifiersLabelWidthConstraint=_modifiersLabelWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *reservedInputWidthSpacingConstraint; // @synthesize reservedInputWidthSpacingConstraint=_reservedInputWidthSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *reservedInputWidthConstraint; // @synthesize reservedInputWidthConstraint=_reservedInputWidthConstraint;
@property(retain, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(retain, nonatomic) UIView *inputLabelContainer; // @synthesize inputLabelContainer=_inputLabelContainer;
@property(retain, nonatomic) UILabel *inputLabel; // @synthesize inputLabel=_inputLabel;
@property(retain, nonatomic) UILabel *modifiersLabel; // @synthesize modifiersLabel=_modifiersLabel;
@property(nonatomic) _Bool wantsCompressedWidth; // @synthesize wantsCompressedWidth=_wantsCompressedWidth;
@property(nonatomic) __weak _UIKeyShortcutHUDShortcut *shortcut; // @synthesize shortcut=_shortcut;
- (void)_updateInputLabelSpacing:(id)arg1;
- (void)_updateInputLabelStyle:(id)arg1;
- (void)setModifiersWidth:(double)arg1 inputWidth:(double)arg2;
@property(readonly, nonatomic) double inputLabelWidth;
@property(readonly, nonatomic) double modifiersLabelWidth;
@property(nonatomic) __weak UIColor *textColor;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
