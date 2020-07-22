//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityElement.h>

@class UITextField;

@interface UIAccessibilityTextFieldElement : UIAccessibilityElement
{
    UITextField *_textField;
}

@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityDragSourceDescriptors;
- (id)_accessibilityHandwritingAttributes;
- (void)_accessibilitySetValue:(id)arg1;
- (id)_accessibilitySpeakThisString;
- (void)_accessibilitySetIsSpeakThisElement:(_Bool)arg1;
- (_Bool)_accessibilityIsSpeakThisElement;
- (_Bool)_accessibilityIsScannerElement;
- (struct CGRect)accessibilityFrame;
- (_Bool)_accessibilityHasTextOperations;
- (void)_accessibilitySelectAll;
- (_Bool)_accessibilityOverridesInstructionsHint;
- (void)_accessibilityDelete;
- (void)_accessibilityReplace;
- (void)_accessibilityPaste;
- (void)_accessibilitySelect;
- (void)_accessibilityCut;
- (void)_accessibilityCopy;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (unsigned long long)accessibilityTraits;
- (_Bool)accessibilityPerformMagicTap;
- (_Bool)accessibilityPerformEscape;
- (id)accessibilityLanguage;
- (id)_accessibilityAXAttributedHint;
- (id)_accessibilityAXAttributedLabel;
- (_Bool)_accessibilityServesAsFirstElement;
- (struct CGPoint)accessibilityActivationPoint;
- (_Bool)accessibilityElementsHidden;
- (id)accessibilityPlaceholderValue;
- (id)_accessibilityAXAttributedValue;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (_Bool)_accessibilityViewIsVisible;
- (void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2;
- (id)_accessibilityUserTestingParent;

@end

