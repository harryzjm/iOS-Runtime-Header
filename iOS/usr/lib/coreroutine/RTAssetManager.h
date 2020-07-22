//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASAssetQuery, NSDate, NSUserDefaults, RTInvocationDispatcher, RTMetricManager, RTReachabilityManager;

@interface RTAssetManager
{
    _Bool _ready;
    long long _currentReachability;
    NSDate *_dateOfLastUpdateAttempt;
    NSDate *_dateOfLastSuccessfulUpdate;
    RTInvocationDispatcher *_dispatcher;
    NSUserDefaults *_userDefaults;
    RTMetricManager *_metricManager;
    RTReachabilityManager *_reachabilityManager;
    ASAssetQuery *_assetQuery;
}

@property(retain, nonatomic) ASAssetQuery *assetQuery; // @synthesize assetQuery=_assetQuery;
@property(nonatomic) _Bool ready; // @synthesize ready=_ready;
@property(retain, nonatomic) RTReachabilityManager *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
@property(retain, nonatomic) RTMetricManager *metricManager; // @synthesize metricManager=_metricManager;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) RTInvocationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) NSDate *dateOfLastSuccessfulUpdate; // @synthesize dateOfLastSuccessfulUpdate=_dateOfLastSuccessfulUpdate;
@property(retain, nonatomic) NSDate *dateOfLastUpdateAttempt; // @synthesize dateOfLastUpdateAttempt=_dateOfLastUpdateAttempt;
@property(nonatomic) long long currentReachability; // @synthesize currentReachability=_currentReachability;
- (void).cxx_destruct;
- (void)updateAssetServerURL:(id)arg1 assetType:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)forceUpdateAssetMetadata;
- (void)onReachabilityChange:(id)arg1;
- (void)_installAsset:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_downloadAsset:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_finalizeAssetUpdateOperationWithError:(id)arg1;
- (void)_performUpdateOfAssetsWithTypeAssetType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)performUpdateOfAssetsWithTypeAssetType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_invalidateAssetQuery;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)shutdown;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)_setup;
- (id)initWithUserDefaults:(id)arg1 metricManager:(id)arg2 reachabilityManager:(id)arg3;
- (id)init;
- (void)_registerForMetricSubmission;
- (void)_submitAssertVersionMetricWithHandler:(CDUnknownBlockType)arg1;
- (void)_submitAssertVersionMetric;

@end

