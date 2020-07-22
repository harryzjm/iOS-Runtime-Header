//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLGeoLocationShifterDelegate-Protocol.h>

@class CLLocation, NSDate, NSDateFormatter, NSDictionary, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSString, PLGeoLocationShifter, PLMomentAnalyzerQueue, PLMomentAnalyzerWorkThread;
@protocol GEOMapItemPrivate, OS_dispatch_queue, PLMomentGenerationDataManagement;

@interface PLMomentAnalyzer : NSObject <PLGeoLocationShifterDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    PLMomentAnalyzerWorkThread *_geoWorkThread;
    unsigned long long _mode;
    double _analysisStartTime;
    _Bool _delayedSavePending;
    unsigned long long _objectUpdatesSinceSave;
    NSMutableOrderedSet *_pendingGEORequests;
    NSMutableArray *_activeGEORequests;
    NSMutableSet *_processingMomentUuids;
    PLMomentAnalyzerQueue *_megaMomentProcessingQueue;
    PLMomentAnalyzerQueue *_yearMomentProcessingQueue;
    PLGeoLocationShifter *_locationShifter;
    NSDateFormatter *_shortDateFormatter;
    NSDateFormatter *_dayOfTheWeekDateFormatter;
    id <PLMomentGenerationDataManagement> _momentDataManager;
    _Bool _analyzingAllMoments;
    _Bool _skippedMomentsDuringAnalysis;
    _Bool _passSuccess;
    unsigned long long _errorState;
    int _errorBackoffLevel;
    int _triesAtCurrentBackoffLevel;
    _Bool _networkObservingReachability;
    _Bool _needToUpdateInvalidMomentsWhenPossible;
    NSDictionary *_homeAddressDictionary;
    CLLocation *_homeLocation;
    id <GEOMapItemPrivate> _homeMapItem;
    NSString *_languageAndLocale;
    NSString *_lastGeoProviderId;
    NSOrderedSet *_defaultDominantGeoOrderingForMoment;
    NSOrderedSet *_defaultSecondaryLocationGeoOrderingForMoment;
    NSOrderedSet *_defaultDominantGeoOrderingForMegaMoment;
    NSOrderedSet *_defaultSecondaryLocationGeoOrderingForMegaMoment;
    NSOrderedSet *_defaultSecondaryGeoOrderingForYear;
    double _lastNetworkForcedAbortTime;
    double _timeToWaitBeforeNextRequest;
    double _lastRevGeoRequestTime;
    NSDate *_lastGeoVersionFileFetchDate;
    unsigned long long _lastGeoVersionFileVersion;
    NSDictionary *_serverVersionInfo;
    double _lastServerVersionInfoFetchAttemptTime;
    unsigned long long _currentRevGeoServerVersionNum;
    _Bool _pendingServerVersionInfoFetch;
    _Bool _addCountyIfNeeded;
    _Bool _noResultErrorIsSuccess;
    double _revGeoServerVersionInfoFetchNewVersionInterval;
    NSString *_revGeoServerVersionInfoURL;
    NSString *_currentProviderId;
    _Bool _momentAnalysisPaused;
    _Bool _throttlesCollectionListAnalysis;
    double _lastRevGeoURLFetchAttemptTime;
    unsigned long long _revGeoURLFetchAttemptCount;
    id <PLMomentGenerationDataManagement> _momentGenerationDataManager;
}

