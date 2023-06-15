//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSAttributedString, NSIndexSet, NSNumberFormatter, NSString, UIColor, UIFont, UIImage, UIIndirectScribbleInteraction, UIInputContextHistory, UITextField, UITextInputPasswordRules, UITextRange, _UIDatePickerCalendarTimeFormat, _UIDatePickerCalendarTimeLabelStateMachineContext, _UIDatePickerCalendarTimeValueStore, _UISupplementalLexicon;
@protocol _UIDatePickerCalendarTimeLabelDelegate;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarTimeLabel : UIView
{
    UIIndirectScribbleInteraction *_scribbleInteraction;
    UITextField *_hiddenField;
    UIView *_inputView;
    struct CGSize _lastSize;
    _Bool _roundsToMinuteInterval;
    _Bool _allowsTextInput;
    _UIDatePickerCalendarTimeFormat *_timeFormat;
    id <_UIDatePickerCalendarTimeLabelDelegate> _delegate;
    _UIDatePickerCalendarTimeValueStore *_inputValue;
    unsigned long long _insertedDigitCount;
    _UIDatePickerCalendarTimeLabelStateMachineContext *_stateContext;
    long long _inputScope;
    NSNumberFormatter *_inputFormatter;
    struct CGRect _timeOfDayRect;
}

