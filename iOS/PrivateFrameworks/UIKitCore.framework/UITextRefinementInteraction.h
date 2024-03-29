//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class UIDelayedAction, UIResponder, UITextGestureTuning, _UITextLoupeResponderProxy;
@protocol UITextRefinementInteractionBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface UITextRefinementInteraction : UITextInteraction
{
    UIDelayedAction *_delayedLoupeAction;
    UIDelayedAction *_delayedSelectionAction;
    _Bool _hasPerformedInteraction;
    struct CGPoint _initialPointFromPreviousInteraction;
    _Bool _triggeredByLongPress;
    UITextGestureTuning *_gestureTuning;
    long long _inheritedGranularity;
    id <UITextRefinementInteractionBehaviorDelegate> _behaviorDelegate;
    _UITextLoupeResponderProxy *_responderProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UITextLoupeResponderProxy *responderProxy; // @synthesize responderProxy=_responderProxy;
@property(retain, nonatomic) id <UITextRefinementInteractionBehaviorDelegate> behaviorDelegate; // @synthesize behaviorDelegate=_behaviorDelegate;
@property(nonatomic) long long inheritedGranularity; // @synthesize inheritedGranularity=_inheritedGranularity;
@property(readonly, nonatomic) UITextGestureTuning *gestureTuning; // @synthesize gestureTuning=_gestureTuning;
@property(nonatomic) _Bool triggeredByLongPress; // @synthesize triggeredByLongPress=_triggeredByLongPress;
- (void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4 forTouchType:(long long)arg5;
- (void)canBeginDragCursor:(id)arg1;
- (void)delayedDisplayLoupe:(id)arg1;
- (void)delayedSelectionAction:(id)arg1;
- (void)delayedLoupeAction:(id)arg1;
- (void)cancelDelayedLoupeActionIfNecessary;
- (void)updateOrCancelDelayedLoupeActionWithPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (_Bool)translationIsWithinAllowableMovement:(struct CGPoint)arg1;
- (void)setupDelayedLoupeActionWithInitialPoint:(struct CGPoint)arg1;
- (struct CGPoint)touchAlignedPointForPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (void)updateVisibilityOffsetForGesture:(id)arg1;
@property(nonatomic) _Bool strongerBiasAgainstUp;
@property(nonatomic) _Bool shouldUseLineThreshold;
- (void)_createGestureTuningIfNecessary;
- (struct CGPoint)pointIfPlacedCarefully:(struct CGPoint)arg1;
- (void)willBeginExternalGesture;
- (void)loupeGestureWithState:(long long)arg1 location:(CDUnknownBlockType)arg2 translation:(CDUnknownBlockType)arg3 velocity:(CDUnknownBlockType)arg4 modifierFlags:(long long)arg5 shouldCancel:(_Bool *)arg6;
- (void)_processGestureForCustomHighlighter:(id)arg1;
- (void)loupeGesture:(id)arg1;
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (void)setupGestureExclusionRequirements;
- (void)finishSetup;
- (void)updateInitialPoint:(struct CGPoint)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
@property(readonly, nonatomic) UIResponder *responder;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (id)initWithBehaviorDelegate:(id)arg1;

@end