@property(nonatomic) id <PLMomentGenerationDataManagement> momentGenerationDataManager; // @synthesize momentGenerationDataManager=_momentGenerationDataManager;
- (id)momentAnalysisStatus;
- (id)locationShiftStatus;
- (void)_scheduleCollectionListAnalysisThrottleTimerIfNeeded;
@property _Bool throttlesCollectionListAnalysis;
- (void)resumeMomentAnalysis;
- (void)pauseMomentAnalysis;
- (void)_setMomentAnalysisPaused:(_Bool)arg1;
- (_Bool)updateInfoForMomentListWithMomentListId:(id)arg1;
- (_Bool)updateInfoForYearMomentLists:(id)arg1;
- (_Bool)updateInfoForMegaMomentLists:(id)arg1;
- (_Bool)updateInfoForMomentWithMomentId:(id)arg1 fromOnDemandRequest:(_Bool)arg2;
- (_Bool)updateInfoForMoments:(id)arg1 invalidOnly:(_Bool)arg2;
- (_Bool)_shouldProcessMoments:(id)arg1;
- (void)updateInfoForInvalidMomentsIfNeeded;
- (void)updateInfoForAllMoments;
- (void)_reAnalyzeCachedDataAndProcessOnlyHomeChanges:(_Bool)arg1;
- (unsigned long long)_errorTypeForError:(id)arg1;
- (_Bool)_isNetworkReachable;
- (void)_stopObservingReachabilityChanges;
- (void)_startObservingReachabilityChanges;
- (void)_networkReachabilityDidChange:(_Bool)arg1;
- (void)invalidateLocationShift;
- (void)updateShiftForAssets:(id)arg1;
- (void)locationShifter:(id)arg1 requestsInvocation:(id)arg2;
- (id)locationShifter:(id)arg1 locationCoordinatesForAssetIDs:(id)arg2;
- (void)locationShifterDidFinish:(id)arg1;
- (void)locationShifter:(id)arg1 didShiftWithResult:(id)arg2;
- (id)_userSuppliedTitlesForCountedSet:(id)arg1;
- (id)_localizedNamesForNameInfoArray:(id)arg1 namesUsed:(id)arg2 includeHome:(_Bool)arg3 outAddedHome:(_Bool *)arg4;
- (id)_simpleNamesForNameInfoArray:(id)arg1;
- (id)_dominantPlacesInPlaceInfoArray:(id)arg1 orderType:(unsigned long long)arg2 totalPlaceCount:(unsigned long long)arg3 includeAllPlaces:(_Bool)arg4 includeHome:(_Bool)arg5 homeAtEnd:(_Bool)arg6 atLastLevel:(_Bool)arg7 outOtherNonDominantPlaces:(id)arg8;
- (_Bool)_markInvalidLowQualityAssetsInMoment:(id)arg1 withCurrentProviderId:(id)arg2;
- (void)_updateInfoForAllMomentsWithReAnalyzeType:(unsigned long long)arg1;
- (_Bool)_canProcessMoments;
- (void)_setLocationDataValidForMomentId:(id)arg1;
- (unsigned long long)_significantPlaceCountInMap:(id)arg1;
- (id)_resetAndSortedNameInfoArray:(id)arg1 homeAtEnd:(_Bool)arg2;
- (void)_updateSecondaryInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 primaryCompoundNameInfo:(id)arg3 defaultGeoOrderingSet:(id)arg4 dominantPlaces:(id)arg5 otherNonDominantPlaces:(id)arg6 ordersCheckedOrUsed:(id)arg7 dominantOrder:(unsigned long long)arg8 usedHome:(_Bool)arg9;
- (id)_suffixForNameInfoArray:(id)arg1 afterOrderType:(unsigned long long)arg2;
- (id)_updateDominantInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 defaultGeoOrderingSet:(id)arg3 includeAllPlaces:(_Bool)arg4 includeHome:(_Bool)arg5 homeAtEnd:(_Bool)arg6 outOtherNonDominantPlaces:(id)arg7 outOrdersCheckedOrUsed:(id)arg8 outOrderUsed:(unsigned long long *)arg9 outUsedHome:(_Bool *)arg10;
- (void)_updateAllInfoInCompoundNameInfo:(id)arg1 andCompoundSecondaryNameInfo:(id)arg2 withRevGeoPlaces:(id)arg3 includeHome:(_Bool)arg4 primaryGeoOrderingSet:(id)arg5 secondaryGeoOrderingSet:(id)arg6;
- (void)_addOrUpdateNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2;
- (unsigned long long)_indexForGeoOrder:(unsigned long long)arg1 inPrioritySet:(id)arg2;
- (unsigned long long)_geoOrderInPrioritySet:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_suffixForGeoPlace:(id)arg1 afterOrderType:(unsigned long long)arg2 homePlace:(id)arg3;
- (id)_geoLocationForCoordinate:(struct CLLocationCoordinate2D)arg1 date:(id)arg2;
- (void)_reverseGeocodeMoment:(id)arg1 shouldFilterIfInProgress:(_Bool)arg2 invalidOnly:(_Bool)arg3;
- (void)_finishedProcessingMomentWithUuid:(id)arg1 withSuccess:(_Bool)arg2;
- (_Bool)_startingToProcessMomentWithUuid:(id)arg1;
- (void)_processYearMomentLists;
- (unsigned long long)_processYearMomentList:(id)arg1;
- (void)_processMegaMomentLists;
- (unsigned long long)_processMegaMomentList:(id)arg1;
- (void)_processPendingGEORequests;
- (void)_processNextTransaction;
- (void)_waitForReachability;
- (void)_processNextAnalysisTransaction;
- (void)_analysisDidComplete:(_Bool)arg1;
- (void)_analysisComplete;
- (void)_saveDataIfReachedObjectChangeThreshold;
- (void)_saveDataIfNeededAfterTimeDiff:(double)arg1;
- (void)_saveNow;
- (void)_processGEORequestWithRequestInfo:(id)arg1;
- (id)_compactPlaceDescriptionForMapItem:(id)arg1;
- (_Bool)_updateHomeLocationInRevGeoInfo:(id)arg1 forLocation:(id)arg2 withHomeLocation:(id)arg3;
- (void)_finalizeDataForMoment:(id)arg1 withMomentLocationInfo:(id)arg2 success:(_Bool)arg3;
- (void)_addRevGeoPlacesAndUserTitlesFromAssets:(id)arg1 toPlacesArray:(id)arg2 toMomentTitles:(id)arg3 toCollectionTitles:(id)arg4;
- (void)_enqueueReverseGeocodeMomentWithRequestInfo:(id)arg1 shouldFilterIfInProgress:(_Bool)arg2;
- (void)_updateErrorStateWithSuccess:(_Bool)arg1 errorType:(unsigned long long)arg2;
- (void)_finishedGEORequestInfo:(id)arg1 withSuccess:(_Bool)arg2 errorType:(unsigned long long)arg3;
- (void)_setErrorState:(unsigned long long)arg1;
- (void)_resetErrorState;
- (void)_refreshAllObjectsIfPossibleWithManager:(id)arg1;
- (void)addressBookChanged;
- (void)_updateHomeLocation;
- (void)_forwardGeocodeAddressDictionaryOnGeoThread:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_forwardGeocodeAddressDictionary:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 aferDelay:(double)arg2 block:(CDUnknownBlockType)arg3;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, retain, nonatomic) id <PLMomentGenerationDataManagement> _momentDataManager;
@property(readonly, retain, nonatomic) CLLocation *_homeLocation;
- (void)_updateCurrentProviderIdWithCountryCode:(id)arg1;
- (void)_updateCurrentProviderId;
- (id)_currentProviderId;
- (void)_updateInformationForGeoProviderIfNeeded;
- (void)_updateInformationForGeoProviderIfNeededOnWorkQueue;
- (void)_countryCodeChanged:(id)arg1;
- (_Bool)_updateLanguageIfNeeded;
- (_Bool)_updateHomeAddressIfNeeded;
- (id)_locationFromDictionary:(id)arg1;
- (id)_dictionaryFromLocation:(id)arg1;
- (void)_saveGlobalMetadata;
- (void)_fetchServerVersionInfo;
- (void)_updateLocalServerVersionInfo:(id)arg1;
- (_Bool)_markInvalidOutOfDateAssetsInMoment:(id)arg1 forCurrentCountryVersionMap:(id)arg2 withCurrentProviderId:(id)arg3;
- (_Bool)_loadServerVersionInfo;
- (void)_updateDateFormattersForLocale:(id)arg1;
- (_Bool)setVersionInfoURLIfAvailable:(id)arg1;
- (void)_updateRevGeoServerFetchInfoConfig;
- (void)_finalizeInitOnWorkQueue;
- (id)_transactionWithName:(const char *)arg1;
- (id)_transactionWithName:(const char *)arg1 inDataManager:(id)arg2;
- (id)init;
- (void)startAnalyzer;
- (void)_checkForNewServerVersionInfoIfNeeded;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

