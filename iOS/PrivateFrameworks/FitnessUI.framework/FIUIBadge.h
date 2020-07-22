//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKitUI/HKAnimatableObject.h>

@interface FIUIBadge : HKAnimatableObject
{
    double _rotationX;
    double _rotationY;
    struct CGPoint _position;
}

@property(nonatomic) double rotationY; // @synthesize rotationY=_rotationY;
@property(nonatomic) double rotationX; // @synthesize rotationX=_rotationX;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
- (void)removeAllAnimationsForBadgePropertyType:(unsigned long long)arg1;
- (id)_newAnimatablePropertyForType:(unsigned long long)arg1;
- (void)addAnimation:(id)arg1 forBadgePropertyType:(unsigned long long)arg2;
- (id)init;

@end
