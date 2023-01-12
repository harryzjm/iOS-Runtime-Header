//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPCharacteristicValueTransition.h>

@interface HAPCharacteristicValueTransition (NaturalLighting)
+ (_Bool)canCoalesceTransitionPoint1:(id)arg1 transitionPoint2:(id)arg2 ofCurve:(id)arg3;
+ (_Bool)updateTransition:(id)arg1 withCurve:(id)arg2 brightnessCharacteristic:(id)arg3 millisecondsElapsedSinceStartOfDay:(unsigned long long)arg4 transitionStartTimeInMilliseconds:(unsigned long long)arg5;
+ (id)transitionPointsByCoalescingTransitionPoints:(id)arg1 ofCurve:(id)arg2;
+ (id)naturalLightingValueTransitionWithLightProfile:(id)arg1 naturalLightingEnabled:(_Bool)arg2 startDate:(id)arg3 dataSource:(id)arg4;
- (id)naturalLightingActiveTransitionContextLightProfile:(id)arg1;
- (id)naturalLightingActiveTransitionContextForCharacteristic:(id)arg1;
@end

