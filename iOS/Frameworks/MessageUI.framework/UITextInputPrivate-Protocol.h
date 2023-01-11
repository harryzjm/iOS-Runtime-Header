//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageUI/UITextInput-Protocol.h>
#import <MessageUI/UITextInputTokenizer-Protocol.h>
#import <MessageUI/UITextInputTraits_Private-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSString, RTIInputSystemSourceSession, UIColor, UIDictationSerializableResults, UIFont, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UITextSuggestion, UIView, WebEvent;
@protocol UISelectionInteractionAssistant, UITextInputSuggestionDelegate;

@protocol UITextInputPrivate <UITextInput, UITextInputTokenizer, UITextInputTraits_Private>
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (_Bool)hasSelection;
- (void)selectAll;
- (_Bool)hasContent;
- (struct _NSRange)selectionRange;
- (UITextInputTraits *)textInputTraits;

@optional
@property(readonly, nonatomic) RTIInputSystemSourceSession *_rtiSourceSession;
@property(nonatomic) long long _textInputSource;
@property(readonly, nonatomic) id <UITextInputSuggestionDelegate> textInputSuggestionDelegate;
@property(nonatomic) long long selectionGranularity;
- (SEL)_sendCurrentLocationAction;
- (_Bool)_shouldSuppressSelectionCommands;
- (void)_didHideCorrections;
- (void)_willShowCorrections;
- (void)_insertAttributedTextWithoutClosingTyping:(NSAttributedString *)arg1;
- (UIFont *)fontForCaretSelection;
- (UIColor *)textColorForCaretSelection;
- (void)replaceRangeWithTextWithoutClosingTyping:(UITextRange *)arg1 replacementText:(NSString *)arg2;
- (_Bool)_shouldRepeatInsertText:(NSString *)arg1;
- (double)_delayUntilRepeatInsertText:(NSString *)arg1;
- (NSDictionary *)_autofillContext;
- (_Bool)isAutoFillMode;
- (void)acceptedAutoFillWord:(NSString *)arg1;
- (void)insertTextSuggestion:(UITextSuggestion *)arg1;
- (UITextRange *)rangeWithTextAlternatives:(id *)arg1 atPosition:(UITextPosition *)arg2;
- (NSArray *)metadataDictionariesForDictationResults;
- (void)insertDictationResult:(UIDictationSerializableResults *)arg1 withCorrectionIdentifier:(id)arg2;
- (void)streamingDictationDidEnd;
- (void)streamingDictationDidBegin;
- (struct CGRect)visibleRect;
- (UIView *)selectionContainerView;
- (UIView *)automaticallySelectedOverlay;
- (void)setBottomBufferHeight:(double)arg1;
- (id <UISelectionInteractionAssistant>)selectionInteractionAssistant;
- (void)handleKeyWebEvent:(WebEvent *)arg1 withCompletionHandler:(void (^)(WebEvent *, _Bool))arg2;
- (void)handleKeyWebEvent:(WebEvent *)arg1;
- (_Bool)requiresKeyEvents;
- (void)setAttributedMarkedText:(NSAttributedString *)arg1 selectedRange:(struct _NSRange)arg2;
- (NSAttributedString *)attributedTextInRange:(UITextRange *)arg1;
- (void)insertAttributedText:(NSAttributedString *)arg1;
@end

