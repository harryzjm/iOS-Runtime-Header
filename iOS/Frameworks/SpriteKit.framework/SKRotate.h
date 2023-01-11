//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SKRotate
{
    struct SKCRotate *_mycaction;
}

+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateToY:(double)arg1 duration:(double)arg2;
+ (id)rotateByY:(double)arg1 duration:(double)arg2;
+ (id)rotateToX:(double)arg1 duration:(double)arg2;
+ (id)rotateByX:(double)arg1 duration:(double)arg2;
+ (id)rotateToAngle:(double)arg1 duration:(double)arg2 shortestUnitArc:(_Bool)arg3;
+ (id)rotateToAngle:(double)arg1 duration:(double)arg2;
+ (id)rotateByAngle:(double)arg1 duration:(double)arg2;
+ (_Bool)supportsSecureCoding;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
