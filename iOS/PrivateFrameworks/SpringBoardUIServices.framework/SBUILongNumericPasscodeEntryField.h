//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBUIButton, UIButton, UILabel, UIView;

@interface SBUILongNumericPasscodeEntryField
{
    SBUIButton *_okButton;
    _Bool _showsOkButton;
    UILabel *_promptLabel;
    _Bool _showsPromptLabel;
    _Bool _firstResponder;
    UIView *_springView;
    UIView *_springViewParent;
}

+ (_Bool)_usesTextFieldForFirstResponder;
+ (_Bool)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;
@property(nonatomic) _Bool showsPromptLabel; // @synthesize showsPromptLabel=_showsPromptLabel;
@property(readonly, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(nonatomic) _Bool showsOkButton; // @synthesize showsOkButton=_showsOkButton;
@property(readonly, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
- (void).cxx_destruct;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)_resetForFailedPasscode:(_Bool)arg1;
- (void)_autofillForBiometricAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGSize)_viewSize;
- (void)_getPasscodeFieldSize:(struct CGSize *)arg1 okButtonSize:(struct CGSize *)arg2;
- (void)_okButtonHit;
- (void)_handleKeyUIEvent:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)initWithDefaultSizeAndLightStyle:(_Bool)arg1;

@end

