//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;
@protocol HMDLegacyAccessorySettingsAdaptorDelegate, HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider, HMESubscriptionProviding, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDLegacyAccessorySettingsAdaptor : NSObject
{
    id <HMDLegacyAccessorySettingsAdaptorDelegate> delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_homeUUID;
    NSUUID *_accessoryUUID;
    id <HMESubscriptionProviding> _subscriptionProvider;
    id <HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider> _currentAccessorySettingsController;
}

+ (id)parsedLanguageListSetting:(id)arg1 topic:(id)arg2;
+ (id)parsedLanguageSetting:(id)arg1 topic:(id)arg2;
+ (id)parsedIntegerSettingEvent:(id)arg1 topic:(id)arg2;
+ (id)parsedBoolSettingEvent:(id)arg1 topic:(id)arg2;
+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider> currentAccessorySettingsController; // @synthesize currentAccessorySettingsController=_currentAccessorySettingsController;
@property(readonly, nonatomic) id <HMESubscriptionProviding> subscriptionProvider; // @synthesize subscriptionProvider=_subscriptionProvider;
@property(readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <HMDLegacyAccessorySettingsAdaptorDelegate> delegate; // @synthesize delegate;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (id)_transformLegacyLanguageSettingValueToImmutableSetting:(id)arg1;
- (id)_settingValueForKeyPath:(id)arg1 value:(id)arg2;
- (id)languageValueList;
- (void)updateSettingWithKeyPath:(id)arg1 settingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startup;
- (id)initWithQueue:(id)arg1 homeUUID:(id)arg2 accessoryUUID:(id)arg3 settingsController:(id)arg4 subscriptionProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

