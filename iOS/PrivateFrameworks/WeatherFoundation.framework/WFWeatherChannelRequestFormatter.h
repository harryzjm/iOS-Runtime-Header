//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFAirQualityRequestFormatter-Protocol.h>
#import <WeatherFoundation/WFForecastRequestFormatter-Protocol.h>

@class NSString;

@interface WFWeatherChannelRequestFormatter : NSObject <WFForecastRequestFormatter, WFAirQualityRequestFormatter>
{
}

+ (id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2 error:(id *)arg3;
+ (id)forecastRequestForLocation:(id)arg1 date:(id)arg2;
+ (id)hostURLForService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

