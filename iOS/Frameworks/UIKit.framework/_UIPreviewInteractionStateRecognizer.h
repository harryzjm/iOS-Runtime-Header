//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionStateRecognizer : NSObject
{
    unsigned long long _deepPressCount;
    double _smoothedForce;
    double _maximumForce;
    double _previousEffectiveTouchForce;
    double _timeMark;
    double _currentTime;
    double _previousTime;
    double _popOffsetInitial;
    double _popOffsetLongterm;
    double _popOffsetDecayAlpha;
    double _lowpassForceAlpha;
    double _popDecayingOffset;
    double _popReductionForce;
    double _progressToStrongThreshold;
    _Bool _allowsPopOffsetDecay;
    double _popForceReductionThreshold;
    double _popAlwaysThreshold;
    double _highPopThreshold;
    double _previousPopThreshold;
    double _saturationForce;
    double _revealThreshold;
    double _standardThreshold;
    double _strongThreshold;
    double _hintAndPeekInterval;
    double _hintReductionForce;
    double _actualHintForce;
    double _actualPeekForce;
    double _actualPopForce;
    double _actualHintTime;
    double _actualPeekTime;
    double _actualPopTime;
    _Bool _shouldDelayReveal;
    long long _currentState;
    double _minimumPreviewDuration;
    double _currentTouchForce;
}

@property(nonatomic) double currentTouchForce; // @synthesize currentTouchForce=_currentTouchForce;
@property(nonatomic) _Bool shouldDelayReveal; // @synthesize shouldDelayReveal=_shouldDelayReveal;
@property(nonatomic) double minimumPreviewDuration; // @synthesize minimumPreviewDuration=_minimumPreviewDuration;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (double)_currentTouchForceMultiplier;
- (double)_normalizedTouchForceValue:(double)arg1;
- (double)_denormalizedTouchForceValue:(double)arg1;
- (double)_thresholdForForceLevel:(long long)arg1;
- (void)_accessibilityForceSensitivityChanged:(id)arg1;
- (void)reset;
- (void)evaluateWithTouchForce:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint)arg3;
@property(readonly, nonatomic) double velocity; // @dynamic velocity;
- (double)currentProgressToState:(long long)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

