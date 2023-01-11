//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PKCurvePoint : NSObject
{
    double _x;
    double _y;
    double _roundness;
    double _smoothness;
    struct CGPoint _leftTangentPoint;
    struct CGPoint _rightTangentPoint;
}

+ (id)pointWithX:(double)arg1 y:(double)arg2;
+ (id)pointWithCGPoint:(struct CGPoint)arg1;
@property double smoothness; // @synthesize smoothness=_smoothness;
@property double roundness; // @synthesize roundness=_roundness;
@property struct CGPoint rightTangentPoint; // @synthesize rightTangentPoint=_rightTangentPoint;
@property struct CGPoint leftTangentPoint; // @synthesize leftTangentPoint=_leftTangentPoint;
@property double y; // @synthesize y=_y;
@property double x; // @synthesize x=_x;
@property struct CGPoint CGPoint;
- (id)initWithX:(double)arg1 y:(double)arg2;

@end

