//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/NSXPCListenerDelegate-Protocol.h>

@class NSString, RTAccountManager, RTActionManager, RTAssetManager, RTAuthorizationManager, RTDeviceLocationPredictor, RTEventAgentManager, RTEventModelProvider, RTFingerprintManager, RTLearnedLocationManager, RTLocationManager, RTLocationStore, RTMapServiceManager, RTPersistenceManager, RTPlatform, RTPredictedApplicationManager, RTPurgeManager, RTRouteManager, RTScenarioTriggerManager, RTVehicleLocationProvider, RTVisitManager, RTWiFiManager;

@interface RTInternalClientListener <NSXPCListenerDelegate>
{
    RTPlatform *_platform;
    RTPredictedApplicationManager *_predictedApplicationManager;
    RTScenarioTriggerManager *_scenarioTriggerManager;
    RTVehicleLocationProvider *_vehicleLocationProvider;
    RTAuthorizationManager *_authorizationManager;
    RTDeviceLocationPredictor *_deviceLocationPredictor;
    RTPurgeManager *_purgeManager;
    RTActionManager *_actionManager;
    RTEventModelProvider *_eventModelProvider;
    RTVisitManager *_visitManager;
    RTAssetManager *_assetManager;
    RTLocationStore *_locationStore;
    RTLocationManager *_locationManager;
    RTEventAgentManager *_eventAgentManager;
    RTLearnedLocationManager *_learnedLocationManager;
    RTRouteManager *_routeManager;
    RTAccountManager *_accountManager;
    RTPersistenceManager *_persistenceManager;
    RTFingerprintManager *_fingerprintManager;
    RTWiFiManager *_wifiManager;
    RTMapServiceManager *_mapServiceManager;
}

@property(retain, nonatomic) RTMapServiceManager *mapServiceManager; // @synthesize mapServiceManager=_mapServiceManager;
@property(retain, nonatomic) RTWiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(retain, nonatomic) RTFingerprintManager *fingerprintManager; // @synthesize fingerprintManager=_fingerprintManager;
@property(retain, nonatomic) RTPersistenceManager *persistenceManager; // @synthesize persistenceManager=_persistenceManager;
@property(retain, nonatomic) RTAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) RTRouteManager *routeManager; // @synthesize routeManager=_routeManager;
@property(retain, nonatomic) RTLearnedLocationManager *learnedLocationManager; // @synthesize learnedLocationManager=_learnedLocationManager;
@property(retain, nonatomic) RTEventAgentManager *eventAgentManager; // @synthesize eventAgentManager=_eventAgentManager;
@property(retain, nonatomic) RTLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) RTLocationStore *locationStore; // @synthesize locationStore=_locationStore;
@property(retain, nonatomic) RTAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(retain, nonatomic) RTVisitManager *visitManager; // @synthesize visitManager=_visitManager;
@property(retain, nonatomic) RTEventModelProvider *eventModelProvider; // @synthesize eventModelProvider=_eventModelProvider;
@property(retain, nonatomic) RTActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) RTPurgeManager *purgeManager; // @synthesize purgeManager=_purgeManager;
@property(retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor; // @synthesize deviceLocationPredictor=_deviceLocationPredictor;
@property(retain, nonatomic) RTAuthorizationManager *authorizationManager; // @synthesize authorizationManager=_authorizationManager;
@property(retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider; // @synthesize vehicleLocationProvider=_vehicleLocationProvider;
@property(retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager; // @synthesize scenarioTriggerManager=_scenarioTriggerManager;
@property(retain, nonatomic) RTPredictedApplicationManager *predictedApplicationManager; // @synthesize predictedApplicationManager=_predictedApplicationManager;
@property(retain, nonatomic) RTPlatform *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)handleClientConnection:(id)arg1;
- (id)initWithDeviceLocationPredictor:(id)arg1 scenarioTriggerManager:(id)arg2 vehicleLocationProvider:(id)arg3 predictedApplicationManager:(id)arg4 actionManager:(id)arg5 eventModelProvider:(id)arg6 visitManager:(id)arg7 authorizationManager:(id)arg8 purgeManager:(id)arg9 assetManager:(id)arg10 locationStore:(id)arg11 locationManager:(id)arg12 eventAgentManager:(id)arg13 platform:(id)arg14 learnedLocationManager:(id)arg15 routeManager:(id)arg16 accountManager:(id)arg17 persistenceManager:(id)arg18 fingerprintManager:(id)arg19 wifiManager:(id)arg20 mapServiceManager:(id)arg21;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
