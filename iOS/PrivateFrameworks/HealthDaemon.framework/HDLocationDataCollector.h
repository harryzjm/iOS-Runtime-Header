//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/CLLocationManagerDelegate-Protocol.h>

@class CLInUseAssertion, CLLocationManager, CMElevation, HDHealthStoreServer, HDProfile, HKLocationSeriesSample, NSString, NSUUID;
@protocol HDLocationEventDelegate, OS_dispatch_queue;

@interface HDLocationDataCollector : NSObject <CLLocationManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
    CLLocationManager *_locationManager;
    CLInUseAssertion *_inUseAssertion;
    CMElevation *_elevation;
    int _lastStatus;
    HKLocationSeriesSample *_seriesSample;
    _Bool _didSaveLocationData;
    double _lastPausedTime;
    unsigned long long _elevationGain;
    unsigned long long _activityType;
    NSUUID *_workoutUUID;
    id <HDLocationEventDelegate> _delegate;
    HDHealthStoreServer *_server;
}

@property(retain, nonatomic) HDHealthStoreServer *server; // @synthesize server=_server;
@property(nonatomic) __weak id <HDLocationEventDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_queue_createSeriesSample;
- (void)_handleElevationData:(id)arg1 error:(id)arg2;
- (void)_queue_resumeWorkout;
- (void)resumeWorkout;
- (void)_queue_stopGPSUpdates;
- (void)_pauseLocationUpdates;
- (void)pauseWorkout;
- (void)_queue_start;
- (void)startWorkout;
- (void)endWorkout;
- (void)_queue_deleteCurrentRoute;
- (void)_queue_freezeCurrentLocationSeriesSample;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)initWithProfile:(id)arg1 server:(id)arg2 activityType:(unsigned long long)arg3 workoutUUID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
