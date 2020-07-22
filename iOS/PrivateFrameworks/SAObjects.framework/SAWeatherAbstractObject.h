//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SAWeatherAirQualityObject, SAWeatherCurrentConditions, SAWeatherLocation, SAWeatherUnits;

@interface SAWeatherAbstractObject
{
}

+ (id)abstractObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)abstractObject;
@property(copy, nonatomic) NSString *weatherRequest;
@property(retain, nonatomic) SAWeatherLocation *weatherLocation;
@property(retain, nonatomic) SAWeatherUnits *units;
@property(copy, nonatomic) NSArray *hourlyForecasts;
@property(copy, nonatomic) NSString *extendedForecastUrl;
@property(copy, nonatomic) NSArray *dailyForecasts;
@property(retain, nonatomic) SAWeatherCurrentConditions *currentConditions;
@property(retain, nonatomic) SAWeatherAirQualityObject *airQuality;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

