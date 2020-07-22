//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PrototypeTools/_UISettingsGroupObserver-Protocol.h>
#import <PrototypeTools/_UISettingsKeyPathObserver-Protocol.h>

@class NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, _UISettings;

@interface PTSSection : NSObject <_UISettingsKeyPathObserver, _UISettingsGroupObserver>
{
    NSArray *_rows;
    NSHashTable *_observers;
    NSMutableArray *_allConcreteRows;
    NSMutableArray *_enabledConcreteRows;
    NSMutableDictionary *_concreteRowsByTemplateIndex;
    NSMutableDictionary *_groupsByTemplateIndex;
    NSString *_title;
    _UISettings *_settings;
    NSString *_submoduleKeyPath;
    NSArray *_appearanceConditions;
}

@property(retain, nonatomic) NSArray *appearanceConditions; // @synthesize appearanceConditions=_appearanceConditions;
@property(retain, nonatomic) NSString *submoduleKeyPath; // @synthesize submoduleKeyPath=_submoduleKeyPath;
@property(retain, nonatomic) _UISettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_assertNoGroupTemplateProperties:(id)arg1;
- (void)_fixRows:(id)arg1 fromIndex:(unsigned long long)arg2 withTemplate:(id)arg3;
- (void)_sendReload;
- (void)_sendInserts:(id)arg1 deletes:(id)arg2;
- (_Bool)_shouldEnableRow:(id)arg1;
- (void)_reloadEnabledRows;
- (void)_updateEnabledRows;
- (void)settingsGroup:(id)arg1 didMoveSettings:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)settingsGroup:(id)arg1 didRemoveSettings:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)settingsGroup:(id)arg1 didInsertSettings:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)moveRowAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (unsigned long long)destinationForRowAtIndex:(unsigned long long)arg1 withProposedDestination:(unsigned long long)arg2;
- (_Bool)hasEnabledEditableRows;
- (void)enumerateEnabledRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (unsigned long long)indexOfRow:(id)arg1;
- (id)rowAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfRows;
- (void)dealloc;
- (id)initWithRows:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

