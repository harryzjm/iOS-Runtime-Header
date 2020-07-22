//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WeatherFoundation/NSObject-Protocol.h>

@class NSDateComponents, NSDictionary, NSLocale, NSUUID, WFLocation, WFTaskIdentifier;

@protocol WFWeatherStore <NSObject>
- (void)cancelTaskWithIdentifier:(WFTaskIdentifier *)arg1;
- (void)airQualityForLocation:(WFLocation *)arg1 locale:(NSLocale *)arg2 requestIdentifier:(NSUUID *)arg3 options:(NSDictionary *)arg4 completionHandler:(void (^)(WFResponse *))arg5;
- (void)dailyForecastForLocation:(WFLocation *)arg1 requestIdentifier:(NSUUID *)arg2 completionHandler:(void (^)(WFResponse *))arg3;
- (void)hourlyForecastForLocation:(WFLocation *)arg1 requestIdentifier:(NSUUID *)arg2 completionHandler:(void (^)(WFResponse *))arg3;
- (void)forecastForLocation:(WFLocation *)arg1 atDate:(NSDateComponents *)arg2 requestIdentifier:(NSUUID *)arg3 options:(NSDictionary *)arg4 completionHandler:(void (^)(WFResponse *))arg5;
@end
