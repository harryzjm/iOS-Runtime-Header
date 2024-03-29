//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDCompositeSettingsOwnerToDatabaseAdapterRegistry, NSArray, NSMapTable, NSString;
@protocol HMDCompositeSettingControllerManagerStateManager, HMDCompositeSettingsControllerManagerDataSource, HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCompositeSettingsControllerManager : NSObject
{
    id <HMDCompositeSettingsControllerManagerDataSource> _dataSource;
    HMDCompositeSettingsOwnerToDatabaseAdapterRegistry *_registry;
    NSObject<OS_dispatch_queue> *_workQueue;
    CDUnknownBlockType _compositeSettingsControllerFactory;
    id <HMMLogEventSubmitting> _logEventDispatcher;
    NSMapTable *_stringToCompositeSettingsController;
    id <HMDCompositeSettingControllerManagerStateManager> _stateManager;
}

+ (id)logCategory;
+ (id)zoneNameForHomeUUID:(id)arg1;
+ (id)immutableSettingFromFetchReturn:(id)arg1;
- (void).cxx_destruct;
@property(readonly) id <HMDCompositeSettingControllerManagerStateManager> stateManager; // @synthesize stateManager=_stateManager;
@property(readonly, copy) NSMapTable *stringToCompositeSettingsController; // @synthesize stringToCompositeSettingsController=_stringToCompositeSettingsController;
@property(readonly) id <HMMLogEventSubmitting> logEventDispatcher; // @synthesize logEventDispatcher=_logEventDispatcher;
@property(readonly) __weak id <HMDCompositeSettingsControllerManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSArray *homes;
- (void)languagesDidChangeForHome:(id)arg1;
- (void)didUpdateCurrentRunState:(long long)arg1 updatedState:(long long)arg2 forHome:(id)arg3;
- (void)didUpdateSiriEndpointSettingForHomeUUID:(id)arg1 accessoryUUID:(id)arg2;
- (void)didConfigureCompositeSettingsControllerForHomeUUID:(id)arg1 accessoryUUID:(id)arg2;
- (void)removeHomeZone:(id)arg1;
- (void)applyOnboardingSelections:(id)arg1 accessoryUUID:(id)arg2 homeUUID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)settingsController:(id)arg1 didUpdateSettings:(id)arg2 metadata:(id)arg3;
- (id)dumpStateInfo;
- (void)localUpdateSettingForUUID:(id)arg1 homeUUID:(id)arg2 keyPath:(id)arg3 value:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)localUpdateSettingForUUID:(id)arg1 homeUUID:(id)arg2 keyPath:(id)arg3 value:(id)arg4 callerVersion:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)localFetchSettingsForUUID:(id)arg1 homeUUID:(id)arg2 withKeyPaths:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)localFetchSettingsForUUID:(id)arg1 homeUUID:(id)arg2 withKeyPaths:(id)arg3 callerVersion:(id)arg4 callerPrivilege:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_createSettingControllerForAccessory:(id)arg1 homeUUID:(id)arg2;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 registry:(id)arg2 controllerFactory:(CDUnknownBlockType)arg3 stateManagerFactory:(CDUnknownBlockType)arg4 logEventDispatcher:(id)arg5;
- (void)accessorySettingsLocalMessageHandler:(id)arg1 didReceiveUpdateRequestMessage:(id)arg2 withHomeUUID:(id)arg3 accessoryUUID:(id)arg4 keyPath:(id)arg5 value:(id)arg6 callerVersion:(id)arg7;
- (void)accessorySettingsLocalMessageHandler:(id)arg1 didReceiveFetchRequestMessage:(id)arg2 withHomeUUID:(id)arg3 accessoryUUID:(id)arg4 keyPaths:(id)arg5 callerVersion:(id)arg6 callerPrivilege:(unsigned long long)arg7 siriAvailableLanguagesSetting:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

