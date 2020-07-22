//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLSDiscoveryProfile
{
    unsigned long long _options;
    double _peopleWeight;
    double _activityWeight;
    double _locationWeight;
    double _timeWeight;
    double _weatherWeight;
    _Bool _useAllMainOptions;
    _Bool _wantsDebugClue;
}

+ (id)profileWithOptions:(unsigned long long)arg1;
+ (id)supportedMeaningClueKeys;
+ (id)profileDependenciesIdentifiers;
+ (id)informantDependenciesIdentifiers;
+ (id)classIdentifier;
- (void)_printClusters:(id)arg1;
- (id)_timeClusteringForClueCollections:(id)arg1;
- (id)_locationClusteringForClueCollections:(id)arg1;
- (id)_activityClusteringForClueCollections:(id)arg1;
- (id)_peopleClusteringForClueCollections:(id)arg1;
- (id)_debugInfoWithUrisToClueCollections:(id)arg1;
- (unsigned long long)levenshteinDistanceFromString:(id)arg1 toString:(id)arg2;
- (id)_weatherMatchesForCurrentClueCollection:(id)arg1 urisToClueCollections:(id)arg2;
- (id)_timeMatchesForCurrentClueCollection:(id)arg1 urisToClueCollections:(id)arg2;
- (id)_locationMatchesForCurrentClueCollection:(id)arg1 urisToClueCollections:(id)arg2;
- (id)_activityMatchesForCurrentClueCollection:(id)arg1 urisToClueCollections:(id)arg2;
- (id)_peopleMatchesForCurrentClueCollection:(id)arg1 urisToClueCollections:(id)arg2;
- (void)enableDebuggingClue;
- (id)meaningCluesForInvestigation:(id)arg1;
- (id)meaningCluesForCurrentClueCollection:(id)arg1 urisToClueCollections:(id)arg2;
- (id)processResultsOperationForInvestigation:(id)arg1;
- (id)init;

@end
