//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

#import <AnnotationKit/AKFormFeatureDetectorDelegate-Protocol.h>

@class AKAlignmentGuideController, AKAnnotation, AKAnnotationEventHandler, AKController, AKHighlightColorEditorController, AKPageController, NSString, UIEvent;

@interface AKMainEventHandler : UIResponder <AKFormFeatureDetectorDelegate>
{
    _Bool _mainEventHandlerIsInTrackingLoop;
    _Bool _mainEventHandlerIsInDoodleTrackingLoop;
    _Bool _mainEventHandlerIsInRotationLoop;
    _Bool _shouldEatNextLeftMouseUp;
    _Bool _shouldEatNextRightMouseUp;
    _Bool _dragDidCopySelectedAnnotations;
    _Bool _undoManagerWasGroupingByEvent;
    _Bool _wasSelectedByLongPressRecognizer;
    AKAnnotationEventHandler *_annotationEventHandler;
    unsigned long long _currentModifierFlags;
    AKPageController *_dragPageController;
    AKAlignmentGuideController *_dragAlignmentGuideController;
    double _draggedAnnotationsMaxLeftEdge;
    double _draggedAnnotationsMinRightEdge;
    double _draggedAnnotationsMaxBottomEdge;
    double _draggedAnnotationsMinTopEdge;
    UIEvent *_lastEventWithValidLocationForAutoscroll;
    UIEvent *_lastLeftMouseDownEvent;
    AKAnnotation *_annotationToBeginEditingOnDragEnd;
    AKHighlightColorEditorController *_highlightColorEditor;
    AKController *_controller;
    struct CGPoint _leftMouseDownPoint;
    struct CGPoint _lastDragPoint;
    struct CGPoint _lastDragActualLocation;
    struct CGPoint _lastDragActualLocationInWindow;
    struct CGPoint _firstDragPoint;
    struct CGPoint _panGestureStartPointInWindow;
}

