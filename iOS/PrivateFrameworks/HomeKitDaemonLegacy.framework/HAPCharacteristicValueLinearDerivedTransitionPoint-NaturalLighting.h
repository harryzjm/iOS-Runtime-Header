//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPCharacteristicValueLinearDerivedTransitionPoint.h>

@interface HAPCharacteristicValueLinearDerivedTransitionPoint (NaturalLighting)
+ (id)transitionPointWithPreviousTransitionPoint:(id)arg1 nextTransitionPoint:(id)arg2 timeElapsedSincePreviousTransitionPoint:(unsigned long long)arg3 minimumBrightness:(long long)arg4 maximumBrightness:(long long)arg5;
+ (id)transitionPointWithMinimumBrightness:(long long)arg1 minimumBrightnessColorTemperature:(long long)arg2 maximumBrightness:(long long)arg3 maximumBrightnessColorTemperature:(long long)arg4 targetCompletionDuration:(unsigned long long)arg5;
- (long long)colorTemperatureForBrightness:(long long)arg1;
@end

