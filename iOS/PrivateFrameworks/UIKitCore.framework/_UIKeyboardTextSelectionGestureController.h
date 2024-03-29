//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIDelayedAction, UITextMagnifierTimeWeightedPoint, _UIStatesFeedbackGenerator;
@protocol _UIKeyboardTextSelectionGestureControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIKeyboardTextSelectionGestureController : NSObject
{
    NSMutableArray *_deallocHandlers;
    _Bool _wasScrollingEnabled;
    _Bool _wasNestedPinchingDisabled;
    _Bool _suppressTwoFingerPan;
    _Bool _didSuppressSelectionGrabbers;
    _Bool _isLongPressing;
    _Bool _isPanning;
    _Bool _isSpacePan;
    _Bool _hadAddedTouch;
    _Bool _didFloatCursor;
    int _previousForcePressCount;
    id <_UIKeyboardTextSelectionGestureControllerDelegate> _delegate;
    double _lastPressTimestamp;
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    double _twoFingerTapTimestamp;
    long long _previousRepeatedGranularity;
    long long _panGestureState;
    double _spacePanDistance;
    NSMutableArray *_activeGestures;
    UIDelayedAction *_tapLogTimer;
    UIDelayedAction *_longForcePressAction;
    _UIStatesFeedbackGenerator *_feedbackBehaviour;
    struct CGPoint _lastPanTranslation;
    struct CGPoint _accumulatedAcceleration;
    struct CGPoint _accumulatedBounding;
    struct CGPoint _cursorLocationBase;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) _UIStatesFeedbackGenerator *feedbackBehaviour; // @synthesize feedbackBehaviour=_feedbackBehaviour;
@property(retain, nonatomic) UIDelayedAction *longForcePressAction; // @synthesize longForcePressAction=_longForcePressAction;
@property(nonatomic) int previousForcePressCount; // @synthesize previousForcePressCount=_previousForcePressCount;
@property(retain, nonatomic) UIDelayedAction *tapLogTimer; // @synthesize tapLogTimer=_tapLogTimer;
@property(nonatomic) struct CGPoint cursorLocationBase; // @synthesize cursorLocationBase=_cursorLocationBase;
@property(nonatomic) _Bool didFloatCursor; // @synthesize didFloatCursor=_didFloatCursor;
@property(retain, nonatomic) NSMutableArray *activeGestures; // @synthesize activeGestures=_activeGestures;
@property(nonatomic) double spacePanDistance; // @synthesize spacePanDistance=_spacePanDistance;
@property(nonatomic) _Bool hadAddedTouch; // @synthesize hadAddedTouch=_hadAddedTouch;
@property(nonatomic) _Bool isSpacePan; // @synthesize isSpacePan=_isSpacePan;
@property(nonatomic) _Bool isPanning; // @synthesize isPanning=_isPanning;
@property(nonatomic) _Bool isLongPressing; // @synthesize isLongPressing=_isLongPressing;
@property(nonatomic) _Bool didSuppressSelectionGrabbers; // @synthesize didSuppressSelectionGrabbers=_didSuppressSelectionGrabbers;
@property(nonatomic) _Bool suppressTwoFingerPan; // @synthesize suppressTwoFingerPan=_suppressTwoFingerPan;
@property(nonatomic) _Bool wasNestedPinchingDisabled; // @synthesize wasNestedPinchingDisabled=_wasNestedPinchingDisabled;
@property(nonatomic) _Bool wasScrollingEnabled; // @synthesize wasScrollingEnabled=_wasScrollingEnabled;
@property(nonatomic) long long panGestureState; // @synthesize panGestureState=_panGestureState;
@property(nonatomic) long long previousRepeatedGranularity; // @synthesize previousRepeatedGranularity=_previousRepeatedGranularity;
@property(nonatomic) double twoFingerTapTimestamp; // @synthesize twoFingerTapTimestamp=_twoFingerTapTimestamp;
@property(retain, nonatomic) UITextMagnifierTimeWeightedPoint *weightedPoint; // @synthesize weightedPoint=_weightedPoint;
@property(nonatomic) double lastPressTimestamp; // @synthesize lastPressTimestamp=_lastPressTimestamp;
@property(nonatomic) struct CGPoint accumulatedBounding; // @synthesize accumulatedBounding=_accumulatedBounding;
@property(nonatomic) struct CGPoint accumulatedAcceleration; // @synthesize accumulatedAcceleration=_accumulatedAcceleration;
@property(nonatomic) struct CGPoint lastPanTranslation; // @synthesize lastPanTranslation=_lastPanTranslation;
@property(nonatomic) __weak id <_UIKeyboardTextSelectionGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)configureOneFingerForcePressRecognizer:(id)arg1;
- (void)configureTwoFingerTapGestureRecognizer:(id)arg1;
- (void)configureTwoFingerPanGestureRecognizer:(id)arg1;
- (id)addLongPressTextSelectionInteractionsToView:(id)arg1;
- (id)addTwoFingerTextSelectionInteractionsToView:(id)arg1;
- (id)addOneFingerTextSelectionInteractionsToView:(id)arg1;
- (id)textSelectionInteractionForRTIForwarding;
- (_Bool)_longPressAllowedForView:(id)arg1;
- (_Bool)allowOneFingerDeepPress;
- (double)oneFingerForcePressAllowableMovement;
- (_Bool)oneFingerForcePressShouldCancelTouchesInView;
- (_Bool)oneFingerForcePressShouldFailWithoutForce;
- (double)oneFingerForcePressMinimumDuration;
- (void)redisableEnclosingScrollViewNestedPinching;
- (void)enableEnclosingScrollViewNestedPinching;
- (void)didRemoveSelectionController;
- (void)willRemoveSelectionController;
- (void)_cleanupDeadGesturesIfNecessary;
- (id)selectionController;
- (void)dealloc;
- (void)removeDeallocationHandler:(id)arg1;
- (id)addDeallocationHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (_Bool)shouldAddForceGesture;
- (Class)textInteractionClass;

@end

