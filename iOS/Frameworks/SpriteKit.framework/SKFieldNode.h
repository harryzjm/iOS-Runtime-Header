//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, PKPhysicsField, SKRegion, SKTexture;

@interface SKFieldNode
{
    PKPhysicsField *_field;
    SKRegion *_region;
    float _smoothness;
    float _animationSpeed;
    SKTexture *_texture;
    _Bool _exclusive;
}

+ (id)customFieldWithEvaluationBlock:(CDUnknownBlockType)arg1;
+ (id)magneticField;
+ (id)electricField;
+ (id)springField;
+ (id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)velocityFieldWithTexture:(id)arg1;
+ (id)velocityFieldWithVector: /* Error: Ran out of types for this method. */;
+ (id)linearGravityFieldWithVector: /* Error: Ran out of types for this method. */;
+ (id)radialGravityField;
+ (id)vortexField;
+ (id)dragField;
@property(nonatomic, getter=isExclusive) _Bool exclusive; // @synthesize exclusive=_exclusive;
- (void).cxx_destruct;
- (_Bool)isEqualToNode:(id)arg1;
@property(retain, nonatomic) SKRegion *region;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(nonatomic) float falloff;
@property(nonatomic) float minimumRadius;
@property(nonatomic) float strength;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 field:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionClassName;
- (id)init;
@property(retain, nonatomic) SKTexture *texture;
@property(nonatomic) float animationSpeed;
@property(nonatomic) float smoothness;
@property(nonatomic) MISSING_TYPE *direction;
@property(nonatomic) unsigned int categoryBitMask;
- (id)field;
- (void)setPhysicsField:(id)arg1;

@end

