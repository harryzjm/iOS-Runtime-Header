//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UIIndicatorInputSwitcher
{
    _Bool _showingCapsLockSwitcher;
    id <UITextCursorAssertion> _inputModeSelectorAssertion;
    id <UITextCursorAssertion> _inputModeAssertion;
    NSArray *_availableInputModes;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showingCapsLockSwitcher; // @synthesize showingCapsLockSwitcher=_showingCapsLockSwitcher;
@property(retain, nonatomic) NSArray *availableInputModes; // @synthesize availableInputModes=_availableInputModes;
@property(retain, nonatomic) id <UITextCursorAssertion> inputModeAssertion; // @synthesize inputModeAssertion=_inputModeAssertion;
@property(retain, nonatomic) id <UITextCursorAssertion> inputModeSelectorAssertion; // @synthesize inputModeSelectorAssertion=_inputModeSelectorAssertion;
- (_Bool)switchMode:(id)arg1 withHUD:(_Bool)arg2 withDelay:(_Bool)arg3;
- (void)dismissSwitcherWithDelay:(double)arg1;
- (void)dismissSwitcher:(_Bool)arg1;
- (_Bool)isVisibleOrHiding;
- (_Bool)isVisible;
- (id)previousInputMode;
- (id)nextInputMode;
- (id)defaultInputMode;
- (void)reloadInputModes;
@property(retain, nonatomic) NSString *selectedInputMode;

@end

