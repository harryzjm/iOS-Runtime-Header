//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/CSSearchableIndexDelegate-Protocol.h>
#import <EmailDaemon/EDSearchableIndexSchedulable-Protocol.h>
#import <EmailDaemon/EDSearchableIndexVerifierDataSource-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>
#import <EmailDaemon/EFSignpostable-Protocol.h>
#import <EmailDaemon/EMSearchableIndexInterface-Protocol.h>

@class CSSearchableIndex, EFCancelationToken, EFLazyCache, EFObservable, NSMutableArray, NSMutableSet, NSString, _EMSearchableIndexPendingRemovals;
@protocol EDSearchableIndexDataSource, EDSearchableIndexReasonProvider, EDSearchableIndexSchedulableDelegate, EFScheduler, OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

@interface EDSearchableIndex : NSObject <CSSearchableIndexDelegate, EDSearchableIndexVerifierDataSource, EFLoggable, EFSignpostable, EDSearchableIndexSchedulable, EMSearchableIndexInterface>
{
    NSString *_indexName;
    EFCancelationToken *_cancelationToken;
    NSObject<OS_dispatch_queue> *_stateTransitionQueue;
    NSObject<OS_dispatch_source> *_coalescingTimer;
    long long _resumeCount;
    long long _transaction;
    unsigned long long _throttledIndexingBatchSize;
    unsigned long long _throttledDataSourceBatchSize;
    unsigned long long _currentMaximumBatchSize;
    NSObject<OS_os_activity> *_batchIndexingActivity;
    NSMutableArray *_pendingItems;
    NSMutableArray *_preprocessingItems;
    NSMutableSet *_pendingDomainRemovals;
    _EMSearchableIndexPendingRemovals *_pendingIdentifierRemovals;
    NSObject<OS_dispatch_queue> *_indexingQueue;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
    id <EFScheduler> _preprocessingScheduler;
    struct os_unfair_lock_s _mainThreadAccessibleIvarLock;
    id <EFScheduler> _indexingBatchScheduler;
    EFLazyCache *_searchResultsCache;
    _Bool _isActive;
    _Bool _needsRefresh;
    _Bool _needsVerification;
    _Bool _coalesceTimerFired;
    _Bool _scheduledProcessing;
    _Bool _scheduledRefresh;
    _Bool _scheduledVerification;
    _Bool _indexImmediately;
    _Atomic long long _countOfBlocksAffectingDataSourceAndIndex;
    _Bool _dataSourceIndexingPermitted;
    _Bool _persistenceAvailable;
    _Bool _skipIndexExclusionCheck;
    _Bool _clientStateFetched;
    _Bool _enableSpotlightVerification;
    id <EDSearchableIndexDataSource> _dataSource;
    id <EDSearchableIndexReasonProvider> _reasonProvider;
    id <EDSearchableIndexSchedulableDelegate> _schedulableDelegate;
    CSSearchableIndex *_csIndex;
    NSString *_searchableIndexBundleID;
    double _coalescingDelaySeconds;
}

