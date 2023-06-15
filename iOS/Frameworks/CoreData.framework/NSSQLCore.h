//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPersistentStore.h"

@class NSData, NSDictionary, NSGenerationalRowCache, NSMutableDictionary, NSObject, NSOperationQueue, NSSQLCoreDispatchManager, NSSQLModel, NSSQLiteAdapter, NSSQLiteConnection, NSSet, NSString, NSURL, _NSSQLCoreConnectionObserver, _PFMutex;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NSSQLCore : NSPersistentStore
{
    NSSQLModel *_model;
    NSSQLiteAdapter *_adapter;
    NSSQLiteConnection *_schemaValidationConnection;
    NSSQLCoreDispatchManager *_dispatchManager;
    NSGenerationalRowCache *_generationalRowCache;
    _NSSQLCoreConnectionObserver *_observer;
    struct os_unfair_lock_s _sqlCoreStateLock;
    NSMutableDictionary *_storeMetadata;
    NSString *_externalDataReferencesDirectory;
    NSString *_externalDataLinksDirectory;
    NSString *_fileBackedFuturesPath;
    int _transactionInMemorySequence;
    _Bool _metadataIsClean;
    struct _sqlCoreFlags {
        unsigned int useSyntaxColoredLogging:1;
        unsigned int hasExternalDataReferences:1;
        unsigned int fileProtectionType:3;
        unsigned int notifyFOKChanges:1;
        unsigned int initializationComplete:1;
        unsigned int connectionsAreLocal:1;
        unsigned int isXPCDelegate:1;
        unsigned int queryGenerationInitializationFailed:1;
        unsigned int persistentHistoryTracking:1;
        unsigned int hasAncillaryModels:1;
        unsigned int postRemoteNotify:1;
        unsigned int hasFileBackedFutures:1;
        unsigned int isInMemory:1;
        unsigned int _debugRequestsHandling:1;
        unsigned int historyBatchUpdateModProperties:1;
        unsigned int indexTracking:1;
        unsigned int memoryObserverSuspended:1;
        unsigned int _RESERVED:13;
    } _sqlCoreFlags;
    NSSQLiteConnection *_queryGenerationTrackingConnection;
    _PFMutex *_writerSerializationMutex;
    NSDictionary *_ancillaryModels;
    NSDictionary *_ancillarySQLModels;
    NSDictionary *_historyTrackingOptions;
    NSData *_dbKey;
    id _usedIndexes;
    _Bool _remoteStoresDidChange;
    int _remoteNotificationToken;
    NSObject<OS_dispatch_source> *_cache_event_source;
}

+ (_Bool)dropPersistentHistoryforPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (_Bool)_rekeyPersistentStoreAtURL:(id)arg1 options:(id)arg2 withKey:(id)arg3 error:(id *)arg4;
+ (_Bool)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id *)arg5;
+ (_Bool)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)cachedModelForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (_Bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (_Bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1;
+ (Class)migrationManagerClass;
+ (Class)rowCacheClass;
+ (void)initialize;
+ (void)setTrackSQLiteDatabaseStatistics:(_Bool)arg1;
+ (_Bool)trackSQLiteDatabaseStatistics;
+ (long long)bufferedAllocationsOverride;
+ (_Bool)useConcurrentFetching;
+ (_Bool)coloredLoggingDefault;
+ (int)debugDefault;
+ (void)setColoredLoggingDefault:(_Bool)arg1;
+ (void)setDebugDefault:(int)arg1;
- (id)propertyNamesInHistoryChangeDataForEntityDescription:(id)arg1;
- (unsigned long long)entityIDForEntityDescription:(id)arg1;
- (_Bool)hasAncillaryModels;
- (id)ancillarySQLModels;
@property(readonly, nonatomic) NSDictionary *ancillaryModels; // @synthesize ancillaryModels=_ancillaryModels;
- (_Bool)finishDeferredLightweightMigration:(_Bool)arg1 withError:(id *)arg2;
- (id)currentChangeToken;
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id *)arg3;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (id)_storeInfoForEntityDescription:(id)arg1;
- (id)_newObjectIDForEntity:(id)arg1 referenceData64:(unsigned long long)arg2;
- (id)createMapOfEntityNameToPKMaxForEntities:(id)arg1;
- (_Bool)_unload:(id *)arg1;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)setExclusiveLockingMode:(_Bool)arg1;
@property(readonly, nonatomic) NSSQLModel *model;
- (id)adapter;
- (void)setURL:(id)arg1;
- (id)type;
- (_Bool)supportsConcurrentRequestHandling;
- (id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)freeQueryGenerationWithIdentifier:(id)arg1;
- (id)currentQueryGeneration;
- (_Bool)_hasActiveGenerations;
- (_Bool)supportsGenerationalQuerying;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)externalDataReferencesDirectory;
- (id)fileBackedFuturesDirectory;
- (void)_rebuildIndiciesSynchronously:(_Bool)arg1;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (_Bool)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (void)_setupObserver;
- (_Bool)loadMetadata:(id *)arg1;
- (_Bool)load:(id *)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (_Bool)_isCloudKitOptioned;
- (id)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;
- (Class)objectIDFactoryForPersistentHistoryEntity:(id)arg1;
- (Class)objectIDFactoryForSQLEntity:(id)arg1;
- (Class)objectIDFactoryForEntity:(id)arg1;
- (Class)_objectIDClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

