//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AXWeatherUtilities : NSObject
{
}

+ (id)sharedInstance;
- (id)descriptionForWeatherWFConditionCode:(unsigned long long)arg1;
- (unsigned long long)_weatherCodeForGenericIconName:(id)arg1;
- (id)descriptionForPrecipitation:(id)arg1 weatherConditionCode:(unsigned long long)arg2;
- (id)descriptionForWeatherConditionImageName:(id)arg1;

@end
