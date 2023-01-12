//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (CATransform3DAdditions)
+ (id)valueWithCATransform3D:(struct CATransform3D)arg1;
+ (id)valueWithCAColorMatrix:(struct CAColorMatrix)arg1;
+ (id)valueWithCAPoint3D:(struct CAPoint3D)arg1;
+ (id)valueWithCACornerRadii:(struct CACornerRadii)arg1;
@property(readonly) struct CATransform3D CATransform3DValue;
- (unsigned long long)CA_copyNumericValue:(double *)arg1;
- (unsigned long long)CA_numericValueCount;
- (struct Object *)CA_copyRenderValue;
- (struct CAColorMatrix)CAColorMatrixValue;
- (struct CAPoint3D)CAPoint3DValue;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_roundToIntegerFromValue:(id)arg1;
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (struct CACornerRadii)CACornerRadiiValue;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)CAMLType;
- (struct CGAffineTransform)CA_CGAffineTransformValue;
@end

