//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface GKAgent3D
{
}

+ (_Bool)supportsSecureCoding;
- (void)applyBrakingForce:(float)arg1 deltaTime:(double)arg2;
- (void)applySteeringForce:(double)arg1 deltaTime: /* Error: Ran out of types for this method. */;
- (void)updateWithDeltaTime:(double)arg1;
@property(nonatomic) CDStruct_d80e62f2 rotation;
@property(nonatomic) _Bool rightHanded;
@property(readonly, nonatomic) MISSING_TYPE *velocity;
@property(nonatomic) MISSING_TYPE *position;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

