//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>
#import <UIKitCore/UITextAutoscrolling-Protocol.h>

@class NSArray, NSString, NSTextAlternatives, UIContextMenuInteraction, UIDragRecognizer, UIGestureRecognizer, UITextCursorAssertionController, UITextRange, UITextRangeAdjustmentInteraction, UITextSelection, UITextSelectionView, UITouch, UIView, _UIKeyboardTextSelectionController, _UITextChoiceAccelerationAssistant, _UITextInteractionEditMenuAssistant;
@protocol UIContextMenuInteractionDelegate, UITextInput, _UITextSelectionWidgetAnimating;

@protocol UITextInteraction_AssistantDelegate <UITextAutoscrolling, NSObject>
@property(nonatomic) __weak id <UIContextMenuInteractionDelegate> externalContextMenuInteractionDelegate;
@property(readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property(readonly, nonatomic) UIView *dynamicCaretView;
@property(nonatomic) int glowViewMode;
@property(nonatomic, getter=isCursorBlinkAnimationEnabled) _Bool cursorBlinkAnimationEnabled;
@property(nonatomic, getter=isSelectionDisplayVisible) _Bool selectionDisplayVisible;
@property(readonly, nonatomic) UITextRangeAdjustmentInteraction *rangeAdjustmentInteraction;
@property(readonly, nonatomic) UITextSelection *activeSelection;
@property(nonatomic) int selectionHighlightMode;
@property(readonly, nonatomic) UIView<_UITextSelectionWidgetAnimating> *_caretView;
@property(retain, nonatomic) id keyboardSuppressionAssertion;
@property(retain, nonatomic) id grabberSuppressionAssertion;
@property(readonly, nonatomic) _UITextChoiceAccelerationAssistant *_textChoicesAssistant;
@property(readonly, nonatomic) _UITextInteractionEditMenuAssistant *_editMenuAssistant;
@property(readonly, nonatomic) UITextCursorAssertionController *_assertionController;
@property(readonly, nonatomic) _UIKeyboardTextSelectionController *activeSelectionController;
@property(nonatomic) _Bool expectingCommit;
@property(readonly, nonatomic) _Bool willHandoffLoupeMagnifier;
@property(nonatomic) _Bool needsGestureUpdate;
@property(nonatomic) struct CGPoint loupeGestureEndPoint;
@property(nonatomic) _Bool autoscrolled;
- (void)lollipopGestureWithState:(long long)arg1 location:(struct CGPoint)arg2 locationOfFirstTouch:(struct CGPoint)arg3 forTouchType:(long long)arg4;
- (_Bool)didPerformLoupeSelectionHandoff;
- (id)obtainSelectionGrabberSuppressionAssertion;
- (void)endFloatingCursor;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)willBeginFloatingCursor:(_Bool)arg1;
- (void)resetWillHandoffLoupeMagnifier;
- (NSArray *)updatedTextReplacementsMenuWithMenuElements:(NSArray *)arg1;
- (_Bool)scheduleReplacementsForRange:(UITextRange *)arg1 withOptions:(unsigned long long)arg2;
- (void)scheduleDictationReplacementsForAlternatives:(NSTextAlternatives *)arg1 range:(UITextRange *)arg2;
- (_Bool)isDisplayingMenu;
- (_Bool)isDisplayingMenuForInputUI;
- (void)dismissMenuForInputUI;
- (void)presentMenuForInputUI:(NSString *)arg1;
- (void)setAutomaticSelectionCommandsSuppressedForPointerTouchType:(_Bool)arg1;
- (void)selectWordWithoutShowingCommands;
- (void)updateWithMagnifierTerminalPoint:(_Bool)arg1;
- (void)setGestureRecognizers;
- (void)extendSelectionToLoupeOrSetToPoint:(struct CGPoint)arg1;
- (void)extendSelectionToPoint:(struct CGPoint)arg1;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)notifyKeyboardSelectionChanged;
- (void)setFirstResponderIfNecessaryActivatingSelection:(_Bool)arg1;
- (void)setFirstResponderIfNecessary;
- (void)checkEditabilityAndSetFirstResponderIfNecessary;
- (void)scrollSelectionToVisible;
- (_Bool)hasActiveSelectionInteraction;
- (void)didEndSelectionInteraction;
- (void)willBeginSelectionInteraction;
- (void)clearStashedSelection;
- (void)stashCurrentSelection;
- (void)selectionChanged;
- (void)hideSelectionCommands;
- (void)showSelectionCommands;
- (void)setNeedsSelectionDisplayUpdate;
- (void)updateDisplayedSelection;
- (_Bool)supportsIndirectInteractions;
- (_Bool)viewConformsToAsynchronousInteractionProtocol;
- (_Bool)usesAsynchronousSelectionController;
- (_Bool)didUseStashedSelection;
- (void)canBeginDragCursor:(UIDragRecognizer *)arg1;
- (_Bool)viewCouldBecomeEditable:(id <UITextInput>)arg1;
- (UITextRange *)rangeForTextReplacement:(UITextRange *)arg1;
- (void)setSuppressSystemUI:(_Bool)arg1;
- (UITextSelectionView *)_legacySelectionView;
- (_Bool)useGesturesForEditableContent;
- (_Bool)containerAllowsSelectionTintOnly;
- (_Bool)containerIsTextField;
- (UIView *)view;

@optional
- (_Bool)overrideGestureRecognizer:(UIGestureRecognizer *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (_Bool)overrideGestureRecognizerShouldBegin:(UIGestureRecognizer *)arg1;
@end

