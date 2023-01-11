//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/PHBatchFetchingArrayDataSource-Protocol.h>

@class NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSString, PHPersistentChangeToken, PHVariationCacheManager, PLPhotoAnalysisServiceClient, PLPhotoLibrary;
@protocol OS_dispatch_queue, PLPhotoAnalysisServiceTaxonomyResolver;

@interface PHPhotoLibrary : NSObject <PHBatchFetchingArrayDataSource>
{
    _Bool _unknownMergeEvent;
    _Bool _isChangeProcessingPending;
    _Bool _clearsOIDCacheAfterFetchResultDealloc;
    unsigned short _type;
    PHVariationCacheManager *_variationCacheManager;
    PLPhotoAnalysisServiceClient *_photoAnalysisClient;
    NSObject<OS_dispatch_queue> *_queue;
    PLPhotoLibrary *_photoLibrary;
    PLPhotoLibrary *_changeHandlingPhotoLibrary;
    PLPhotoLibrary *_mainQueuePhotoLibrary;
    PLPhotoLibrary *_userInitiatedQueuePhotoLibrary;
    PLPhotoLibrary *_backgroundQueuePhotoLibrary;
    PLPhotoLibrary *_backgroundQueueObjectFetchingPhotoLibrary;
    PLPhotoLibrary *_transactionPhotoLibrary;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSMutableOrderedSet *_insertRequests;
    NSMutableOrderedSet *_updateRequests;
    NSMutableOrderedSet *_deleteRequests;
    NSMutableDictionary *_saveTokensToKnownUUIDs;
    NSMutableDictionary *_changeRequests;
    NSHashTable *_fetchResults;
    NSHashTable *_internalObservers;
    NSHashTable *_externalObservers;
    NSMutableDictionary *_changeNotificationInfo;
    double _lastChangeProcessingStarted;
}

