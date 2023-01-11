//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKCharacteristicType, HKObjectType, HKQuantityType, HKQueryServerConfiguration, HKTaskConfiguration, HKUnit, HKWorkout, HKWorkoutConfiguration, NSArray, NSDate, NSDictionary, NSError, NSNumber, NSSet, NSString, NSURL, NSUUID, _HKFilter;

@protocol HDHealthStoreServerInterface <NSObject>
- (void)remote_recoverActiveWorkoutSessionWithCompletion:(void (^)(HKWorkoutSessionTaskConfiguration *, HKWorkoutBuilderConfiguration *, NSUUID *, NSError *))arg1;
- (void)remote_startWatchAppWithWorkoutConfiguration:(HKWorkoutConfiguration *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_replaceWorkout:(HKWorkout *)arg1 withWorkout:(HKWorkout *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_addSamples:(NSArray *)arg1 toWorkout:(HKWorkout *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_restoreEntitlement:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_dropEntitlement:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_setDaemonPreferenceValue:(id)arg1 forKey:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_fetchDaemonPreferenceForKey:(NSString *)arg1 completion:(void (^)(id, NSError *))arg2;
- (void)remote_splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(void (^)(double, NSError *))arg3;
- (void)remote_fetchUnitPreferencesForTypes:(NSSet *)arg1 version:(long long)arg2 withCompletion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)remote_removePreferredUnitForType:(HKQuantityType *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_setPreferredUnit:(HKUnit *)arg1 forType:(HKQuantityType *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_setServerURL:(NSURL *)arg1 forAssetType:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_fetchServerURLForAssetType:(NSString *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (void)remote_getHealthLiteValueForKey:(NSString *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)remote_setHealthLiteValue:(NSNumber *)arg1 forKey:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_setCharacteristic:(id)arg1 forDataType:(HKCharacteristicType *)arg2 handler:(void (^)(_Bool, NSError *))arg3;
- (void)remote_fetchCharacteristicWithDataType:(HKObjectType *)arg1 handler:(void (^)(id, NSError *))arg2;
- (void)remote_invalidateActivityAlertSuppressionForIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_suppressActivityAlertsForIdentifier:(NSString *)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(NSDate *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)remote_deleteObjectsWithUUIDs:(NSArray *)arg1 options:(unsigned long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_deleteClientSourceWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_deleteAllSamplesWithTypes:(NSArray *)arg1 sourceBundleIdentifier:(NSString *)arg2 options:(unsigned long long)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)remote_closeTransactionWithDataType:(HKObjectType *)arg1 anchor:(NSNumber *)arg2 ackTime:(NSNumber *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)remote_setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(HKObjectType *)arg2 handler:(void (^)(_Bool, NSError *))arg3;
- (void)remote_clientResumedWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_clientWillSuspendWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)_remote_saveObjects:(NSArray *)arg1 deleteObjects:(NSArray *)arg2 associations:(NSDictionary *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)_remote_associateSampleUUIDs:(NSArray *)arg1 withSampleUUID:(NSUUID *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_deleteDataObjectsOfType:(HKObjectType *)arg1 matchingFilter:(_HKFilter *)arg2 options:(unsigned long long)arg3 handler:(void (^)(_Bool, unsigned long long, NSError *))arg4;
- (void)remote_deleteDataObjects:(NSArray *)arg1 options:(unsigned long long)arg2 handler:(void (^)(_Bool, NSError *))arg3;
- (void)remote_saveDataObjects:(NSArray *)arg1 handler:(void (^)(_Bool, NSError *))arg2;
- (void)remote_saveDataObjects:(NSArray *)arg1 transactionIdentifier:(NSUUID *)arg2 final:(_Bool)arg3 handler:(void (^)(NSUUID *, _Bool, NSError *))arg4;
- (void)remote_endAuthorizationDelegateTransactionWithSessionIdentifier:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)remote_beginAuthorizationDelegateTransactionWithSessionIdentifier:(NSUUID *)arg1 handler:(void (^)(HKSource *, NSError *))arg2;
- (void)remote_handleAuthorizationForExtensionWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_requestAuthorizationToShareTypes:(NSSet *)arg1 readTypes:(NSSet *)arg2 shouldPrompt:(_Bool)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)remote_getRequestStatusForAuthorizationToShareTypes:(NSSet *)arg1 readTypes:(NSSet *)arg2 completion:(void (^)(long long, NSError *))arg3;
- (void)remote_authorizationStatusForType:(HKObjectType *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)remote_getIsFeatureSetAvailable:(unsigned long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_createQueryServerEndpointForIdentifier:(NSString *)arg1 queryUUID:(NSUUID *)arg2 configuration:(HKQueryServerConfiguration *)arg3 completion:(void (^)(NSXPCListenerEndpoint *, NSError *))arg4;
- (void)remote_fetchPluginServiceEndpointWithIdentifier:(NSString *)arg1 completion:(void (^)(NSXPCListenerEndpoint *, NSError *))arg2;
- (void)remote_createTaskServerEndpointForIdentifier:(NSString *)arg1 pluginURL:(NSURL *)arg2 taskUUID:(NSUUID *)arg3 configuration:(HKTaskConfiguration *)arg4 completion:(void (^)(NSXPCListenerEndpoint *, NSError *))arg5;
@end