+ (void)_saveLocalClientState:(id)arg1;
+ (id)_localClientState;
+ (id)_localClientStateURL;
+ (id)userHandle;
+ (_Bool)isIncrementalIndexingType:(long long)arg1;
+ (_Bool)isValidTransaction:(long long)arg1;
+ (id)signpostLog;
+ (id)log;
@property(nonatomic) double coalescingDelaySeconds; // @synthesize coalescingDelaySeconds=_coalescingDelaySeconds;
@property(copy, nonatomic) NSString *searchableIndexBundleID; // @synthesize searchableIndexBundleID=_searchableIndexBundleID;
@property(nonatomic) _Bool enableSpotlightVerification; // @synthesize enableSpotlightVerification=_enableSpotlightVerification;
@property(nonatomic) _Bool clientStateFetched; // @synthesize clientStateFetched=_clientStateFetched;
@property(nonatomic) _Bool skipIndexExclusionCheck; // @synthesize skipIndexExclusionCheck=_skipIndexExclusionCheck;
@property(retain, nonatomic) CSSearchableIndex *csIndex; // @synthesize csIndex=_csIndex;
@property(nonatomic) __weak id <EDSearchableIndexSchedulableDelegate> schedulableDelegate; // @synthesize schedulableDelegate=_schedulableDelegate;
@property(nonatomic) __weak id <EDSearchableIndexReasonProvider> reasonProvider; // @synthesize reasonProvider=_reasonProvider;
@property(nonatomic) __weak id <EDSearchableIndexDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic, getter=isDataSourceIndexingPermitted) _Bool dataSourceIndexingPermitted; // @synthesize dataSourceIndexingPermitted=_dataSourceIndexingPermitted;
- (void).cxx_destruct;
- (void)waitForAsynchronousWork;
- (id)currentReasons;
- (id)exclusionReasons;
- (id)purgeReasons;
- (id)dataSourceRefreshReasons;
@property(readonly, nonatomic) _Bool canIndexAttachments;
- (void)removeSearchQueryCancelable:(id)arg1;
- (void)addSearchQueryCancelable:(id)arg1;
@property(readonly, nonatomic) _Bool shouldCancelSearchQuery;
@property(readonly, nonatomic, getter=isPluggedIn) _Bool pluggedIn;
@property(readonly, nonatomic) EFObservable *powerObservable;
- (void)logPowerEventWithIdentifier:(id)arg1 eventData:(id)arg2;
- (void)markMessagesAsPrinted:(id)arg1;
- (void)indexMessages:(id)arg1 includeBody:(_Bool)arg2 indexingType:(long long)arg3;
- (void)removeMessages:(id)arg1;
- (_Bool)_preprocessItemIfNecessary:(id)arg1 fromRefresh:(_Bool)arg2;
- (id)identifiersMatchingCriterion:(id)arg1;
- (id)messageIDsMatchingQuery:(id)arg1;
- (void)removeAllItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg1;
- (void)removeAllItems;
- (void)removeItemsForDomainIdentifier:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1 reasons:(id)arg2 fromRefresh:(_Bool)arg3;
- (void)removeItemsWithIdentifiers:(id)arg1;
- (void)_indexItems:(id)arg1 fromRefresh:(_Bool)arg2 immediately:(_Bool)arg3;
- (void)indexItems:(id)arg1 fromRefresh:(_Bool)arg2 immediately:(_Bool)arg3;
- (void)indexItems:(id)arg1 immediately:(_Bool)arg2;
- (void)indexItems:(id)arg1;
- (void)reindexAllItemsWithOptions:(unsigned long long)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (id)indexedEmptySubjectIdentifers;
- (id)issueDiagnosticsRequestForMessageRowId:(id)arg1;
- (void)_processSpotlightVerificationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_processRefreshRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)_pendingIdentifiers;
- (void)_processIdentifierRemovals:(id)arg1;
- (id)_processDomainRemovals:(id)arg1;
- (_Bool)_processIndexingBatch:(id)arg1 clientState:(id)arg2 itemsNotIndexed:(id)arg3;
- (void)_getDomainRemovals:(id *)arg1 identifierRemovals:(id *)arg2;
- (id)_consumeBatchOfSize:(unsigned long long)arg1;
@property(readonly, getter=isPerformingBlockAffectingDataSourceAndIndex) _Bool performingBlockAffectingDataSourceAndIndex;
- (void)performBlockAffectingDataSourceAndIndex:(CDUnknownBlockType)arg1;
- (void)endUpdatesAffectingDataSourceAndIndex;
- (void)beginUpdatesAffectingDataSourceAndIndex;
- (void)_scheduleDataSourceRefresh;
- (void)_scheduleProcessPendingItemsFromRefresh:(_Bool)arg1;
- (void)_logSignpostForIndexingBatchCompletedWithItemsIndexedCount:(id)arg1;
- (void)_logSignpostForIndexingBatchAssignedUpdatesWithItemsIndexedCount:(unsigned long long)arg1;
- (void)_logSignpostForIndexingBatchAssignedDomainRemovalCount:(unsigned long long)arg1;
- (void)_logSignpostForIndexingBatchStartWithPendingItemsCount:(id)arg1;
- (void)_queueTransitionActive:(_Bool)arg1 fromRefresh:(_Bool)arg2;
- (unsigned long long)_countOfItemsInPendingQueues;
- (void)_queueRefresh;
- (void)_queueConsumeBudgetItemCount:(unsigned long long)arg1;
- (void)_queueConsumeBudgetElapsedPeriod:(double)arg1;
- (void)_transitionWithBudgetTimeUsed:(double)arg1;
- (void)_coalescingTimerFired;
- (void)_stopCoalescingTimer;
- (void)_startCoalescingTimer;
- (id)searchableIndexForSearchableIndexVerifier:(id)arg1;
- (id)dataSamplesForSearchableIndexVerifier:(id)arg1 searchableIndex:(id)arg2;
- (void)_dataSourcePrepareToIndexItems:(id)arg1 fromRefresh:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_dataSourceVerifyRepresentativeSampleWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dataSourceRequestNeededUpdatesExcludingIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dataSourceInvalidateItemsGreaterThanTransaction:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dataSourceAssignTransaction:(long long)arg1 forIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dataSourceAssignTransaction:(long long)arg1 updates:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dataSourceScheduleWork:(CDUnknownBlockType)arg1;
- (_Bool)_queueContentsAllowsRefresh;
@property(readonly) long long resumeCount;
@property(readonly, getter=isActive) _Bool active;
@property(getter=isPersistenceAvailable) _Bool persistenceAvailable; // @synthesize persistenceAvailable=_persistenceAvailable;
- (void)refresh;
- (void)resume;
- (void)_resume;
- (void)suspend;
- (void)_suspend;
- (id)_eventDataForTransitionState:(id)arg1;
- (void)_invalidateCache;
- (long long)_nextTransaction;
@property(readonly, getter=_transaction) long long transaction;
- (void)_noteNeedsLastClientStateFetch;
- (void)_fetchLastClientState;
- (void)applicationWillResume;
- (void)applicationWillSuspend;
- (void)setForeground:(_Bool)arg1;
- (double)_throttleRequestedSize:(unsigned long long *)arg1 targetTime:(double)arg2 action:(CDUnknownBlockType)arg3;
- (void)_verifySpotlightIndex;
- (void)_registerDistantFutureSpotlightVerification;
- (void)_scheduleSpotlightVerificationOnIndexingQueueWithCompletion:(CDUnknownBlockType)arg1;
- (void)_scheduleSpotlightVerification;
@property(readonly, copy, nonatomic) NSString *indexName;
@property(readonly, nonatomic) unsigned long long pendingIndexItemsCount;
- (void)_powerStateChanged;
@property(readonly, copy, nonatomic) NSString *copyDiagnosticInformation;
- (void)dealloc;
- (id)initWithName:(id)arg1 dataSource:(id)arg2 reasonProvider:(id)arg3;
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
