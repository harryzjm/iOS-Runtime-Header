//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SKPhysicsJointPin
{
    _Bool _shouldEnableLimits;
    double _lowerAngleLimit;
    double _upperAngleLimit;
    double _frictionTorque;
    double _rotationSpeed;
    struct CGPoint _anchor;
}

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly) struct CGPoint anchor; // @synthesize anchor=_anchor;
@property(nonatomic) double rotationSpeed; // @synthesize rotationSpeed=_rotationSpeed;
@property(nonatomic) double frictionTorque; // @synthesize frictionTorque=_frictionTorque;
@property(nonatomic) double upperAngleLimit; // @synthesize upperAngleLimit=_upperAngleLimit;
@property(nonatomic) double lowerAngleLimit; // @synthesize lowerAngleLimit=_lowerAngleLimit;
@property(nonatomic) _Bool shouldEnableLimits; // @synthesize shouldEnableLimits=_shouldEnableLimits;

@end
