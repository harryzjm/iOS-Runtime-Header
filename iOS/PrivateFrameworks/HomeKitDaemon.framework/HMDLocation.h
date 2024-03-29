//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSHashTable, NSMapTable, NSMutableSet, NSObject, NSString;
@protocol HMDCLLocationManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDLocation : HMFObject
{
    _Bool _beingConfigured;
    int _authStatus;
    long long _locationAuthorized;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    id <HMDCLLocationManager> _locationManager;
    NSHashTable *_singleLocationDelegates;
    NSMutableSet *_batchLocationContexts;
    NSMapTable *_regionStateDelegatesByRegionIdentifier;
    NSMapTable *_pendingRegionMonitoringRequests;
    NSMapTable *_pendingRegionCallbacks;
    NSMapTable *_regionStates;
}

+ (void)timeZoneISOCountryCodeForCLLocationAsync:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (_Bool)isAccurateLocation:(id)arg1;
+ (id)nextSunsetTimeForLocation:(id)arg1 date:(id)arg2;
+ (id)sunsetTimeForLocation:(id)arg1;
+ (id)nextSunriseTimeForLocation:(id)arg1 date:(id)arg2;
+ (id)sunriseTimeForLocation:(id)arg1;
+ (id)findEvent:(id)arg1 withGeo:(id)arg2;
+ (id)_getAlmanacWithLocation:(id)arg1 date:(id)arg2;
+ (id)_getAlmanacWithLocation:(id)arg1;
+ (id)logCategory;
+ (id)bundleForLocationManager;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(nonatomic) _Bool beingConfigured; // @synthesize beingConfigured=_beingConfigured;
@property(readonly, nonatomic) NSMapTable *regionStates; // @synthesize regionStates=_regionStates;
@property(readonly, nonatomic) NSMapTable *pendingRegionCallbacks; // @synthesize pendingRegionCallbacks=_pendingRegionCallbacks;
@property(readonly, nonatomic) NSMapTable *pendingRegionMonitoringRequests; // @synthesize pendingRegionMonitoringRequests=_pendingRegionMonitoringRequests;
@property(readonly, nonatomic) NSMapTable *regionStateDelegatesByRegionIdentifier; // @synthesize regionStateDelegatesByRegionIdentifier=_regionStateDelegatesByRegionIdentifier;
@property(readonly, nonatomic) NSMutableSet *batchLocationContexts; // @synthesize batchLocationContexts=_batchLocationContexts;
@property(readonly, nonatomic) NSHashTable *singleLocationDelegates; // @synthesize singleLocationDelegates=_singleLocationDelegates;
@property(nonatomic) int authStatus; // @synthesize authStatus=_authStatus;
@property(readonly, nonatomic) id <HMDCLLocationManager> locationManager; // @synthesize locationManager=_locationManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property(nonatomic) long long locationAuthorized; // @synthesize locationAuthorized=_locationAuthorized;
- (void)requestMicroLocationLocalizationScanWithMetadata:(id)arg1;
- (void)requestMicroLocationRecordingScanWithMetadata:(id)arg1;
- (void)getCoreRoutineLOIForCurrentLocationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getLOIForCurrentLocationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_handleDeterminedState:(long long)arg1 forRegion:(id)arg2;
- (void)beingConfigured:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateExitForRegion:(id)arg1;
- (void)_updateEntryForRegion:(id)arg1;
- (void)_updateRegionState:(long long)arg1 forRegion:(id)arg2;
- (id)_delegateforRegion:(id)arg1;
- (void)_updateWithLocationAuthorizationStatus:(int)arg1;
- (void)_stopExtractingBatchLocationsForContext:(id)arg1;
- (void)_startExtractingBatchLocationsForDelegate:(id)arg1;
- (void)_notifySingleLocationDelegate:(id)arg1 withLocation:(id)arg2;
- (void)_notifySingleLocationDelegatesWithLocation:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)deregisterForRegionUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerForRegionUpdate:(id)arg1 withDelegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getCurrentLocation;
- (void)_extractSingleLocationForDelegate:(id)arg1;
- (_Bool)_canLocationBeExtracted;
- (void)startExtractingSingleLocationForDelegate:(id)arg1;
- (void)stopExtractingBatchLocationsForDelegate:(id)arg1;
- (void)startExtractingBatchLocationsForDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithLocationManager:(id)arg1 handlerQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

