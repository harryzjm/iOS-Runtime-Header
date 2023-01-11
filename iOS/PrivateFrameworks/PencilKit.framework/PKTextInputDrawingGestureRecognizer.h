//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

#import <PencilKit/PKDrawingGestureRecognizerProtocol-Protocol.h>
#import <PencilKit/PKTextInputDebugStateReporting-Protocol.h>

@class NSString, PKTextInputElement, UITouch;
@protocol PKDrawingGestureTarget, PKTextInputDrawingGestureRecognizerDelegate;

@interface PKTextInputDrawingGestureRecognizer : UIGestureRecognizer <PKDrawingGestureRecognizerProtocol, PKTextInputDebugStateReporting>
{
    _Bool _waitingForTargetElementSearch;
    _Bool _requiresTargetElementToBegin;
    _Bool _requiresPastTapToBegin;
    double _drawStartTime;
    double _touchesBeganTimestamp;
    struct CGPoint _drawTouchStartPoint;
    CDUnknownBlockType _timeoutBlock;
    CDUnknownBlockType _longPressTentativeBlock;
    CDUnknownBlockType _longPressSuccessBlock;
    CDUnknownBlockType _notMovingCancelBlock;
    CDUnknownBlockType _gestureEnvironmentResetTimeoutBlock;
    _Bool _drawingTargetIsDrawing;
    _Bool _isReplaying;
    unsigned long long _activeInputProperties;
    id <PKDrawingGestureTarget> drawingTarget;
    long long _strokeAcceptanceState;
    long long _longPressState;
    PKTextInputElement *_targetElement;
    UITouch *_drawingTouch;
    long long _panState;
    long long _panDirection;
}

+ (id)_systemGestureClassesToAvoid;
- (void).cxx_destruct;
@property(nonatomic, setter=_setPanDirection:) long long panDirection; // @synthesize panDirection=_panDirection;
@property(nonatomic, setter=_setPanState:) long long panState; // @synthesize panState=_panState;
@property(retain, nonatomic) UITouch *drawingTouch; // @synthesize drawingTouch=_drawingTouch;
@property(nonatomic) _Bool isReplaying; // @synthesize isReplaying=_isReplaying;
@property(retain, nonatomic) PKTextInputElement *targetElement; // @synthesize targetElement=_targetElement;
@property(nonatomic, setter=_setLongPressState:) long long longPressState; // @synthesize longPressState=_longPressState;
@property(nonatomic, setter=_setStrokeAcceptanceState:) long long strokeAcceptanceState; // @synthesize strokeAcceptanceState=_strokeAcceptanceState;
@property(nonatomic, setter=_setDrawingTargetIsDrawing:) _Bool drawingTargetIsDrawing; // @synthesize drawingTargetIsDrawing=_drawingTargetIsDrawing;
@property(nonatomic) __weak id <PKDrawingGestureTarget> drawingTarget; // @synthesize drawingTarget;
@property(readonly, nonatomic) unsigned long long activeInputProperties; // @synthesize activeInputProperties=_activeInputProperties;
- (void)_replayDrawingCancelled;
- (void)_replayDrawingEnded;
- (void)_replayDrawingMoved:(CDStruct_6422aa5d)arg1;
- (void)_replayDrawingBegan:(CDStruct_6422aa5d)arg1;
- (void)reportDebugStateDescription:(CDUnknownBlockType)arg1;
- (void)cancelDrawing;
- (void)_drawingEnded;
- (void)_drawingMoved:(id)arg1;
- (void)_drawingBegan;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)reset;
- (void)end;
- (void)cancel;
- (void)_endDrawing;
- (void)_cancelOrFailGesture;
- (void)_acceptStrokeTimeoutTriggered;
- (void)_cancelScheduledStrokeAcceptanceBlock;
- (void)_cancelNotMovingCancellationBlock;
- (void)_evaluateCancelIfNotMoving;
- (void)_updateStrokeAcceptanceStateUseTimestampFromTouch:(_Bool)arg1;
- (void)_evaluateMovingToBeganStateUseTimestampFromTouch:(_Bool)arg1;
- (void)_beginDrawingIfNeeded;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_updatePanStateForCandidateElements:(id)arg1;
- (long long)_panDirectionForTouch:(id)arg1;
- (void)_updatePanGestureStateForTouch:(id)arg1;
- (_Bool)_hasMovedPastScrollThresholdForTouch:(id)arg1;
- (_Bool)_hasMovedPastMinimumPanThresholdForTouch:(id)arg1;
- (void)_cancelLongPressTimerBlocks;
- (void)_updateLongPressValidityForTouch:(id)arg1;
- (void)_longPressSuccessTimerFired;
- (void)_longPressTentativeTimerFired;
- (void)_scheduleLongPressTimerBlocks;
- (_Bool)_isValidLongPressOverDuration:(double)arg1;
- (_Bool)_isWithinLongPressDistanceForTouch:(id)arg1;
- (_Bool)_isValidLongPress;
- (void)_enumerateTouchesForUpdateWithEvent:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)hasMovedPastTapUseTimestampFromTouch:(_Bool)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)_gestureStartedInsideTargetElement;
- (double)timeIntervalSinceTouchesBeganForTouch:(id)arg1;
- (double)timeIntervalSinceStartOfGesture;
- (double)_distanceFromStartPositionForTouch:(id)arg1;
- (struct CGPoint)locationInView:(id)arg1;
- (void)finishedElementFindingWithElement:(id)arg1 candidateElements:(id)arg2;
- (void)setState:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PKTextInputDrawingGestureRecognizerDelegate> delegate; // @dynamic delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
