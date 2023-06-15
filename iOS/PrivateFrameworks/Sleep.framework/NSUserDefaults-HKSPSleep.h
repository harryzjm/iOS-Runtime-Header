//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserDefaults.h>

@class NSString;

@interface NSUserDefaults (HKSPSleep)
+ (id)hksp_springBoardUserDefaults;
+ (id)hksp_analyticsUserDefaults;
+ (id)hksp_internalUserDefaults;
+ (id)hksp_sleepdUserDefaults;
- (void)hksp_setUseDemoSleepData:(_Bool)arg1;
- (_Bool)hksp_useDemoSleepData;
- (void)hksp_setDebugSleepModeAlpha:(float)arg1;
- (float)hksp_debugSleepModeAlpha:(_Bool *)arg1;
- (void)hksp_setDebugSleepModeEnabled:(_Bool)arg1;
- (_Bool)hksp_debugSleepModeEnabled;
- (void)hksp_setLockScreenDemoMode:(_Bool)arg1;
- (_Bool)hksp_lockScreenDemoMode;
- (void)hksp_setLockScreenDebugMode:(_Bool)arg1;
- (_Bool)hksp_lockScreenDebugMode;
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

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

