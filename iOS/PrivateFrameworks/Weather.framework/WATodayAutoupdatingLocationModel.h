//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Weather/CLLocationManagerDelegate-Protocol.h>
#import <Weather/SynchronizedDefaultsDelegate-Protocol.h>

@class NSString, WFGeocodeRequest, WeatherLocationManager, WeatherPreferences;

@interface WATodayAutoupdatingLocationModel <CLLocationManagerDelegate, SynchronizedDefaultsDelegate>
{
    _Bool _isLocationTrackingEnabled;
    _Bool _locationServicesActive;
    WeatherLocationManager *_locationManager;
    WFGeocodeRequest *_geocodeRequest;
    unsigned long long _citySource;
    WeatherPreferences *_preferences;
    CDUnknownBlockType _WeatherLocationManagerGenerator;
}

@property(copy, nonatomic) CDUnknownBlockType WeatherLocationManagerGenerator; // @synthesize WeatherLocationManagerGenerator=_WeatherLocationManagerGenerator;
@property(retain, nonatomic) WeatherPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) unsigned long long citySource; // @synthesize citySource=_citySource;
@property(retain, nonatomic) WFGeocodeRequest *geocodeRequest; // @synthesize geocodeRequest=_geocodeRequest;
@property(nonatomic) _Bool locationServicesActive; // @synthesize locationServicesActive=_locationServicesActive;
@property(nonatomic) _Bool isLocationTrackingEnabled; // @synthesize isLocationTrackingEnabled=_isLocationTrackingEnabled;
@property(retain, nonatomic) WeatherLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)_persistStateWithModel:(id)arg1;
- (_Bool)_reloadForecastData:(_Bool)arg1;
- (void)ubiquitousDefaultsDidChange:(id)arg1;
- (void)_executeLocationUpdateForFirstWeatherCityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_executeLocationUpdateForLocalWeatherCityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_willDeliverForecastModel:(id)arg1;
- (void)_executeLocationUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_weatherPreferencesWereSynchronized:(id)arg1;
- (void)_teardownLocationManager;
- (void)_kickstartLocationManager;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)setCitySource:(unsigned long long)arg1 fireNotification:(_Bool)arg2;
- (id)forecastModel;
- (void)dealloc;
- (id)init;
- (id)initWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

