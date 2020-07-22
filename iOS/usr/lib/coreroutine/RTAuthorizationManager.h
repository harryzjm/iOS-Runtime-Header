//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RTInvocationDispatcher, RTMetricManager, RTPlatform, RTUserSessionMonitor;

@interface RTAuthorizationManager
{
    RTMetricManager *_metricManager;
    _Bool _supported;
    _Bool _enabled;
    _Bool _ready;
    RTInvocationDispatcher *_dispatcher;
    RTPlatform *_platform;
    RTUserSessionMonitor *_userSessionMonitor;
}

+ (_Bool)supportsNotificationName:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain) RTUserSessionMonitor *userSessionMonitor; // @synthesize userSessionMonitor=_userSessionMonitor;
@property(retain, nonatomic) RTPlatform *platform; // @synthesize platform=_platform;
@property(nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isSupported) _Bool supported; // @synthesize supported=_supported;
@property(retain, nonatomic) RTInvocationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
- (void).cxx_destruct;
- (void)onUserSessionChangeNotification:(id)arg1;
- (void)_logRoutineEnabled:(_Bool)arg1;
- (void)_fetchMagicalMomentsLocationUsageEnabled:(CDUnknownBlockType)arg1;
- (void)fetchMagicalMomentsLocationUsageEnabled:(CDUnknownBlockType)arg1;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)handleAppResetChangeNotification;
- (void)updateRoutineEnabled:(_Bool)arg1;
- (void)setRoutineEnabled:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldPersistLocations;
- (void)fetchRoutineSupportedWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchBBPluginSupportedWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchRoutineEnabledWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)isCoreRoutineLocationClientEnabled;
- (_Bool)isLocationServicesEnabled;
- (void)dealloc;
- (void)_shutdown;
- (void)shutdown;
- (void)_setup;
- (void)setup;
- (id)initWithMetricManager:(id)arg1 platform:(id)arg2 userSessionMonitor:(id)arg3;
- (id)init;

@end

