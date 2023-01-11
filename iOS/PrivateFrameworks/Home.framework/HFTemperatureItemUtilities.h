//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HFTemperatureItemUtilities : NSObject
{
}

+ (id)integerTemperatureRangeWithinNumberRange:(id)arg1 representsCelsius:(_Bool)arg2;
+ (long long)_heatingCoolingValueForCurrentHeaterCoolerState:(long long)arg1 isActive:(_Bool)arg2;
+ (id)targetTemperatureValueInResponse:(id)arg1;
+ (id)targetHeatingCoolingModeValueInResponse:(id)arg1;
+ (long long)_heatingCoolingValueForTargetHeaterCoolerState:(long long)arg1 isActive:(_Bool)arg2;
+ (id)currentHeatingCoolingModeValueInResponse:(id)arg1;

@end
