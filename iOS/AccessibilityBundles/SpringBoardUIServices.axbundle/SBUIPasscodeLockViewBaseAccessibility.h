//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBUIPasscodeLockViewBaseAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_setPasscodeLockViewState:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)becomeFirstResponder;
- (void)_updateStatusTextForBioEvent:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)_accessibilityEntryFieldIsFirstResponder;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2;
- (void)_resetForFailedPasscode:(_Bool)arg1;
- (_Bool)_accessibilityHandwritingActivateKeyboardReturnKey;
- (void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2;
- (_Bool)_accessibilityHandwritingAttributeAcceptsRawInput;
- (_Bool)_accessibilityHandwritingAttributeShouldPlayKeyboardSecureClickSound;
- (_Bool)_accessibilityHandwritingAttributeShouldEchoCharacter;
- (_Bool)_accessibilityHandwritingAttributeCanDeleteCharacter;
- (int)_accessibilityHandwritingAttributeAllowedCharacterSets;
- (int)_accessibilityHandwritingAttributePreferredCharacterSet;
- (_Bool)_accessibilitySupportsHandwriting;

@end

