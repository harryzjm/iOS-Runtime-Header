//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/TSDCanvasEditor-Protocol.h>

@class NSSet, NSString, TSDCanvasEditorHelper, TSDCanvasSelection, TSDInteractiveCanvasController, TSKSelection, TSPObject, UIView;
@protocol TSDArrangeInspectorDelegate, TSDCanvasSelection, TSDInlineFloatingWrapInspectorDelegate, TSDTextSelection;

@interface TSDCanvasEditor : NSObject <TSDCanvasEditor>
{
    TSDInteractiveCanvasController *mInteractiveCanvasController;
    TSDCanvasEditorHelper *mCanvasEditorHelper;
    TSDCanvasSelection *mSelection;
    NSObject<TSDArrangeInspectorDelegate> *mZOrderArranger;
    NSObject<TSDInlineFloatingWrapInspectorDelegate> *mInlineFloatingEditor;
    _Bool mPreventImageDataReplace;
    UIView *mInputView;
}

+ (CDUnknownBlockType)spatialInfoComparator;
+ (_Bool)physicalKeyboardIsSender:(id)arg1;
+ (Class)canvasEditorHelperClass;
+ (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
+ (id)canvasSelectionWithInfos:(id)arg1;
- (void)p_notifyRepsForSelectionChangeFrom:(id)arg1 to:(id)arg2;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (id)p_spatiallySortedDrawables;
- (id)p_nextInfoInTabSequence:(int)arg1;
- (void)connectWithConnectionLine:(id)arg1;
- (_Bool)canGroupDrawable:(id)arg1;
- (void)selectAll:(id)arg1;
@property(readonly, nonatomic) NSSet *infosForSelectAllInRoot;
- (void)select:(id)arg1;
- (void)copy:(id)arg1;
- (void)copyToPasteboard:(id)arg1 withSender:(id)arg2;
- (_Bool)canAddOrShowComment;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canvasEditorCanUngroupWithSender:(id)arg1;
- (_Bool)canUngroupWithSender:(id)arg1;
- (_Bool)canvasEditorCanGroupWithSender:(id)arg1;
- (_Bool)canGroupWithSender:(id)arg1;
- (_Bool)canvasEditorCanSelectAllWithSender:(id)arg1;
- (_Bool)canSelectAllWithSender:(id)arg1;
- (_Bool)canvasEditorCanDuplicateWithSender:(id)arg1;
- (_Bool)canvasEditorCanCopyStyleWithSender:(id)arg1;
- (_Bool)canvasEditorCanCutWithSender:(id)arg1;
- (_Bool)canvasEditorCanCopyWithSender:(id)arg1;
- (_Bool)canvasEditorCanDeleteWithSender:(id)arg1;
- (_Bool)canCopyStyle;
- (id)pasteboardController;
- (void)setSelectionToRep:(id)arg1;
- (void)setSelection:(id)arg1 withFlags:(unsigned long long)arg2;
@property(retain, nonatomic) TSKSelection *selection;
@property(readonly, retain, nonatomic) TSKSelection<TSDTextSelection> *textInputSelection;
- (_Bool)shouldPushNewEditorForNewSelection;
- (id)drawables;
- (unsigned long long)countOfDrawables;
- (_Bool)shouldUseAlternateSelectionHighlight;
- (id)editorToPopToOnEndEditing;
- (Class)editorClassForSelection;
- (id)p_filterNonDisplayedInfos:(id)arg1;
- (void)repWasCreated:(id)arg1;
- (void)canvasInfosDidChange;
@property(readonly, nonatomic) TSPObject *modelForSelection;
- (_Bool)isSelectedInfo:(id)arg1;
@property(readonly, nonatomic) TSKSelection<TSDCanvasSelection> *canvasSelection;
@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
- (id)documentRoot;
@property(readonly, nonatomic) TSDCanvasEditorHelper *canvasEditorHelper;
- (void)dealloc;
- (void)teardown;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (_Bool)canDeleteComment;
- (id)keyCommands;
- (_Bool)isRepSelectable:(id)arg1;
- (void)setSelectionToInfos:(id)arg1;
- (void)setSelectionToInfo:(id)arg1;
- (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
- (id)canvasSelectionWithInfos:(id)arg1;
@property(readonly) _Bool wantsRawArrowKeyEvents;
- (void)setSelectionWithRange:(struct _NSRange)arg1 endOfLine:(_Bool)arg2;
- (id)selectionWithRange:(struct _NSRange)arg1;
- (void)clearMarkedRange;
- (struct _NSRange)rangeOfWordEnclosingCharIndex:(unsigned long long)arg1 backward:(_Bool)arg2;
- (void)replaceRange:(struct _NSRange)arg1 withText:(id)arg2;
- (void)extendSelectionRight;
- (void)extendSelectionLeft;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (id)selectionRectsForRange:(struct _NSRange)arg1;
- (struct CGRect)firstRectForRange:(struct _NSRange)arg1;
- (id)textInRange:(struct _NSRange)arg1;
- (unsigned long long)textLength;
- (_Bool)textIsVerticalAtCharIndex:(unsigned long long)arg1;
- (void)endEditing;
- (struct _NSRange)editRange;
@property(readonly, nonatomic) struct _NSRange markedRange;
- (unsigned long long)charIndexByMovingPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 preferPosition:(double *)arg4;
- (_Bool)isCharIndex:(unsigned long long)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isCharIndex:(unsigned long long)arg1 withEolAffinity:(_Bool)arg2 atBoundary:(long long)arg3 inDirection:(long long)arg4;
- (id)textFontAtCharIndex:(unsigned long long)arg1;
- (id)textColorAtCharIndex:(unsigned long long)arg1;
- (long long)returnKeyType;
@property(readonly, retain) UIView *inputAccessoryView;
- (void)insertText:(id)arg1;
- (_Bool)wantsKeyboard;
@property(readonly, retain) UIView *inputView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property(retain, nonatomic) TSKSelection<TSDTextSelection> *selectionForArrowKeys;
@property(readonly) Class superclass;

@end

