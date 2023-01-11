//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation, NSDate, NSMapTable, NSNumber, NSObject, RTAuthorizationManager, RTInvocationDispatcher, RTLocationAwarenessManagerConfig, RTLocationAwarenessMetrics, RTLocationManager, RTMetricManager, RTMotionActivityManager, RTPowerAssertion, RTWiFiManager, RTXPCActivityManager;
@protocol OS_dispatch_source;

@interface RTLocationAwarenessManager
{
    _Bool _activeRequestInterrupted;
    _Bool _activeRequestFulfilled;
    _Bool _activeRequestCoarseLocationReceived;
    _Bool _activeRequestLocationServiceOn;
    _Bool _activeRequestRoutineOn;
    _Bool _activeRequestWifiOn;
    RTLocationAwarenessMetrics *_metrics;
    RTMetricManager *_metricManager;
    RTAuthorizationManager *_authorizationManager;
    RTWiFiManager *_wifiManager;
    CLLocation *_lastLocationAnyPositive;
    CLLocation *_lastLocationLessThan200m;
    CLLocation *_lastLocationLessThan55m;
    CLLocation *_lastLocationLessThan20m;
    CLLocation *_lastLocationLessThan10m;
    NSDate *_scheduledHeartbeatFiringTime;
    NSDate *_scheduledRestTimerFiringTime;
    RTLocationAwarenessManagerConfig *_config;
    struct NSMapTable *_requesterToHeartbeatBucket;
    struct NSMapTable *_heartbeatBucketToRequesters;
    RTLocationManager *_locationManager;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    NSObject<OS_dispatch_source> *_restTimer;
    NSDate *_activeOnset;
    NSNumber *_minHeartbeatBucket;
    CLLocation *_lastValidLocation;
    RTMotionActivityManager *_motionActivityManager;
    RTPowerAssertion *_xpcActivityPowerAssertion;
    RTXPCActivityManager *_xpcActivityManager;
    NSDate *_stationaryStartTimestamp;
    RTInvocationDispatcher *_heartbeatBuffer;
}

