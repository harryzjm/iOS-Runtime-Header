//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKHealthStoreClientInterface-Protocol.h>
#import <HealthKit/HKQueryDelegate-Protocol.h>
#import <HealthKit/_HKActiveWorkoutLifecycleDelegate-Protocol.h>
#import <HealthKit/_HKDeepBreathingSessionLifecycleDelegate-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKHealthServicesManager, HKProfileIdentifier, NSHashTable, NSMutableDictionary, NSMutableSet, NSSet, NSString, _HKXPCConnection;
@protocol HDHealthStoreServerInterface, OS_dispatch_queue, _HKAuthorizationPresentationController;

@interface HKHealthStore : NSObject <HKHealthStoreClientInterface, _HKActiveWorkoutLifecycleDelegate, _HKDeepBreathingSessionLifecycleDelegate, _HKXPCExportable, HKQueryDelegate>
{
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSObject<OS_dispatch_queue> *_proxyQueue;
    _HKXPCConnection *_healthdConnection;
    HKProfileIdentifier *_profileIdentifier;
    NSString *_debuggingIdentifier;
    id <HDHealthStoreServerInterface> _serverProxy;
    NSMutableDictionary *_subserverProxiesBySelector;
    id <_HKAuthorizationPresentationController> _authorizationPresentationController;
    CDUnknownBlockType _authorizationDelegateTransactionErrorHandler;
    HKHealthServicesManager *_healthServicesManager;
    NSMutableSet *_queries;
    NSMutableSet *_activeWorkouts;
    NSHashTable *_fitnessMachineConnections;
    NSHashTable *_fitnessMachineConnectionInitiators;
    NSMutableDictionary *_workoutSessionsByUUID;
    NSMutableSet *_deepBreathingSessions;
    unsigned int _applicationSDKVersion;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

+ (_Bool)_applicationHasRunningWorkout;
+ (void)_endAllWorkoutsWithUUIDs:(id)arg1;
+ (void)_endedWorkoutWithUUID:(id)arg1;
+ (void)_startedWorkoutWithUUID:(id)arg1;
+ (_Bool)isHealthDataAvailable;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic, getter=_queries) NSSet *queries; // @synthesize queries=_queries;
- (void).cxx_destruct;
- (void)unitTest_setApplicationSDKVersion:(unsigned int)arg1;
- (void)containerAppExtensionEntitlementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unregisterKeepAliveWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerKeepAliveWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteMedicalIDDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteMedicalIDData;
- (void)updateMedicalIDData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMedicalIDData:(id)arg1;
- (void)fetchMedicalIDEmergencyContactsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMedicalIDDataCreateIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchMedicalIDDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)submitMetricsIgnoringAnchor:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)obliterateHealthDataWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHealthDirectorySizeInBytesWithCompletion:(CDUnknownBlockType)arg1;
- (void)clientRemote_deliverWorkoutEvent:(id)arg1 forSessionUUID:(id)arg2;
- (void)clientRemote_deliverWorkoutSessionError:(id)arg1 forSessionUUID:(id)arg2;
- (void)clientRemote_deliverWorkoutSessionChangedToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3 forSessionUUID:(id)arg4;
- (void)clientRemote_unitPreferencesDidUpdate;
- (void)getHealthLiteValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeDefaultForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getDefaultValueForKey:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_objectHandlerOnClientQueue:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_selectCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_objectCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_actionCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)_weeklySummaryInfoForDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)splitTotalEnergy:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 resultsHandler:(CDUnknownBlockType)arg4;
- (void)_mostRecentQuantityOfType:(id)arg1 beforeDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_currentValueForQuantityTypeCode:(long long)arg1 characteristicTypeCode:(long long)arg2 beforeDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_calculateBMRForDate:(id)arg1 useEndOfDay:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)preferredUnitsForQuantityTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_closeTransactionWithType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3;
- (void)disableAllBackgroundDeliveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableBackgroundDeliveryForType:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)enableBackgroundDeliveryForType:(id)arg1 frequency:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_setBackgroundDeliveryFrequencyDataType:(id)arg1 frequency:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)deepBreathingSessionDidComplete:(id)arg1;
- (void)_createDeepBreathingSessionWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)workoutDidComplete:(id)arg1;
- (void)closeTransactionForType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 query:(id)arg4;
- (void)queryDidFinishExecuting:(id)arg1;
- (void)_resourceQueue_addFitnessMachineConnectionInitiator:(id)arg1;
- (id)_createFitnessMachineConnectionInitiator;
- (id)_resourceQueue_fitnessMachineConnectionForUUID:(id)arg1;
- (void)_resourceQueue_addFitnessMachineConnection:(id)arg1;
- (id)_createFitnessMachineConnection;
- (void)_removeWorkoutSession:(id)arg1;
- (void)_addWorkoutSession:(id)arg1;
- (void)startWatchAppWithWorkoutConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resumeWorkoutSession:(id)arg1;
- (void)resumeWorkoutSession:(id)arg1;
- (void)_pauseWorkoutSession:(id)arg1;
- (void)pauseWorkoutSession:(id)arg1;
- (void)_endWorkoutSession:(id)arg1;
- (void)endWorkoutSession:(id)arg1;
- (void)_startWorkoutSession:(id)arg1;
- (void)startWorkoutSession:(id)arg1;
- (void)_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addSamples:(id)arg1 toWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_generatePauseOrResumeRequest:(CDUnknownBlockType)arg1;
- (void)_generateWorkoutMarkerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_saveRelatedSamplesForActiveWorkout:(id)arg1 workout:(id)arg2 server:(id)arg3 clientCompletion:(CDUnknownBlockType)arg4;
- (void)_saveActiveWorkout:(id)arg1 isMachineWorkout:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_pauseAllActiveWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reattachWorkout:(id)arg1 fitnessMachineConnection:(id)arg2 fitnessMachineSessionConfiguration:(id)arg3 willReactivate:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_reattachWorkout:(id)arg1 fitnessMachineConnection:(id)arg2 fitnessMachineSessionConfiguration:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_beginWorkoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 goalType:(unsigned long long)arg3 goal:(id)arg4 metadata:(id)arg5 lapLength:(id)arg6 shouldUseDeviceData:(_Bool)arg7 fitnessMachineSessionConfiguration:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)_beginWorkoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 goalType:(unsigned long long)arg3 goal:(id)arg4 metadata:(id)arg5 lapLength:(id)arg6 shouldUseDeviceData:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_firstPartyWorkoutSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activeWorkoutApplicationIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_setCharacteristic:(id)arg1 forDataType:(id)arg2 error:(id *)arg3;
- (id)_characteristicForDataType:(id)arg1 error:(id *)arg2;
- (_Bool)_setHeightCharacteristicQuantity:(id)arg1 error:(id *)arg2;
- (id)_heightCharacteristicQuantityWithError:(id *)arg1;
- (_Bool)_setLeanBodyMassCharacteristicQuantity:(id)arg1 error:(id *)arg2;
- (id)_leanBodyMassCharacteristicQuantityWithError:(id *)arg1;
- (_Bool)_setBodyMassCharacteristicQuantity:(id)arg1 error:(id *)arg2;
- (id)_bodyMassCharacteristicQuantityWithError:(id *)arg1;
- (_Bool)_setWheelchairUse:(long long)arg1 error:(id *)arg2;
- (id)wheelchairUseWithError:(id *)arg1;
- (_Bool)_setFitzpatrickSkinType:(long long)arg1 error:(id *)arg2;
- (id)fitzpatrickSkinTypeWithError:(id *)arg1;
- (_Bool)_setBloodType:(long long)arg1 error:(id *)arg2;
- (id)bloodTypeWithError:(id *)arg1;
- (_Bool)_setBiologicalSex:(long long)arg1 error:(id *)arg2;
- (id)biologicalSexWithError:(id *)arg1;
- (_Bool)_setDateOfBirthComponents:(id)arg1 error:(id *)arg2;
- (id)dateOfBirthComponentsWithError:(id *)arg1;
- (id)dateOfBirthWithError:(id *)arg1;
- (void)stopQuery:(id)arg1;
- (void)executeQuery:(id)arg1 activationHandler:(CDUnknownBlockType)arg2;
- (void)executeQuery:(id)arg1;
- (void)deleteObjectsOfType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)deleteObjects:(id)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)deleteObject:(id)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)deleteObjectsOfType:(id)arg1 predicate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_deleteObjects:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteObjects:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)deleteObject:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_sendNextObjectBatch:(id)arg1 lastRange:(struct _NSRange)arg2 server:(id)arg3 transaction:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_saveObjects:(id)arg1 atomically:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveObjects:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)saveObject:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)earliestPermittedSampleDate;
- (void)resetAllObjectAuthorizationStatusForBundleIdentifier:(id)arg1 objectType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetSelectedObjectAuthorizationStatuses:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setObjectAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clientRemote_presentAuthorizationWithSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clientRemote_presentAuthorizationWithRequestRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_clientQueue_invokeAuthorizationDelegateTransactionErrorHandlerWithError:(id)arg1;
- (void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 sourceHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 prompt:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)retrieveAllAuthorizationRecordsForSample:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allAuthorizationRecordsForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)retrieveAllAuthorizationRecordsForDocumentType:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)allAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_throwIfParentTypeNotRequestedForSharing:(_Bool)arg1 types:(id)arg2;
- (void)_throwIfAuthorizationDisallowedForSharing:(_Bool)arg1 types:(id)arg2;
- (void)handleAuthorizationForExtensionWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)authorizationStatusForType:(id)arg1;
- (void)associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteObjectsWithUUIDs:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchDevicesMatchingProperty:(id)arg1 values:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)orderedSourcesForObjectType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allSourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)addSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hasSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hasSampleWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPluginServiceEndpointForIdentifier:(id)arg1 endpointHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_profileServerProxyWithCompletion:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_workoutServerProxyWithCompletion:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_utilityServerProxyWithCompletion:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_queryControlServerProxyWithCompletion:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_cloudSyncServerProxyWithCompletion:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_notificationServerProxyWithCompletion:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_nanoSyncServerProxyWithCompletion:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_medicalIDServerProxyWithCompletion:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_healthServicesServerProxyWithCompletion:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_subserverProxyForSelector:(SEL)arg1 completion:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_serverProxyWithCompletion:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) HKHealthServicesManager *healthServicesManager;
@property(readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier; // @dynamic profileIdentifier;
- (void)dealloc;
- (void)_resourceQueue_setUpWithEndpoint:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1 profileIdentifier:(id)arg2 identifier:(id)arg3;
- (id)initWithListenerEndpoint:(id)arg1 profileIdentifier:(id)arg2;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
- (void)removeHealthServicePairing:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addHealthServicePairing:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)healthPeripheralsWithFilter:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)healthServicePairingsWithHandler:(CDUnknownBlockType)arg1;
- (void)unregisterPeripheralIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)registerPeripheralIdentifier:(id)arg1 name:(id)arg2 services:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)endHealthServiceSession:(id)arg1;
- (void)startHealthServiceSession:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)endHealthServiceDiscovery:(id)arg1;
- (void)startHealthServiceDiscovery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setBadgeCount:(long long)arg1 forDomain:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)waitOnHealthCloudSyncWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)disableCloudSyncAndDeleteAllCloudDataWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCloudDescriptionWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceCloudResetWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceCloudSyncWithOptions:(unsigned long long)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchCloudSyncProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)disableCloudSyncAndDeleteAllCloudDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchCloudSyncStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchCloudSyncRequiredWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceCloudSyncWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createCloudShareWithRecipient:(id)arg1 sampleTypes:(id)arg2 maxSampleAge:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getAllProfilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setDisplayName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchDisplayName:(CDUnknownBlockType)arg1;
- (id)initWithProfileIdentifier:(id)arg1;
- (void)discardWorkoutRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishWorkoutRoute:(id)arg1 workout:(id)arg2 metadata:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveWorkoutRouteData:(id)arg1 withRoute:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetNanoSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceLastChanceNanoSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceNanoSyncWithPullRequest:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchNanoSyncPairedDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopObservingDataCollectionForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)observeDataCollectionForType:(id)arg1 interval:(double)arg2 inBackground:(_Bool)arg3 hasRunningWorkout:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)resetAWDTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runAWDTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setShouldIgnoreUnlockedState:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)restoreEntitlement:(id)arg1;
- (void)dropEntitlement:(id)arg1;
- (void)select:(id)arg1 from:(id)arg2 where:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)saveObjects:(id)arg1 sourceBundleIdentifier:(id)arg2 sourceVersion:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)saveObjects:(id)arg1 sourceBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)fetchAllDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)createFakeAppleSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)diagnosticsForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopFakingDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchDaemonPreferenceForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_safeFetchDaemonPreferenceForKey:(id)arg1 expectedReturnClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchBoolDaemonPreferenceForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_shouldGenerateDemoDataPreferenceIsSet:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

