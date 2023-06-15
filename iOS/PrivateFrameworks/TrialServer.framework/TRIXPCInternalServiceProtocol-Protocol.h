//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString, NSURL, TRIDownloadOptions, TRISQLiteCKDatabaseFailureInjectionDelegate, TRITaskQueuingOptions;
@protocol TRITask;

@protocol TRIXPCInternalServiceProtocol
- (void)removeUnusedChannelsWithCompletion:(void (^)(void))arg1;
- (void)immediatelySchedulePostUpgradeActivityWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)activeBMLTInformationWithPrivacyFilterPolicy:(unsigned char)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)activeExperimentInformationWithPrivacyFilterPolicy:(unsigned char)arg1 completion:(void (^)(NSArray *))arg2;
- (void)activeRolloutInformationWithPrivacyFilterPolicy:(unsigned char)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)setSubscription:(NSArray *)arg1 namespaceName:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)subscriptionForNamespaceName:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)dynamicNamespaceRecordsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)startDownloadNamespaceWithName:(NSString *)arg1 teamId:(NSString *)arg2 options:(TRIDownloadOptions *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)deregisterNamespaceWithNamespaceName:(NSString *)arg1 teamId:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)registerNamespaceWithNamespaceName:(NSString *)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(NSURL *)arg3 teamId:(NSString *)arg4 appContainerId:(NSString *)arg5 appContainerType:(long long)arg6 cloudKitContainerId:(int)arg7 completion:(void (^)(_Bool, NSError *))arg8;
- (void)resumeSQLiteCKDatabaseQueueWithCompletion:(void (^)(void))arg1;
- (void)suspendSQLiteCKDatabaseQueueWithCompletion:(void (^)(void))arg1;
- (void)setFailureInjectionDelegate:(TRISQLiteCKDatabaseFailureInjectionDelegate *)arg1;
- (void)bmltCustomTargetingMetricWithCompletion:(void (^)(TRIMetric *))arg1;
- (void)setLastFetchDate:(NSDate *)arg1 forContainer:(int)arg2 teamId:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)lastFetchDateForContainer:(int)arg1 teamId:(NSString *)arg2 completion:(void (^)(NSDate *, NSError *))arg3;
- (void)submitTask:(id <TRITask>)arg1 options:(TRITaskQueuingOptions *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)rolloutNotificationWithLatestDeploymentForRolloutId:(NSString *)arg1 cloudKitContainer:(int)arg2 teamId:(NSString *)arg3 completion:(void (^)(TRIClientRolloutArtifact *, NSError *))arg4;
- (void)experimentNotificationsWithExperimentId:(NSString *)arg1 cloudKitContainer:(int)arg2 teamId:(NSString *)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)taskRecordsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

