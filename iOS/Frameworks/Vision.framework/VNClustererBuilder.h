//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <Vision/VNClustererModelBuilding-Protocol.h>
#import <Vision/VNClustererModelQuerying-Protocol.h>

@class VNClustererReadWriteContext;

@interface VNClustererBuilder : NSObject <VNClustererModelBuilding, VNClustererModelQuerying>
{
    VNClustererReadWriteContext *_context;
}

+ (id)distanceBetweenFacesWithFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id *)arg3;
+ (id)distanceBetweenFacesWithFaceprint:(id)arg1 andFaceprint:(id)arg2 error:(id *)arg3;
+ (id)representativenessForFaces:(id)arg1 error:(id *)arg2;
+ (id)clustererBuilderWithOptions:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)maximumFaceIdInModelAndReturnError:(id *)arg1;
- (id)suggestionsForClustersWithFaceIds:(id)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (id)distanceBetweenLevel1Clusters:(id)arg1 error:(id *)arg2;
- (id)distanceBetweenClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id *)arg3;
- (id)getDistances:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)arg1 error:(id *)arg2;
- (id)clusteredFaceIdsForClusterContainingFaceId:(id)arg1 error:(id *)arg2;
- (id)allClusteredFaceIdsAndReturnError:(id *)arg1;
- (_Bool)cancelClustering:(id *)arg1;
- (id)updateModelByAddingFaces:(id)arg1 andRemovingFaces:(id)arg2 error:(id *)arg3;
- (id)updateModelByRemovingFaces:(id)arg1 error:(id *)arg2;
- (id)updateModelByAddingFaces:(id)arg1 error:(id *)arg2;
- (id)saveAndReturnCurrentModelState:(id *)arg1;
- (_Bool)resetModelState:(id)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 error:(id *)arg5;

@end

