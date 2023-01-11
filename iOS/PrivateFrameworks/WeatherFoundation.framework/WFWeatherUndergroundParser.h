//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface WFWeatherUndergroundParser
{
}

+ (unsigned long long)conditionFromWeatherUndergroundPhrase:(id)arg1;
+ (id)componentsForDailyForecasts;
+ (id)componentsForHourlyForecasts;
+ (id)componentsForCurrentForecast;
+ (unsigned long long)expectedDailyForecastCount;
+ (unsigned long long)expectedHourlyForecastCount;
- (id)dateComponentsFromUTCDict:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (id)sanitizedTemperatureForCelsiusKeyPath:(id)arg1 fahrenheitKeyPath:(id)arg2 dict:(id)arg3;
- (id)sanitizedNumberForKeyPath:(id)arg1 dict:(id)arg2;
- (void)logParsingErrorAtKeyPath:(id)arg1 error:(id *)arg2;
- (id)parseHistoricalForecast:(id)arg1 date:(id)arg2 error:(id *)arg3;
- (id)parseForecastData:(id)arg1 date:(id)arg2 error:(id *)arg3;

@end

