//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSDictionary, NSNumber, NSSet, NSString;

@protocol VNClusteringReadOnly
+ (NSArray *)clustererModelFileNamesFromState:(NSData *)arg1 storedInPath:(NSString *)arg2 error:(id *)arg3;
+ (NSDictionary *)getRepresentativenessForFaces:(NSArray *)arg1 error:(id *)arg2;
- (NSNumber *)maximumFaceIdInModelAndReturnError:(id *)arg1;
- (NSDictionary *)getDistances:(NSArray *)arg1 to:(NSArray *)arg2 error:(id *)arg3;
- (NSArray *)getClustersForClusterIds:(NSArray *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (NSDictionary *)getDistanceBetweenLevel1Clusters:(NSArray *)arg1 error:(id *)arg2;
- (NSNumber *)getDistanceBetweenLevel0ClustersWithFaceId:(NSNumber *)arg1 andFaceId:(NSNumber *)arg2 error:(id *)arg3;
- (NSArray *)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(NSNumber *)arg1 error:(id *)arg2;
- (NSSet *)getClusteredIds:(id *)arg1;
- (NSData *)getClusterState:(id *)arg1;
- (NSArray *)suggestionsForClusterIdsWithFlags:(NSDictionary *)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
@end

