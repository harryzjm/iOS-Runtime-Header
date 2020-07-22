//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, PLManagedAsset;

@interface PLAssetAnalysisState
{
}

+ (id)workInfoForAnalysisWithWorkerType:(short)arg1 additionalStatesToExclude:(id)arg2 fetchLimit:(unsigned long long)arg3 inLibrary:(id)arg4 error:(id *)arg5;
+ (int)defaultWorkerFlagsForWorkerType:(short)arg1;
+ (void)removeAnalysisRecordsWithNoAssetUUID;
+ (void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg1 forWorkerType:(short)arg2;
+ (void)_removeAnalysisRecordsWithPredicate:(id)arg1;
+ (_Bool)cleanupInvalidIgnoreUntilDatesWithError:(id *)arg1;
+ (_Bool)markStatesProcessedForWorkerType:(short)arg1 error:(id *)arg2;
+ (_Bool)resetPendingStatesWithError:(id *)arg1;
+ (id)deletedAssetUUIDsForAnalysisByWorkerType:(short)arg1 fetchLimit:(unsigned long long)arg2 inLibrary:(id)arg3 error:(id *)arg4;
+ (void)requestCountOfAnalysisRecordsForDeletedAssetsWithCompletion:(CDUnknownBlockType)arg1;
+ (id)analysisCountsForWorkerType:(short)arg1;
+ (void)requestAnalysisCountsWithCompletion:(CDUnknownBlockType)arg1;
+ (void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)workerTypesPersistingAnalysisState;
+ (id)keyPathDictionaryWithWorkerType:(short)arg1 workerFlags:(int)arg2 analysisState:(int)arg3 lastIgnoredDate:(id)arg4 ignoreUntilDate:(id)arg5;
+ (_Bool)applyAnalysisStateChanges:(id)arg1 assetUUID:(id)arg2 allowUnsafeSetProcessed:(_Bool)arg3 error:(id *)arg4;
+ (id)_sanitizeChanges:(id)arg1;
+ (_Bool)_performTransactionResolveConflicts:(id)arg1 originalChanges:(id)arg2 assetUUID:(id)arg3 inManagedObjectContext:(id)arg4 allowUnsafeSetProcessed:(_Bool)arg5 newChanges:(id *)arg6 error:(id *)arg7;
+ (id)_subArrayOfChanges:(id)arg1 toRetryWithConflicts:(id)arg2;
+ (_Bool)_performTransactionApplyChanges:(id)arg1 assetUUID:(id)arg2 inManagedObjectContext:(id)arg3 allowUnsafeSetProcessed:(_Bool)arg4 error:(id *)arg5;
+ (_Bool)_inqApplyChanges:(id)arg1 assetUUID:(id)arg2 inManagedObjectContext:(id)arg3 allowUnsafeSetProcessed:(_Bool)arg4 error:(id *)arg5;
+ (id)_managedObjectContextForStateChanges;
+ (id)_managedObjectContextForStateChangesWithPersistentStoreCoordinator:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 workerType:(short)arg3 initialState:(int)arg4 lastIgnoreDate:(id)arg5 ignoreUntilDate:(id)arg6 workerFlags:(int)arg7;
+ (id)insertIntoManagedObjectContext:(id)arg1 forAsset:(id)arg2 workerType:(short)arg3 initialState:(int)arg4 lastIgnoreDate:(id)arg5 ignoreUntilDate:(id)arg6 workerFlags:(int)arg7;
+ (_Bool)_bulkUpdateAnalysisStatesTo:(int)arg1 predicate:(id)arg2 error:(id *)arg3;
+ (unsigned long long)_countOfAssetsAllowedForProcessingInLibrary:(id)arg1 error:(id *)arg2;
+ (id)_countOfAnalysisStatesByWorkerTypeWithPredicate:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)unionWorkerFlags:(int)arg1;
- (id)mutableKeyPathDictionary;
@property(nonatomic) double sortToken; // @dynamic sortToken;
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
- (id)debugLogDescription;

// Remaining properties
@property(nonatomic) int analysisState; // @dynamic analysisState;
@property(retain, nonatomic) NSString *assetUUID; // @dynamic assetUUID;
@property(retain, nonatomic) NSDate *ignoreUntilDate; // @dynamic ignoreUntilDate;
@property(retain, nonatomic) NSDate *lastIgnoredDate; // @dynamic lastIgnoredDate;
@property(nonatomic) int workerFlags; // @dynamic workerFlags;
@property(nonatomic) short workerType; // @dynamic workerType;

@end

