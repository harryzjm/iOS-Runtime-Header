//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFViewControllerPrivate;

__attribute__((visibility("hidden")))
@interface PDFViewController : NSObject
{
    PDFViewControllerPrivate *_private;
}

- (void).cxx_destruct;
- (void)_performDoubleTapAtLocation:(struct CGPoint)arg1;
- (void)setActiveSelection:(id)arg1;
- (void)_clearSelection;
- (void)clearSelection;
- (id)_getPagePoint:(struct CGPoint *)arg1 forGestureLocation:(struct CGPoint)arg2;
- (id)_annotationAtGestureLocation:(struct CGPoint)arg1;
- (int)_canLollipopDragAtLocation:(struct CGPoint)arg1 locationOfFirstTouch:(struct CGPoint)arg2 gestureType:(unsigned long long)arg3;
- (void)_updateLollipopDragAtLocation:(struct CGPoint)arg1;
- (void)_updateWordDragAtLocation:(struct CGPoint)arg1;
- (_Bool)_canWordDragAtLocation:(struct CGPoint)arg1;
- (void)_annotationHitLongPress:(id)arg1 gestureState:(long long)arg2 location:(struct CGPoint)arg3;
- (_Bool)_shouldHandleAnnotation:(id)arg1;
- (void)_updateState:(int)arg1 forGesture:(unsigned long long)arg2 atLocation:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4;
- (int)textSelectionState;
- (void)showTextSelectionMenu:(_Bool)arg1;
- (void)_showTextSelectionMenu;
- (void)_hideTextSelectionMenu;
- (_Bool)isDraggingLollipop;
- (_Bool)isTouchingLollipopAtLocation:(struct CGPoint)arg1 locationOfFirstTouch:(struct CGPoint)arg2 gestureType:(unsigned long long)arg3;
- (void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4;
- (void)handleGesture:(id)arg1;
- (unsigned long long)_typeForGestureRecognizer:(id)arg1;
- (void)_annotationHit:(id)arg1 atLocation:(struct CGPoint)arg2;
- (void)_doButtonHit:(id)arg1;
- (void)_handleButtonHit:(id)arg1;
- (void)_postAnnotationHitNotification:(id)arg1;
- (void)_postAnnotationWillHitNotification:(id)arg1;
- (id)_annotationFollowing:(id)arg1 wrapAround:(_Bool)arg2;
- (id)_annotationPreceding:(id)arg1 wrapAround:(_Bool)arg2;
- (void)removeActiveAnnotation;
- (void)activateNextAnnotation:(_Bool)arg1;
- (void)interactWithAnnotation:(id)arg1;
- (void)setActiveAnnotation:(id)arg1;
- (id)activeAnnotation;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toPageView:(id)arg2;

@end

