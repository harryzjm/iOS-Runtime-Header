//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIInterpolatingMotionEffect, UIMotionEffectGroup, _UITiltMotionEffect;

@interface _UIParallaxMotionEffect
{
    UIMotionEffectGroup *_group;
    struct UIOffset _slideMagnitude;
    UIInterpolatingMotionEffect *_horizontalSlideEffect;
    UIInterpolatingMotionEffect *_verticalSlideEffect;
    _UITiltMotionEffect *_tiltEffect;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIOffset slideMagnitude; // @synthesize slideMagnitude=_slideMagnitude;
@property(nonatomic) double rotatingSphereRadius;
@property(nonatomic) double maximumVerticalTiltAngle;
@property(nonatomic) double maximumHorizontalTiltAngle;
- (void)_activateTiltEffectIfNecessary;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (void)_updateGroupMotionEffect;
@property(nonatomic) double verticalSlideAccelerationBoostFactor;
@property(nonatomic) double horizontalSlideAccelerationBoostFactor;
- (void)_updateSlideEffectsWithCurrentSlideMagnitude;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
