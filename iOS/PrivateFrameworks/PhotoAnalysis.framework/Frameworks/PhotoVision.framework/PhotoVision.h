//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, PVCVMLAnalyzer, PVClusterer, PVContext, PVDataAccessor, PVEventManager, PVFaceMerger;
@protocol PVCVMLIntegrating, PVNotificationListener, PVPersistenceDelegate;

@interface PhotoVision : NSObject
{
    id <PVCVMLIntegrating> _cvmlIntegration;
    id <PVNotificationListener> _notificationListener;
    id <PVPersistenceDelegate> _persistenceDelegate;
    PVContext *_context;
    PVCVMLAnalyzer *_analyzer;
    PVFaceMerger *_faceMerger;
    PVDataAccessor *_dataAccessor;
    PVEventManager *_eventManager;
    PVClusterer *_clusterer;
    NSURL *_cacheDirUrl;
}

+ (unsigned int)activeFaceAlgorithmVersion;
- (void).cxx_destruct;
- (id)suggestedPersonLocalIdentifierForPersonLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)suggestedPersonLocalIdentifierForFaceLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)suggestionsForFaceClusterSequenceNumbers:(id)arg1 error:(id *)arg2;
- (_Bool)cancelAllSuggestionRequests;
- (_Bool)cancelSuggestionRequest:(id)arg1;
- (id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 withClusteringFlags:(id)arg2 updateHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (id)clusteringStatus;
- (void)cancelFaceClustering;
- (void)performFaceClusteringWithCompletion:(CDUnknownBlockType)arg1;
- (void)performFaceClusteringAndWait;
- (void)performFaceClusteringIfNecessaryAndWait;
- (unsigned long long)numberOfFacesPendingClustering;
- (void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)arg1;
- (void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)arg1;
- (id)analyzeImage:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)stop;
- (void)start:(CDUnknownBlockType)arg1;
- (id)initWithPersistenceDelegate:(id)arg1 notificationListener:(id)arg2 options:(id)arg3;
- (_Bool)buildPersonsWithCanceler:(id)arg1 keyFaceUpdateBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)context;
- (_Bool)clustererIsReadyToReturnSuggestions;
- (long long)clustererState;
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id *)arg1;
- (_Bool)getFaceClusters:(id *)arg1 clusteringThreshold:(double *)arg2 utilizingGPU:(_Bool *)arg3 error:(id *)arg4;
- (_Bool)reclusterFacesWithThreshold:(id)arg1 shouldRecluster:(_Bool)arg2 withContext:(id)arg3 error:(id *)arg4;
- (_Bool)resetFaceClusteringStateWithContext:(id)arg1 error:(id *)arg2;
- (id)mergeExistingFaces:(id)arg1 withDetectedFaces:(id)arg2 forImage:(id)arg3;

@end

