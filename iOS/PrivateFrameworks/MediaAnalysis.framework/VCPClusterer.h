//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSURL, PHPhotoLibrary, VCPPhotosFaceProcessingContext, VCPPhotosPersistenceDelegate, VCPSuggestionRequest, VNCanceller, VNClustererBuilder;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPClusterer : NSObject
{
    PHPhotoLibrary *_photoLibrary;
    VCPPhotosPersistenceDelegate *_persistenceDelegate;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_group> *_processingGroup;
    struct atomic<bool> _canceled;
    VCPPhotosFaceProcessingContext *_context;
    NSURL *_cacheDirUrl;
    NSURL *_cacheFileUrl;
    NSString *_clusteringType;
    NSNumber *_threshold;
    NSSet *_faceCSNsInClusterCache;
    unsigned long long _nextSeqNum;
    NSMutableSet *_faceIdStrsToAdd;
    NSMutableSet *_faceCSNsToRemove;
    unsigned long long _accumulatedChangesCount;
    unsigned long long _nextClusterTriggeringAccumulatedChangesCount;
    VNCanceller *_visionCanceler;
    VNClustererBuilder *_clusterBuilder;
    _Bool _rebuildClusterer;
    NSMutableArray *_outstandingSuggestionRequests;
    VCPSuggestionRequest *_currentSuggestionRequest;
    NSLock *_suggestionLock;
    NSLock *_currentStatusSnapshotLock;
    CDStruct_6069b02b _currentStatusSnapshot;
    _Bool _currentStatusSnapshotIsValid;
    NSLock *_propertyDictionaryLock;
    NSMutableDictionary *_propertyDictionary;
    unsigned long long _clustererBringUpState;
    NSDate *_timestampOfLastClusterComparison;
    struct mach_timebase_info _timebase;
}

+ (_Bool)removeClusteringStateCacheWithURL:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long clustererBringUpState; // @synthesize clustererBringUpState=_clustererBringUpState;
- (id)distancesFromClustersIdentifiedByFaceCSNs:(id)arg1 toClustersIdentifiedByFaceCSNs:(id)arg2 error:(id *)arg3;
- (id)distanceBetweenLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg1 andLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg2 error:(id *)arg3;
- (id)level0ClusterAsFaceCSNsByLevel0KeyFaceCSNForClusterIdentifiedByFaceCSN:(unsigned long long)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool needsUpdate;
@property(readonly, nonatomic) _Bool needsFullSync;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
@property(readonly, nonatomic) unsigned long long clustererState;
- (id)_bringUpStateDescription:(unsigned long long)arg1;
- (void)_setPropertyDictionaryValue:(id)arg1 forKey:(id)arg2;
- (void)_readPropertyDictionary;
- (id)_propertyDictionaryFileURL;
- (_Bool)getClusters:(id *)arg1 threshold:(double *)arg2 utilizingGPU:(_Bool *)arg3 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (id)differencesBetweenClusterCacheAndLibrary:(id *)arg1 excludedL0ClustersByL1ClusterId:(id *)arg2 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg3;
- (_Bool)_processingQueueGetVisionClusters:(id)arg1 minimumClusterSize:(unsigned long long)arg2 returnClusterAsCountedSet:(_Bool)arg3 excludedL0ClustersByL1ClusterId:(id *)arg4 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg5 error:(id *)arg6;
- (id)_resolveConflictingL0ClustersFromVNClusters:(id)arg1 excludedL0ClustersByL1ClusterId:(id *)arg2 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg3;
- (_Bool)isReadyToReturnSuggestions;
- (void)cancelAllSuggestionRequests;
- (void)cancelSuggestionRequest:(id)arg1;
- (id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 withClusteringFlags:(id)arg2 updateHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (id)suggestedFaceClusterSequenceNumbersForFaceClusterSequenceNumbersRepresentingClusters:(id)arg1 error:(id *)arg2;
- (unsigned long long)restoreClusterCacheAndSyncWithLibrary:(_Bool)arg1 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)_processingQueueRestoreClusterCacheAndSyncWithLibrary:(_Bool)arg1 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)_processingQueueRestoreFromClusterSnapshotFileAtURL:(id)arg1 error:(id *)arg2;
- (void)_removeVisionClusterCacheFilesNotReferencedByVisionClusterState:(id)arg1;
- (id)_visionClusterStateDataBlobFromClusterSnapshotFileAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)_processingQueueResetClusterCache:(id *)arg1;
- (_Bool)_processingQueueRestoreClusteringCacheWithCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 threshold:(id)arg3 error:(id *)arg4;
- (id)_visionClusterMemmapFileInCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 error:(id *)arg3;
- (_Bool)_processingQueueSaveClusterCache:(id *)arg1;
- (_Bool)_processingQueueGetFaceClusterSequenceNumbersInClusterCache:(id *)arg1 lastClusterSequenceNumber:(unsigned long long *)arg2 error:(id *)arg3;
- (void)_processingQueueSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg2;
- (void)_processingQueueQuickSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 visionClusters:(id *)arg2 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg3;
- (void)_removeEmptyGroups;
- (id)_faceTorsoprintsFromFaces:(id)arg1 assignClusterSeqNumberIfNeeded:(_Bool)arg2 updatedFaces:(id)arg3;
- (id)_faceTorsoprintsFromFaceIdentifiers:(id)arg1 assignClusterSeqNumberIfNeeded:(_Bool)arg2 updatedFaces:(id)arg3 groupingIdentifiers:(id)arg4;
- (id)_faceTorsoprintsFromFaceCSNs:(id)arg1;
- (_Bool)_performAndPersistClustersWithFaceTorsoprintsToAdd:(id)arg1 groupingIdentifiersToAdd:(id)arg2 faceTorsoprintsToRemove:(id)arg3 updatedFaces:(id)arg4 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg5 error:(id *)arg6;
- (id)status;
- (void)_recordCurrentStatus:(CDStruct_6069b02b)arg1;
- (void)_recordIncrementCountOfPendingFacesToAdd:(unsigned long long)arg1;
- (void)_recordCountOfPendingFacesToAdd:(unsigned long long)arg1;
- (void)_recordClusterRebuildRequired:(_Bool)arg1;
- (void)_recordClusteringState:(_Bool)arg1;
- (void)cancelClustering;
- (void)_cancelClusteringAndRestoreClusterCache:(_Bool)arg1;
- (void)clusterAndWaitWithCancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg1;
- (void)clusterIfNecessaryAndWaitWithCancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)clusterCount;
- (unsigned long long)clusteredFaceCount;
- (unsigned long long)numberOfAccumulatedClusterChanges;
- (_Bool)_processingQueuePerformForcedFaceClustering:(_Bool)arg1 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg2;
- (void)scheduleClusteringAfterRemovingFaceCSNs:(id)arg1 addingFaceIdStrs:(id)arg2;
- (void)_processingQueueDetermineNextClusterTriggeringAccumulatedChangesCountIfNecessary;
- (void)terminate;
- (id)initWithPhotoLibrary:(id)arg1 andContext:(id)arg2;

@end

