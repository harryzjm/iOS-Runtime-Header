//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CCSModuleSettingsProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSObject<OS_dispatch_source> *_configurationChangedSource;
    NSHashTable *_observers;
    NSArray *_orderedFixedModuleIdentifiers;
    NSArray *_orderedUserEnabledModuleIdentifiers;
    NSArray *_orderedUserEnabledFixedModuleIdentifiers;
    NSArray *_userDisabledModuleIdentifiers;
}

+ (id)_defaultUserEnabledModuleIdentifiers;
+ (id)_defaultUserEnabledFixedModuleIdentifiers;
+ (id)_defaultFixedModuleIdentifiers;
+ (id)_configurationFileURL;
+ (id)_configurationDirectoryURL;
+ (id)_defaultEnabledModuleOrder;
+ (void)_writeOrderedIdentifiers:(id)arg1 userEnabledFixedIdentifiers:(id)arg2 userDisabledIdentifiers:(id)arg3;
+ (id)_readSettings;
+ (id)sharedProvider;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_queue_runBlockOnListeners:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_queue_sendConfigurationFileUpdateMessageToObservers;
- (void)_queue_handleConfigurationFileUpdate;
- (void)_queue_stopMonitoringConfigurationUpdates;
- (void)_queue_startMonitoringConfigurationUpdates;
- (void)_queue_saveSettings;
- (void)_queue_loadSettings;
- (void)setAndSaveOrderedUserEnabledFixedModuleIdentifiers:(id)arg1;
- (void)setAndSaveOrderedUserEnabledModuleIdentifiers:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *userDisabledModuleIdentifiers;
@property(readonly, copy, nonatomic) NSArray *orderedUserEnabledFixedModuleIdentifiers;
@property(readonly, copy, nonatomic) NSArray *orderedUserEnabledModuleIdentifiers;
@property(readonly, copy, nonatomic) NSArray *orderedFixedModuleIdentifiers;
- (void)dealloc;
- (id)init;

@end