+ (id)newMainEventHandlerForCurrentPlatformWithController:(id)arg1;
@property struct CGPoint panGestureStartPointInWindow; // @synthesize panGestureStartPointInWindow=_panGestureStartPointInWindow;
@property struct CGPoint firstDragPoint; // @synthesize firstDragPoint=_firstDragPoint;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property(retain) AKHighlightColorEditorController *highlightColorEditor; // @synthesize highlightColorEditor=_highlightColorEditor;
@property __weak AKAnnotation *annotationToBeginEditingOnDragEnd; // @synthesize annotationToBeginEditingOnDragEnd=_annotationToBeginEditingOnDragEnd;
@property _Bool wasSelectedByLongPressRecognizer; // @synthesize wasSelectedByLongPressRecognizer=_wasSelectedByLongPressRecognizer;
@property(retain) UIEvent *lastLeftMouseDownEvent; // @synthesize lastLeftMouseDownEvent=_lastLeftMouseDownEvent;
@property(retain) UIEvent *lastEventWithValidLocationForAutoscroll; // @synthesize lastEventWithValidLocationForAutoscroll=_lastEventWithValidLocationForAutoscroll;
@property double draggedAnnotationsMinTopEdge; // @synthesize draggedAnnotationsMinTopEdge=_draggedAnnotationsMinTopEdge;
@property double draggedAnnotationsMaxBottomEdge; // @synthesize draggedAnnotationsMaxBottomEdge=_draggedAnnotationsMaxBottomEdge;
@property double draggedAnnotationsMinRightEdge; // @synthesize draggedAnnotationsMinRightEdge=_draggedAnnotationsMinRightEdge;
@property double draggedAnnotationsMaxLeftEdge; // @synthesize draggedAnnotationsMaxLeftEdge=_draggedAnnotationsMaxLeftEdge;
@property struct CGPoint lastDragActualLocationInWindow; // @synthesize lastDragActualLocationInWindow=_lastDragActualLocationInWindow;
@property struct CGPoint lastDragActualLocation; // @synthesize lastDragActualLocation=_lastDragActualLocation;
@property struct CGPoint lastDragPoint; // @synthesize lastDragPoint=_lastDragPoint;
@property(retain) AKAlignmentGuideController *dragAlignmentGuideController; // @synthesize dragAlignmentGuideController=_dragAlignmentGuideController;
@property(retain) AKPageController *dragPageController; // @synthesize dragPageController=_dragPageController;
@property struct CGPoint leftMouseDownPoint; // @synthesize leftMouseDownPoint=_leftMouseDownPoint;
@property _Bool undoManagerWasGroupingByEvent; // @synthesize undoManagerWasGroupingByEvent=_undoManagerWasGroupingByEvent;
@property _Bool dragDidCopySelectedAnnotations; // @synthesize dragDidCopySelectedAnnotations=_dragDidCopySelectedAnnotations;
@property _Bool shouldEatNextRightMouseUp; // @synthesize shouldEatNextRightMouseUp=_shouldEatNextRightMouseUp;
@property _Bool shouldEatNextLeftMouseUp; // @synthesize shouldEatNextLeftMouseUp=_shouldEatNextLeftMouseUp;
@property unsigned long long currentModifierFlags; // @synthesize currentModifierFlags=_currentModifierFlags;
@property(retain) AKAnnotationEventHandler *annotationEventHandler; // @synthesize annotationEventHandler=_annotationEventHandler;
@property _Bool mainEventHandlerIsInRotationLoop; // @synthesize mainEventHandlerIsInRotationLoop=_mainEventHandlerIsInRotationLoop;
@property _Bool mainEventHandlerIsInDoodleTrackingLoop; // @synthesize mainEventHandlerIsInDoodleTrackingLoop=_mainEventHandlerIsInDoodleTrackingLoop;
@property _Bool mainEventHandlerIsInTrackingLoop; // @synthesize mainEventHandlerIsInTrackingLoop=_mainEventHandlerIsInTrackingLoop;
- (void).cxx_destruct;
- (_Bool)_detectFormElementInCurrentPageControllerUnderPointInWindow:(struct CGPoint)arg1;
- (_Bool)_detectFormElementInCurrentPageControllerUnderPointInWindow:(struct CGPoint)arg1 withStartingPoint:(struct CGPoint)arg2;
- (struct CGPoint)_alignedAnnotationDragPointForPoint:(struct CGPoint)arg1 withEvent:(id)arg2 orRecognizer:(id)arg3;
- (void)_updateSelectionWithAnnotation:(id)arg1 onPageController:(id)arg2;
- (_Bool)_didNotHandleEventSoDeselect;
- (void)_setCurrentPageBasedOnPageController:(id)arg1;
- (struct CGPoint)_modelPointFromPointInWindow:(struct CGPoint)arg1 usingPageController:(id)arg2;
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)finishTranslationOfAllSelectedAnnotations;
- (void)applyTranslationToAllSelectedAnnotations:(struct CGPoint)arg1;
- (_Bool)hitTestAnnotationsIncludingPOI:(_Bool)arg1 ignoreIfDeselected:(_Bool)arg2 atPointInWindow:(struct CGPoint)arg3 outAnnotation:(id *)arg4;
- (_Bool)hitTestPointsOfInterestsAtPoint:(struct CGPoint)arg1 onPageController:(id)arg2 inAnnotations:(id)arg3 event:(id)arg4 recognizer:(id)arg5 cursorUpdateOnly:(_Bool)arg6;
- (id)topmostAnnotationForBorderAndInteriorHitTestAtPoint:(struct CGPoint)arg1 inAnnotations:(id)arg2 onPageController:(id)arg3 wasOnBorder:(_Bool *)arg4 wasOnText:(_Bool *)arg5;
- (id)annotationsPassingBoundingBoxHitTestsWithPoint:(struct CGPoint)arg1 onPageController:(id)arg2;
- (_Bool)continueRotateEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)enterRotateEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)continueDragEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)enterDragEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)updateCropHandleVisibilityForEvent:(id)arg1;
- (void)updateCursorForEvent:(id)arg1;
- (_Bool)handleRotateEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)handleKeyboardEvent:(id)arg1;
- (_Bool)handleRightDownEvent:(id)arg1;
- (_Bool)handleDoubleDownEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)handleDownEvent:(id)arg1 orRecognizer:(id)arg2;
- (struct CGPoint)modelPointFromWindowPoint:(struct CGPoint)arg1 foundOnPageController:(id *)arg2;
- (struct CGPoint)windowPointFromEvent:(id)arg1 orRecognizer:(id)arg2;
- (struct CGPoint)modelPointFromEvent:(id)arg1 orRecognizer:(id)arg2 onPageController:(id *)arg3;
- (_Bool)mainHandleEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)teardown;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

