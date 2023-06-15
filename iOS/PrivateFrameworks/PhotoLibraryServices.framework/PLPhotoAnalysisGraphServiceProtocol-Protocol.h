//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSDateInterval, NSDictionary, NSSet, NSString;

@protocol PLPhotoAnalysisGraphServiceProtocol
- (void)requestSuggestedPersonsWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestRelationshipInferencesForPersonLocalIdentifiers:(NSSet *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestContactInferencesForPersonLocalIdentifiers:(NSSet *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)requestSuggestedRecipientsForAssetLocalIdentifiers:(NSArray *)arg1 momentLocalIdentifiers:(NSArray *)arg2 options:(NSDictionary *)arg3 context:(NSDictionary *)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)requestSuggestedContributionsForAssetsMetadata:(NSArray *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)exportWallpaperForAssets:(NSArray *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)requestWallpaperPropertiesForAssets:(NSArray *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)requestPeopleForWallpaperSuggestionsWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)reloadWallpaperSuggestionsWithSuggestionUUIDs:(NSSet *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)requestNightlySuggestionsForPosterConfiguration:(NSDictionary *)arg1 atDate:(NSDate *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)requestReprocessSuggestionsOnLibraryScopeRulesChangeWithContext:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)requestCameraSmartSharingProcessingForLibraryScopeWithUUID:(NSString *)arg1 withOptions:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)requestStartSharedLibrarySuggestionResultWithContext:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)requestSuggestedMomentLocalIdentifiersForPersonLocalIdentifiers:(NSArray *)arg1 withOptions:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)requestGenerateDefaultRulesForLibraryScopeWithLocalIdentifier:(NSString *)arg1 withOptions:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)requestGraphMomentLocalIdentifiersWithDateInterval:(NSDateInterval *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestGraphInferencesSummaryWithMomentLocalIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestGraphInferencesSummaryWithDateInterval:(NSDateInterval *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestAssetLocalIdentifiersWithSceneOverlapFromAssetLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestAssetLocalIdentifiersWithinLocationRadiusOfAssetLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestMeaningScoreDebugDescriptionForMomentLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestAssetLocalIdentifiersByCityNameWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)requestConfidenceByMomentLocalIdentifierForMeaning:(NSString *)arg1 useAlternativeMeaningEdge:(_Bool)arg2 onlyHighPrecision:(_Bool)arg3 context:(NSDictionary *)arg4 reply:(void (^)(NSDictionary *, NSError *))arg5;
- (void)requestUtilityAssetLocalIdentifiersWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)requestTrendsByIdentifierWithCadence:(NSString *)arg1 forYear:(unsigned long long)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)requestUpNextAssetLocalIdentifiersForAssetWithLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestKeyAssetLocalIdentifierForPrototypeCategory:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestUpNextMemoriesWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestDiscoveryFeedItemsWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSDictionary *, NSError *))arg3;
- (void)runModelInferenceForFingerprintVersion:(NSString *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)requestComposabilityScoresOfAssetsForLocalIdentifiers:(NSArray *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)runShadowEvaluationWithRecipe:(NSDictionary *)arg1 models:(NSArray *)arg2 trialDeploymentID:(NSString *)arg3 trialExperimentID:(NSString *)arg4 trialTreatmentID:(NSString *)arg5 context:(NSDictionary *)arg6 resultBlock:(void (^)(NSError *))arg7;
- (void)requestRunPFLWithAttachments:(NSArray *)arg1 recipeUserInfo:(NSDictionary *)arg2 context:(NSDictionary *)arg3 resultBlock:(void (^)(NSData *, NSDictionary *, NSError *))arg4;
- (void)reportMetricsWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)requestTextFeaturesForMomentLocalIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestPeopleSuggestionLearningWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestEnrichmentWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSError *))arg3;
- (void)requestRevGeocodingSyndicationLibraryWithContext:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)requestAssetRevGeocodingForAssetLocalIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSError *))arg3;
- (void)requestAssetRevGeocodingWithContext:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)requestHighlightCollectionEnrichmentWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSError *))arg3;
- (void)requestHighlightEnrichmentWithOptions:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSError *))arg3;
- (void)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(NSDictionary *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)requestInferredMePersonLocalIdentifierWithErrorForContext:(NSDictionary *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestInferredContactIdentifierForPersonLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestTitleForPersonLocalIdentifiers:(NSArray *)arg1 format:(long long)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSString *, NSString *, NSError *))arg4;
- (void)requestTitleForAssetCollectionWithLocalIdentifier:(NSString *)arg1 format:(long long)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSString *, NSString *, NSError *))arg4;
- (void)requestTitleForCollectionMomentListWithLocalIdentifier:(NSString *)arg1 format:(long long)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSString *, NSString *, NSError *))arg4;
- (void)requestSetDefaultsObject:(id)arg1 forKey:(NSString *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSError *))arg4;
- (void)requestDefaultsObjectForKey:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(id, NSError *))arg3;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(NSString *)arg1 andRelatedResultsForLocalIdentifiers:(NSArray *)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(NSDictionary *)arg5 context:(NSDictionary *)arg6 reply:(void (^)(NSString *, NSError *))arg7;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(NSString *)arg1 andRelatedResultsForLocalIdentifiers:(NSArray *)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 context:(NSDictionary *)arg5 reply:(void (^)(NSString *, NSError *))arg6;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestInvalidateServicePersistentCachesWithContext:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)requestInvalidateServiceTransientCachesWithContext:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)requestExportGraphServiceForPurpose:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestGraphRebuildFractionCompletedWithContext:(NSDictionary *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)requestHighlightEstimatesWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSString *, NSError *))arg2;
- (void)requestGraphServiceStatisticsWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestGraphServicePerformsQueryWithContext:(NSDictionary *)arg1 query:(NSString *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestGraphServiceStatusWithContext:(NSDictionary *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)requestSuggestionInfosWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestAvailableSuggestionTypeInfosWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestCurationOfLength:(unsigned long long)arg1 forMemoryForLocalIdentifier:(NSString *)arg2 withOptions:(NSDictionary *)arg3 context:(NSDictionary *)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestUtilityAssetInformationWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)requestCurationDebugInformationForAsset:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(NSString *)arg1 andRelatedAssetCollectionForLocalIdentifier:(NSString *)arg2 options:(NSDictionary *)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(NSDictionary *)arg6 reply:(void (^)(NSDictionary *, NSError *))arg7;
- (void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(NSString *)arg1 andRelatedAssetCollectionForLocalIdentifier:(NSString *)arg2 options:(NSDictionary *)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(NSDictionary *)arg6 reply:(void (^)(NSDictionary *, NSError *))arg7;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)forceBackgroundAnalysisTasksWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)rebuildGraphWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)requestOnDemandTasksWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)requestAssetsForPersonLocalIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestRelatedMomentsForPersonLocalIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestSocialGroupsOverlappingPersonLocalIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestAllSocialGroupsForPersonLocalIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)requestSortedArrayOfPersonLocalIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)simulateMemoriesNotificationWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestUpdatePetIdentitiesWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestExternalAssetRelevanceProcessingWithContext:(NSDictionary *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)requestSyndicationProcessingWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestGenerateQuestionsWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)generateMemoriesWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(NSString *)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(NSDictionary *)arg4 context:(NSDictionary *)arg5 reply:(void (^)(NSArray *, NSError *))arg6;
- (void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(NSString *)arg1 referenceAssetLocalIdentifier:(NSString *)arg2 precision:(unsigned long long)arg3 options:(NSDictionary *)arg4 context:(NSDictionary *)arg5 reply:(void (^)(NSDictionary *, NSError *))arg6;
- (void)requestAssetCollectionsRelatedToPersonLocalIdentifiers:(NSArray *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
@end

