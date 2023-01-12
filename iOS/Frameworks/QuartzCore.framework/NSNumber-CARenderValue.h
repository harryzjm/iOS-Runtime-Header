//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumber.h>

@interface NSNumber (CARenderValue)
- (unsigned long long)CA_copyNumericValue:(double *)arg1;
- (unsigned long long)CA_numericValueCount;
- (struct Object *)CA_copyRenderValue;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_roundToIntegerFromValue:(id)arg1;
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)CAMLType;
@end

