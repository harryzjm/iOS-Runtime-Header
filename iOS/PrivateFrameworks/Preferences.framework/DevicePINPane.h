//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSPINEntryViewDelegate-Protocol.h>
#import <Preferences/UIKeyInput-Protocol.h>
#import <Preferences/UITextInputTraits-Protocol.h>

@class DevicePINKeypadContainerView, NSString, UIKeyboard, UITransitionView, UIView;
@protocol PINEntryView;

@interface DevicePINPane <UIKeyInput, UITextInputTraits, PSPINEntryViewDelegate>
{
    UITransitionView *_transitionView;
    _Bool _transitioning;
    UIView<PINEntryView> *_pinView;
    UIKeyboard *_keypad;
    _Bool _keypadActive;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _keyboardType;
    long long _keyboardAppearance;
    _Bool _playSound;
    _Bool _isBlocked;
    _Bool _simplePIN;
    _Bool _numericKeyboard;
    DevicePINKeypadContainerView *_keypadContainerView;
    unsigned int _PINLength;
    CDUnknownBlockType _passcodeOptionsHandler;
}

@property(retain, nonatomic) UIView<PINEntryView> *pinView; // @synthesize pinView=_pinView;
@property(copy, nonatomic) CDUnknownBlockType passcodeOptionsHandler; // @synthesize passcodeOptionsHandler=_passcodeOptionsHandler;
@property(nonatomic) unsigned int PINLength; // @synthesize PINLength=_PINLength;
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
- (void).cxx_destruct;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
- (void)pinView:(id)arg1 pinEntered:(id)arg2;
- (void)pinView:(id)arg1 pinValueChanged:(id)arg2;
- (void)delayForTextEntryAnimationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
- (void)setText:(id)arg1;
- (id)text;
- (void)clearPassword;
- (id)password;
- (void)transitionViewDidComplete:(id)arg1;
- (void)slideToNewPasscodeField:(_Bool)arg1 requiresKeyboard:(_Bool)arg2 numericOnly:(_Bool)arg3 transition:(int)arg4 showsOptionsButton:(_Bool)arg5;
- (void)slideToNewPasscodeField:(_Bool)arg1 requiresKeyboard:(_Bool)arg2 numericOnly:(_Bool)arg3;
- (void)slideToNewPasscodeField:(_Bool)arg1 withKeyboard:(_Bool)arg2;
- (void)setTitle:(id)arg1;
- (void)hideError;
- (void)okButtonPressed;
- (void)setPINPolicyString:(id)arg1 visible:(_Bool)arg2;
- (void)showError:(id)arg1 error:(id)arg2 isBlocked:(_Bool)arg3 animate:(_Bool)arg4;
- (void)setKeyboardUserInteractionEnabled:(_Bool)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)dismissKeypad;
- (void)_setKeypadState:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)requiresKeyboard;
- (_Bool)simplePIN;
- (void)setSimplePIN:(_Bool)arg1 requiresKeyboard:(_Bool)arg2 numericOnly:(_Bool)arg3 showsOptions:(_Bool)arg4;
- (void)setSimplePIN:(_Bool)arg1 requiresKeyboard:(_Bool)arg2 numericOnly:(_Bool)arg3;
- (void)setSimplePIN:(_Bool)arg1 requiresKeyboard:(_Bool)arg2;
- (void)transitionToSimplePIN:(_Bool)arg1 requiresKeyboard:(_Bool)arg2 numericOnly:(_Bool)arg3 showsOptions:(_Bool)arg4;
- (void)hideFailedAttempts;
- (void)showFailedAttempts:(long long)arg1;
- (void)deactivateKeypadView;
- (void)activateKeypadView;
- (void)setKeyboardIsNumeric:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setPlaysKeyboardClicks:(_Bool)arg1;
- (id)specifierLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

