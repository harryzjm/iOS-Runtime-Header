//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, ProviderConfiguration;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface RemoteConfigurationController : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDictionary *_currentConfiguration;
    NSObject<OS_dispatch_source> *_updateTimer;
    _Bool _googleConfigurationDidChange;
    _Bool _tencentConfigurationDidChange;
    _Bool _appleConfigurationDidChange;
    ProviderConfiguration *_googleProviderConfiguration;
    ProviderConfiguration *_tencentProviderConfiguration;
    ProviderConfiguration *_appleProviderConfiguration;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(readonly, nonatomic) ProviderConfiguration *appleProviderConfiguration; // @synthesize appleProviderConfiguration=_appleProviderConfiguration;
@property(readonly, nonatomic) ProviderConfiguration *tencentProviderConfiguration; // @synthesize tencentProviderConfiguration=_tencentProviderConfiguration;
@property(readonly, nonatomic) ProviderConfiguration *googleProviderConfiguration; // @synthesize googleProviderConfiguration=_googleProviderConfiguration;
- (_Bool)forceUpdateConfigurationFromServer;
- (_Bool)forceLoadConfigurationFromDisk;
- (void)_scheduleConfigurationUpdateDaily;
- (void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
- (id)_lastConfigurationUpdateAttemptDate;
- (_Bool)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)arg1;
- (void)_didReceiveConfigurationData:(id)arg1;
- (void)_updateConfigurationIfNecessary;
- (void)_downloadConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_notifyProviderConfigurationsDidChangeIfNecessary;
- (void)_setCurrentConfiguration:(id)arg1;
- (void)_writeConfigurationToDisk:(id)arg1;
- (void)_loadConfigurationFromDiskIfNecessary;
- (id)_urlOfDownloadedConfiguration;
- (void)_resetProviderConfigurationsDidChange;
- (void)_initializeProviderConfigurationsWithConfiguration:(id)arg1;
- (void)_simplifyProviderConfigurations;
- (void)_initializeToDefaultProviderConfigurations;
- (id)_providerToTurnOffFromProviderDictionary:(id)arg1;
@property(readonly, nonatomic, getter=isSafeBrowsingOff) _Bool safeBrowsingOff;
- (void)dealloc;
- (id)init;

@end

