//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameplayKit/NSCoding-Protocol.h>

@class GKBehavior, MISSING_TYPE;
@protocol GKAgentDelegate;

@interface GKAgent <NSCoding>
{
    struct GKSimpleVehicle _vehicle;
    id <GKAgentDelegate> _delegate;
    GKBehavior *_behavior;
}

@property(retain, nonatomic) GKBehavior *behavior; // @synthesize behavior=_behavior;
@property(nonatomic) __weak id <GKAgentDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (MISSING_TYPE *)steerToStayOnPath:(id)arg1 maxPredictionTime:(double)arg2;
- (MISSING_TYPE *)steerToFollowPath:(id)arg1 maxPredictionTime:(double)arg2 forward:(_Bool)arg3;
- (MISSING_TYPE *)steerForIntercept:(id)arg1 maxPredictionTime:(double)arg2;
- (MISSING_TYPE *)steerForWander:(double)arg1 speed:(float)arg2;
- (MISSING_TYPE *)steerForTargetSpeed:(float)arg1;
- (MISSING_TYPE *)steerForCohesion:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
- (MISSING_TYPE *)steerForAlignment:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
- (MISSING_TYPE *)steerForSeparation:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
- (MISSING_TYPE *)steerToAvoidAgents:(id)arg1 timeBeforeCollisionToAvoid:(double)arg2;
- (MISSING_TYPE *)steerToAvoidObstacles:(id)arg1 timeBeforeCollisionToAvoid:(double)arg2;
- (MISSING_TYPE *)steerForFlee: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)steerForSeek: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)velocity3;
- (MISSING_TYPE *)position3;
@property(nonatomic) float maxSpeed;
@property(nonatomic) float maxAcceleration;
@property(nonatomic) float speed;
@property(nonatomic) float radius;
@property(nonatomic) float mass;
- (struct GKSimpleVehicle *)vehicle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

