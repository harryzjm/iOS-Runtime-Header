//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccountStore, AFPreferences, RTAccount, RTDarwinNotificationHelper, RTDefaultsManager, RTInvocationDispatcher, RTLifeCycleManager;

@interface RTAccountManager
{
    _Bool _ready;
    _Bool _siriCloudSyncEnabled;
    _Bool _cloudSyncProvisionedForAccount;
    ACAccountStore *_accountStore;
    RTAccount *_account;
    RTInvocationDispatcher *_dispatcher;
    RTDefaultsManager *_defaultsManager;
    RTLifeCycleManager *_lifecycleManager;
    long long _cloudSyncAuthorizationState;
    RTDarwinNotificationHelper *_notificationHelper;
    AFPreferences *_siriPreferences;
    double _authorizationChangeExitTimeInterval;
}

+ (_Bool)supportsNotificationName:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double authorizationChangeExitTimeInterval; // @synthesize authorizationChangeExitTimeInterval=_authorizationChangeExitTimeInterval;
@property(retain, nonatomic) AFPreferences *siriPreferences; // @synthesize siriPreferences=_siriPreferences;
@property(retain, nonatomic) RTDarwinNotificationHelper *notificationHelper; // @synthesize notificationHelper=_notificationHelper;
@property(nonatomic) _Bool cloudSyncProvisionedForAccount; // @synthesize cloudSyncProvisionedForAccount=_cloudSyncProvisionedForAccount;
@property(nonatomic) _Bool siriCloudSyncEnabled; // @synthesize siriCloudSyncEnabled=_siriCloudSyncEnabled;
@property(nonatomic) long long cloudSyncAuthorizationState; // @synthesize cloudSyncAuthorizationState=_cloudSyncAuthorizationState;
@property(retain, nonatomic) RTLifeCycleManager *lifecycleManager; // @synthesize lifecycleManager=_lifecycleManager;
@property(retain, nonatomic) RTDefaultsManager *defaultsManager; // @synthesize defaultsManager=_defaultsManager;
@property(retain, nonatomic) RTInvocationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) RTAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (void)_onDefaultsUpdate:(id)arg1;
- (void)onDefaultsUpdate:(id)arg1;
- (void)_handleSiriCloudSyncPreferenceChangedNotification;
- (void)handleSiriCloudSyncPreferenceChangedNotification;
- (long long)accountStatus;
- (void)_updateCloudSyncAuthorizationState:(_Bool)arg1;
- (void)updateCloudSyncAuthorizationState:(_Bool)arg1;
- (void)updateCloudSyncProvisionedForAccount:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchCloudSyncAuthorizationState:(CDUnknownBlockType)arg1;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)currentAccount:(CDUnknownBlockType)arg1;
- (void)_lookupAccount:(CDUnknownBlockType)arg1;
- (void)lookupAccount:(CDUnknownBlockType)arg1;
- (id)_primaryiCloudAccount;
- (void)_shutdown;
- (void)dealloc;
- (void)_setup;
- (void)setup;
- (id)initWithAccountStore:(id)arg1 lifecycleManager:(id)arg2 defaultsManager:(id)arg3;
- (id)initWithLifecycleManager:(id)arg1 defaultsManager:(id)arg2;
- (id)init;

@end

