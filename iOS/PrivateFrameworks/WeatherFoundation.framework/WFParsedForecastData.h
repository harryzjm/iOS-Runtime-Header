//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, WFWeatherConditions;

@interface WFParsedForecastData : NSObject
{
    NSData *_rawData;
    WFWeatherConditions *_currentConditions;
    NSArray *_dailyForecasts;
    NSArray *_hourlyForecasts;
}

@property(copy, nonatomic) NSArray *hourlyForecasts; // @synthesize hourlyForecasts=_hourlyForecasts;
@property(copy, nonatomic) NSArray *dailyForecasts; // @synthesize dailyForecasts=_dailyForecasts;
@property(copy, nonatomic) WFWeatherConditions *currentConditions; // @synthesize currentConditions=_currentConditions;
@property(copy, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
- (void).cxx_destruct;

@end

