//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthDaemon/HDNanoSyncManagerObserver-Protocol.h>

@class HDProfile, HKNanoSyncPairedDevicesSnapshot, NSHashTable, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface HDAchievementAssetManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDNanoSyncManagerObserver>
{
    HDProfile *_profile;
    NSHashTable *_assetObservers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSNumber *_waitingToRun;
    HKNanoSyncPairedDevicesSnapshot *_previousDeviceSnapshot;
}

- (void).cxx_destruct;
- (id)serverURLWithError:(id *)arg1;
- (void)setServerURL:(id)arg1;
- (void)_queue_performAchievementsUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performAchievementsUpdateIfWaitingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_notifyObservers;
- (void)_requestNanoSyncAfterAssetUpdates;
- (void)_setNeedsUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setLastSuccessfulUpdateDate:(id)arg1;
- (id)_lastSuccessfulUpdateDate;
- (void)_queue_setWaitingToRun:(_Bool)arg1;
- (_Bool)_queue_isWaitingToRun;
- (void)_checkForOSUpdate;
- (void)_performActivity:(id)arg1;
- (void)_registerActivity;
- (void)achievementsAdded:(id)arg1;
- (void)nanoSyncManager:(id)arg1 pairedDevicesChanged:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)daemonReady:(id)arg1;
- (void)updateAllAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAssetObserver:(id)arg1;
- (void)addAssetObserver:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 backgroundTaskScheduler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

