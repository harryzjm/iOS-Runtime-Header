//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudDatabase, HMDHomeManager, NAFuture, NSObject, NSString;
@protocol HMDHH2FrameworkSwitchDataSource, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDHH2FrameworkSwitch : HMFObject
{
    NSObject<OS_os_log> *_logger;
    _Bool _autoFrameworkSwitch;
    _Bool _isTapToSetupOngoing;
    NSObject<OS_dispatch_queue> *_workQueue;
    NAFuture *_fetchAllZonesSucceededFuture;
    HMBCloudDatabase *_cloudDatabaseToDetectHH2Zone;
    CDUnknownBlockType _blockToBeCalledBeforeSwitchingFramework;
    HMDHomeManager *_homeManager;
    id <HMDHH2FrameworkSwitchDataSource> _dataSource;
}

+ (id)logCategory;
+ (void)switchToHH2AndRelaunchHomed;
+ (void)switchBackToHH1AndRelaunch;
+ (void)switchBackToHH1AndRelaunchDueToHH2MigrationFailed;
+ (void)switchBackToHH1AndDoNotLaunchDueToPrimaryAccountRemoval;
+ (void)relaunchHomedAfterSettingEnvironmentTo:(_Bool)arg1 blockToExecuteBeforeReLaunch:(CDUnknownBlockType)arg2;
+ (void)setHH2SettingsMigrationKey:(_Bool)arg1;
+ (void)setHH2EnablementPreferenceKey:(_Bool)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <HMDHH2FrameworkSwitchDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(copy, nonatomic) CDUnknownBlockType blockToBeCalledBeforeSwitchingFramework; // @synthesize blockToBeCalledBeforeSwitchingFramework=_blockToBeCalledBeforeSwitchingFramework;
@property(retain, nonatomic) HMBCloudDatabase *cloudDatabaseToDetectHH2Zone; // @synthesize cloudDatabaseToDetectHH2Zone=_cloudDatabaseToDetectHH2Zone;
@property(nonatomic) _Bool isTapToSetupOngoing; // @synthesize isTapToSetupOngoing=_isTapToSetupOngoing;
@property(nonatomic) _Bool autoFrameworkSwitch; // @synthesize autoFrameworkSwitch=_autoFrameworkSwitch;
@property(readonly, nonatomic) NAFuture *fetchAllZonesSucceededFuture; // @synthesize fetchAllZonesSucceededFuture=_fetchAllZonesSucceededFuture;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)handleTapToSetupFinished:(id)arg1;
- (void)waitForCloudKitAccountToBeAvailable;
- (_Bool)areCloudKitServersReachable;
- (_Bool)switchToSetupMode:(unsigned long long)arg1;
- (void)switchToHH2AfterPerformingHH2PreRebootTask;
- (void)switchToHH2AndRelaunchHomedToPerformHH2Migration;
- (void)_clearSetupModeIfNeeded;
- (void)removeHH2SentinelZoneWithCompletion:(CDUnknownBlockType)arg1;
- (void)waitForHH2SentinelZoneToBeRemoved;
- (_Bool)_areWeRunningInRightEnvironment:(_Bool)arg1;
- (void)_makeSureWeAreRunningInRightEnvironment:(_Bool)arg1;
- (void)makeSureWeAreRunningInRightEnvironment:(_Bool)arg1;
- (void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2;
- (_Bool)checkExistenceOfHH2SentinelZone;
- (_Bool)waitForHH2SentinelZoneToBeCreated:(double)arg1;
- (void)createHH2SentinelZoneWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performInitialSync:(CDUnknownBlockType)arg1;
- (_Bool)waitForHH2SentinelZoneToBeFetchedFromCloud;
- (void)forceFetchAllCloudZones;
- (void)performInitialSyncAndSwitchFrameworkIfRequired;
- (void)createHH2CloudDatabaseAndStartSyncing;
- (id)initWithAutoSwitch:(_Bool)arg1 callBeforeFrameworkSwitch:(CDUnknownBlockType)arg2 homeManager:(id)arg3 dataSource:(id)arg4;
- (id)initWithAutoSwitchDisabledWithHomeManager:(id)arg1;
- (id)initWithAutoSwitchEnabledWithHomeManager:(id)arg1 callBeforeFrameworkSwitchCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAutoSwitchEnabledWithHomeManager:(id)arg1 dataSource:(id)arg2 callBeforeFrameworkSwitchCompletionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

