//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFUserInfoManagerDelegate-Protocol.h>

@class NSHashTable, NSString, WFRemoteAppSettings, WFUserInfoManager;
@protocol OS_dispatch_queue;

@interface WFSettingsManager : NSObject <WFUserInfoManagerDelegate>
{
    _Bool _useFallback;
    struct os_unfair_lock_s _settingsLock;
    WFRemoteAppSettings *_settings;
    WFUserInfoManager *_userInfoManager;
    NSObject<OS_dispatch_queue> *_requestSerialQueue;
    NSHashTable *_observers;
}

+ (void)setUserIdentifier:(id)arg1;
+ (id)userIdentifier;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) struct os_unfair_lock_s settingsLock; // @synthesize settingsLock=_settingsLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestSerialQueue; // @synthesize requestSerialQueue=_requestSerialQueue;
@property(retain, nonatomic) WFUserInfoManager *userInfoManager; // @synthesize userInfoManager=_userInfoManager;
- (void)userInfoManager:(id)arg1 didSynchronizeUserIdentifier:(id)arg2;
- (void)updateAssetURLHostIfNeededWithComponents:(id)arg1 containerIdentifier:(id)arg2;
- (_Bool)shouldReroutePermanentURLsForContainerIdentifier:(id)arg1;
- (id)urlSafeBase64EncodedStringWithData:(id)arg1 options:(unsigned long long)arg2;
- (id)containerIdentifier;
- (BOOL)containerIDForContainerIdentifier:(id)arg1;
- (id)permanentURLForRecordID:(id)arg1 containerIdentifier:(id)arg2;
- (void)completeOnQueue:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyObserversOfAppConfigRefresh;
- (void)fetchAppConfigurationWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceFetchAppConfiguration;
- (void)fetchAppConfigurationIfExpired;
- (_Bool)clearConfigCacheOnLaunchIfRequested;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSString *APIVersion;
@property(retain, nonatomic) WFRemoteAppSettings *settings; // @synthesize settings=_settings;
- (void)setUseFallback:(_Bool)arg1;
@property(readonly, nonatomic) _Bool useFallback; // @synthesize useFallback=_useFallback;
- (void)setupRemoteSettings;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
