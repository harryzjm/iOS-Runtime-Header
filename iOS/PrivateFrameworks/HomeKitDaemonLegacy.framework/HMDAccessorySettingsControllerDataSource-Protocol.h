//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccessorySettingsController, HMDAccessorySetupMetricDispatcher, HMDBackingStore, HMDCurrentAccessorySetupMetricDispatcher, HMDHome, HMFActivity, NSArray, NSData, NSUUID;

@protocol HMDAccessorySettingsControllerDataSource
@property(readonly) HMDCurrentAccessorySetupMetricDispatcher *currentAccessorySetupMetricDispatcher;
@property(readonly) HMDAccessorySetupMetricDispatcher *accessorySetupMetricDispatcher;
@property double setupStartTimestamp;
@property(retain) HMFActivity *setupActivity;
@property __weak HMDHome *home;
@property(readonly) HMDBackingStore *backingStore;
- (void)removeManagedConfigurationProfileWithProfileData:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (NSArray *)modelsToMigrateSettingsForController:(HMDAccessorySettingsController *)arg1;
- (NSArray *)modelsToMakeSettingsForController:(HMDAccessorySettingsController *)arg1 parentUUID:(NSUUID *)arg2;
@end

