//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNaturalLightingCurve : HMFObject
{
    unsigned long long _version;
    NSArray *_transitionPoints;
    long long _minimumBrightness;
    long long _maximumBrightness;
    long long _minimumColorTemperature;
    long long _maximumColorTemperature;
    unsigned long long _colorTemperatureNotifyValueChangeThreshold;
    unsigned long long _colorTemperatureNotifyIntervalThresholdInMilliseconds;
    unsigned long long _colorTemperatureUpdateIntervalInMilliseconds;
}

+ (id)logCategory;
+ (long long)colorTemperatureMiredsFromKelvins:(long long)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property unsigned long long colorTemperatureUpdateIntervalInMilliseconds; // @synthesize colorTemperatureUpdateIntervalInMilliseconds=_colorTemperatureUpdateIntervalInMilliseconds;
@property unsigned long long colorTemperatureNotifyIntervalThresholdInMilliseconds; // @synthesize colorTemperatureNotifyIntervalThresholdInMilliseconds=_colorTemperatureNotifyIntervalThresholdInMilliseconds;
@property unsigned long long colorTemperatureNotifyValueChangeThreshold; // @synthesize colorTemperatureNotifyValueChangeThreshold=_colorTemperatureNotifyValueChangeThreshold;
@property(readonly) long long maximumColorTemperature; // @synthesize maximumColorTemperature=_maximumColorTemperature;
@property(readonly) long long minimumColorTemperature; // @synthesize minimumColorTemperature=_minimumColorTemperature;
@property(readonly) long long maximumBrightness; // @synthesize maximumBrightness=_maximumBrightness;
@property(readonly) long long minimumBrightness; // @synthesize minimumBrightness=_minimumBrightness;
@property(readonly, copy) NSArray *transitionPoints; // @synthesize transitionPoints=_transitionPoints;
@property(readonly) unsigned long long version; // @synthesize version=_version;
- (id)transitionPointsWithmillisecondsElapsedSinceStartOfDay:(unsigned long long)arg1;
- (id)colorTemperatureForBrightness:(long long)arg1 millisecondsElapsedSinceStartOfDay:(unsigned long long)arg2;
@property(readonly) unsigned long long checksum;
- (id)attributeDescriptions;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurve:(id)arg1 minimumColorTemperature:(long long)arg2 maximumColorTemperature:(long long)arg3;
- (id)initWithVersion:(unsigned long long)arg1 transitionPoints:(id)arg2 minimumBrightness:(long long)arg3 maximumBrightness:(long long)arg4 minimumColorTemperature:(long long)arg5 maximumColorTemperature:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

