//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Weather/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSDate, NSString, NSTimer, WeatherPreferences;
@protocol CLLocationManagerDelegate;

@interface WeatherLocationManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _locationTrackingIsReady;
    _Bool _locationUpdatesEnabled;
    _Bool _isInternalBuild;
    int _authorizationStatus;
    float _lastLocationAccuracy;
    NSString *_effectiveBundleIdentifier;
    id <CLLocationManagerDelegate> _delegate;
    CLLocationManager *_locationManager;
    unsigned long long _updateInterval;
    double _oldestAllowedUpdateTime;
    NSTimer *_delayedUpdateTimer;
    NSTimer *_accuracyFallbackTimer;
    WeatherPreferences *_preferences;
    NSDate *_lastLocationTimeStamp;
    double _lastLocationUpdateTime;
    double _nextPlannedUpdate;
    struct CLLocationCoordinate2D _lastLocationCoord;
}

+ (int)locationManagerAuthorizationWithEffectiveBundleId:(id)arg1;
+ (void)clearSharedLocationManager;
+ (id)sharedWeatherLocationManager;
@property(nonatomic) _Bool isInternalBuild; // @synthesize isInternalBuild=_isInternalBuild;
@property(nonatomic) double nextPlannedUpdate; // @synthesize nextPlannedUpdate=_nextPlannedUpdate;
@property(nonatomic) double lastLocationUpdateTime; // @synthesize lastLocationUpdateTime=_lastLocationUpdateTime;
@property(nonatomic) float lastLocationAccuracy; // @synthesize lastLocationAccuracy=_lastLocationAccuracy;
@property(copy, nonatomic) NSDate *lastLocationTimeStamp; // @synthesize lastLocationTimeStamp=_lastLocationTimeStamp;
@property(nonatomic) struct CLLocationCoordinate2D lastLocationCoord; // @synthesize lastLocationCoord=_lastLocationCoord;
@property(retain, nonatomic) WeatherPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) NSTimer *accuracyFallbackTimer; // @synthesize accuracyFallbackTimer=_accuracyFallbackTimer;
@property(retain, nonatomic) NSTimer *delayedUpdateTimer; // @synthesize delayedUpdateTimer=_delayedUpdateTimer;
@property(nonatomic) double oldestAllowedUpdateTime; // @synthesize oldestAllowedUpdateTime=_oldestAllowedUpdateTime;
@property(nonatomic) unsigned long long updateInterval; // @synthesize updateInterval=_updateInterval;
@property(nonatomic) int authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) _Bool locationUpdatesEnabled; // @synthesize locationUpdatesEnabled=_locationUpdatesEnabled;
@property(nonatomic) _Bool locationTrackingIsReady; // @synthesize locationTrackingIsReady=_locationTrackingIsReady;
@property(nonatomic) __weak id <CLLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *effectiveBundleIdentifier; // @synthesize effectiveBundleIdentifier=_effectiveBundleIdentifier;
- (void).cxx_destruct;
- (id)location;
- (void)cancelAccuracyFallbackTimer;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)updateLocation:(id)arg1;
- (void)accuracyFallbackTimerDidFire:(id)arg1;
- (void)delayedUpdateTimerDidFire:(id)arg1;
- (void)stopLocationUpdate;
- (void)clearLocalWeatherUpdateState;
- (void)clearLastLocationUpdateTime;
- (void)forceLocationUpdate;
- (void)cancelDelayedUpdateTimer;
- (void)scheduleDelayedUpdate:(double)arg1;
- (_Bool)isLocationWithInRange:(id)arg1;
- (_Bool)hasCrossedHourBoundary;
- (_Bool)isCacheOutOfDate;
- (_Bool)isLocalStaleOrOutOfDate;
- (void)updateLocationWithNoConditionCheck;
- (void)setLocationTrackingActive:(_Bool)arg1;
- (void)monitorLocationAuthorization;
- (void)setLocationTrackingReady:(_Bool)arg1 activelyTracking:(_Bool)arg2 watchKitExtension:(_Bool)arg3 shouldRequestAuthorization:(_Bool)arg4;
- (void)setLocationTrackingReady:(_Bool)arg1 activelyTracking:(_Bool)arg2 watchKitExtension:(_Bool)arg3;
- (int)forceLoadingAuthorizationStatus;
- (void)askForLocationManagerAuthorization;
- (_Bool)localWeatherAuthorized;
@property(readonly, nonatomic) double distanceFilter;
- (void)dealloc;
- (id)init;
- (id)initWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;
- (id)initWithPreferences:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

