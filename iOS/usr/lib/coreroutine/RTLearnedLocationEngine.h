//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <coreroutine/RTPurgable-Protocol.h>

@class NSString, RTAccountManager, RTContactsManager, RTDefaultsManager, RTDiagnostics, RTDistanceCalculator, RTEventManager, RTFingerprintManager, RTLearnedLocationAlgorithmMetricCalculator, RTLearnedLocationEngineTrainingMetrics, RTLearnedLocationStore, RTLocationManager, RTLocationStore, RTMapServiceManager, RTMapsSupportManager, RTMetricManager, RTMotionActivityManager, RTPersonalizationPortraitManager, RTVisitManager, RTXPCActivityManager;
@protocol OS_dispatch_queue, RTLearnedLocationEngineProtocol;

@interface RTLearnedLocationEngine : NSObject <RTPurgable>
{
    _Bool _monitorFingerprints;
    id <RTLearnedLocationEngineProtocol> _delegate;
    RTLearnedLocationEngineTrainingMetrics *_trainingMetrics;
    NSObject<OS_dispatch_queue> *_queue;
    RTAccountManager *_accountManager;
    RTLearnedLocationAlgorithmMetricCalculator *_algorithmMetricCalculator;
    RTContactsManager *_contactsManager;
    RTDefaultsManager *_defaultsManager;
    RTDiagnostics *_diagnostics;
    RTEventManager *_eventManager;
    RTFingerprintManager *_fingerprintManager;
    RTLearnedLocationStore *_learnedLocationStore;
    RTDistanceCalculator *_distanceCalculator;
    RTLocationStore *_locationStore;
    RTLocationManager *_locationManager;
    RTMapServiceManager *_mapServiceManager;
    RTMapsSupportManager *_mapsSupportManager;
    RTMetricManager *_metricManager;
    RTMotionActivityManager *_motionActivityManager;
    RTPersonalizationPortraitManager *_portraitManager;
    RTVisitManager *_visitManager;
    RTXPCActivityManager *_xpcActivityManager;
}

