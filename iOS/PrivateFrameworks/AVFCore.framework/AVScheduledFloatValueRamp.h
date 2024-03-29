//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVScheduledFloatValueRamp
{
    float _startValue;
    float _endValue;
}

+ (id)scheduledFloatValueRampWithStartValue:(float)arg1 endValue:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
+ (float)boundsAdjustedFloatValue:(float)arg1;
+ (float)defaultFloatValue;
+ (id)defaultValue;
- (id)scheduledParameterRampInterpolatedToTime:(CDStruct_1b6d18a9)arg1;
- (id)_makeRampWithTruncatedTimeRange:(CDStruct_e83c9415)arg1 endValue:(float)arg2;
- (float)_interpolatedValueAtTime:(CDStruct_1b6d18a9)arg1;
- (long long)_parameterRampMode;
@property(readonly) float endFloatValue;
- (id)endValue;
@property(readonly) float startFloatValue;
- (id)startValue;
- (id)initWithStartValue:(float)arg1 endValue:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (id)propertyList;
- (id)initWithPropertyList:(id)arg1;

@end

