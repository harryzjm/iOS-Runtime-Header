//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIColor.h>

@interface UIColor (MKAdditions)
+ (id)_mapkit_colorNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)_mapkit_colorNamed:(id)arg1;
+ (id)_mapkit_userLocationAccuracyRingFillColor;
+ (id)_mapkit_userLocationAccuracyRingStrokeColorSatellite;
+ (id)_mapkit_userLocationAccuracyRingStrokeColor;
+ (id)_mapkit_colorForTransitLine:(id)arg1;
+ (_Bool)_maps_getRed:(out double *)arg1 green:(out double *)arg2 blue:(out double *)arg3 fromHue:(double)arg4 saturation:(double)arg5 value:(double)arg6;
+ (_Bool)_getColorComponent:(double *)arg1 fromSubString:(id)arg2;
+ (id)_maps_colorFromHexString:(id)arg1;
- (id)_mapkit_blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (_Bool)_mapkit_getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (_Bool)_mapkit_isWhite;
- (id)_maps_hexString;
@end

