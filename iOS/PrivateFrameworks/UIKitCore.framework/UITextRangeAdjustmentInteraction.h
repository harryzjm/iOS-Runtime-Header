//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class NSString, UITextGestureTuning, UITextLoupeSession, UITextRangeAdjustmentGestureRecognizer, UITouch, UIView;
@protocol UITextRangeAdjustmentInteractionDelegate;

__attribute__((visibility("hidden")))
@interface UITextRangeAdjustmentInteraction : UITextInteraction
{
    UIView *_gestureHostView;
    UITextGestureTuning *_gestureTuning;
    UITextLoupeSession *_loupeSession;
    _Bool _baseIsStart;
    id <UITextRangeAdjustmentInteractionDelegate> _adjustmentDelegate;
    UITextRangeAdjustmentGestureRecognizer *_adjustmentGestureRecognizer;
    double _initialDistance;
    double _firstMovedTime;
    UITouch *_activeTouch;
    struct CGPoint _initialExtentPoint;
    struct CGPoint _initialPoint;
    struct CGPoint _basePoint;
    struct CGPoint _extentPoint;
    struct CGPoint _initialBasePoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
@property(nonatomic) double firstMovedTime; // @synthesize firstMovedTime=_firstMovedTime;
@property(nonatomic) double initialDistance; // @synthesize initialDistance=_initialDistance;
@property(nonatomic) struct CGPoint initialBasePoint; // @synthesize initialBasePoint=_initialBasePoint;
@property(nonatomic) struct CGPoint extentPoint; // @synthesize extentPoint=_extentPoint;
@property(nonatomic) struct CGPoint basePoint; // @synthesize basePoint=_basePoint;
@property(nonatomic) struct CGPoint initialPoint; // @synthesize initialPoint=_initialPoint;
@property(readonly, nonatomic) UITextRangeAdjustmentGestureRecognizer *adjustmentGestureRecognizer; // @synthesize adjustmentGestureRecognizer=_adjustmentGestureRecognizer;
@property(nonatomic) __weak id <UITextRangeAdjustmentInteractionDelegate> adjustmentDelegate; // @synthesize adjustmentDelegate=_adjustmentDelegate;
@property(readonly, nonatomic) struct CGPoint initialExtentPoint; // @synthesize initialExtentPoint=_initialExtentPoint;
@property(nonatomic) _Bool baseIsStart; // @synthesize baseIsStart=_baseIsStart;
- (void)manuallyUpdateInteractionWithGestureState:(long long)arg1 location:(struct CGPoint)arg2 locationOfFirstTouch:(struct CGPoint)arg3 forTouchType:(long long)arg4;
- (void)_activeTouchEnded;
- (void)_adjustmentInteractionCancelled;
- (void)_adjustmentInteractionEndedAtLocation:(struct CGPoint)arg1 forTouchType:(long long)arg2;
- (void)_adjustmentInteractionChangedWithLocation:(struct CGPoint)arg1 forTouchType:(long long)arg2;
- (void)_adjustmentInteractionBeganWithLocation:(struct CGPoint)arg1 startPoint:(struct CGPoint)arg2 forTouchType:(long long)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (struct CGRect)_activeAdjustmentEdgeRect;
- (void)_updateAdjustmentInteractionWithState:(long long)arg1 location:(struct CGPoint)arg2 locationOfFirstTouch:(struct CGPoint)arg3 forTouchType:(long long)arg4;
- (_Bool)_shouldApplyOffsetForTouchType:(long long)arg1;
- (void)updateBaseAndExtentPointsFromEdges;
- (_Bool)_pointCloserToEnd:(struct CGPoint)arg1 startEdge:(struct CGRect)arg2 endEdge:(struct CGRect)arg3;
- (struct CGPoint)_convertPointToViewCoordinateSpace:(struct CGPoint)arg1;
- (struct CGPoint)_activeTouchPoint;
- (_Bool)_gestureTuningEnabledForTouches:(id)arg1;
- (void)_createGestureTuningIfNecessary;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_didRecognizeAdjustmentGesture:(id)arg1;
- (_Bool)doesControlDelegate;
- (id)gestureRecognizerHostView;
- (id)initWithAdjustmentDelegate:(id)arg1 gestureHostView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