+ (id)powerAssertion;
+ (void)pauseDispatchTimer:(id)arg1;
+ (void)invalidateDispatchTimer:(id)arg1;
+ (id)createDefaultDispatchTimerWithQueue:(id)arg1;
+ (long long)localHourFromTimestamp:(id)arg1;
@property(copy, nonatomic) RTInvocationDispatcher *heartbeatBuffer; // @synthesize heartbeatBuffer=_heartbeatBuffer;
@property(copy, nonatomic) NSDate *stationaryStartTimestamp; // @synthesize stationaryStartTimestamp=_stationaryStartTimestamp;
@property(retain, nonatomic) RTXPCActivityManager *xpcActivityManager; // @synthesize xpcActivityManager=_xpcActivityManager;
@property(retain, nonatomic) RTPowerAssertion *xpcActivityPowerAssertion; // @synthesize xpcActivityPowerAssertion=_xpcActivityPowerAssertion;
@property(retain, nonatomic) RTMotionActivityManager *motionActivityManager; // @synthesize motionActivityManager=_motionActivityManager;
@property(retain, nonatomic) CLLocation *lastValidLocation; // @synthesize lastValidLocation=_lastValidLocation;
@property(retain, nonatomic) NSNumber *minHeartbeatBucket; // @synthesize minHeartbeatBucket=_minHeartbeatBucket;
@property(copy, nonatomic) NSDate *activeOnset; // @synthesize activeOnset=_activeOnset;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *restTimer; // @synthesize restTimer=_restTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *heartbeatTimer; // @synthesize heartbeatTimer=_heartbeatTimer;
@property(retain, nonatomic) RTLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSMapTable *heartbeatBucketToRequesters; // @synthesize heartbeatBucketToRequesters=_heartbeatBucketToRequesters;
@property(retain, nonatomic) NSMapTable *requesterToHeartbeatBucket; // @synthesize requesterToHeartbeatBucket=_requesterToHeartbeatBucket;
@property(readonly, nonatomic) RTLocationAwarenessManagerConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool activeRequestWifiOn; // @synthesize activeRequestWifiOn=_activeRequestWifiOn;
@property(nonatomic) _Bool activeRequestRoutineOn; // @synthesize activeRequestRoutineOn=_activeRequestRoutineOn;
@property(nonatomic) _Bool activeRequestLocationServiceOn; // @synthesize activeRequestLocationServiceOn=_activeRequestLocationServiceOn;
@property(nonatomic) _Bool activeRequestCoarseLocationReceived; // @synthesize activeRequestCoarseLocationReceived=_activeRequestCoarseLocationReceived;
@property(nonatomic) _Bool activeRequestFulfilled; // @synthesize activeRequestFulfilled=_activeRequestFulfilled;
@property(nonatomic) _Bool activeRequestInterrupted; // @synthesize activeRequestInterrupted=_activeRequestInterrupted;
@property(retain, nonatomic) NSDate *scheduledRestTimerFiringTime; // @synthesize scheduledRestTimerFiringTime=_scheduledRestTimerFiringTime;
@property(retain, nonatomic) NSDate *scheduledHeartbeatFiringTime; // @synthesize scheduledHeartbeatFiringTime=_scheduledHeartbeatFiringTime;
@property(retain, nonatomic) CLLocation *lastLocationLessThan10m; // @synthesize lastLocationLessThan10m=_lastLocationLessThan10m;
@property(retain, nonatomic) CLLocation *lastLocationLessThan20m; // @synthesize lastLocationLessThan20m=_lastLocationLessThan20m;
@property(retain, nonatomic) CLLocation *lastLocationLessThan55m; // @synthesize lastLocationLessThan55m=_lastLocationLessThan55m;
@property(retain, nonatomic) CLLocation *lastLocationLessThan200m; // @synthesize lastLocationLessThan200m=_lastLocationLessThan200m;
@property(retain, nonatomic) CLLocation *lastLocationAnyPositive; // @synthesize lastLocationAnyPositive=_lastLocationAnyPositive;
@property(retain, nonatomic) RTWiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(retain, nonatomic) RTAuthorizationManager *authorizationManager; // @synthesize authorizationManager=_authorizationManager;
@property(retain, nonatomic) RTMetricManager *metricManager; // @synthesize metricManager=_metricManager;
@property(retain, nonatomic) RTLocationAwarenessMetrics *metrics; // @synthesize metrics=_metrics;
- (void).cxx_destruct;
- (double)intervalForHeartbeatBucket:(id)arg1;
- (id)heartbeatBucketForInterval:(double)arg1;
- (_Bool)coarseLocation:(id)arg1;
- (_Bool)validLocation:(id)arg1;
- (_Bool)validInterval:(double)arg1;
- (void)resetOneShotDispatchTimer:(id)arg1 withStart:(unsigned long long)arg2 eventHandler:(CDUnknownBlockType)arg3;
- (void)onMotionActivityManagerNotificationActivityNotification:(id)arg1;
- (void)onNoOpLocationNotification:(id)arg1;
- (double)nextFiringDelayWithHeartbeatInterval:(double)arg1 starvingDuration:(double)arg2;
- (double)starvingDurationTillNow;
- (void)onLeechedLocationNotification:(id)arg1;
- (void)onRest;
- (void)considerRequestingForLocation;
- (void)considerUpdatingHeartbeatDelayMetrics;
- (void)heartbeatTasks;
- (void)onHeartbeat;
- (void)adjustHeartbeatTimer;
- (void)updateMinHeartbeatBucket;
- (void)_updateXPCActivityForObserverCount:(unsigned long long)arg1;
- (void)hourlySingleShotWithHandler:(CDUnknownBlockType)arg1;
- (void)removeLocationHeartbeatRequester:(id)arg1;
- (_Bool)addLocationHeartbeatRequester:(id)arg1 interval:(double)arg2 error:(id *)arg3;
- (void)_shutdown;
- (void)_setup;
- (id)initWithLocationManager:(id)arg1 config:(id)arg2 metricManager:(id)arg3 motionActivityManager:(id)arg4 authorizationManager:(id)arg5 wifiManager:(id)arg6 xpcActivityManager:(id)arg7;
- (id)init;
- (void)logActiveRequestStatus;
- (void)resetActiveRequestSummaryVariables;
- (void)incrementBasicHistogram:(id)arg1 forTimestamp:(id)arg2;
- (_Bool)activeRequestInterruptedCheck;
- (void)considerUpdateActiveRequestMetrics;
- (void)updateHeartbeatTimerDelayForTimestamp:(id)arg1 withDelay:(double)arg2;
- (void)considerSubmittingCurrentMetrics;
- (id)updateWithLocation:(id)arg1 oneIntervalHistogram:(id)arg2 lastLocation:(id)arg3;
- (void)updateLocationAwarenessHistogramsWithLocations:(id)arg1;
- (double)metricAge;

@end

