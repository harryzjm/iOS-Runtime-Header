//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCAppActivityObserving-Protocol.h>
#import <NewsCore/FCAppConfigurationObserving-Protocol.h>
#import <NewsCore/FCDerivedPersonalizationData-Protocol.h>
#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>
#import <NewsCore/FCUserInfoObserving-Protocol.h>

@class CKRecord, FCPersonalizationTreatment, FCUserInfo, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol FCOperationThrottler, OS_dispatch_queue;

@interface FCPersonalizationData <FCOperationThrottlerDelegate, FCAppConfigurationObserving, FCUserInfoObserving, FCAppActivityObserving, FCDerivedPersonalizationData>
{
    _Bool _attemptingUpload;
    NSMutableDictionary *_aggregates;
    NSMutableDictionary *_openChangeGroupDeltas;
    NSMutableArray *_closedChangeGroups;
    CKRecord *_remoteRecord;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    FCPersonalizationTreatment *_treatment;
    id <FCOperationThrottler> _saveThrottler;
    FCUserInfo *_userInfo;
}

+ (id)localStoreMigrator;
+ (id)desiredKeys;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (_Bool)requiresHighPriorityFirstSync;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresPushNotificationSupport;
+ (void)initialize;
@property(retain, nonatomic) FCUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property _Bool attemptingUpload; // @synthesize attemptingUpload=_attemptingUpload;
@property(retain, nonatomic) id <FCOperationThrottler> saveThrottler; // @synthesize saveThrottler=_saveThrottler;
@property(retain) FCPersonalizationTreatment *treatment; // @synthesize treatment=_treatment;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *readWriteQueue; // @synthesize readWriteQueue=_readWriteQueue;
@property(retain, nonatomic) CKRecord *remoteRecord; // @synthesize remoteRecord=_remoteRecord;
@property(retain, nonatomic) NSMutableArray *closedChangeGroups; // @synthesize closedChangeGroups=_closedChangeGroups;
@property(retain, nonatomic) NSMutableDictionary *openChangeGroupDeltas; // @synthesize openChangeGroupDeltas=_openChangeGroupDeltas;
@property(retain, nonatomic) NSMutableDictionary *aggregates; // @synthesize aggregates=_aggregates;
- (void).cxx_destruct;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(_Bool)arg2;
- (void)appConfigurationDidChange:(id)arg1;
- (id)aggregateForFeatureKey:(id)arg1;
- (void)enumerateAggregatesUsingBlock:(CDUnknownBlockType)arg1;
- (id)aggregatesForFeatureKeys:(id)arg1;
- (void)activityObservingApplicationDidEnterBackground;
- (void)_reloadTreatmentWithReliablyFetchedAppConfig:(_Bool)arg1;
- (void)_applicationDidEnterBackground;
- (void)_closeOpenChangeGroup;
- (void)_writeToLocalStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateWithRemoteRecord:(id)arg1 profile:(id)arg2;
- (id)_instanceIdentifier;
- (id)recordsForRestoringZoneName:(id)arg1;
- (_Bool)canHelpRestoreZoneName:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (void)loadLocalCachesFromStore;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateDerivedDataWithQualityOfService:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)d_allGlobalAggregates;
- (void)clearPersonalizationData;
- (id)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6;
- (id)featureKeysWithNoAggregates:(id)arg1;
@property(readonly, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 userInfo:(id)arg4;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

