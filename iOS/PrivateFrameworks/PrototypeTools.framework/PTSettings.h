//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PrototypeTools/NSCopying-Protocol.h>
#import <PrototypeTools/PTSettingsKeyPathObserver-Protocol.h>

@class NSDictionary, NSHashTable, NSSet, NSString;
@protocol _PTSettingsRestoreDefaultsObserver;

@interface PTSettings : NSObject <PTSettingsKeyPathObserver, NSCopying>
{
    NSHashTable *_internal_keyObservers;
    NSHashTable *_internal_keyPathObservers;
    id <_PTSettingsRestoreDefaultsObserver> _internal_restoreDefaultsObserver;
    NSSet *_internal_childKeys;
    NSSet *_internal_outletKeys;
    NSSet *_internal_leafKeys;
    NSDictionary *_internal_keyClasses;
    NSDictionary *_internal_keyStructs;
    _Bool _internal_observationEnabled;
    _Bool _internal_isObservingProperties;
    _Bool _internal_isObservingChildren;
}

+ (id)_valueOfStructType:(id)arg1 fromArchiveDictionary:(id)arg2;
+ (id)_objectOfCustomClass:(Class)arg1 fromArchiveDictionary:(id)arg2;
+ (id)_archiveDictionaryForValue:(id)arg1 ofStructType:(id)arg2;
+ (id)_archiveDictionaryForObject:(id)arg1 ofCustomClass:(Class)arg2;
+ (_Bool)_supportsArchivingStructType:(id)arg1;
+ (_Bool)_supportsArchivingCustomClass:(Class)arg1;
+ (_Bool)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;
+ (id)settingsFromArchiveDictionary:(id)arg1;
- (void).cxx_destruct;
- (void)_sendKeyPathChanged:(id)arg1;
- (void)_sendKeyChanged:(id)arg1;
- (id)_keyForChild:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_introspectKeys;
- (id)_archiveValueForKeyPath:(id)arg1;
- (_Bool)_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (_Bool)_getChild:(id *)arg1 leafKey:(id *)arg2 forKeyPath:(id)arg3 error:(id *)arg4;
- (void)_enumerateOutletsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateChildrenWithBlock:(CDUnknownBlockType)arg1;
- (id)_archiveValueForLeafKey:(id)arg1;
- (_Bool)_applyArchiveValue:(id)arg1 forLeafKey:(id)arg2 error:(id *)arg3;
- (_Bool)_shouldOmitKeyFromArchive:(id)arg1;
- (id)_allKeys;
- (void)_addInternalEntriesToArchiveDictionary:(id)arg1;
- (void)_stopObservingChildren;
- (void)_startObservingChildren;
- (void)_stopObservingProperties;
- (void)_startObservingProperties;
- (void)_startOrStopObservingPropertiesAndChildren;
- (_Bool)_hasKeyPathObservers;
- (_Bool)_hasObservers;
- (void)_setRestoreDefaultsObserver:(id)arg1;
- (void)_setObservationEnabled:(_Bool)arg1;
- (id)archiveValueForKey:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)drillDownSummary;
- (void)setDefaultValues;
- (void)invalidateValueForKey:(id)arg1;
- (void)removeKeyPathObserver:(id)arg1;
- (void)addKeyPathObserver:(id)arg1;
- (void)removeKeyObserver:(id)arg1;
- (void)addKeyObserver:(id)arg1;
- (void)applySettings:(id)arg1;
- (void)restoreFromArchiveDictionary:(id)arg1;
- (void)restoreDefaultValues;
- (id)archiveDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)_applyArchiveDictionary:(id)arg1;
- (id)_initWithArchiveDictionary:(id)arg1;
- (id)init;
- (id)initWithDefaultValues;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