+ (_Bool)supportsScribbleInteraction;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect timeOfDayRect; // @synthesize timeOfDayRect=_timeOfDayRect;
@property(retain, nonatomic) NSNumberFormatter *inputFormatter; // @synthesize inputFormatter=_inputFormatter;
@property(readonly, nonatomic) long long inputScope; // @synthesize inputScope=_inputScope;
@property(readonly, nonatomic) _UIDatePickerCalendarTimeLabelStateMachineContext *stateContext; // @synthesize stateContext=_stateContext;
@property(nonatomic) unsigned long long insertedDigitCount; // @synthesize insertedDigitCount=_insertedDigitCount;
@property(nonatomic) _Bool allowsTextInput; // @synthesize allowsTextInput=_allowsTextInput;
@property(readonly, nonatomic) _UIDatePickerCalendarTimeValueStore *inputValue; // @synthesize inputValue=_inputValue;
@property(nonatomic) __weak id <_UIDatePickerCalendarTimeLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool roundsToMinuteInterval; // @synthesize roundsToMinuteInterval=_roundsToMinuteInterval;
@property(retain, nonatomic) _UIDatePickerCalendarTimeFormat *timeFormat; // @synthesize timeFormat=_timeFormat;
- (_Bool)_canChangeFirstResponder:(id)arg1 toResponder:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;
- (_Bool)indirectScribbleInteraction:(id)arg1 shouldDelayFocusForElement:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 focusElementIfNeeded:(id)arg2 referencePoint:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGRect)indirectScribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (_Bool)indirectScribbleInteraction:(id)arg1 isElementFocused:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)willBeginWritingInScribbleInteraction;
@property(readonly, nonatomic) _Bool scribbleInteractionIsActive;
@property(nonatomic) _Bool isSingleLineDocument;
- (void)takeTraitsFrom:(id)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
- (id)inputView;
- (_Bool)_suppressSoftwareKeyboard;
@property(nonatomic) long long keyboardType;
- (void)didReceiveLeftArrowKey:(id)arg1;
- (void)didReceiveRightArrowKey:(id)arg1;
- (void)didReceiveDownArrowKey:(id)arg1;
- (void)didReceiveUpArrowKey:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)keyCommands;
- (_Bool)displaysTimeOfDayLabel;
- (void)_resetTextInput;
- (void)pushCurrentStateIntoUIAndNotify;
- (void)pushCurrentStateIntoUI;
@property(readonly, nonatomic) NSString *timeOfDayText;
@property(copy, nonatomic) NSString *minuteText;
@property(copy, nonatomic) NSString *hourText;
- (_Bool)_treatMinutesAsHoursForState:(unsigned long long)arg1;
- (_Bool)_digits:(unsigned long long *)arg1 fromText:(id)arg2 count:(long long *)arg3;
- (void)endEditingWheels;
- (void)wheelChanged;
- (void)beginEditingWheels;
- (void)_roundInputToClosestIntervalIfNeeded;
- (void)stateMachineUpdateFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)_stateMachineSendEvent:(unsigned long long)arg1;
- (_Bool)processTapOutside;
- (void)setInputScope:(long long)arg1;
@property(readonly, nonatomic) long long decrementBehaviour;
@property(nonatomic) long long minuteInterval;
@property(readonly, nonatomic) NSAttributedString *attributedText;
- (id)attributedTextWithRanges:(CDStruct_a33ff3ce *)arg1;
- (void)applyTextAttributesForState:(unsigned long long)arg1 inputScope:(long long)arg2 updater:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSString *text;
@property(copy, nonatomic) UIFont *font;
- (void)didTapInputLabel:(id)arg1;
- (_Bool)_pointIsInsideHourSide:(struct CGPoint)arg1;
- (void)tintColorDidChange;
@property(readonly, nonatomic) struct CGRect minuteRect;
@property(readonly, nonatomic) struct CGRect hourRect;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)_uiTest_resignFirstResponder;
- (void)_uiTest_becomeFirstResponder;
- (long long)editingInteractionConfiguration;
- (_Bool)canBecomeFirstResponder;
- (id)focusGroupIdentifier;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (id)initWithTimeFormat:(id)arg1 minuteInterval:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property(nonatomic) _Bool acceptsDictationSearchResults;
@property(nonatomic) _Bool acceptsEmoji;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool acceptsInitialEmojiKeyboard;
@property(nonatomic) _Bool acceptsPayloads;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) _Bool contentsIsSingleValue;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isDevicePasscodeEntry) _Bool devicePasscodeEntry;
@property(nonatomic) _Bool disableHandwritingKeyboard;
@property(nonatomic) _Bool disableInputBars;
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) _Bool displaySecureEditsUsingPlainText;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) struct UIEdgeInsets floatingKeyboardEdgeInsets;
@property(nonatomic) _Bool forceDefaultDictationInfo;
@property(nonatomic) long long forceDictationKeyboardType;
@property(nonatomic) _Bool forceDisableDictation;
@property(nonatomic) _Bool forceEnableDictation;
@property(nonatomic) _Bool forceFloatingKeyboard;
@property(nonatomic) _Bool forceSpellingDictation;
@property(nonatomic) _Bool hasDefaultContents;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hidePrediction;
@property(nonatomic) long long inlineCompletionType;
@property(nonatomic) long long inlinePredictionType;
@property(retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(nonatomic) _Bool isCarPlayIdiom;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) _Bool learnsCorrections;
@property(nonatomic) _Bool loadKeyboardsForSiriLanguage;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) _Bool preferOnlineDictation;
@property(nonatomic) long long preferredKeyboardStyle;
@property(copy, nonatomic) NSString *recentInputIdentifier;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIColor *selectionBorderColor;
@property(nonatomic) double selectionBorderWidth;
@property(nonatomic) double selectionCornerRadius;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(nonatomic) struct UIEdgeInsets selectionEdgeInsets;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) _Bool showDictationButton;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(retain, nonatomic) _UISupplementalLexicon *supplementalLexicon;
@property(retain, nonatomic) UIImage *supplementalLexiconAmbiguousItemIcon;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(copy, nonatomic) NSString *textContentType;
@property(nonatomic) int textLoupeVisibility;
@property(readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property(nonatomic) long long textScriptType;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(retain, nonatomic) UIColor *underlineColorForSpelling;
@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property(nonatomic) _Bool useAutomaticEndpointing;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;
@property(nonatomic) struct _NSRange validTextRange;

@end

