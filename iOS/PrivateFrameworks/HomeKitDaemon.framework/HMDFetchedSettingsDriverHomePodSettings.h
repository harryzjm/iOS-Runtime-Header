//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HMDFetchedSettingsDriverDelegate, HMDHPSAccessorySettingService, HMDHPSSettingsObjectFactoryProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDFetchedSettingsDriverHomePodSettings : NSObject
{
    id <HMDFetchedSettingsDriverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    id <HMDHPSAccessorySettingService> _service;
    id <HMDHPSSettingsObjectFactoryProtocol> _hmdhpsObjectFactory;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) id <HMDHPSSettingsObjectFactoryProtocol> hmdhpsObjectFactory; // @synthesize hmdhpsObjectFactory=_hmdhpsObjectFactory;
@property(readonly) id <HMDHPSAccessorySettingService> service; // @synthesize service=_service;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <HMDFetchedSettingsDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)serviceDidInitializeForCurrentAccessory:(id)arg1;
- (void)didReconnect;
- (void)didUpdateSetting:(id)arg1 forKeyPath:(id)arg2;
- (id)_languageValueList;
- (void)languageValueListWithCompletion:(CDUnknownBlockType)arg1;
- (void)_writeSetting:(id)arg1 keyPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processReadResults:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_readSettingsAtKeyPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_transformPreferredMediaUserEvent:(id)arg1;
- (id)_transformToImmutableSetting:(id)arg1;
- (void)updateSettingWithKeyPath:(id)arg1 primaryUserInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSettingWithKeyPath:(id)arg1 integerSettingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSettingWithKeyPath:(id)arg1 boolSettingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_hpLanguageValueFromLanguageValue:(id)arg1;
- (void)updateSettingWithKeyPath:(id)arg1 languageSettingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchSettingsForKeyPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startWithKeyPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithQueue:(id)arg1 settingsObjectFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

