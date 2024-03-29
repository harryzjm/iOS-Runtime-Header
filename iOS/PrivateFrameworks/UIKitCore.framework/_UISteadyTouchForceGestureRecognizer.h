//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class CADisplayLink, NSDate, _UIVelocityIntegrator;

__attribute__((visibility("hidden")))
@interface _UISteadyTouchForceGestureRecognizer : UIGestureRecognizer
{
    CADisplayLink *_continuousEvaluationDisplayLink;
    _UIVelocityIntegrator *_velocityIntegrator;
    double _currentTouchForce;
    NSDate *_steadyTimestamp;
    _Bool _useOverridingMinimumDuration;
    double _overrideMinimumSteadyTouchForceDuration;
    double _minimumSteadyTouchForceDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double minimumSteadyTouchForceDuration; // @synthesize minimumSteadyTouchForceDuration=_minimumSteadyTouchForceDuration;
- (void)_endContinuousEvaluation;
- (void)_updateForContinuousEvaluation:(id)arg1;
- (void)_beginForContinuousEvaluationForTouches:(id)arg1;
- (void)_evaluateWithTouchForce:(double)arg1;
- (void)_evaluateTouches:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_adjustSteadyForceDurationIfNeeded:(id)arg1 event:(id)arg2;
- (void)reset;
- (void)cancel;
- (void)recognize;
- (void)setView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