+ (void)reconfigureSandboxExtensionsForMedia;
+ (id)sharedContactStore;
+ (_Bool)_isInternalObserver:(id)arg1;
+ (void)removeAllUniquedOIDs;
+ (id)uniquedOIDsFromObjects:(id)arg1;
+ (id)uniquedOIDs:(id)arg1;
+ (id)uniquedOID:(id)arg1;
+ (id)_effectiveRootEntity:(id)arg1;
+ (Class)PHObjectClassForOID:(id)arg1;
+ (Class)PHObjectClassForEntityName:(id)arg1;
+ (Class)classForFetchType:(id)arg1;
+ (id)fetchTypeForLocalIdentifierCode:(id)arg1;
+ (long long)collectionListTypeForIdentifierCode:(id)arg1;
+ (void)_forceUserInterfaceReload;
+ (void)requestAuthorization:(CDUnknownBlockType)arg1;
+ (long long)authorizationStatus;
+ (id)sharedMomentSharePhotoLibrary;
+ (id)sharedPhotoLibrary;
+ (id)_descriptionOfEntitiesInChangeRequests:(id)arg1;
+ (void)setNeedsToRepairKeyCuratedAssetForMemories:(id)arg1;
+ (_Bool)shouldDisplayMergeCandidates:(id)arg1 forPerson:(id)arg2;
@property(nonatomic) _Bool clearsOIDCacheAfterFetchResultDealloc; // @synthesize clearsOIDCacheAfterFetchResultDealloc=_clearsOIDCacheAfterFetchResultDealloc;
@property(nonatomic) double lastChangeProcessingStarted; // @synthesize lastChangeProcessingStarted=_lastChangeProcessingStarted;
@property(nonatomic) _Bool isChangeProcessingPending; // @synthesize isChangeProcessingPending=_isChangeProcessingPending;
@property(nonatomic) _Bool unknownMergeEvent; // @synthesize unknownMergeEvent=_unknownMergeEvent;
@property(retain, nonatomic) NSMutableDictionary *changeNotificationInfo; // @synthesize changeNotificationInfo=_changeNotificationInfo;
@property(retain, nonatomic) NSHashTable *externalObservers; // @synthesize externalObservers=_externalObservers;
@property(retain, nonatomic) NSHashTable *internalObservers; // @synthesize internalObservers=_internalObservers;
@property(retain, nonatomic) NSHashTable *fetchResults; // @synthesize fetchResults=_fetchResults;
@property(retain, nonatomic) NSMutableDictionary *changeRequests; // @synthesize changeRequests=_changeRequests;
@property(retain, nonatomic) NSMutableDictionary *saveTokensToKnownUUIDs; // @synthesize saveTokensToKnownUUIDs=_saveTokensToKnownUUIDs;
@property(retain, nonatomic) NSMutableOrderedSet *deleteRequests; // @synthesize deleteRequests=_deleteRequests;
@property(retain, nonatomic) NSMutableOrderedSet *updateRequests; // @synthesize updateRequests=_updateRequests;
@property(retain, nonatomic) NSMutableOrderedSet *insertRequests; // @synthesize insertRequests=_insertRequests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property(retain, nonatomic) PLPhotoLibrary *transactionPhotoLibrary; // @synthesize transactionPhotoLibrary=_transactionPhotoLibrary;
@property(retain, nonatomic) PLPhotoLibrary *backgroundQueueObjectFetchingPhotoLibrary; // @synthesize backgroundQueueObjectFetchingPhotoLibrary=_backgroundQueueObjectFetchingPhotoLibrary;
@property(retain, nonatomic) PLPhotoLibrary *backgroundQueuePhotoLibrary; // @synthesize backgroundQueuePhotoLibrary=_backgroundQueuePhotoLibrary;
@property(retain, nonatomic) PLPhotoLibrary *userInitiatedQueuePhotoLibrary; // @synthesize userInitiatedQueuePhotoLibrary=_userInitiatedQueuePhotoLibrary;
@property(retain, nonatomic) PLPhotoLibrary *mainQueuePhotoLibrary; // @synthesize mainQueuePhotoLibrary=_mainQueuePhotoLibrary;
@property(retain, nonatomic) PLPhotoLibrary *changeHandlingPhotoLibrary; // @synthesize changeHandlingPhotoLibrary=_changeHandlingPhotoLibrary;
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned short type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canUpdatePersonState;
- (void)_notifiyPersistentChangeObservers;
@property(readonly, nonatomic) PHPersistentChangeToken *currentToken;
- (id)_fetchPersistentChangesSinceToken:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2 error:(id *)arg3;
- (id)fetchPersistentChangesWithRequest:(id)arg1 error:(id *)arg2;
- (id)fetchPersistentChangesSinceToken:(id)arg1 error:(id *)arg2;
- (void)_processPendingChanges;
- (void)handleMergeNotification:(id)arg1;
- (id)transactionPLPhotoLibrary;
- (id)allowedEntities;
- (id)fetchUpdatedObject:(id)arg1;
- (id)fetchPHObjectsForUUIDs:(id)arg1 entityName:(id)arg2;
- (id)fetchPHObjectsForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 includeTrash:(_Bool)arg3;
- (id)fetchDictionariesByPHClassForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 includeTrash:(_Bool)arg3;
- (id)fetchPHObjectsForOIDs:(id)arg1;
- (id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(_Bool)arg3;
- (id)urlForApplicationDataFolderIdentifier:(long long)arg1;
- (id)removeUuidForSaveToken:(id)arg1;
- (void)registerUUID:(id)arg1 forSaveToken:(id)arg2;
- (void)setChangeRequest:(id)arg1 forUUID:(id)arg2;
- (id)changeRequestForUUID:(id)arg1;
- (void)recordDeleteRequest:(id)arg1;
- (void)recordUpdateRequest:(id)arg1;
- (void)recordInsertRequest:(id)arg1;
- (id)photoLibraryForCurrentTransaction;
- (void)assertTransaction;
- (_Bool)isApplyingRequestedChanges;
- (_Bool)performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)performChanges:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)performCancellableChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)performCancellableChanges:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_preflightRequestedPhotoKitInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3 error:(id *)arg4;
- (id)_errorForAuthorizationStatus:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelTransaction:(CDUnknownBlockType)arg1;
- (void)_commitTransaction:(CDUnknownBlockType)arg1;
- (void)_beginTransaction;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)updateClusterUsabilityCriteria;
- (void)unregisterFetchResult:(id)arg1;
- (void)registerFetchResult:(id)arg1;
- (id)objectFetchingManagedObjectContextForObject:(id)arg1 propertySet:(id)arg2;
@property(readonly, nonatomic) PHVariationCacheManager *variationCacheManager; // @synthesize variationCacheManager=_variationCacheManager;
- (id)objectFetchingContextForCurrentQueueQoS;
- (id)photoLibraryForCurrentQueueQoS;
- (id)managedObjectContextForCurrentQueueQoS;
- (id)mainQueueManagedObjectContext;
@property(readonly, nonatomic) PLPhotoAnalysisServiceClient *photoAnalysisClient; // @synthesize photoAnalysisClient=_photoAnalysisClient;
- (id)managedObjectContext;
- (id)initWithType:(unsigned short)arg1;
- (_Bool)isMainPhotoLibrary;
- (id)initMomentShareLibrary;
- (id)initSharedLibrary;
- (id)init;
- (id)_descriptionOfChanges;
@property(readonly, nonatomic) NSString *uuid;
- (id)pl_syncProgressAlbums;
@property(retain, nonatomic) id <PLPhotoAnalysisServiceTaxonomyResolver> taxonomyResolver;
- (void)requestPermissionToDownloadFaceResourcesOfCount:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)unregisterAvailabilityObserver:(id)arg1;
- (void)registerAvailabilityObserver:(id)arg1;
- (id)bfa_photoLibrary;
- (id)bfa_tombstoneObjectForOID:(id)arg1 uuid:(id)arg2 propertyHint:(unsigned long long)arg3;
- (id)bfa_fetchObjectsForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2;
- (id)faceClusterSequenceNumbersOfFacesWithClusterSequenceNumbers:(id)arg1 error:(id *)arg2;
- (unsigned long long)countOfUnclusteredFaces;
- (unsigned long long)countOfDirtyFaceGroups;
- (unsigned long long)countOfUnprocessedFaceCrops;
- (_Bool)isFaceProcessingFinished;
- (id)faceClusterSequenceNumbersOfKeyFacesInAlgorithmicFaceGroupsForPerson:(id)arg1 verifiedClusterSequenceNumbers:(id)arg2;
- (id)suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 minimumSuggestionFaceCount:(unsigned long long)arg4;
- (id)suggestedContactsForPersonLocalIdentifier:(id)arg1;
- (id)inferredContactForPersonLocalIdentifier:(id)arg1;
- (id)inferredContactByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1;
- (void)personPromotionProcessingStatusForUserInterface:(CDUnknownBlockType)arg1;
- (void)faceProcessingStatusForUserInterface:(CDUnknownBlockType)arg1;
- (id)suggestedMePersonIdentifierWithError:(id *)arg1;
- (id)assetIdentifiersForPersonIdentifiers:(id)arg1 error:(id *)arg2;
- (id)socialGroupsForPersonIdentifiers:(id)arg1 error:(id *)arg2;
- (id)allSocialGroupsForPersonIdentifier:(id)arg1 error:(id *)arg2;
- (id)sortedArrayOfPersonIdentifiers:(id)arg1 error:(id *)arg2;
- (id)requestSearchInformationForTripUUIDs:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (id)requestGraphSearchMetadataWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestSynonymsDictionariesWithError:(id *)arg1;
- (id)requestZeroKeywordsWithOptions:(id)arg1 error:(id *)arg2;
- (void)requestSearchIndexGraphUpdates:(id)arg1 supportingData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)requestSearchIndexUpdates:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unloadGraph;
- (void)loadGraph;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)generateMemoriesRelatedDiagnosticsLogsWithReply:(CDUnknownBlockType)arg1;
- (void)requestGraphReadyNotificationWithCoalescingIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestGraphRebuildProgressWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestGraphRebuildWithProgress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)invalidatePersistentGraphCachesAndReturnError:(id *)arg1;
- (_Bool)invalidateTransientGraphCachesAndReturnError:(id *)arg1;
- (id)exportGraphForPurpose:(id)arg1 error:(id *)arg2;
- (void)requestHighlightEstimatesWithCompletion:(CDUnknownBlockType)arg1;
- (id)graphStatisticsDescription:(id *)arg1;
- (id)graphStatusDescription:(id *)arg1;
- (id)sharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)sharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)relatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id *)arg6;
- (id)relatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id *)arg6;
- (id)curationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id *)arg3;
- (id)curationDebugInformationForAssetLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id *)arg3;
- (id)momentDebugInformationForHighlightWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)memoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)featureEnabledForWorkerType:(short)arg1;
- (_Bool)featureEnabledForWorkerType:(short)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isNamingFlowEnabled:(CDUnknownBlockType)arg1;
- (void)enableNamingFlow;
- (void)_checkForPeopleUIFeatureWithFetchRequest:(id)arg1 comparator:(CDUnknownBlockType)arg2;
- (_Bool)resetPendingAnalysisStatesWithError:(id *)arg1;
- (void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg1 forWorkerType:(short)arg2;
- (_Bool)markAnalysisStatesProcessedForWorkerType:(short)arg1 error:(id *)arg2;
- (id)deletedAssetUUIDsForAnalysisByWorkerType:(short)arg1 fetchLimit:(unsigned long long)arg2 error:(id *)arg3;
- (void)requestCountOfAnalysisRecordsForDeletedAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)workInfoForAnalysisWithWorkerType:(short)arg1 additionalStatesToExclude:(id)arg2 fetchLimit:(unsigned long long)arg3 error:(id *)arg4;
- (id)analysisProgressCountsForWorkerType:(short)arg1;
- (id)assetUUIDsAllowedForCurationFromAssets:(id)arg1;
- (void)requestAnalysisProgressCountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestAnalysisProgressWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestTotalProgressCountsWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

