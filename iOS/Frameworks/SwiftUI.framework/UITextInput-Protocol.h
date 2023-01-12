//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUI/UIKeyInput-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSString, UIMenu, UITextPlaceholder, UITextPosition, UITextRange, UIView;
@protocol UIEditMenuInteractionAnimating, UITextInputDelegate, UITextInputTokenizer;

@protocol UITextInput <UIKeyInput>
- (UITextRange *)characterRangeAtPoint:(struct CGPoint)arg1;
- (UITextPosition *)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(UITextRange *)arg2;
- (UITextPosition *)closestPositionToPoint:(struct CGPoint)arg1;
- (NSArray *)selectionRectsForRange:(UITextRange *)arg1;
- (struct CGRect)caretRectForPosition:(UITextPosition *)arg1;
- (struct CGRect)firstRectForRange:(UITextRange *)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(UITextRange *)arg2;
- (long long)baseWritingDirectionForPosition:(UITextPosition *)arg1 inDirection:(long long)arg2;
- (UITextRange *)characterRangeByExtendingPosition:(UITextPosition *)arg1 inDirection:(long long)arg2;
- (UITextPosition *)positionWithinRange:(UITextRange *)arg1 farthestInDirection:(long long)arg2;
@property(nonatomic, readonly) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
- (long long)offsetFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (long long)comparePosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 offset:(long long)arg2;
- (UITextRange *)textRangeFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
@property(nonatomic, readonly) UITextPosition *endOfDocument;
@property(nonatomic, readonly) UITextPosition *beginningOfDocument;
- (void)unmarkText;
- (void)setMarkedText:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
@property(nonatomic, copy) NSDictionary *markedTextStyle;
@property(nonatomic, readonly) UITextRange *markedTextRange;
@property(nonatomic, copy) UITextRange *selectedTextRange;
- (void)replaceRange:(UITextRange *)arg1 withText:(NSString *)arg2;
- (NSString *)textInRange:(UITextRange *)arg1;

@optional
- (void)willDismissEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg1;
- (void)willPresentEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg1;
- (UIMenu *)editMenuForTextRange:(UITextRange *)arg1 suggestedActions:(NSArray *)arg2;
- (void)endFloatingCursor;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)removeTextPlaceholder:(UITextPlaceholder *)arg1;
- (UITextPlaceholder *)insertTextPlaceholderWithSize:(struct CGSize)arg1;
- (void)setAttributedMarkedText:(NSAttributedString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)insertText:(NSString *)arg1 alternatives:(NSArray *)arg2 style:(long long)arg3;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
@property(nonatomic, readonly) id insertDictationResultPlaceholder;
- (void)dictationRecognitionFailed;
- (void)dictationRecordingDidEnd;
- (void)insertDictationResult:(NSArray *)arg1;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic, readonly) UIView *textInputView;
- (long long)characterOffsetOfPosition:(UITextPosition *)arg1 withinRange:(UITextRange *)arg2;
- (UITextPosition *)positionWithinRange:(UITextRange *)arg1 atCharacterOffset:(long long)arg2;
- (NSDictionary *)textStylingAtPosition:(UITextPosition *)arg1 inDirection:(long long)arg2;
- (_Bool)shouldChangeTextInRange:(UITextRange *)arg1 replacementText:(NSString *)arg2;
@end

