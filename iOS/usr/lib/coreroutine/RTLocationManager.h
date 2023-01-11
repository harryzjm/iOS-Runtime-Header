//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/CLLocationManagerDelegate-Protocol.h>
#import <coreroutine/RTPurgable-Protocol.h>
#import <coreroutine/RTStoreManager-Protocol.h>

@class CLLocation, CLLocationManager, CLLocationManagerRoutine, NSMutableArray, NSMutableDictionary, NSString, RTAuthorizationManager, RTDefaultsManager, RTInvocationDispatcher, RTLocationStore, RTPlatform, RTPowerAssertion, RTTimer, RTTimerManager;

@interface RTLocationManager <CLLocationManagerDelegate, RTPurgable, RTStoreManager>
{
    _Bool _leechingLocations;
    _Bool _monitoringLocations;
    _Bool _updating;
    _Bool _enabled;
    _Bool _supported;
    _Bool _locationStoreAvailable;
    _Bool _persistingLocations;
    NSMutableArray *_currentLocationHandlers;
    RTTimer *_stopUpdatingLocationTimer;
    RTPowerAssertion *_powerAssertion;
    RTInvocationDispatcher *_dispatcher;
    CLLocationManager *_locationManager;
    CLLocationManagerRoutine *_locationManagerRoutine;
    CLLocation *_lastLocation;
    RTAuthorizationManager *_authorizationManager;
    RTLocationStore *_locationStore;
    RTPlatform *_platform;
    RTDefaultsManager *_defaultsManager;
    RTTimerManager *_timerManager;
    NSMutableDictionary *_regionEventHandlerDictionary;
    RTInvocationDispatcher *_regionEventDispatcher;
}

+ (id)vendedClasses;
+ (id)clientRegionForRegion:(id)arg1 clientIdentifierPrefix:(id)arg2;
+ (id)regionWithModifiedIdentifier:(id)arg1 forRegion:(id)arg2;
+ (_Bool)isValidIdentifier:(id)arg1;
+ (id)regionIdentifierDelimiterString;
+ (id)errorUnregisteredClientIdentifier:(id)arg1;
+ (id)errorDuplicateClientIdentifier:(id)arg1;
+ (id)errorUsedDelimiter;
+ (_Bool)supportsNotificationName:(id)arg1;
+ (id)stringForRegionCallbackType:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) RTInvocationDispatcher *regionEventDispatcher; // @synthesize regionEventDispatcher=_regionEventDispatcher;
@property(retain, nonatomic) NSMutableDictionary *regionEventHandlerDictionary; // @synthesize regionEventHandlerDictionary=_regionEventHandlerDictionary;
@property(retain, nonatomic) RTTimerManager *timerManager; // @synthesize timerManager=_timerManager;
@property(retain, nonatomic) RTDefaultsManager *defaultsManager; // @synthesize defaultsManager=_defaultsManager;
@property(retain, nonatomic) RTPlatform *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) RTLocationStore *locationStore; // @synthesize locationStore=_locationStore;
@property(retain, nonatomic) RTAuthorizationManager *authorizationManager; // @synthesize authorizationManager=_authorizationManager;
@property(retain, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(nonatomic) _Bool persistingLocations; // @synthesize persistingLocations=_persistingLocations;
@property(nonatomic) _Bool locationStoreAvailable; // @synthesize locationStoreAvailable=_locationStoreAvailable;
@property(nonatomic) _Bool supported; // @synthesize supported=_supported;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) CLLocationManagerRoutine *locationManagerRoutine; // @synthesize locationManagerRoutine=_locationManagerRoutine;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(retain, nonatomic) RTInvocationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) RTPowerAssertion *powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property(retain, nonatomic) RTTimer *stopUpdatingLocationTimer; // @synthesize stopUpdatingLocationTimer=_stopUpdatingLocationTimer;
@property(nonatomic) _Bool monitoringLocations; // @synthesize monitoringLocations=_monitoringLocations;
@property(nonatomic) _Bool leechingLocations; // @synthesize leechingLocations=_leechingLocations;
@property(retain, nonatomic) NSMutableArray *currentLocationHandlers; // @synthesize currentLocationHandlers=_currentLocationHandlers;
- (void)fetchEnumerableObjectsWithOptions:(id)arg1 offset:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (_Bool)_stopMonitoringAllRegionsForClientIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)stopMonitoringAllRegionsForClientIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)stopMonitoringForRegion:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)startMonitoringForRegion:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;
- (void)_unregisterForRegionEventsWithClientIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)unregisterForRegionEventsWithClientIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_registerForRegionEventsWithClientIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)registerForRegionEventsWithClientIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_performCallbackForClientRegion:(id)arg1 clientIdentifier:(id)arg2 regionEvent:(long long)arg3 callbackError:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (_Bool)_performCallbackForRegion:(id)arg1 regionEvent:(long long)arg2 callbackError:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)performCallbackForRegion:(id)arg1 regionEvent:(long long)arg2 callbackError:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)_clientIdentifierForRegion:(id)arg1;
- (id)_regionForClientRegion:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;
- (id)_fullIdentifierForClientIdentifier:(id)arg1 regionIdentifier:(id)arg2 error:(id *)arg3;
- (id)_prefixForClientIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)_isClientIdentifierAvailable:(id)arg1;
- (void)submitHarvestSample:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)onAuthorizationNotification:(id)arg1;
- (void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onUserSessionChangeNotification:(id)arg1;
- (void)onLocationStoreNotification:(id)arg1;
- (void)_removeLocationsPredating:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)onStopUpdatingLocationTimerExpiry;
- (void)fetchStoredLocationsWithContext:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchStoredLocationsWithContext:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchStoredLocationsWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchStoredLocationsWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchStoredLocationsCountFromDate:(id)arg1 toDate:(id)arg2 uncertainty:(double)arg3 limit:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (void)_fetchStoredLocationsCountFromDate:(id)arg1 toDate:(id)arg2 uncertainty:(double)arg3 limit:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (void)fetchCachedLocationWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchCurrentLocationWithHandler:(CDUnknownBlockType)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_storeLocations:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)shouldPersistLocations;
- (void)shouldMonitorLocations;
- (void)shouldLeechLocations;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)_shutdown;
- (void)_setup;
- (void)_createLocationManager;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (id)initWithAuthorizationManager:(id)arg1 defaultsManager:(id)arg2 locationStore:(id)arg3 platform:(id)arg4 routineLocationManager:(id)arg5 timerManager:(id)arg6;
- (id)init;
- (void)injectLocations:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
