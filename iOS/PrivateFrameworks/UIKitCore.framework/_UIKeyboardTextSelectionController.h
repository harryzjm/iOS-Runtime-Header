//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIResponder, UITextInteractionAssistant, UITextPosition, UITextRange, UITextSelection, UIView;
@protocol UISelectionInteractionAssistant, UITextInput;

__attribute__((visibility("hidden")))
@interface _UIKeyboardTextSelectionController : NSObject
{
    _Bool _hasInteractionAssistant;
    _Bool _hasSelectionInteractionAssistant;
    _Bool _hasTextInputView;
    UITextPosition *_cursorPosition;
    UITextSelection *_selection;
    UITextRange *_initialSelection;
    long long _selectionGranularity;
    UITextRange *_selectionBase;
    UIResponder<UITextInput> *_inputDelegate;
    struct CGRect _caretRectForCursorPosition;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIResponder<UITextInput> *inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property(retain, nonatomic) UITextRange *selectionBase; // @synthesize selectionBase=_selectionBase;
@property(nonatomic) long long selectionGranularity; // @synthesize selectionGranularity=_selectionGranularity;
@property(nonatomic) struct CGRect caretRectForCursorPosition; // @synthesize caretRectForCursorPosition=_caretRectForCursorPosition;
@property(retain, nonatomic) UITextRange *initialSelection; // @synthesize initialSelection=_initialSelection;
- (void)endSelection;
- (void)modifySelectionWithExtentPoint:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;
- (void)updateImmediateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 andExtentPosition:(id)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentPosition:(id)arg1 executionContext:(id)arg2;
- (void)beginSelectionWithBasePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 withInitialExtentPoint:(struct CGPoint)arg3 executionContext:(id)arg4;
- (void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(struct CGPoint)arg2 executionContext:(id)arg3;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 executionContext:(id)arg3;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;
- (void)selectImmediatePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)selectPositionAtPoint:(struct CGPoint)arg1 granularity:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)selectPositionAtPoint:(struct CGPoint)arg1 granularity:(long long)arg2 executionContext:(id)arg3;
- (void)selectPositionAtPoint:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)restartSelection;
- (void)beginSelection;
- (struct CGPoint)boundedDeltaForTranslation:(struct CGPoint)arg1 cursorLocationBase:(struct CGPoint)arg2;
- (void)endLoupeGestureAtPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (void)updateLoupeGestureAtPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (_Bool)beginLoupeGestureAtPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (void)endRangedMagnifierAtPoint:(struct CGPoint)arg1;
- (void)updateRangedMagnifierAtPoint:(struct CGPoint)arg1;
- (void)beginRangedMagnifierAtPoint:(struct CGPoint)arg1;
- (void)endLoupeMagnifierAtPoint:(struct CGPoint)arg1;
- (void)updateLoupeMagnifierAtPoint:(struct CGPoint)arg1;
- (void)beginLoupeMagnifierAtPoint:(struct CGPoint)arg1;
- (void)endFloatingCursor;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)willBeginFloatingCursor:(_Bool)arg1;
- (void)willBeginHighlighterGesture;
- (void)scrollSelectionToVisible;
- (void)updateGestureRecognizers;
- (void)willHandoffLoupeMagnifier;
- (void)setRangedSelectionShouldShowGrabbers:(_Bool)arg1;
- (void)switchToRangedSelection;
- (void)updateSelectionRects;
- (void)showSelectionCommands;
- (void)textDidChange;
- (void)selectionDidChange;
@property(readonly, nonatomic) struct CGRect caretRectForRightmostSelectedPosition;
@property(readonly, nonatomic) struct CGRect caretRectForLeftmostSelectedPosition;
@property(readonly, nonatomic) struct CGRect caretRectForLastSelectedPosition;
@property(readonly, nonatomic) struct CGRect caretRectForFirstSelectedPosition;
@property(readonly, nonatomic) _Bool hasRangedSelection;
@property(readonly, nonatomic) _Bool hasCaretSelection;
@property(readonly, nonatomic) UIView *textInputView;
- (struct CGRect)selectedRectInLineWithPoint:(struct CGPoint)arg1;
- (_Bool)cursorPositionIsContainedByRange:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)resetCursorPosition;
@property(retain, nonatomic) UITextPosition *cursorPosition;
@property(readonly, nonatomic) UITextSelection *selection;
- (void)endSelectionChange;
- (void)beginSelectionChange;
@property(readonly, nonatomic) id <UISelectionInteractionAssistant> selectionInteractionAssistant;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (id)initWithInputDelegate:(id)arg1;

@end

