//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSLocale, NSString, WAForecastModelController;
@protocol WeatherUpdaterDelegate;

@interface TWCCityUpdater : NSObject
{
    id <WeatherUpdaterDelegate> _delegate;
    NSLocale *_locale;
    WAForecastModelController *_forecastModelController;
}

+ (id)sharedCityUpdater;
@property(retain, nonatomic) WAForecastModelController *forecastModelController; // @synthesize forecastModelController=_forecastModelController;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) __weak id <WeatherUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateWeatherForCities:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateWeatherForCities:(id)arg1;
- (void)updateWeatherForCity:(id)arg1;
@property(retain, nonatomic) NSString *trackingParameter;
- (void)cancel;
- (_Bool)isUpdatingCity:(id)arg1;
- (id)init;

@end

