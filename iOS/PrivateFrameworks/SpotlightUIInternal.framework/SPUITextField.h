//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISearchTextField.h>

#import <SpotlightUIInternal/UIGestureRecognizerDelegate-Protocol.h>
#import <SpotlightUIInternal/UIScribbleInteractionDelegate-Protocol.h>

@class MTMaterialView, NSArray, NSString, NSTimer, SPSearchEntity, SPUICompletionStringModel, SPUICompletionStringView, SPUIHeaderBlurView, UIGestureRecognizer, UIImage, UIResponder, UIScribbleInteraction, UIView;
@protocol SPUITextFieldDelegate, UITextCursorAssertion;

@interface SPUITextField : UISearchTextField <UIGestureRecognizerDelegate, UIScribbleInteractionDelegate>
{
    _Bool _useChunkyMetrics;
    _Bool _ignoreTokensUpdate;
    _Bool _lastUpdateWasDeletion;
    UIResponder *_responderForKeyboardInput;
    SPUICompletionStringModel *_searchFieldModel;
    long long _activeInterfaceOrientation;
    NSArray *_suggestions;
    UIView *_tintView;
    SPUIHeaderBlurView *_blurView;
    MTMaterialView *_materialView;
    SPUICompletionStringView *_hintingView;
    UIGestureRecognizer *_completionTapGestureRecognizer;
    id <UITextCursorAssertion> _caretAssertion;
    UIScribbleInteraction *_scribbleInteraction;
    NSString *_restorationStringOnKBMovement;
    NSTimer *_switchBackToSuggestionsTimer;
    UIImage *_microphoneImage;
}

+ (void)updateBlueButton;
+ (id)removeDictationCharacterInString:(id)arg1;
+ (Class)_backgroundViewClass;
- (void).cxx_destruct;
@property(retain) UIImage *microphoneImage; // @synthesize microphoneImage=_microphoneImage;
@property(retain) NSTimer *switchBackToSuggestionsTimer; // @synthesize switchBackToSuggestionsTimer=_switchBackToSuggestionsTimer;
@property(retain) NSString *restorationStringOnKBMovement; // @synthesize restorationStringOnKBMovement=_restorationStringOnKBMovement;
@property(retain) UIScribbleInteraction *scribbleInteraction; // @synthesize scribbleInteraction=_scribbleInteraction;
@property(retain) id <UITextCursorAssertion> caretAssertion; // @synthesize caretAssertion=_caretAssertion;
@property _Bool lastUpdateWasDeletion; // @synthesize lastUpdateWasDeletion=_lastUpdateWasDeletion;
@property(retain) UIGestureRecognizer *completionTapGestureRecognizer; // @synthesize completionTapGestureRecognizer=_completionTapGestureRecognizer;
@property _Bool ignoreTokensUpdate; // @synthesize ignoreTokensUpdate=_ignoreTokensUpdate;
@property(retain) SPUICompletionStringView *hintingView; // @synthesize hintingView=_hintingView;
@property(retain) MTMaterialView *materialView; // @synthesize materialView=_materialView;
@property(retain, nonatomic) SPUIHeaderBlurView *blurView; // @synthesize blurView=_blurView;
@property(retain) UIView *tintView; // @synthesize tintView=_tintView;
@property(retain) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(nonatomic) long long activeInterfaceOrientation; // @synthesize activeInterfaceOrientation=_activeInterfaceOrientation;
@property(retain, nonatomic) SPUICompletionStringModel *searchFieldModel; // @synthesize searchFieldModel=_searchFieldModel;
@property(nonatomic) _Bool useChunkyMetrics; // @synthesize useChunkyMetrics=_useChunkyMetrics;
@property(nonatomic) __weak UIResponder *responderForKeyboardInput; // @synthesize responderForKeyboardInput=_responderForKeyboardInput;
@property(readonly) _Bool completionResultIsPotentiallyPunchout;
- (void)updateCaretVisibility;
- (void)resetMicrophoneButtonWithScale:(long long)arg1;
- (void)updateFocusResult:(id)arg1 cardSection:(id)arg2 focusIsOnFirstResult:(_Bool)arg3;
- (void)scribbleInteractionWillBeginWriting:(id)arg1;
- (void)layoutSubviews;
- (void)removeCaretAssertion;
- (void)_promoteCompletionAndMoveForward:(_Bool)arg1;
- (void)promoteCompletionIfPossibleAndMoveForward:(_Bool)arg1;
- (void)rightArrowPressed;
- (void)leftArrowPressed;
- (void)updateCaretVisibility:(_Bool)arg1;
- (void)escapeKeyCommand;
- (void)commandCPressed;
- (void)commandBPressed;
- (void)enterKeyPressed;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)toggleBackToCommittedSearch;
- (void)commitToCommitedSearch;
- (void)toggleCommitedSearch;
- (id)keyCommands;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)updateWithPrimaryColor:(id)arg1 secondaryColor:(id)arg2 isOnDarkBackground:(_Bool)arg3;
@property(readonly) SPSearchEntity *searchEntity;
- (_Bool)hasContent;
- (void)updateRightView;
- (void)updateTextRange:(id)arg1;
- (void)updateToken:(id)arg1;
- (void)clearAllTokens;
@property(readonly, nonatomic) NSString *textIncludingTokens;
@property(readonly, nonatomic) _Bool needsLandscapeHeight;
- (double)widthOfPlaceholderLabel;
- (struct CGRect)rectForMagnifierForOriginalRect:(struct CGRect)arg1 bounds:(struct CGRect)arg2 isLeftSide:(_Bool)arg3;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_shiftedBoundsForText:(struct CGRect)arg1;
- (_Bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (double)textFieldHeight;
- (void)resetClearButtonWithScale:(long long)arg1;
- (void)applyMetrics;
- (void)resetPhoneClearButton;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setTextColor:(id)arg1;
- (void)tintColorDidChange;
- (_Bool)shouldPromoteCompletion;
- (void)selectAll:(id)arg1;
- (void)removeCompletionAndHighlight;
- (_Bool)resignFirstResponder;
- (void)insertText:(id)arg1;
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;
- (_Bool)keyboardInputShouldDelete:(id)arg1;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)nextResponder;
- (id)currentQueryContext;
@property(readonly, nonatomic) _Bool optOutOfGoButton;
- (void)setFont:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SPUITextFieldDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
