//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPhotoLibrary.h>

@class NSString;

@interface PHPhotoLibrary (PNPhotoLibraryProtocol)
+ (id)_defaultFacePropertySets;
+ (id)_defaultAssetPropertySets;
+ (id)_phPeopleSortDescriptors;
+ (id)_phFaceSortDescriptors;
+ (_Bool)mad_clusterVideoFaces;
+ (id)vcp_defaultMediaAnalysisDatabaseFilepath;
+ (id)vcp_defaultURL;
+ (id)vcp_defaultPhotoLibrary;
- (id)pn_fetchAssetsForFaceLocalIdentifiers:(id)arg1;
- (id)pn_lastAssetDate;
- (id)pn_fetchInvalidAssetIdentifiersForCommonComparison;
- (float)pn_faceProcessingProgress;
- (double)_progressFromWorkerStatesDictionary:(id)arg1;
- (id)pn_fetchFaceGroupsForPerson:(id)arg1;
- (id)pn_fetchFaceGroups;
- (id)pn_fetchAssetsForFaceGroup:(id)arg1;
- (id)pn_fetchAssetsForPerson:(id)arg1;
- (id)pn_fetchAssetsInMoment:(id)arg1;
- (id)pn_fetchAssetsWithLocalIdentifiers:(id)arg1;
- (id)pn_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;
- (id)pn_fetchMomentsForPerson:(id)arg1;
- (id)pn_fetchMomentsWithLocalIdentifiers:(id)arg1;
- (id)pn_fetchMoments;
- (id)pn_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pn_fetchFacesForFaceGroup:(id)arg1;
- (id)pn_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;
- (id)pn_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;
- (id)pn_fetchFacesForPerson:(id)arg1;
- (id)pn_fetchFacesWithLocalIdentifiers:(id)arg1;
- (unsigned long long)pn_numberOfFacesWithFaceprints;
- (id)pn_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pn_fetchInvalidCandidatePersonsForPerson:(id)arg1;
- (id)pn_fetchCandidatePersonsForPerson:(id)arg1;
- (id)pn_fetchPersonsInMoment:(id)arg1;
- (id)pn_fetchPersonsWithType:(unsigned long long)arg1;
- (id)pn_fetchPersonsWithLocalIdentifiers:(id)arg1;
- (id)pn_persistentStorageDirectoryURL;
- (id)_defaultAssetFetchOptions;
- (id)_defaultFetchOptions;
- (_Bool)pn_performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)vcp_requiresDownloadForTask:(unsigned long long)arg1;
- (id)vcp_description;
- (unsigned long long)vcp_requiredFaceLibraryProcessingSubTasks;
- (_Bool)vcp_requiresProcessingForTask:(unsigned long long)arg1;
- (_Bool)vcp_isSyndicationLibrary;
- (id)mad_allPersonsFetchOptionsWithDetectionTypes:(id)arg1 andVerifiedTypes:(id)arg2;
- (id)mad_allPersonsFetchOptions;
- (id)mad_allFacesFetchOptions;
- (unsigned long long)mad_countOfUnclusteredFaces;
- (id)mad_unclusteredFacesFetchOptions;
- (_Bool)mad_useVUGallery;
- (int)mad_faceProcessingInternalVersion;
- (id)vcp_faceAnalysisStateFilepath;
- (id)vcp_vipModelLastGenerationDateForVIPType:(unsigned long long)arg1;
- (id)vcp_vipModelFilepathForVIPType:(unsigned long long)arg1;
- (void)vcp_setAnalysisPreferencesValue:(id)arg1 forKey:(id)arg2;
- (void)_updateAnalysisPreferencesWithEntries:(id)arg1 keysToRemove:(id)arg2;
- (id)vcp_analysisPreferences;
- (id)_analysisPreferencesURL;
- (id)vcp_visionCacheStorageDirectoryURL;
- (id)mad_localIdentifierForCloudIdentifier:(id)arg1 error:(id *)arg2;
- (id)mad_cloudIdentifierForLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)vcp_libraryScaleShortDescription;
- (_Bool)vcp_allowInMemoryDownload;
- (_Bool)vcp_supportsInMemoryDownload;
- (_Bool)vcp_eligibleForStreaming:(_Bool)arg1;
- (_Bool)vcp_isCPLDownloadComplete;
- (_Bool)vcp_isCPLSyncComplete;
- (_Bool)vcp_isCPLEnabled;
- (unsigned long long)vcp_assetCountWithInternalPredicate:(id)arg1 forTaskID:(unsigned long long)arg2;
- (unsigned long long)vcp_assetCountWithMediaType:(long long)arg1 forTaskID:(unsigned long long)arg2;
- (unsigned long long)vcp_assetCountForTaskID:(unsigned long long)arg1;
- (_Bool)vcp_anyAssetsForTaskID:(unsigned long long)arg1;
- (id)vcp_mediaAnalysisDatabaseFilepath;
- (id)vcp_mediaAnalysisDirectory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

