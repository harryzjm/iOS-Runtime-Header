//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIResponder, UITextInputPasswordRules, UITextInputTraits, UITextInteractionAssistant, UITextInteractionSelectableInputDelegate;
@protocol UIKeyInput, UIKeyboardImplStateProtocol, UIKeyboardInput;

__attribute__((visibility("hidden")))
@interface UIKBInputDelegateManager : NSObject
{
    unsigned long long m_delegateConformanceType;
    unsigned long long m_originalDelegateConformanceType;
    _Bool _forwardingInputDelegateConformsToWKInteraction;
    _Bool m_firstResponderAdoptsTextInput;
    _Bool _shouldRespectForwardingInputDelegate;
    _Bool _insideKeyInputDelegateCall;
    id <UIKeyboardImplStateProtocol> _keyboardStateDelegate;
    UIResponder<UIKeyInput> *_keyInputDelegate;
    UITextInteractionSelectableInputDelegate *_selectableDelegate;
    UIResponder<UIKeyInput> *_forwardingInputDelegate;
}

+ (struct _NSRange)rangeForTextRange:(id)arg1 document:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool insideKeyInputDelegateCall; // @synthesize insideKeyInputDelegateCall=_insideKeyInputDelegateCall;
@property(nonatomic) _Bool shouldRespectForwardingInputDelegate; // @synthesize shouldRespectForwardingInputDelegate=_shouldRespectForwardingInputDelegate;
@property(nonatomic) __weak UIResponder<UIKeyInput> *forwardingInputDelegate; // @synthesize forwardingInputDelegate=_forwardingInputDelegate;
@property(retain, nonatomic) UITextInteractionSelectableInputDelegate *selectableDelegate; // @synthesize selectableDelegate=_selectableDelegate;
@property(retain, nonatomic) UIResponder<UIKeyInput> *keyInputDelegate; // @synthesize keyInputDelegate=_keyInputDelegate;
@property(nonatomic) __weak id <UIKeyboardImplStateProtocol> keyboardStateDelegate; // @synthesize keyboardStateDelegate=_keyboardStateDelegate;
- (_Bool)selectionIsWord;
- (void)moveSelectionToEndOfWord;
- (void)collapseSelectionAndAdjustByOffset:(long long)arg1;
- (_Bool)selectionIsEndOfWord;
- (void)changedSelection;
- (_Bool)shouldDeleteForward;
- (_Bool)callShouldDeleteBackwardWithCount:(unsigned long long)arg1;
- (_Bool)callShouldReplaceExtendedRange:(long long)arg1 withText:(id)arg2 includeMarkedText:(_Bool)arg3;
- (void)handleClearWithInsertBeforeAdvance:(id)arg1;
- (void)unmarkText:(id)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (void)insertText:(id)arg1 updateInputSource:(_Bool)arg2;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (_Bool)shouldSuppressUpdateCandidateView;
- (void)applyAutocorrection:(id)arg1 toString:(id)arg2 shouldUnderline:(_Bool)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)applyAutocorrection:(id)arg1 toString:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_setSelectionToPosition:(id)arg1;
- (id)_textRangeFromNSRange:(struct _NSRange)arg1;
- (unsigned int)_characterBeforeCaretSelection;
- (id)__content;
- (_Bool)_deleteForwardAndNotify:(_Bool)arg1;
- (void)_deleteBackwardWhileOverridingContextAndNotifyAtEnd:(_Bool)arg1 deletionCount:(unsigned long long)arg2 reinsertTextInLoop:(_Bool)arg3;
- (void)_deleteBackwardAndNotify:(_Bool)arg1 reinsertText:(_Bool)arg2;
- (void)_deleteBackwardAndNotify:(_Bool)arg1 reinsertText:(_Bool)arg2 overrideOriginalContextBeforeInputWith:(id)arg3;
- (void)_moveCurrentSelection:(int)arg1;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (_Bool)_hasMarkedText;
- (void)handleKeyWebEvent:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)handleKeyWebEvent:(id)arg1;
- (_Bool)requiresKeyEvents;
- (void)insertDictationResult:(id)arg1;
- (void)insertAttributedText:(id)arg1;
- (_Bool)insertTextSuggestion:(id)arg1;
- (_Bool)insertSupplementalItem:(id)arg1 candidate:(id)arg2 replacementRange:(id)arg3;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)endOfDocument;
- (id)beginningOfDocument;
- (id)tintColor;
- (id)attributedMarkedText;
- (id)markedText;
- (void)unmarkText;
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setSelectedTextRange:(id)arg1;
- (id)selectedTextRange;
- (id)markedTextRange;
- (void)replaceRange:(id)arg1 oldText:(id)arg2 withText:(id)arg3 forReplaceAction:(int)arg4;
- (void)correctedTypedText:(id)arg1 rangeOfReplacement:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textInRange:(id)arg1;
- (void)insertText:(id)arg1 alternatives:(id)arg2 style:(long long)arg3;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
@property(nonatomic) _Bool continuousSpellCheckingEnabled;
@property(readonly, nonatomic) UITextInputTraits *textInputTraits;
- (void)updateSelectableInputDelegateIfNecessary;
- (void)_firstResponderDidChange:(id)arg1;
- (id)inputSystemSourceSession;
@property(readonly, nonatomic) UITextInteractionAssistant *textInteractionAssistant;
@property(readonly, nonatomic) id <UIKeyboardInput> legacyInputDelegate;
- (id)delegateAsResponder;
- (id)privateKeyInputDelegate;
- (id)asynchronousInputDelegate;
- (id)textInputDelegate;
- (id)privateInputDelegate;
- (id)delegateRespectingForwardingDelegate:(_Bool)arg1;
- (_Bool)delegateAdoptsWebTextInputPrivate;
- (void)storeDelegateConformance;
- (void)updateDelegateConformanceForRemoteTraits;
@property(readonly, nonatomic) unsigned long long delegateConformanceType;
- (void)updateRespectForwardingInputDelegateFlagInDestination;
- (void)clearForwardingInputDelegateAndResign:(_Bool)arg1;
- (void)clearDelegate;
- (void)setDelegate:(id)arg1;
- (void)setupResponderChangeListeners;
- (id)init;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long inlinePredictionType;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

