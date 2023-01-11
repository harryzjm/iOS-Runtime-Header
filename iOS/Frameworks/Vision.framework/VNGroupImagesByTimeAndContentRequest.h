//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface VNGroupImagesByTimeAndContentRequest
{
    NSArray *_inputImageprints;
    float _clusteringDistanceThreshold;
}

+ (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (_Bool)setsTimeRangeOnResults;
- (void).cxx_destruct;
@property(nonatomic) float clusteringDistanceThreshold; // @synthesize clusteringDistanceThreshold=_clusteringDistanceThreshold;
@property(copy, nonatomic) NSArray *inputImageprints; // @synthesize inputImageprints=_inputImageprints;
- (_Bool)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (CDUnknownBlockType)resultsSortingComparator;
- (void)applyConfigurationOfRequest:(id)arg1;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (_Bool)allowsCachingOfResults;
- (id)initWithImageprintObservations:(id)arg1 clusteringDistanceThreshold:(float)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithImageprintObservations:(id)arg1 clusteringDistanceThreshold:(float)arg2;
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;

@end
