//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UIColor;
@protocol AFUITargetDetectionController_Staging;

__attribute__((visibility("hidden")))
@interface UIKBAutofillController : NSObject
{
    id <AFUITargetDetectionController_Staging> _targetDetectionController;
    long long _delegateNeedsAutofillMode;
    _Bool _shouldSaveAutofill;
    NSMutableDictionary *_autofillGroup;
    NSMutableDictionary *_fallbackAutofillGroup;
    _Bool _didOptOutOfAutofillSignup;
    UIColor *_textFieldOrigColor;
}

+ (long long)translateToUIAutofillMode:(unsigned long long)arg1;
+ (unsigned long long)translateToTextInputAutofillMode:(long long)arg1;
+ (id)preferredInsertionOrder;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldSaveAutofill; // @synthesize shouldSaveAutofill=_shouldSaveAutofill;
@property(copy, nonatomic) UIColor *textFieldOrigColor; // @synthesize textFieldOrigColor=_textFieldOrigColor;
- (void)removeTemporaryTextColorFromTextField:(id)arg1;
- (void)addTemporaryTextColorToTextField:(id)arg1;
- (void)enumeratePasswordFieldsUsingBlock:(CDUnknownBlockType)arg1;
- (void)optOutASPInTextField;
- (void)clearASPInPasswordFields;
- (void)_clearASPInTextField:(id)arg1;
- (void)clearASPVisualEffectsInTextField:(id)arg1;
- (void)showASPInTextField:(id)arg1 isRightToLeft:(_Bool)arg2;
- (void)didOptOutOfAutofillSignup;
- (_Bool)shouldLoadASPForResponder:(id)arg1;
- (void)trackResponderForAutofillIfNeeded:(id)arg1;
- (void)handleWebviewCredentialsSaveForResponder:(id)arg1 WebsiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 passwordIsAutoGenerated:(_Bool)arg5;
- (void)handleAutofillCredentialSaveIfNeeded:(id)arg1 fromASP:(_Bool)arg2;
- (_Bool)preferFallbackAutofillGroup;
- (_Bool)containsUsernamePasswordPairsInAutofillGroup:(id)arg1;
- (void)clearFallbackAutofillGroup;
- (void)clearAutofillGroup;
- (long long)_needAutofillCandidate:(id)arg1 delegateAsResponder:(id)arg2;
- (_Bool)signupHintForUsername:(id)arg1 password:(id)arg2 responder:(id)arg3;
- (long long)contactAutofillModeWithAutofillGroup:(id)arg1 responders:(id)arg2;
- (long long)signUpSignalFromNavBarItem:(id)arg1;
- (long long)signUpSignalFromViewControllerHierarchy:(id)arg1;
- (long long)signUpSignalFromButton:(id)arg1;
- (long long)containsIndicationInText:(id)arg1 withAccessibilityHints:(_Bool)arg2;
- (id)textSignalsForResponder:(id)arg1;
- (id)processLocalizedString:(id)arg1;
- (id)emailKeywordSet;
- (id)phoneKeywordSet;
- (id)addressKeywordSet;
- (id)searchKeywordSet;
- (id)contactAutoFillKeywordsForKey:(id)arg1 value:(id)arg2 localizedKeywords:(id)arg3;
- (id)accessibilityLoginKeywordList;
- (id)accessibilitySignupKeywordList;
- (id)loginKeywordList;
- (id)signupKeywordList;
- (_Bool)_prohibitAutofill:(id)arg1 needASPKeyboard:(_Bool)arg2;
- (long long)needAutofillCandidate:(id)arg1 delegateAsResponder:(id)arg2 keyboardState:(id)arg3;
- (void)updateAutofillContextForInputDelegate:(id)arg1;
- (id)autofillContextForInputDelegate:(id)arg1;
- (id)textContentTypeForInputDelegate:(id)arg1;
- (long long)doTraits:(id)arg1 matchTextContentType:(id)arg2;
@property(copy, nonatomic) NSMutableDictionary *fallbackAutofillGroup;
@property(readonly, retain, nonatomic) NSMutableDictionary *autofillGroup;
@property(nonatomic) long long delegateNeedsAutofillMode;
- (id)init;
- (void)_setAutofillGroup:(id)arg1;

@end

