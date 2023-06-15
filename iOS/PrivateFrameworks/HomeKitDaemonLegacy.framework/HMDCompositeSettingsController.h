//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDCompositeSettingsZoneManager, NSArray, NSDictionary, NSString, NSUUID;
@protocol HMDCompositeSettingsControllerDelegate, HMDCompositeSettingsDatabaseAdapter, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDCompositeSettingsController : NSObject
{
    struct os_unfair_lock_s _lock;
    _Bool _configured;
    id <HMDCompositeSettingsControllerDelegate> _delegate;
    NSDictionary *_settings;
    NSDictionary *_settingMetadata;
    Class _modelClass;
    id <HMMLogEventSubmitting> _logEventDispatcher;
    NSArray *_settingKeyPathBlockList;
    id <HMDCompositeSettingsDatabaseAdapter> _databaseAdapter;
    HMDCompositeSettingsZoneManager *_zoneManager;
    NSUUID *_uuid;
    NSUUID *_homeUUID;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, copy) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property __weak HMDCompositeSettingsZoneManager *zoneManager; // @synthesize zoneManager=_zoneManager;
@property __weak id <HMDCompositeSettingsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)database:(id)arg1 didConfigureWithError:(id)arg2;
- (void)database:(id)arg1 didProcessDeletionForModel:(id)arg2;
- (void)database:(id)arg1 didProcessUpdateForModel:(id)arg2;
- (void)database:(id)arg1 didProcessCreationForModel:(id)arg2;
- (id)_settingFromSetting:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (void)updateSettingsForKeyPaths:(id)arg1 callerVersion:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSettingForKeyPath:(id)arg1 value:(id)arg2 callerVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchSynchronousSettingsForKeyPaths:(id)arg1 callerVersion:(id)arg2 callerPrivilege:(unsigned long long)arg3;
- (void)fetchSettingsForKeyPaths:(id)arg1 callerVersion:(id)arg2 callerPrivilege:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchSettingForKeyPath:(id)arg1 callerVersion:(id)arg2 callerPrivilege:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)logIdentifier;
- (void)_createSettingsFromModel:(id)arg1;
@property _Bool configured; // @synthesize configured=_configured;
- (void)start;
- (id)initWithDatabaseAdapter:(id)arg1 model:(Class)arg2 homeUUID:(id)arg3 ownerUUID:(id)arg4 logEventDispatcher:(id)arg5 settingKeyPathBlockList:(id)arg6;
- (id)initWithDatabaseAdapter:(id)arg1 model:(Class)arg2 homeUUID:(id)arg3 ownerUUID:(id)arg4 settingKeyPathBlockList:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

