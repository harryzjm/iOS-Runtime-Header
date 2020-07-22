//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSTimeZone, TSCENamedReferenceManager, TSCERemoteDataStore, TSCERewriteTableIDInfo, TSCETableInfosByName, TSCETransaction, TSCEUUidReferenceMap, TSKAccessController, TSKChangeGroup, TSKChangeNotifier;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore, TSKMultiTableRemapping;

__attribute__((visibility("hidden")))
@interface TSCECalculationEngine
{
    struct TSCEDependencyTracker *_dependencyTracker;
    int _recalculationThreadState;
    struct _opaque_pthread_mutex_t _recalculationThreadStateMutex;
    _Bool _shouldCancelRecalculation;
    int _calculationPauseCount;
    NSObject<OS_dispatch_group> *_recalcLoopGroup;
    _Bool _blockingUntilRecalcIsComplete;
    double _recalcTime;
    NSObject<OS_dispatch_group> *_recalcDispatchGroup;
    _Atomic int _recalcDispatchGroupSize;
    NSObject<OS_dispatch_queue> *_recalcHighPriorityQueue;
    NSObject<OS_dispatch_queue> *_recalcLowPriorityQueue;
    NSObject<OS_dispatch_semaphore> *_modifiedOwnersSem;
    unordered_set_3f00ed57 _modifiedOwnersInThisRecalcCycle;
    _Bool _shouldRefillRecalcQueue;
    NSMutableSet *_retainReferenceResolvers;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, id<TSCEReferenceResolving>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, id<TSCEReferenceResolving>>>> _referenceResolversByUid;
    NSMutableDictionary *_legacyGlobalIDStringToOwnerUIDMap;
    unsigned long long _batchingGroupCellDirtyingLevel;
    _Bool _dirtyRandomVolatileFunctionsAtEndOfDirtyBatching;
    unsigned long long _documentRandomSeed;
    NSDate *_currentDate;
    NSTimeZone *_currentTimeZone;
    NSMutableArray *_calculationStateObservers;
    unsigned long long _suppressWillModifyCallsLevel;
    unsigned long long _numberOfFormulas;
    TSKChangeGroup *_pendingChangesForAsyncNotification;
    NSObject<OS_dispatch_queue> *_writeMutualExclusionQueue;
    _Bool _dirtyAllFormulasInDocumentDidLoad;
    UUIDData_5fbc143e _transposingTableUID;
    _Bool _duringRollback;
    int _XLImportDateMode;
    TSKAccessController *_accessController;
    TSKChangeNotifier *_changeNotifier;
    TSCERemoteDataStore *_remoteDataStore;
    NSString *_previousLocaleIdentifier;
    unsigned long long _loadFromFileVersion;
    TSCETableInfosByName *_tableInfosByName;
    TSCETransaction *_currentTransaction;
    TSCENamedReferenceManager *_namedReferenceManager;
    TSCEUUidReferenceMap *_uuidReferenceMap;
    TSCERewriteTableIDInfo *_tableIDHistory;
    id <TSKMultiTableRemapping> _currentTableIdRemapper;
}

