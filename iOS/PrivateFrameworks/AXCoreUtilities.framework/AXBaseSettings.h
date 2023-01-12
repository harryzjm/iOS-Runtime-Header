//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface AXBaseSettings : NSObject
{
    struct os_unfair_lock_s _domainNamesToSynchronizeLock;
    NSMutableSet *_registeredPreferenceKeys;
    NSMutableDictionary *_preferenceKeysByDomainNameToSynchronize;
    NSMutableDictionary *_updateBlocks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property(retain, nonatomic) NSMutableDictionary *preferenceKeysByDomainNameToSynchronize; // @synthesize preferenceKeysByDomainNameToSynchronize=_preferenceKeysByDomainNameToSynchronize;
@property(retain, nonatomic) NSMutableSet *registeredPreferenceKeys; // @synthesize registeredPreferenceKeys=_registeredPreferenceKeys;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_registerForNotification:(id)arg1;
- (id)_userDefaultsStoreForDomainName:(id)arg1;
- (void)_handlePreferenceChangedWithNotificationName:(id)arg1;
- (void)_synchronizeIfNecessaryForPreferenceKey:(id)arg1 domainName:(id)arg2;
- (_Bool)_switchFromRootUserIfNecessary:(CDUnknownBlockType)arg1;
- (id)objectValueForPreferenceKey:(id)arg1 ofClass:(Class)arg2 defaultValue:(id)arg3;
- (double)doubleValueForPreferenceKey:(id)arg1 defaultValue:(double)arg2;
- (long long)integerValueForPreferenceKey:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)boolValueForPreferenceKey:(id)arg1 defaultValue:(_Bool)arg2;
- (void)willPerformUpdateBlocksForPreferenceKey:(id)arg1;
- (void)postNotificationForPreferenceKey:(id)arg1;
- (void)willPostNotificationForPreferenceKey:(id)arg1 value:(id)arg2;
- (void)setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (id)valueForPreferenceKey:(id)arg1;
- (id)preferenceKeyForSelector:(SEL)arg1;
- (id)allDomainNamesForPreferenceKey:(id)arg1;
- (id)domainNameForPreferenceKey:(id)arg1;
- (id)notificationNameForPreferenceKey:(id)arg1;
- (void)clearExistingValueForPreferenceWithSelector:(SEL)arg1;
- (_Bool)hasExistingValueForPreferenceWithSelector:(SEL)arg1;
- (void)registerUpdateBlock:(CDUnknownBlockType)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (void)dealloc;
- (id)init;

@end
