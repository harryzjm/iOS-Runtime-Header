//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, VNSimilarityMatrix;
@protocol VNClustering;

__attribute__((visibility("hidden")))
@interface VNClusterContext : NSObject
{
    NSMutableDictionary *_obsDictById;
    id <VNClustering> _clustering;
    float _threshold;
    unsigned long long _maxFaceId;
    NSString *_cacheFolderPath;
    _Bool _useClusterObservation;
    VNSimilarityMatrix *_matrix;
    NSString *_clusterMethod;
}

@property(readonly) _Bool useClusterObservation; // @synthesize useClusterObservation=_useClusterObservation;
@property(readonly) NSString *clusterMethod; // @synthesize clusterMethod=_clusterMethod;
@property(retain) VNSimilarityMatrix *matrix; // @synthesize matrix=_matrix;
- (void).cxx_destruct;
- (id)getDistances:(id)arg1 to:(id)arg2;
- (id)getClustersForClusterIds:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)getRepresentativenessForFaces:(id)arg1 error:(id *)arg2;
- (id)getDistanceBetweenClustersWithFaceIds:(id)arg1;
- (id)getGroupedClusteredFaceIdsForFaceId:(id)arg1;
@property(readonly, getter=getClusteredFaceIds) NSSet *clusteredFaceIds;
- (_Bool)restoreClusterState:(id)arg1 cacheFolderPath:(id)arg2 error:(id *)arg3;
- (id)clusterState;
- (id)refinedSuggestionsForClusterIds:(id)arg1 fromClusters:(id)arg2 affinityThreshold:(float)arg3 error:(id *)arg4;
- (id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (_Bool)cancelClustering:(id *)arg1;
- (id)clusterFacesWithOptions:(id)arg1 error:(id *)arg2;
- (void)reset;
- (_Bool)removeFaces:(id)arg1 error:(id *)arg2;
- (_Bool)addFaces:(id)arg1 error:(id *)arg2;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end
