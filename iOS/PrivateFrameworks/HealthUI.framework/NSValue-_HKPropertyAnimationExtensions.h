//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (_HKPropertyAnimationExtensions)
+ (id)valueWithHKGraphSeriesDataBlockPath:(struct HKGraphSeriesDataBlockPath)arg1;
+ (id)valueWithHKLinearTransform:(struct HKLinearTransform)arg1;
- (id)_hk_CGPointMidPointToValue:(id)arg1 percentage:(double)arg2;
- (id)_hk_HKLinearTransformMidPointToValue:(id)arg1 percentage:(double)arg2;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;
- (_Bool)_hk_isHKLinearTransform;
- (_Bool)_hk_isCGPoint;
- (_Bool)hk_animatable;
- (struct HKGraphSeriesDataBlockPath)HKGraphSeriesDataBlockPathValue;
- (struct HKLinearTransform)HKLinearTransformValue;
@end

