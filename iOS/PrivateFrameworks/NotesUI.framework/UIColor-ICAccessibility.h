//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIColor.h>

@class NSString;

@interface UIColor (ICAccessibility)
+ (id)icaxHueNameForValue:(double)arg1;
- (id)_icaxLightnessSaturationHueFormatString;
- (id)_icaxSaturationHueFormatString;
- (id)_icaxLightnessHueFormatString;
- (id)_icaxColorDescriptionForHue:(id)arg1 saturation:(id)arg2 lightness:(id)arg3;
@property(readonly, nonatomic) NSString *icaxDescriptionWithLuma;
- (id)icaxSaturationModifier;
- (id)icaxLightnessModifier;
- (id)icaxHueName;
@property(readonly, nonatomic) NSString *icaxApproximateColorDescription;
@property(readonly, nonatomic) double icaxLuma;
- (double)icaxSaturation;
- (double)icaxHue;
@end

