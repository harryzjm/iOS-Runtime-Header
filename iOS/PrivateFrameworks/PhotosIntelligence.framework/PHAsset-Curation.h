//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAsset.h>

@class CLLocation, CLSAssetFaceInformationSummary, CLSAssetProcessedSignals, CLSCurationModel, NSArray, NSDate, NSSet, NSString, VNSceneprint;

@interface PHAsset (Curation)
+ (void)prefetchOnAssets:(id)arg1 options:(unsigned long long)arg2 curationContext:(id)arg3;
+ (void)prefetchScenesOnAssets:(id)arg1;
+ (id)clsAllAssetsFromFetchResult:(id)arg1 prefetchOptions:(unsigned long long)arg2 curationContext:(id)arg3;
+ (void)_populateAsset:(id)arg1 withPersonUUIDs:(id)arg2 consolidatedPersonUUIDs:(id)arg3 petUUIDs:(id)arg4;
+ (id)_filterPersonUUIDs:(id)arg1 fromPersonUUIDsByAssetUUID:(id)arg2 personUUIDByMergeCandidateUUID:(id)arg3;
+ (id)verifiedPersonLocalIdentifiersByAssetUUIDWithAssets:(id)arg1;
+ (id)_petUUIDsByAssetUUIDWithAssetUUIDs:(id)arg1 photoLibrary:(id)arg2;
+ (id)_personUUIDsByAssetUUIDWithAssetUUIDs:(id)arg1 personUUIDs:(id)arg2 photoLibrary:(id)arg3;
+ (id)_personUUIDsByAssetUUIDWithAssets:(id)arg1 personUUIDs:(id)arg2;
+ (_Bool)isScore:(double)arg1 closeToValue:(double)arg2;
+ (unsigned long long)clsPrefetchOptionsForKeyAsset;
- (_Bool)clsFaceInformationArePrefetched;
- (_Bool)clsSceneClassificationsArePrefetched;
- (_Bool)clsPeopleCountIsPrefetched;
- (_Bool)clsPersonLocalIdentifiersArePrefetched;
- (_Bool)prepareWithAlternateJunkingHeuristics:(_Bool)arg1 withContext:(id)arg2 curationContext:(id)arg3;
- (_Bool)clsIsTragicFailure;
@property(readonly, nonatomic) _Bool clsHasCustomPlaybackVariation;
- (short)clsInterestingAudioClassifications;
@property(readonly, nonatomic) _Bool clsHasInterestingAudioClassification;
@property(readonly, nonatomic) _Bool clsIsInterestingReframe;
@property(readonly, nonatomic) _Bool clsIsInterestingHDR;
@property(readonly, nonatomic) _Bool clsIsInterestingSDOF;
@property(readonly, nonatomic) _Bool clsIsInterestingPanorama;
@property(readonly, nonatomic) _Bool clsIsInterestingLivePhoto;
@property(readonly, nonatomic) double clsAutoplaySuggestionScore;
@property(readonly, nonatomic) double clsHighlightVisibilityScore;
@property(readonly, nonatomic) _Bool clsIsLongExposure;
@property(readonly, nonatomic) _Bool clsIsLoopOrBounce;
@property(readonly, nonatomic) _Bool clsIsInterestingVideo;
- (double)scoreInContext:(id)arg1;
- (void)cacheCurationScore:(double)arg1;
@property(readonly, nonatomic) double clsContentScore;
- (double)cropScoreForTargetAspectRatio:(double)arg1 forFaces:(_Bool)arg2;
@property(readonly, nonatomic) double clsSquareCropScore;
@property(readonly) _Bool clsHasInterestingScenes;
@property(readonly) _Bool clsHasPoorResolution;
- (_Bool)clsAvoidIfPossibleAsKeyItemForMemories:(_Bool)arg1 allowGuestAsset:(_Bool)arg2 reason:(id *)arg3;
- (_Bool)clsAvoidIfPossibleAsKeyItemForMemories:(_Bool)arg1 allowGuestAsset:(_Bool)arg2;
@property(readonly) _Bool clsIsInhabited;
@property(readonly, nonatomic) _Bool clsIsBlurry;
@property(readonly) unsigned long long clsBaseSceneprintVersion;
@property(readonly, nonatomic) VNSceneprint *clsSceneprint;
- (void)clsSetSceneClassifications:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *clsSceneClassifications;
@property(readonly, nonatomic) double clsFaceScore;
- (unsigned long long)clsVideoFaceCount;
- (double)clsActivityScore;
- (double)clsVideoScore;
@property(readonly, nonatomic) double clsAestheticScore;
@property(readonly, nonatomic) double clsSharpnessScore;
- (double)clsWallpaperScore;
@property(readonly, nonatomic) double clsExposureScore;
@property(readonly, nonatomic) CLSAssetProcessedSignals *clsProcessedSignals;
- (void)clsSetProcessedSignals:(id)arg1;
@property(readonly, nonatomic) CLSAssetFaceInformationSummary *clsFaceInformationSummary;
- (void)clsSetFaceInformationSummary:(id)arg1;
- (void)clsSetPeopleCount:(id)arg1;
@property(readonly, nonatomic) unsigned long long clsPeopleCount;
@property(readonly, nonatomic) NSArray *clsUnprefetchedPersonLocalIdentifiers;
- (void)clsSetConsolidatedPersonLocalIdentifiers:(id)arg1;
@property(readonly, nonatomic) NSArray *clsConsolidatedPersonLocalIdentifiers;
- (void)clsSetPersonLocalIdentifiers:(id)arg1;
@property(readonly, nonatomic) NSArray *clsPersonLocalIdentifiers;
- (void)clsSetPetLocalIdentifiers:(id)arg1;
@property(readonly, nonatomic) NSArray *clsPetLocalIdentifiers;
@property(readonly, nonatomic) NSArray *clsPersonAndPetLocalIdentifiers;
@property(readonly, nonatomic) double pl_gpsHorizontalAccuracy;
@property(readonly, nonatomic) NSString *pl_uuid;
@property(readonly, nonatomic) struct CLLocationCoordinate2D pl_coordinate;
@property(readonly, nonatomic) NSDate *pl_date;
- (void)clsCacheIconicSceneScore:(double)arg1;
- (double)clsIconicSceneScoreWithSceneGeography:(id)arg1;
@property(readonly, nonatomic) double clsIconicScore;
@property(readonly, nonatomic) _Bool clsIsInSharedLibrary;
- (_Bool)clsIsGuestAsset;
- (_Bool)clsIsFaceProcessed;
- (_Bool)clsIsSceneProcessed;
- (_Bool)isRegularGem;
- (_Bool)isShinyGem;
- (_Bool)isGold;
- (float)clsBehavioralScore;
- (float)clsInteractionScore;
@property(readonly, nonatomic) _Bool clsIsAestheticallyPrettyGood;
@property(readonly, nonatomic) _Bool clsIsScreenshotOrScreenRecording;
- (void)clsCacheIsUtility:(_Bool)arg1;
@property(readonly, nonatomic) _Bool clsIsUtility;
@property(readonly, nonatomic) _Bool clsIsNonMemorable;
@property(readonly, nonatomic) double clsDuration;
- (_Bool)isSubtype:(unsigned long long)arg1;
@property(readonly, nonatomic) long long clsShareCount;
@property(readonly, nonatomic) long long clsPlayCount;
@property(readonly, nonatomic) long long clsViewCount;
@property(readonly, nonatomic) NSDate *cls_localDate;
@property(readonly, nonatomic) NSDate *cls_universalDate;
@property(readonly, nonatomic) CLLocation *clsLocation;
@property(readonly, nonatomic) NSString *clsIdentifier;
@property(readonly) _Bool hasCurationModel;
@property(retain) CLSCurationModel *curationModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isFavorite;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly) Class superclass;
@end

