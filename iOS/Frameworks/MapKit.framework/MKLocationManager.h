//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <MapKit/MKLocationProviderDelegate-Protocol.h>

@class CLHeading, CLLocation, GEOLocation, GEOLocationShifter, NSBundle, NSError, NSHashTable, NSLock, NSMutableArray, NSString, NSTimer;
@protocol MKLocationProvider, MNLocationRecorder;

@interface MKLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MKLocationProviderDelegate>
{
    id <MKLocationProvider> _locationProvider;
    NSHashTable *_locationObservers;
    NSHashTable *_locationListeners;
    NSHashTable *_headingObservers;
    CLLocation *_lastLocation;
    CLLocation *_lastGoodLocation;
    double _lastLocationUpdateTime;
    _Bool _isLastLocationStale;
    _Bool _lastLocationPushed;
    _Bool _trackingLocation;
    _Bool _trackingHeading;
    id <MNLocationRecorder> _locationRecorder;
    double _applicationResumeTime;
    double _applicationSuspendTime;
    double _headingUpdateTime;
    double _locationAccuracyUpdateTime;
    double _locationUpdateStartTime;
    _Bool _isReceivingAccurateLocations;
    NSMutableArray *_waitForAccurateLocationsHandlers;
    NSTimer *_waitForAccurateLocationsTimer;
    double _lastLocationReportTime;
    GEOLocationShifter *_locationShifter;
    CLHeading *_throttledHeading;
    CLHeading *_heading;
    NSTimer *_headingThrottlingTimer;
    CDUnknownBlockType _networkActivity;
    _Bool _enabled;
    _Bool _useCourseForHeading;
    _Bool _logStartStopLocationUpdates;
    double _lastVehicleHeading;
    double _lastVehicleSpeed;
    double _lastVehicleHeadingUpdateTime;
    double _lastVehicleSpeedUpdateTime;
    int _consecutiveOutOfCourseCount;
    double _navCourse;
    CDUnknownBlockType _locationCorrector;
    double _minimumLocationUpdateInterval;
    _Bool _allowOldLocations;
    _Bool _continuedAfterBecomingInactive;
    _Bool _suspended;
    NSMutableArray *_recentLocationUpdateIntervals;
    NSLock *_lastLocationLock;
    NSLock *_observersLock;
    _Bool _hasCustomDesiredAccuracy;
    _Bool _continuesWhileInactive;
    NSError *_locationError;
}