+ (void)splitRandomSeed:(unsigned long long)arg1 intoLo:(int *)arg2 hi:(int *)arg3;
+ (unsigned long long)randomSeedFromRandomLo:(int)arg1 hi:(int)arg2;
+ (unsigned long long)generateRandomSeed;
+ (Class)resolverClass;
+ (_Bool)isTerminating;
+ (void)terminate;
+ (_Bool)localVariablesEnabled;
@property(nonatomic) _Bool duringRollback; // @synthesize duringRollback=_duringRollback;
@property(retain) id <TSKMultiTableRemapping> currentTableIdRemapper; // @synthesize currentTableIdRemapper=_currentTableIdRemapper;
@property(readonly) TSCERewriteTableIDInfo *tableIDHistory; // @synthesize tableIDHistory=_tableIDHistory;
@property(readonly) TSCEUUidReferenceMap *uuidReferenceMap; // @synthesize uuidReferenceMap=_uuidReferenceMap;
@property(readonly, nonatomic) TSCENamedReferenceManager *namedReferenceManager; // @synthesize namedReferenceManager=_namedReferenceManager;
@property UUIDData_5fbc143e transposingTableUID; // @synthesize transposingTableUID=_transposingTableUID;
@property(readonly) TSCETransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property(readonly) TSCETableInfosByName *tableInfosByName; // @synthesize tableInfosByName=_tableInfosByName;
@property(nonatomic) unsigned long long loadFromFileVersion; // @synthesize loadFromFileVersion=_loadFromFileVersion;
@property(readonly) NSString *previousLocaleIdentifier; // @synthesize previousLocaleIdentifier=_previousLocaleIdentifier;
@property int XLImportDateMode; // @synthesize XLImportDateMode=_XLImportDateMode;
@property(readonly) TSCERemoteDataStore *remoteDataStore; // @synthesize remoteDataStore=_remoteDataStore;
@property(nonatomic) __weak TSKChangeNotifier *changeNotifier; // @synthesize changeNotifier=_changeNotifier;
@property(nonatomic) __weak TSKAccessController *accessController; // @synthesize accessController=_accessController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unordered_set_eab92ffe)cellCoordinatesNeedingExcelImportForTable:(const UUIDData_5fbc143e *)arg1;
- (unsigned int)delayedArchivingPriority;
- (id)packageLocator;
- (_Bool)shouldDelayArchiving;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)allWholeOwnerDependenciesAsString;
- (id)allSpanningDependenciesAsString;
- (id)allCellDependenciesAsString;
- (id)allFormulaOwnersAsString;
- (void)assertAllDirtyCellsAreOnLeafStack;
- (void)assertDirtyPrecedentsCountConsistency;
- (id)documentLocale;
- (id)documentRoot;
- (_Bool)hasMaxNumFormulas;
- (unsigned long long)numFormulaCellsInOwner:(const UUIDData_5fbc143e *)arg1;
- (unsigned long long)numberOfCellsWithFormulas;
- (void)removeCalculationStateObserver:(id)arg1;
- (void)addCalculationStateObserver:(id)arg1;
- (struct TSCERangeRef)parseStringAsReference:(id)arg1 withParsingContext:(id)arg2;
- (_Bool)parseComponentsOfReference:(id)arg1 gettingSheetName:(id *)arg2 gettingTableName:(id *)arg3 gettingRest:(id *)arg4;
- (id)parseWithParsingContext:(id)arg1;
- (struct TSCERangeRef)parseStringAsReferenceComponentIntersection:(id)arg1 inResolver:(id)arg2 inTableNamed:(id)arg3 preferredGeometricResolver:(id)arg4 withParsingContext:(id)arg5;
- (struct TSUCellCoord)parseStringAsGeometricReferenceComponent:(id)arg1 inResolver:(id)arg2 outStickyBits:(char *)arg3 gettingReferencesMatchingInputAsPrefix:(id *)arg4;
- (struct TSCEReferenceSet)emptyReferenceSet;
- (struct TSCEReferenceSet)precedentsOfCell:(struct TSCECellRef)arg1;
- (id)escapedStringForRangeReference:(const struct TSCERangeRef *)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 suppressIdenticalEndReference:(_Bool)arg4 forceEscaping:(_Bool)arg5;
- (id)escapedStringForRangeReference:(const struct TSCERangeRef *)arg1 hostTableUID:(const UUIDData_5fbc143e *)arg2 stickyBits:(unsigned char)arg3 suppressIdenticalEndReference:(_Bool)arg4 forceEscaping:(_Bool)arg5;
- (id)stringForRangeReference:(const struct TSCERangeRef *)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 suppressIdenticalEndReference:(_Bool)arg4;
- (id)stringForRangeReference:(const struct TSCERangeRef *)arg1 hostTableUID:(const UUIDData_5fbc143e *)arg2 stickyBits:(unsigned char)arg3 suppressIdenticalEndReference:(_Bool)arg4;
- (id)stringForRangeReference:(id)arg1 nsHostTableUID:(id)arg2 stickyBits:(unsigned char)arg3 suppressIdenticalEndReference:(_Bool)arg4;
- (id)p_stringForRangeReference:(const struct TSCERangeRef *)arg1 hostTableUID:(const UUIDData_5fbc143e *)arg2 contextSheetName:(id)arg3 stickyBits:(unsigned char)arg4 suppressIdenticalEndReference:(_Bool)arg5 quoteComponents:(_Bool)arg6 forceEscaping:(_Bool)arg7;
- (_Bool)referenceIsValid:(const struct TSCERangeRef *)arg1;
- (_Bool)rangeIsWithinTable:(const struct TSCERangeRef *)arg1;
- (void)markRemoteDataVolatileFunctionsAsDirtyForKeys:(id)arg1;
- (void)replaceRemoteDataKeysInterestedIn:(id)arg1 forCell:(const struct TSCECellRef *)arg2;
- (void)resetCorruptCellRefs:(const unordered_set_7ec2a700 *)arg1;
- (unordered_set_7ec2a700)corruptCellRefs;
- (void)clearRecalculationTimer;
- (double)recalcTimeInSecs;
- (_Bool)hasRunRecalculationALongTime;
- (void)endBatchingGroupCellDirtying;
- (void)beginBatchingGroupCellDirtying;
- (void)executeBlockWhileCalculationEngineIsNotWriting:(CDUnknownBlockType)arg1;
- (void)startRecalcTaskIfNecessary;
- (void)pauseRecalculationForBlock:(CDUnknownBlockType)arg1;
- (void)startRecalculation;
- (void)willClose;
- (_Bool)recalculationIsPaused;
- (void)resumeRecalculation;
- (void)pauseRecalculationSometimeSoon;
- (void)pauseRecalculation;
- (void)endSuppressingWillModifyCalls;
- (void)beginSuppressingWillModifyCalls;
- (void)p_blockUntilRecalcTaskExitedWithTimeout:(double)arg1;
- (void)blockUntilRecalcIsCompleteWithTimeout:(double)arg1;
- (void)p_blockUntilRecalcIsCompleteOnNewThreadWithTimeout:(id)arg1;
- (_Bool)isCellReferenceDirty:(const struct TSCECellRef *)arg1;
- (_Bool)cellContainsAFormula:(const struct TSCECellRef *)arg1;
- (void)markOwnerAsDirty:(const UUIDData_5fbc143e *)arg1;
- (void)markRemoteDataVolatileFunctionsAsDirty;
- (void)markGeometryVolatileFunctionsAsDirtyInOwner:(const UUIDData_5fbc143e *)arg1;
- (void)markCompassVolatileFunctionsAsDirty;
- (void)markLocationVolatileFunctionsAsDirty;
- (void)markLocaleVolatileFunctionsAsDirty;
- (void)markRandomVolatileFunctionsAsDirty;
- (void)markTimeVolatileFunctionsAsDirtyForCurrentDateTime;
- (void)markTimeVolatileFunctionsAsDirty;
- (void)detectAndRepairConsistencyViolations;
- (void)markOnlyDependentsDirty:(const struct TSCECellRef *)arg1;
- (void)markIndirectCallsAsDirty;
- (void)markAllFunctionsAsDirty;
- (void)markRangeRefAsDirty:(const struct TSCERangeRef *)arg1;
- (void)dirtyCellsForMergingRange:(struct TSCERangeCoordinate)arg1 forTable:(const UUIDData_5fbc143e *)arg2 headerRowRange:(struct TSCERangeCoordinate)arg3 headerColumnRange:(struct TSCERangeCoordinate)arg4;
- (void)dirtyCellsForInsertionOfRows:(struct _NSRange)arg1 forTable:(const UUIDData_5fbc143e *)arg2 tableRange:(struct TSCERangeCoordinate)arg3 headerRange:(struct TSCERangeCoordinate)arg4;
- (void)dirtyCellsForInsertionOfColumns:(struct _NSRange)arg1 forTable:(const UUIDData_5fbc143e *)arg2 tableRange:(struct TSCERangeCoordinate)arg3 headerRange:(struct TSCERangeCoordinate)arg4;
- (void)dirtyCellsForRemovalOfRows:(struct _NSRange)arg1 fromTable:(const UUIDData_5fbc143e *)arg2 tableRange:(struct TSCERangeCoordinate)arg3;
- (void)dirtyCellsForRemovalOfColumns:(struct _NSRange)arg1 fromTable:(const UUIDData_5fbc143e *)arg2 tableRange:(struct TSCERangeCoordinate)arg3;
- (void)updateDirtyPrecedentCountsForRemovedIndex:(int)arg1 inTable:(const UUIDData_5fbc143e *)arg2 forColumns:(_Bool)arg3;
- (void)headerStateOfTableChanged:(const UUIDData_5fbc143e *)arg1;
- (void)headerStateOfTableChanged:(const UUIDData_5fbc143e *)arg1 changeIsForColumns:(_Bool)arg2;
- (void)markCellRefAsDirty:(const struct TSCECellRef *)arg1;
- (void)rollbackTableIDHistoryWithRewriteInfo:(id)arg1;
- (id)extendTableIDHistoryWithRewrite:(id)arg1;
- (_Bool)clearCellIsDirtyAfterRecalc:(const struct TSCECellRef *)arg1;
- (_Bool)referenceWasGuaranteedCleanAtRecalcCycleStart:(struct TSCECReference)arg1;
- (_Bool)cellIsInACycle:(const struct TSCECellRef *)arg1;
- (_Bool)allCellsAreClean;
- (unsigned long long)dirtyCellCount;
- (unsigned long long)dirtyCellCountInOwner:(const UUIDData_5fbc143e *)arg1;
- (unordered_set_7ec2a700)formulaCellsUsingVolatiles:(unsigned long long)arg1;
- (vector_13f93596)formulaCoordsInRange:(const struct TSCERangeCoordinate *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (vector_13f93596)formulaCoordsReferringToRange:(const struct TSCERangeRef *)arg1 fromOwner:(const UUIDData_5fbc143e *)arg2;
- (void)foreachFormulaInOwner:(const UUIDData_5fbc143e *)arg1 block:(CDUnknownBlockType)arg2;
- (struct TSCECellRef)rootCauseForErrorInCell:(const struct TSCECellRef *)arg1 atRootCell:(_Bool *)arg2;
- (void)clearErrorForCell:(const struct TSCECellRef *)arg1;
- (void)setError:(id)arg1 forCell:(const struct TSCECellRef *)arg2;
- (void)removeFormulasFromRange:(struct TSCERangeRef)arg1;
- (void)removeAllFormulasFromOwner:(const UUIDData_5fbc143e *)arg1;
- (void)removeFormula:(CDStruct_ed6d627d)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (void)replaceFormula:(CDStruct_ed6d627d)arg1 inOwner:(const UUIDData_5fbc143e *)arg2 precedentIterator:(CDUnknownFunctionPointerType)arg3 userData:(void *)arg4 calculatedRemoteDataInterest:(id)arg5 clearCycle:(_Bool)arg6;
- (void)replaceFormula:(CDStruct_ed6d627d)arg1 inOwner:(const UUIDData_5fbc143e *)arg2 precedentIterator:(CDUnknownFunctionPointerType)arg3 userData:(void *)arg4 clearCycle:(_Bool)arg5;
- (void)replaceFormula:(CDStruct_ed6d627d)arg1 inOwner:(const UUIDData_5fbc143e *)arg2 precedentIterator:(CDUnknownFunctionPointerType)arg3 userData:(void *)arg4;
- (void)addFormula:(CDStruct_ed6d627d)arg1 inOwner:(const UUIDData_5fbc143e *)arg2 precedentIterator:(CDUnknownFunctionPointerType)arg3 userData:(void *)arg4;
- (void)closeTransaction:(id)arg1;
- (id)openTransaction;
- (UUIDData_5fbc143e)uuidForTableUID:(const UUIDData_5fbc143e *)arg1 andIndex:(unsigned short)arg2 direction:(_Bool)arg3;
- (void)setOwnerUIDForLegacyGlobalID:(id)arg1 ownerUID:(const UUIDData_5fbc143e *)arg2;
- (UUIDData_5fbc143e)ownerUIDForLegacyGlobalID:(id)arg1 registeringIfNeeded:(_Bool)arg2;
- (id)resolverForTableUID:(const UUIDData_5fbc143e *)arg1;
- (id)resolverForCellRef:(id)arg1;
- (void)clearLegacyGlobalIDs;
- (void)enumerateFormulaOwnersUsingBlock:(CDUnknownBlockType)arg1;
- (vector_dadc1b26)allOwnerUIDs;
- (id)ownerForOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (_Bool)allOwnersRegistered;
- (_Bool)ownerIsRegistered:(const UUIDData_5fbc143e *)arg1;
- (void)unregisterOwner:(const UUIDData_5fbc143e *)arg1;
- (int)ownerKindForTableUID:(const UUIDData_5fbc143e *)arg1;
- (int)registerOwnerWithOwnerUID:(const UUIDData_5fbc143e *)arg1 owner:(id)arg2 referenceResolver:(id)arg3 ownerKind:(int)arg4;
- (int)forwardRegisterOwnerWithOwnerUID:(const UUIDData_5fbc143e *)arg1 legacyGlobalID:(id)arg2;
- (void)dirtyCellsForUpgrade;
- (void)p_startRecalculationTask;
- (void)recalculateWithTimeout:(double)arg1;
- (void)recalcHoldingWriteLock;
- (void)notifyObserversOfRecalcProgress;
- (void)wroteCells:(const vector_13f93596 *)arg1 inOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (_Bool)recalcHoldingReadLock;
- (void)p_recalcOneCellHoldingReadLock:(struct TSCEInternalCellReference)arg1 formulaOwner:(id)arg2 hasExistingCalculatedPrecedents:(_Bool)arg3 isInACycle:(_Bool)arg4;
- (void)p_enqueueTaskForCell:(struct TSCEInternalCellReference)arg1;
- (struct TSCEInternalCellReference)p_refillRecalcQueue;
- (int)preferredDispatchQueueSize;
- (void)invalidateAfterRecalc;
- (_Bool)isInCollaborationMode;
- (void)dealloc;
- (void)documentDidLoad;
- (id)initWithContext:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)p_removeApplicationNotification;
- (void)p_addApplicationNotification;
- (id)init;
- (void)initializeDispatchObjects;
@property(readonly) _Bool shouldAbortRecalculation;
@property(retain) NSTimeZone *currentTimeZone;
@property(retain) NSDate *currentDate;
@property unsigned long long documentRandomSeed;
- (id)legacyGlobalIDStringToOwnerUIDMap;

@end
