//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAffineTransform.h>

@interface NSAffineTransform (CARenderValue)
- (unsigned long long)CA_copyNumericValue:(double *)arg1;
- (unsigned long long)CA_numericValueCount;
- (struct Object *)CA_copyRenderValue;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)CAMLType;
- (struct CGAffineTransform)CA_CGAffineTransformValue;
@end

