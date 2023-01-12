//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDSPEnvironment, HDSPSyncedDefaultsConfiguration, HKSPAccumulator, NPSDomainAccessor, NPSManager, NSString;
@protocol HDSPSyncedUserDefaultsExternalChangeDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HDSPNanoDefaults : NSObject
{
    HDSPEnvironment *_environment;
    HDSPSyncedDefaultsConfiguration *_configuration;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_npsDomainAccessorQueue;
    HKSPAccumulator *_notifyAccumulator;
    NPSDomainAccessor *_npsDomainAccessor;
    id <HDSPSyncedUserDefaultsExternalChangeDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HDSPSyncedUserDefaultsExternalChangeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hksp_reset;
- (void)hksp_synchronizeKeys:(id)arg1;
- (void)hksp_synchronize;
- (void)hksp_removeObjectsForKeys:(id)arg1;
- (void)hksp_saveDictionary:(id)arg1;
- (id)hksp_dictionaryRepresentationForKeys:(id)arg1;
- (id)hksp_dictionaryRepresentation;
- (id)hksp_dataForKey:(id)arg1;
- (void)hksp_setInteger:(long long)arg1 forKey:(id)arg2;
- (long long)hksp_integerForKey:(id)arg1;
- (void)hksp_setFloat:(float)arg1 forKey:(id)arg2;
- (float)hksp_floatForKey:(id)arg1;
- (void)hksp_setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)hksp_boolForKey:(id)arg1;
- (void)hksp_removeObjectForKey:(id)arg1;
- (void)hksp_setObject:(id)arg1 forKey:(id)arg2;
- (id)hksp_objectForKey:(id)arg1;
- (void)_registerForNotifications;
- (void)hdsp_setExternalChangeDelegate:(id)arg1;
- (void)hdsp_forceSynchronizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleNanoPreferencesSync:(id)arg1;
- (void)_handleActivePairedDeviceDidChange:(id)arg1;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (void)_resetNPSDomainAccessor;
@property(readonly, nonatomic) NPSDomainAccessor *npsDomainAccessor; // @synthesize npsDomainAccessor=_npsDomainAccessor;
- (id)_keysForChangeNotification:(id)arg1;
- (id)initWithEnvironment:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

