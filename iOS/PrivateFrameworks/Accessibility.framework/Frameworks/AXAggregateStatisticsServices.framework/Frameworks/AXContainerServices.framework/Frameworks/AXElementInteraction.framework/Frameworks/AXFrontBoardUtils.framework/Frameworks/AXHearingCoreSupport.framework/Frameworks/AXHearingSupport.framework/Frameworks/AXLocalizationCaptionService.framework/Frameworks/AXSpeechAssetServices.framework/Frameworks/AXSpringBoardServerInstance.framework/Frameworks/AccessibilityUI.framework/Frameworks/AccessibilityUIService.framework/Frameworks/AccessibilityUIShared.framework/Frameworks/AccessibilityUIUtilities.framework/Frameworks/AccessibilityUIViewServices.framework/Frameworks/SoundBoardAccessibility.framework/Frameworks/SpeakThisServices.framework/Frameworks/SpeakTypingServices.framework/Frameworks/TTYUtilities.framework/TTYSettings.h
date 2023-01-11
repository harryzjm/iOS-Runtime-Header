//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSMutableSet, NSString;

@interface TTYSettings : NSObject
{
    NSLock *_synchronizeDomainsLock;
    NSMutableSet *_registeredNotifications;
    NSMutableSet *_synchronizePreferences;
    NSMutableDictionary *_updateBlocks;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property(retain, nonatomic) NSMutableSet *synchronizePreferences; // @synthesize synchronizePreferences=_synchronizePreferences;
@property(retain, nonatomic) NSMutableSet *registeredNotifications; // @synthesize registeredNotifications=_registeredNotifications;
- (void).cxx_destruct;
@property(nonatomic) _Bool internalOverrideTTYAvailability;
@property(nonatomic) _Bool hasReceivedRTTCall;
- (void)setPreferredRelayNumber:(id)arg1 forContext:(id)arg2;
- (id)preferredRelayNumberForContext:(id)arg1;
- (void)setTTYShouldBeRealtime:(_Bool)arg1 forContext:(id)arg2;
- (_Bool)ttyShouldBeRealtimeForContext:(id)arg1;
- (void)setIncomingCallsTTY:(_Bool)arg1 forContext:(id)arg2;
- (_Bool)incomingCallsTTYForContext:(id)arg1;
- (void)setTTYSoftwareEnabled:(_Bool)arg1 forContext:(id)arg2;
- (_Bool)TTYSoftwareEnabledForContext:(id)arg1;
- (void)setTTYHardwareEnabled:(_Bool)arg1 forContext:(id)arg2;
- (_Bool)TTYHardwareEnabledForContext:(id)arg1;
@property(retain, nonatomic) NSString *preferredRelayNumber;
@property(nonatomic) _Bool ttyShouldBeRealtime;
@property(nonatomic) double lastDBVacuum;
@property(nonatomic) double lastCallCountReset;
- (void)setSettingsVersion:(long long)arg1;
- (long long)settingsVersion;
@property(nonatomic) long long outgoingTTYCallCount;
@property(nonatomic) long long incomingTTYCallCount;
@property(nonatomic) _Bool incomingCallsTTY;
@property(nonatomic) _Bool TTYSoftwareEnabled;
@property(nonatomic) _Bool TTYHardwareEnabled;
- (id)valueForPreferenceKey:(id)arg1;
- (id)objectValueForKey:(id)arg1 withClass:(Class)arg2 andDefaultValue:(id)arg3;
- (id)objectValueForKey:(id)arg1 andContext:(id)arg2 withClass:(Class)arg3 andDefaultValue:(id)arg4;
- (_Bool)boolValueForKey:(id)arg1 withDefaultValue:(_Bool)arg2;
- (_Bool)boolValueForKey:(id)arg1 andContext:(id)arg2 withDefaultValue:(_Bool)arg3;
- (long long)integerValueForKey:(id)arg1 withDefaultValue:(long long)arg2;
- (void)_synchronizeIfNecessary:(id)arg1;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 andContext:(id)arg3;
- (void)updateGizmoValueIfNeeded:(id)arg1 forPreferenceKey:(id)arg2;
- (void)registerUpdateBlock:(CDUnknownBlockType)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (id)notificationForSelector:(SEL)arg1;
- (void)_registerForNotification:(id)arg1;
- (SEL)selectorForPreferenceKey:(id)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (id)_selectorMap;
- (id)_notificationForPreferenceKey:(id)arg1;
- (void)_handlePreferenceChanged:(id)arg1;
- (void)migrateSettings;
- (_Bool)shouldMigrateSettings;
- (void)dealloc;
- (id)currentLocale;
- (id)init;

@end