+ (id)timeoutError;
+ (id)sharedLocationManager;
+ (void)setCanMonitorWiFiStatus:(_Bool)arg1;
@property(nonatomic) double minimumLocationUpdateInterval; // @synthesize minimumLocationUpdateInterval=_minimumLocationUpdateInterval;
@property(nonatomic) _Bool logStartStopLocationUpdates; // @synthesize logStartStopLocationUpdates=_logStartStopLocationUpdates;
@property(nonatomic) _Bool allowOldLocations; // @synthesize allowOldLocations=_allowOldLocations;
@property(readonly, nonatomic, getter=wasLastLocationPushed) _Bool lastLocationPushed; // @synthesize lastLocationPushed=_lastLocationPushed;
@property(copy, nonatomic) CDUnknownBlockType locationCorrector; // @synthesize locationCorrector=_locationCorrector;
@property(readonly, nonatomic) double navigationCourse; // @synthesize navigationCourse=_navCourse;
@property(nonatomic) _Bool continuesWhileInactive; // @synthesize continuesWhileInactive=_continuesWhileInactive;
@property(nonatomic) _Bool useCourseForHeading; // @synthesize useCourseForHeading=_useCourseForHeading;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) id <MNLocationRecorder> locationRecorder; // @synthesize locationRecorder=_locationRecorder;
@property(retain, nonatomic) CLHeading *throttledHeading; // @synthesize throttledHeading=_throttledHeading;
@property(readonly, nonatomic) CLHeading *heading; // @synthesize heading=_heading;
@property(copy, nonatomic) CDUnknownBlockType networkActivity; // @synthesize networkActivity=_networkActivity;
@property(readonly, nonatomic) NSError *locationError; // @synthesize locationError=_locationError;
@property(readonly, nonatomic) _Bool isLastLocationStale; // @synthesize isLastLocationStale=_isLastLocationStale;
- (void).cxx_destruct;
- (void)stopVehicleHeadingUpdate;
- (void)startVehicleHeadingUpdate;
- (void)stopVehicleSpeedUpdate;
- (void)startVehicleSpeedUpdate;
- (void)stopHeadingUpdateWithObserver:(id)arg1;
- (void)startHeadingUpdateWithObserver:(id)arg1;
- (void)_setTrackingHeading:(_Bool)arg1;
- (id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(CDUnknownBlockType)arg2 timeout:(double)arg3 maxLocationAge:(double)arg4;
- (id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(CDUnknownBlockType)arg2 timeout:(double)arg3;
- (id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (id)singleLocationUpdateWithHandler:(CDUnknownBlockType)arg1;
- (void)_waitForAccurateLocationsTimerFired:(id)arg1;
- (void)waitForAccurateLocationWithHandler:(CDUnknownBlockType)arg1;
- (void)stopLocationUpdateWithObserver:(id)arg1;
- (void)startLocationUpdateWithObserver:(id)arg1;
- (void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2;
- (void)stopListeningForLocationUpdates:(id)arg1;
- (void)listenForLocationUpdates:(id)arg1;
- (void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)_setIsReceivingAccurateLocations:(_Bool)arg1;
- (void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)pushLocation:(id)arg1;
- (_Bool)_shouldAllowLocationUpdateInterval:(double)arg1;
- (void)dismissHeadingCalibrationDisplay;
- (void)dampenGPSLocationAccuracy:(id *)arg1 oldLocationSource:(int)arg2;
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(nonatomic) long long activityType;
@property(nonatomic) _Bool matchInfoEnabled;
@property(nonatomic) double distanceFilter;
@property(nonatomic) double desiredAccuracy;
- (_Bool)isLocationServicesPossiblyAvailable:(id *)arg1;
- (void)_setTrackingLocation:(_Bool)arg1;
- (void)_syncLocationProviderWithTracking;
- (void)reset;
- (void)_reportHeadingFailureWithError:(id)arg1;
- (void)_reportHeadingSuccess;
- (void)_reportLocationReset;
- (void)_reportLocationSuccess;
- (void)_reportLocationFailureWithError:(id)arg1;
- (void)_reportLocationStatus:(SEL)arg1;
- (void)_suspend;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)resetAfterResumeIfNecessary;
- (_Bool)_isTimeToResetOnResume;
@property(readonly, nonatomic) _Bool locationShiftEnabled;
@property(readonly, nonatomic) _Bool hasLocation;
- (void)setHeading:(id)arg1;
@property(readonly, nonatomic) double vehicleHeadingOrCourse;
@property(readonly, nonatomic) double currentVehicleSpeed;
@property(readonly, nonatomic) double currentVehicleHeading;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)requestWhenInUseAuthorization;
@property(copy, nonatomic) CDUnknownBlockType authorizationRequestBlock;
@property(nonatomic) long long headingOrientation;
@property(readonly, nonatomic) GEOLocation *courseCorrectedLocation;
@property(readonly, nonatomic) GEOLocation *gridSnappedCurrentLocation;
@property(readonly, nonatomic) GEOLocation *currentLocation;
@property(readonly, nonatomic) double headingUpdateTimeInterval;
- (void)setLastLocation:(id)arg1;
@property(readonly, nonatomic) CLLocation *lastProviderLocation;
@property(readonly, nonatomic) CLLocation *lastGoodLocation; // @synthesize lastGoodLocation=_lastGoodLocation;
@property(readonly, nonatomic) CLLocation *lastLocation;
@property(readonly, nonatomic) int lastLocationSource;
@property(retain, nonatomic) id <MKLocationProvider> locationProvider;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) _Bool locationServicesPreferencesDialogEnabled;
@property(readonly, nonatomic) _Bool isHeadingServicesAvailable;
@property(readonly, nonatomic) _Bool isLocationServicesPossiblyAvailable;
@property(readonly, nonatomic) _Bool isLocationServicesAvailable;
@property(readonly, nonatomic) _Bool isLocationServicesRestricted;
@property(readonly, nonatomic) _Bool isLocationServicesDenied;
@property(readonly, nonatomic) _Bool isLocationServicesApproved;
@property(readonly, nonatomic, getter=isLocationServicesAuthorizationNeeded) _Bool locationServicesAuthorizationNeeded;
@property(readonly, nonatomic) _Bool isLocationServicesEnabled;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)_useCoreLocationProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

