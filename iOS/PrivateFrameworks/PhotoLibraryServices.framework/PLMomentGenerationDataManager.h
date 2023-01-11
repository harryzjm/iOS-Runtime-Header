//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLMomentGenerationDataManagement_Private-Protocol.h>

@class NSArray, NSDictionary, NSManagedObjectContext, NSString, PLMomentAnalyzer, PLMomentGeneration, PLPhotoLibrary, PLXPCTransaction;

@interface PLMomentGenerationDataManager : NSObject <PLMomentGenerationDataManagement_Private>
{
    PLXPCTransaction *_keepAliveTransaction;
    CDUnknownBlockType _reachabilityBlock;
    void *_addressBook;
    PLMomentGeneration *_generator;
    PLMomentAnalyzer *_analyzer;
    NSArray *_locationsOfInterest;
    NSDictionary *_generationOptions;
    _Bool _observingReachability;
    _Bool _isLightweightMigrationManager;
    _Bool _simulatesTimeout;
    NSManagedObjectContext *_managedObjectContext;
    PLPhotoLibrary *_momentGenerationLibrary;
}

+ (_Bool)isManagedObjectContextMomentarilyBlessed:(id)arg1;
+ (_Bool)isManagerMomentarilyBlessed:(id)arg1;
+ (void)_setManagedObjectContextMomentarilyBlessed:(id)arg1;
+ (void)setManagerMomentarilyBlessed:(id)arg1;
+ (id)sharedMomentGenerationDataManager;
@property(retain, nonatomic) PLPhotoLibrary *momentGenerationLibrary; // @synthesize momentGenerationLibrary=_momentGenerationLibrary;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(nonatomic) _Bool simulatesTimeout; // @synthesize simulatesTimeout=_simulatesTimeout;
- (void)runPeriodicMaintenanceTasks:(unsigned long long)arg1 withTransaction:(id)arg2;
- (id)_locationsOfInterest;
- (id)locationsOfInterest;
- (_Bool)needsLocationsOfInterestProcessing;
- (_Bool)hasLocationsOfInterestInformation;
- (void)invalidateLocationsOfInterest;
- (id)replayLogPath;
- (_Bool)wantsMomentReplayLogging;
- (void)verifyAndRepairOrphanedAssets:(id)arg1;
- (id)orphanedAssetIDsWithError:(id *)arg1;
- (void)enumerateAssetsWithIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)allAssetIDsNeedingLocationShiftWithError:(id *)arg1;
- (void)invalidateShiftedLocationForAllAssetsInMoments;
- (id)locationCoordinatesForAssetIDs:(id)arg1;
- (id)insertNewMoment;
- (id)insertNewMomentListForGranularityLevel:(short)arg1;
- (id)allAssetIDsToBeIncludedInMomentsWithError:(id *)arg1;
- (id)allAssetsToBeIncludedInMomentsWithError:(id *)arg1;
- (id)allMomentListsWithInvalidReverseLocationDataForLevel:(short)arg1;
- (id)allMomentListsForLevel:(short)arg1;
- (id)allMomentsWithInvalidReverseLocationData;
- (id)allMomentsWithError:(id *)arg1;
- (id)findOrCreateYearMomentListForYear:(long long)arg1;
- (id)yearMomentListForYear:(long long)arg1 wantsEarliest:(_Bool)arg2;
- (id)momentListContainingDate:(id)arg1 forLevel:(short)arg2 wantsEarliest:(_Bool)arg3;
- (id)momentsBetweenDate:(id)arg1 andDate:(id)arg2 sorted:(_Bool)arg3;
- (id)momentsSinceDate:(id)arg1;
- (id)momentsWithinDateInterval:(id)arg1;
- (void)_removeKeepAlive;
- (void)_updateKeepAlive;
- (id)homeAddressDictionary;
- (id)_currentHomeAddressDictionary;
- (id)_addressDictionaryForABRecord:(void *)arg1 identifier:(int)arg2;
@property(readonly, nonatomic) void *_addressBook;
- (_Bool)isNetworkReachable;
- (void)stopObservingNetworkReachabilityChanges;
- (void)beginObservingNetworkReachabilityChangesWithBlock:(CDUnknownBlockType)arg1;
- (void)_networkReachabilityDidChange:(id)arg1;
- (id)momentAnalysisTransactionWithName:(const char *)arg1;
- (void)invalidateLocationDataForAssetsInMoment:(id)arg1;
- (void)invalidateLocationDataForAssetsWithOIDs:(id)arg1;
- (id)generationOptions;
- (unsigned long long)hardGenerationBatchSizeLimit;
- (void)pendingChangesUpdated:(unsigned long long)arg1;
- (void)resetOnFailure;
- (_Bool)save:(id *)arg1;
- (Class)momentAssetDataClass;
- (Class)momentListDataClassForGranularityLevel:(short)arg1;
- (Class)momentDataClass;
- (_Bool)hasChanges;
- (void)refreshAllObjects;
- (void)refreshObject:(id)arg1 mergeChanges:(_Bool)arg2;
- (id)momentsForAssetsWithUniqueIDs:(id)arg1 error:(id *)arg2;
- (id)momentListWithUniqueID:(id)arg1 forLevel:(short)arg2 error:(id *)arg3;
- (id)momentWithUniqueID:(id)arg1 error:(id *)arg2;
- (id)assetsWithUniqueIDs:(id)arg1 error:(id *)arg2;
- (id)assetWithUniqueID:(id)arg1 error:(id *)arg2;
- (id)analysisMetadata;
- (_Bool)saveAnalysisMetadata:(id)arg1;
- (id)serverVersionInfo;
- (_Bool)saveServerVersionInfo:(id)arg1;
- (id)_serverVersionInfoFilePath;
- (id)_metadataPath;
- (void)setMomentAnalysisNeeded:(_Bool)arg1;
- (_Bool)isMomentAnalysisNeeded;
- (id)deletedObjects;
- (id)updatedObjects;
- (id)insertedObjects;
- (void)performDataTransaction:(CDUnknownBlockType)arg1 synchronously:(_Bool)arg2 priority:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performDataTransaction:(CDUnknownBlockType)arg1 synchronously:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performBlock:(CDUnknownBlockType)arg1 synchronously:(_Bool)arg2 priority:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performBlock:(CDUnknownBlockType)arg1 synchronously:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isMomentsSupportedOnPlatform;
- (void)setupPhotoLibrary;
- (id)analyzer;
- (id)generator;
- (void)reloadGenerationOptions;
- (void)_finalizeInit;
- (void)dealloc;
- (id)initWithManagedObjectContextForLightweightMigration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