+ (id)locationFromMapItem:(id)arg1;
+ (id)locationFromAggregateVisits:(id)arg1;
+ (double)confidenceFromDataPointCount:(unsigned long long)arg1;
+ (id)visitFromAggregateVisits:(id)arg1;
@property(readonly, nonatomic) RTXPCActivityManager *xpcActivityManager; // @synthesize xpcActivityManager=_xpcActivityManager;
@property(readonly, nonatomic) RTVisitManager *visitManager; // @synthesize visitManager=_visitManager;
@property(readonly, nonatomic) RTPersonalizationPortraitManager *portraitManager; // @synthesize portraitManager=_portraitManager;
@property(readonly, nonatomic) RTMotionActivityManager *motionActivityManager; // @synthesize motionActivityManager=_motionActivityManager;
@property(readonly, nonatomic) RTMetricManager *metricManager; // @synthesize metricManager=_metricManager;
@property(readonly, nonatomic) RTMapsSupportManager *mapsSupportManager; // @synthesize mapsSupportManager=_mapsSupportManager;
@property(readonly, nonatomic) RTMapServiceManager *mapServiceManager; // @synthesize mapServiceManager=_mapServiceManager;
@property(readonly, nonatomic) RTLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(readonly, nonatomic) RTLocationStore *locationStore; // @synthesize locationStore=_locationStore;
@property(readonly, nonatomic) RTDistanceCalculator *distanceCalculator; // @synthesize distanceCalculator=_distanceCalculator;
@property(readonly, nonatomic) RTLearnedLocationStore *learnedLocationStore; // @synthesize learnedLocationStore=_learnedLocationStore;
@property(readonly, nonatomic) RTFingerprintManager *fingerprintManager; // @synthesize fingerprintManager=_fingerprintManager;
@property(readonly, nonatomic) RTEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property(readonly, nonatomic) RTDiagnostics *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(readonly, nonatomic) RTDefaultsManager *defaultsManager; // @synthesize defaultsManager=_defaultsManager;
@property(readonly, nonatomic) RTContactsManager *contactsManager; // @synthesize contactsManager=_contactsManager;
@property(readonly, nonatomic) RTLearnedLocationAlgorithmMetricCalculator *algorithmMetricCalculator; // @synthesize algorithmMetricCalculator=_algorithmMetricCalculator;
@property(readonly, nonatomic) RTAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RTLearnedLocationEngineTrainingMetrics *trainingMetrics; // @synthesize trainingMetrics=_trainingMetrics;
@property(nonatomic) _Bool monitorFingerprints; // @synthesize monitorFingerprints=_monitorFingerprints;
@property(nonatomic) __weak id <RTLearnedLocationEngineProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_updateExistingPlace:(id)arg1 ifBetterMapItem:(id)arg2 error:(id *)arg3;
- (_Bool)_removeUnusedMapItems:(id *)arg1;
- (_Bool)_retrainVisitsWithoutPlaces:(id *)arg1;
- (id)_inferPlaceTypesWithError:(id *)arg1;
- (id)replaceBusinessMapItemWithReverseGeocodedMapItemForHome:(id)arg1;
- (_Bool)_updatePlaceTypesFromInferenceWithError:(id *)arg1;
- (void)_logLocationsOfInterest;
- (void)_teardownTrainingMetrics;
- (void)_setupTrainingMetricsFromDate:(id)arg1 toDate:(id)arg2;
- (void)purgeManager:(id)arg1 performPurgeOfType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onVisitManagerNotification:(id)arg1;
- (void)_updateMonitorFingerprintsWithVisit:(id)arg1;
- (void)_onVisitManagerNotification:(id)arg1;
- (void)onFingerprintManagerNotification:(id)arg1;
- (void)_onFingerprintManagerNotification:(id)arg1;
- (void)onContactsManagerNotification:(id)arg1;
- (void)_onContactsManagerNotification:(id)arg1;
- (_Bool)_processMeCardWithError:(id *)arg1;
- (id)_postalAddressMapItemsOfContact:(id)arg1 error:(id *)arg2;
- (id)_meCardContactWithError:(id *)arg1;
- (void)_purge;
- (_Bool)_trainLocationsOfInterestModelWithError:(id *)arg1;
- (void)trainLocationsOfInterestModelWithHandler:(CDUnknownBlockType)arg1;
- (void)_trainLocationsOfInterestModelWithHandler:(CDUnknownBlockType)arg1;
- (void)trainWithHandler:(CDUnknownBlockType)arg1;
- (void)_trainWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)_trainVisitsFromDate:(id)arg1 toDate:(id)arg2 error:(id *)arg3;
- (_Bool)_processVisits:(id)arg1 error:(id *)arg2;
- (id)_updateExistingPlaceNearMapItem:(id)arg1 error:(id *)arg2;
- (id)_placeForMapItem:(id)arg1 error:(id *)arg2;
- (id)_bestInferredMapItemForVisit:(id)arg1 error:(id *)arg2;
- (id)_bestInferredMapItemForVisit:(id)arg1 fromInferredMapItems:(id)arg2 error:(id *)arg3;
- (id)_inferredMapItemsForVisit:(id)arg1 error:(id *)arg2;
- (id)_enabledMapItemProviders;
- (id)_filterVisits:(id)arg1;
- (id)_visitsFromDate:(id)arg1 toDate:(id)arg2 error:(id *)arg3;
- (id)_lastVisit;
- (void)shutdown;
- (void)_shutdown;
- (void)setup;
- (void)_setup;
- (void)_teardownXpcActivityTrain;
- (void)_setupXpcActivityTrain;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (id)initWithAccountManager:(id)arg1 algorithmMetricCalculator:(id)arg2 contactsManager:(id)arg3 defaultsManager:(id)arg4 diagnostics:(id)arg5 distanceCalculator:(id)arg6 eventManager:(id)arg7 fingerprintManager:(id)arg8 learnedLocationStore:(id)arg9 locationManager:(id)arg10 locationStore:(id)arg11 mapServiceManager:(id)arg12 mapsSupportManager:(id)arg13 metricManager:(id)arg14 motionActivityManager:(id)arg15 portraitManager:(id)arg16 visitManager:(id)arg17 xpcActivityManager:(id)arg18;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

