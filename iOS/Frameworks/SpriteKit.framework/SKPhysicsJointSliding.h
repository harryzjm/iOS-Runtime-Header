//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SKPhysicsJointSliding
{
    _Bool _shouldEnableLimits;
    double _lowerDistanceLimit;
    double _upperDistanceLimit;
}

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3 axis:(struct CGVector)arg4;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double upperDistanceLimit; // @synthesize upperDistanceLimit=_upperDistanceLimit;
@property(nonatomic) double lowerDistanceLimit; // @synthesize lowerDistanceLimit=_lowerDistanceLimit;
@property(nonatomic) _Bool shouldEnableLimits; // @synthesize shouldEnableLimits=_shouldEnableLimits;

@end
