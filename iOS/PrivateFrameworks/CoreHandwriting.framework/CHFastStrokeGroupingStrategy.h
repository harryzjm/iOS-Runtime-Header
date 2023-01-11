//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHStrokeClutterFilter, NSArray;

@interface CHFastStrokeGroupingStrategy
{
    NSArray *_locales;
    CHStrokeClutterFilter *_clutterFilter;
}

- (void)dealloc;
- (id)_strokeIdentifiersForContextStrokes:(id)arg1 clusters:(vector_063dde0e *)arg2 clusteredStrokes:(id)arg3 tokenizationLevel:(long long)arg4 fastGroupingResult:(id)arg5;
- (id)groupingResultForContextStrokes:(id)arg1 clusteredStrokes:(id)arg2 fastGroupingResult:(id)arg3 point:(struct CGPoint)arg4 tokenizationLevel:(long long)arg5;
- (void)_filterClusters:(vector_063dde0e *)arg1 usingContextStrokes:(id)arg2 clusteredStrokes:(id)arg3;
- (vector_063dde0e)clustersForStrokes:(id)arg1 shouldMakeSingleCluster:(_Bool)arg2;
- (vector_063dde0e)_wordClustersForInitialClusters:(vector_063dde0e *)arg1;
- (id)groupingResultUsingStrokes:(id)arg1 distanceMetric:(int)arg2 mergingDistanceThreshold:(double)arg3 shouldCancel:(CDUnknownBlockType)arg4;
- (id)fastGroupingResultWithFastGroupingClusters:(vector_063dde0e *)arg1 clusteredStrokes:(id)arg2;
- (id)lineGroupingResultUsingStrokes:(id)arg1 shouldCancel:(CDUnknownBlockType)arg2;
- (vector_063dde0e)_agglomerativeClusteringUsingInitialClusters:(vector_063dde0e *)arg1 distanceMetric:(int)arg2 maxDistanceThreshold:(float)arg3 shouldCancel:(CDUnknownBlockType)arg4;
- (float)_maxDistanceThresholdForTokenizationLevel:(long long)arg1;
- (id)strategyIdentifier;
- (id)initWithStrokeProvider:(id)arg1 locales:(id)arg2 clutterFilter:(id)arg3;

@end
