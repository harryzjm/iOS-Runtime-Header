//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/HMHomeManagerDelegate-Protocol.h>
#import <VoiceShortcuts/VCSyncDataHandling-Protocol.h>

@class HMHomeManager, NSMapTable, NSString, VCCoreDataStore;
@protocol OS_dispatch_queue, VCVoiceShortcutSyncService;

@interface VCVoiceShortcutManager : NSObject <HMHomeManagerDelegate, VCSyncDataHandling>
{
    unsigned long long _persistenceType;
    VCCoreDataStore *_dataStore;
    NSMapTable *_syncServices;
    id <VCVoiceShortcutSyncService> _masterSyncService;
    NSObject<OS_dispatch_queue> *_syncServicesIsolationQueue;
    HMHomeManager *_hmHomeManager;
    NSObject<OS_dispatch_queue> *_updateVoiceShortcutsSharedVocabularyQueue;
}

+ (id)sharedManager;
+ (void)initialize;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *updateVoiceShortcutsSharedVocabularyQueue; // @synthesize updateVoiceShortcutsSharedVocabularyQueue=_updateVoiceShortcutsSharedVocabularyQueue;
@property(retain, nonatomic) HMHomeManager *hmHomeManager; // @synthesize hmHomeManager=_hmHomeManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *syncServicesIsolationQueue; // @synthesize syncServicesIsolationQueue=_syncServicesIsolationQueue;
@property(nonatomic) __weak id <VCVoiceShortcutSyncService> masterSyncService; // @synthesize masterSyncService=_masterSyncService;
@property(readonly, nonatomic) NSMapTable *syncServices; // @synthesize syncServices=_syncServices;
- (void).cxx_destruct;
- (void)describeSyncStateIncludingDeleted:(_Bool)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestSyncForServiceClassName:(id)arg1 forceReset:(_Bool)arg2 accessSpecifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)populateBlacklistStatusOnVoiceShortcut:(id)arg1 withAccessSpecifier:(id)arg2;
- (id)addExtraVocabForDemoIfAppropriate:(id)arg1;
- (void)_updateVoiceShortcutsSharedVocabularyAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scheduleVocabularySyncToServerWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncVocabularyToServer;
- (void)handleAssistantPrefChangedNotification;
- (_Bool)isSyncServiceRegisteredWithIdentifier:(id)arg1;
- (void)enumerateSyncServicesUsingBlock:(CDUnknownBlockType)arg1;
- (void)deregisterSyncServiceWithIdentifier:(id)arg1;
- (void)registerSyncService:(id)arg1 asMaster:(_Bool)arg2;
- (void)dataWasUpdatedFromSyncServiceWithIdentifier:(id)arg1;
- (void)dataWasUpdatedInResponseToUserAction;
- (id)createMessageFromData:(id)arg1;
- (void)removeSyncStateForSyncServiceWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markChangesAsSynced:(struct NSOrderedSet *)arg1 withSyncServiceWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getUnsyncedChangesForSyncServiceWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applyChangeSet:(struct NSOrderedSet *)arg1 fromSyncServiceWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)rehydrateFromMasterSyncServiceIfNeeded;
@property(nonatomic) _Bool needsToBeRehydratedFromMasterSyncService;
- (_Bool)deleteSyncedData:(id *)arg1;
- (void)cleanUpAfterDeletedApps;
- (void)setUpAfterInstalledApps:(id)arg1;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2 accessSpecifier:(id)arg3;
- (_Bool)phraseHasHomeKitConflict:(id)arg1;
- (id)sanitizePhrase:(id)arg1;
- (void)validateVoiceShortcutPhrases:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 workflow:(id)arg3 accessSpecifier:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addVoiceShortcut:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getVoiceShortcutsForAppWithBundleIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVoiceShortcutWithPhrase:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getNumberOfVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) VCCoreDataStore *dataStore; // @synthesize dataStore=_dataStore;
- (id)dataStoreWithError:(id *)arg1;
- (id)initWithPersistenceType:(unsigned long long)arg1 error:(id *)arg2;
- (int)handledMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
