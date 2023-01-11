//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RTDeviceLocationPredictor, RTLearnedLocationManager, RTMotionActivityManager, RTPlatform, RTVisitManager, RTWiFiFootprintMonitor;

@interface RTScenarioTriggerManager
{
    unsigned long long _interestedInConstantFootprint;
    unsigned long long _interestedInSettledState;
    unsigned long long _interestedInStarkConnectionState;
    unsigned long long _interestedInVisits;
    RTDeviceLocationPredictor *_deviceLocationPredictor;
    RTLearnedLocationManager *_learnedLocationManager;
    RTMotionActivityManager *_motionActivityManager;
    unsigned long long _motionSettledState;
    RTPlatform *_platform;
    unsigned long long _settledState;
    unsigned long long _monitoredScenarioTriggerTypes;
    RTVisitManager *_visitManager;
    RTWiFiFootprintMonitor *_wifiFootprintMonitor;
    long long _wiFiFootprintState;
}

+ (id)scenarioTriggerTypeToNotificationName:(unsigned long long)arg1;
+ (id)settledStateName:(unsigned long long)arg1;
@property(nonatomic) long long wiFiFootprintState; // @synthesize wiFiFootprintState=_wiFiFootprintState;
@property(retain, nonatomic) RTWiFiFootprintMonitor *wifiFootprintMonitor; // @synthesize wifiFootprintMonitor=_wifiFootprintMonitor;
@property(retain, nonatomic) RTVisitManager *visitManager; // @synthesize visitManager=_visitManager;
@property(nonatomic) unsigned long long monitoredScenarioTriggerTypes; // @synthesize monitoredScenarioTriggerTypes=_monitoredScenarioTriggerTypes;
@property(nonatomic) unsigned long long settledState; // @synthesize settledState=_settledState;
@property(retain, nonatomic) RTPlatform *platform; // @synthesize platform=_platform;
@property(nonatomic) unsigned long long motionSettledState; // @synthesize motionSettledState=_motionSettledState;
@property(retain, nonatomic) RTMotionActivityManager *motionActivityManager; // @synthesize motionActivityManager=_motionActivityManager;
@property(retain, nonatomic) RTLearnedLocationManager *learnedLocationManager; // @synthesize learnedLocationManager=_learnedLocationManager;
@property(retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor; // @synthesize deviceLocationPredictor=_deviceLocationPredictor;
@property(nonatomic) unsigned long long interestedInVisits; // @synthesize interestedInVisits=_interestedInVisits;
@property(nonatomic) unsigned long long interestedInStarkConnectionState; // @synthesize interestedInStarkConnectionState=_interestedInStarkConnectionState;
@property(nonatomic) unsigned long long interestedInSettledState; // @synthesize interestedInSettledState=_interestedInSettledState;
@property(nonatomic) unsigned long long interestedInConstantFootprint; // @synthesize interestedInConstantFootprint=_interestedInConstantFootprint;
- (void).cxx_destruct;
- (void)onPostScenarioTriggerNotificationFromDefaults;
- (void)_postScenarioTriggerNotification:(id)arg1;
- (void)postScenarioTriggerNotification:(id)arg1;
- (void)onWiFiFootprintStateNotification:(id)arg1;
- (void)_onWiFiFootprintStateNotification:(id)arg1;
- (void)onMotionActivityManagerNotification:(id)arg1;
- (void)_onMotionActivityManagerNotification:(id)arg1;
- (void)onVisitManagerNotification:(id)arg1;
- (void)_onVisitManagerNotification:(id)arg1;
- (void)_handleVisit:(id)arg1;
- (void)_handleVisitIncident:(id)arg1 atLocationOfInterest:(id)arg2;
- (void)_checkForHeadedToWorkWithVisitIncident:(id)arg1 atLocationOfInterest:(id)arg2;
- (void)_checkForHeadedToHomeWithVisitIncident:(id)arg1 atLocationOfInterest:(id)arg2;
- (void)_checkForStayedLateWithVisitIncident:(id)arg1 atLocationOfInterest:(id)arg2;
- (void)_checkForArrivedEarlyWithVisitIncident:(id)arg1 atLocationOfInterest:(id)arg2;
- (void)_checkForAtFamiliarLocationWithVisitIncident:(id)arg1 atLocationOfInterest:(id)arg2;
- (void)_checkForLastTimeAtLocationWithVisitIncident:(id)arg1 atLocationOfInterest:(id)arg2;
- (void)_checkForFirstTimeAtLocationWithVisitIncident:(id)arg1 atLocationOfInterest:(id)arg2;
- (void)_checkForFirstTimeInNeighborhoodWithVisitIncident:(id)arg1 atLocationOfInterest:(id)arg2;
- (void)_checkForFirstTimeInCityWithVisitIncident:(id)arg1 atLocationOfInterest:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (unsigned long long)_notificationNameToScenarioTriggerType:(id)arg1;
- (void)_stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1;
- (void)_startMonitoringScenarioTriggerOfType:(unsigned long long)arg1;
- (void)_evaluateSettledState;
- (void)dealloc;
- (id)initWithDeviceLocationPredictor:(id)arg1 learnedLocationManager:(id)arg2 visitManager:(id)arg3 motionActivityManager:(id)arg4 wifiFootprintMonitor:(id)arg5 platform:(id)arg6;
- (id)init;
- (void)simulateScenarioTrigger:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

