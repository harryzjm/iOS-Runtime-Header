//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CASpringAnimation;

@interface HUSpringAnimationSettings
{
    double _completionEpsilon;
    CASpringAnimation *_springAnimation;
}

+ (id)criticallyDampedSpringSettings;
@property(readonly, nonatomic) CASpringAnimation *springAnimation; // @synthesize springAnimation=_springAnimation;
@property(nonatomic) double completionEpsilon; // @synthesize completionEpsilon=_completionEpsilon;
- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_updateDuration;
- (double)interpolatedProgressForProgress:(double)arg1;
- (void)setRepeatCount:(float)arg1;
- (float)repeatCount;
- (void)setSpeed:(double)arg1;
- (double)speed;
- (void)setDelay:(double)arg1;
- (double)delay;
- (void)setDuration:(double)arg1;
- (double)duration;
@property(nonatomic) double initialVelocity;
@property(nonatomic) double damping;
@property(nonatomic) double stiffness;
@property(nonatomic) double mass;
- (void)setTimingFunction:(id)arg1;
- (id)timingFunction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithSpringAnimation:(id)arg1 completionEpsilon:(double)arg2;
- (id)init;

@end
