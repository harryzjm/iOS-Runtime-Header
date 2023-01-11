//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PrototypeTools/PTSectionObserver-Protocol.h>
#import <PrototypeTools/PTSettingsKeyPathObserver-Protocol.h>

@class NSHashTable, NSMutableArray, NSString, PTSettings;

@interface PTModule : NSObject <PTSettingsKeyPathObserver, PTSectionObserver>
{
    NSHashTable *_observers;
    NSMutableArray *_allSections;
    NSMutableArray *_enabledSections;
    PTSettings *_settings;
    NSString *_title;
}

+ (id)moduleWithSettings:(id)arg1;
+ (id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2 condition:(id)arg3;
+ (id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2 conditionFormat:(id)arg3;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2 condition:(id)arg3;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2;
+ (id)sectionWithRows:(id)arg1;
+ (id)moduleWithTitle:(id)arg1 contents:(id)arg2;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) PTSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSMutableArray *enabledSections; // @synthesize enabledSections=_enabledSections;
@property(retain, nonatomic) NSMutableArray *allSections; // @synthesize allSections=_allSections;
- (void).cxx_destruct;
- (_Bool)_shouldEnableSection:(id)arg1;
- (id)_settingsForSection:(id)arg1;
- (void)_updateEnabledSections;
- (void)_addSubmodule:(id)arg1;
- (void)_addSection:(id)arg1;
- (void)sectionDidReload:(id)arg1;
- (void)section:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)enumerateEnabledRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)indexPathForRow:(id)arg1;
- (id)rowAtIndexPath:(id)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)dealloc;
- (id)initWithContents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

