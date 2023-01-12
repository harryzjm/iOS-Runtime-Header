//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSPersistentStore, NSPersistentStoreCoordinator, NSString, NSURL, PFUbiquityBaseline, PFUbiquityContainerIdentifier, PFUbiquityKnowledgeVector, PFUbiquityLocation, PFUbiquityMigrationAssistant, PFUbiquityMigrationManager, PFUbiquityPeerReceipt, PFUbiquityPeerState, PFUbiquityStoreMetadata, PFUbiquitySwitchboardEntry, _PFUbiquityStack;
@protocol NSObject><NSCopying><NSCoding, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface PFUbiquitySetupAssistant : NSObject
{
    NSMutableDictionary *_options;
    NSPersistentStoreCoordinator *_psc;
    NSPersistentStore *_store;
    NSString *_storeType;
    NSURL *_storeURL;
    NSURL *_actualStoreFileURL;
    NSMutableDictionary *_storeMetadataDict;
    _Bool _needsMetadataWrite;
    PFUbiquityKnowledgeVector *_storeKV;
    _Bool _ubiquityEnabled;
    id <NSObject><NSCopying><NSCoding> _ubiquityIdentityToken;
    NSURL *_ubiquityRootURL;
    NSString *_ubiquityRootSubpath;
    NSString *_ubiquityName;
    NSString *_ubiquityContainerIdentifier;
    NSString *_localPeerID;
    NSString *_modelVersionHash;
    NSString *_previousModelVersionHash;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    _PFUbiquityStack *_stack;
    PFUbiquityStoreMetadata *_storeMetadata;
    PFUbiquityPeerState *_localPeerState;
    PFUbiquityKnowledgeVector *_metaKV;
    PFUbiquityBaseline *_baseline;
    _Bool _baselineFileExistsInCloud;
    _Bool _hasUploadingBaseline;
    _Bool _monitorUploadingBaselineAsync;
    _Bool _didBaselineCopy;
    PFUbiquityKnowledgeVector *_baselineKV;
    _Bool _votedOffIsland;
    _Bool _reapUbiquitousLogs;
    _Bool _respondToBaselineRoll;
    _Bool _storeFileExists;
    _Bool _storeFileIsReadOnly;
    _Bool _hasStoreMetadataFile;
    _Bool _hasStoreMetadataEntry;
    _Bool _hasContainerUUID;
    _Bool _hasContainerUUIDInStore;
    _Bool _needsMetadataRecovery;
    PFUbiquityPeerReceipt *_localPeerReceipt;
    PFUbiquityKnowledgeVector *_receiptKV;
    PFUbiquityContainerIdentifier *_containerIdentifier;
    NSString *_preStoreContainerUUID;
    _Bool _usedExistingUUIDMapping;
    _Bool _hasLocalTransactionLogs;
    _Bool _hasMigrationOptions;
    _Bool _didMigrateBaseline;
    _Bool _storeWasMigrated;
    PFUbiquityMigrationAssistant *_migrationAssistant;
    PFUbiquityMigrationManager *_migrationManager;
    _Bool _replayLogsSynchronously;
    _Bool _useLocalAccount;
    _Bool _seedStore;
    NSURL *_seedStoreURL;
    _Bool _haveExistingUUIDMappings;
    _Bool _abortSetup;
    PFUbiquitySwitchboardEntry *_entry;
    _Bool _gotExportNotification;
    int _sideLoadLock;
    NSMutableSet *_logLocationsExportedDuringSideLoad;
    NSMutableDictionary *_gidToRid;
    NSMutableDictionary *_entityNameToGidSet;
    NSObject<OS_dispatch_semaphore> *_initialSyncSemaphore;
    int _initialSyncComplete;
    NSMutableArray *_queryLocations;
    _Bool _notifyAboutSetupProgress;
    long long _numSetupTries;
    unsigned long long _retryDelaySec;
    _Bool _failSetup;
    NSError *_failSetupError;
    _Bool _gotAccountChange;
    _Bool _cacheFilePresenterForUbiquityRoot;
}

- (void)coordinatorWillRemoveStore:(id)arg1;
- (void)ubiquityIdentityTokenChanged:(id)arg1;
- (void)exportedLog:(id)arg1;
- (void)dealloc;
- (id)initWithPersistentStoreCoordinator:(id)arg1 andStoreOptions:(id)arg2 forPersistentStoreOfType:(id)arg3 atURL:(id)arg4;
- (id)init;

@end
