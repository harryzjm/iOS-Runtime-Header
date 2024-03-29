//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMockSpotlightIndexingLogger : NSObject
{
}

- (void)verifiedIndexWithSummmary:(id)arg1;
- (void)didNotFinishIndexingForDeltaSyncWithError:(id)arg1;
- (void)didNotFinishIndexingForFullSyncWithError:(id)arg1;
- (void)finishedBatchIndexWithUpdateIdentifiers:(id)arg1 deleteIdentifiers:(id)arg2;
- (void)finishedIndexingForDeltaSyncWithUpdateCount:(unsigned long long)arg1 deleteCount:(unsigned long long)arg2;
- (void)finishedIndexingForFullSyncWithCount:(unsigned long long)arg1;
- (void)failedToCreateUnarchiverForClientStateWithError:(id)arg1;
- (void)failedToUnarchiveClientStateData:(id)arg1;
- (void)failedToDeleteAllSearchableItemsWithSpotlight:(id)arg1 willRetry:(_Bool)arg2;
- (void)failedToJournalItemIdentifiersForDeletionWithSpotlight:(id)arg1 identifiers:(id)arg2 willRetry:(_Bool)arg3;
- (void)failedToJournalSearchableItemsForIndexingWithSpotlight:(id)arg1 identifiers:(id)arg2 willRetry:(_Bool)arg3;
- (void)failedToEndIndexBatchWithSpotlight:(id)arg1 willRetry:(_Bool)arg2;
- (void)failedToBeginIndexBatchWithSpotlight:(id)arg1;
- (void)failedToFetchClientStateFromSpotlight:(id)arg1 willRetry:(_Bool)arg2;
- (void)failedToFetchSearchableForContactIdentifiers:(id)arg1 error:(id)arg2;
- (void)failedToClearChangeHistory:(id)arg1 toChangeAnchor:(id)arg2 error:(id)arg3;
- (void)failedToFetchContactForChange:(id)arg1;
- (void)failedToCreateSearchableItemForContactIdentifier:(id)arg1;
- (void)willResumeIndexingAfterOffset:(long long)arg1;
- (void)willReindexAsSnapshotAnchorChangedFrom:(id)arg1 to:(id)arg2;
- (void)willReindexAsIndexVersionChangedFrom:(long long)arg1 to:(long long)arg2;
- (void)willResumeReindexingAsNotFinished;
- (void)willReindexAsFailedToFetchClientState;
- (void)willReindexAsChangeHistoryIsTruncated:(id)arg1;
- (void)willReindexAsFailedToFetchChangeHistory:(id)arg1 error:(id)arg2;
- (void)willReindexAsFailedToRegisterForChangeHistory:(id)arg1 error:(id)arg2;
- (void)willClearChangeHistory:(id)arg1 toChangeAnchor:(id)arg2;
- (void)willBatchIndexForDeltaSyncWithUpdateCount:(unsigned long long)arg1 deleteCount:(unsigned long long)arg2;
- (void)willBatchIndexForFullSyncWithCount:(unsigned long long)arg1 lastOffset:(long long)arg2 doneFullSync:(_Bool)arg3;
- (void)willStartIndexingWithClientState:(id)arg1;
- (void)deferringReindexAsFailedToPrepareForReindexing;
- (void)willReindexItemsWithIdentifiers:(id)arg1;
- (void)noContactChangesToIndex;
- (void)verifyingIndex:(CDUnknownBlockType)arg1;
- (void)reindexingSearchableItemsWithIdentifiers:(CDUnknownBlockType)arg1;
- (void)reindexingAllSearchableItems:(CDUnknownBlockType)arg1;
- (void)indexingContacts:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

