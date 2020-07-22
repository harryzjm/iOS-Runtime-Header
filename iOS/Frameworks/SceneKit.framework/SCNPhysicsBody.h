//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class SCNNode, SCNPhysicsShape;

@interface SCNPhysicsBody : NSObject <NSCopying, NSSecureCoding>
{
    SCNNode *_node;
    double _mass;
    double _charge;
    double _friction;
    double _restitution;
    double _rollingFriction;
    SCNPhysicsShape *_physicsShape;
    long long _type;
    double _damping;
    struct SCNVector4 _angularVelocity;
    double _angularDamping;
    struct SCNVector3 _velocityFactor;
    struct SCNVector3 _angularVelocityFactor;
    struct SCNVector3 _velocity;
    _Bool _ignoreGravity;
    _Bool _explicitMomentOfInertia;
    struct SCNVector3 _momentOfInertia;
    unsigned long long _categoryBitMask;
    unsigned long long _collisionBitMask;
    unsigned long long _contactTestBitMask;
    _Bool _allowsResting;
    _Bool _isDefaultShape;
    struct btRigidBody *_body;
}

+ (_Bool)supportsSecureCoding;
+ (id)kinematicBody;
+ (id)dynamicBody;
+ (id)staticBody;
+ (id)bodyWithType:(long long)arg1 shape:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_didDecodeSCNPhysicsBody:(id)arg1;
- (id)_owner;
- (void)_setOwner:(id)arg1;
- (void)_removeOwner;
- (void)_ownerWillDie;
- (struct btRigidBody *)_createBody;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)moveToTransform:(struct SCNMatrix4)arg1;
- (void)rotateToAxisAngle:(struct SCNVector4)arg1;
- (void)moveToPosition:(struct SCNVector3)arg1;
- (void)resetTransform;
- (void)resetToTransform:(struct SCNMatrix4)arg1;
- (void)clearAllForces;
- (void)_activate;
- (void)applyTorque:(struct SCNVector4)arg1 impulse:(_Bool)arg2;
- (void)applyForce:(struct SCNVector3)arg1 atPosition:(struct SCNVector3)arg2 impulse:(_Bool)arg3;
- (void)applyForce:(struct SCNVector3)arg1 impulse:(_Bool)arg2;
@property(nonatomic) struct SCNVector3 angularVelocityFactor;
@property(nonatomic) struct SCNVector3 velocityFactor;
@property(nonatomic) struct SCNVector4 angularVelocity;
@property(nonatomic, getter=isAffectedByGravity) _Bool affectedByGravity;
@property(nonatomic) struct SCNVector3 velocity;
@property(nonatomic) unsigned long long contactTestBitMask;
@property(nonatomic) unsigned long long collisionBitMask;
@property(nonatomic) unsigned long long categoryBitMask;
@property(retain, nonatomic) SCNPhysicsShape *physicsShape;
- (struct btCollisionShape *)_shapeHandleWithShape:(id)arg1 owner:(id)arg2;
@property(nonatomic) double angularDamping;
@property(nonatomic) double damping;
@property(nonatomic) double rollingFriction;
@property(nonatomic) double restitution;
@property(nonatomic) double friction;
@property(nonatomic) _Bool allowsResting;
@property(readonly, nonatomic) _Bool isResting;
@property(nonatomic) double charge;
@property(nonatomic) _Bool usesDefaultMomentOfInertia;
@property(nonatomic) struct SCNVector3 momentOfInertia;
- (_Bool)respondsToCollision;
@property(nonatomic) double mass;
@property(nonatomic) long long type;
- (void)dealloc;
- (struct btRigidBody *)_handle;
- (struct __C3DScene *)sceneRef;
- (id)initWithType:(long long)arg1 shape:(id)arg2;

@end

