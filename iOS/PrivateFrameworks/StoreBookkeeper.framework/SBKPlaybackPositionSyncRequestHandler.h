//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreBookkeeper/SBKSyncTransactionProcessing-Protocol.h>
#import <StoreBookkeeper/SBKTransactionControllerDelegate-Protocol.h>

@class NSDictionary, NSError, NSMutableDictionary, NSObject, NSString, SBKSyncTransaction, SBKTransactionController;
@protocol OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource, SBKUniversalPlaybackPositionTransactionContext;

__attribute__((visibility("hidden")))
@interface SBKPlaybackPositionSyncRequestHandler <SBKTransactionControllerDelegate, SBKSyncTransactionProcessing>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_syncOperationQueue;
    _Bool _syncInProgress;
    _Bool _canceled;
    id <SBKUniversalPlaybackPositionDataSource> _dataSource;
    SBKTransactionController *_kvsController;
    id <SBKUniversalPlaybackPositionTransactionContext> _dataSourceTransactionContext;
    NSMutableDictionary *_metadataItemsFromDataSource;
    NSDictionary *_metadataItemsToCommitToDataSource;
    NSDictionary *_metadataItemsToCommitToKVSStorage;
    NSMutableDictionary *_responseMetadataItemsToCommitToDataSource;
    NSMutableDictionary *_responseMetadataItemsMergedToCommitBackToKVSStorage;
    SBKSyncTransaction *_currentKVSTransaction;
    NSError *_fatalSyncError;
    NSString *_overrideSyncAnchor;
}

@property(retain) NSString *overrideSyncAnchor; // @synthesize overrideSyncAnchor=_overrideSyncAnchor;
@property(retain) NSError *fatalSyncError; // @synthesize fatalSyncError=_fatalSyncError;
@property _Bool canceled; // @synthesize canceled=_canceled;
@property _Bool syncInProgress; // @synthesize syncInProgress=_syncInProgress;
@property(retain) SBKSyncTransaction *currentKVSTransaction; // @synthesize currentKVSTransaction=_currentKVSTransaction;
@property(retain) NSMutableDictionary *responseMetadataItemsMergedToCommitBackToKVSStorage; // @synthesize responseMetadataItemsMergedToCommitBackToKVSStorage=_responseMetadataItemsMergedToCommitBackToKVSStorage;
@property(retain) NSMutableDictionary *responseMetadataItemsToCommitToDataSource; // @synthesize responseMetadataItemsToCommitToDataSource=_responseMetadataItemsToCommitToDataSource;
@property(retain) NSDictionary *metadataItemsToCommitToKVSStorage; // @synthesize metadataItemsToCommitToKVSStorage=_metadataItemsToCommitToKVSStorage;
@property(retain) NSDictionary *metadataItemsToCommitToDataSource; // @synthesize metadataItemsToCommitToDataSource=_metadataItemsToCommitToDataSource;
@property(retain) NSMutableDictionary *metadataItemsFromDataSource; // @synthesize metadataItemsFromDataSource=_metadataItemsFromDataSource;
@property(retain) id <SBKUniversalPlaybackPositionTransactionContext> dataSourceTransactionContext; // @synthesize dataSourceTransactionContext=_dataSourceTransactionContext;
@property(retain) SBKTransactionController *kvsController; // @synthesize kvsController=_kvsController;
@property(retain) id <SBKUniversalPlaybackPositionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)transaction:(id)arg1 conflictDetectionOrdinalForKey:(id)arg2;
- (id)transaction:(id)arg1 syncAnchorForTransactionSyncAnchor:(id)arg2;
- (id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2;
- (void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(_Bool *)arg3;
- (void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(_Bool)arg4 isDirty:(_Bool *)arg5;
- (void)transaction:(id)arg1 didProcessResponseData:(id)arg2;
- (void)transaction:(id)arg1 willProcessResponseData:(id)arg2;
- (void)transactionController:(id)arg1 transactionDidFinish:(id)arg2;
- (void)transactionController:(id)arg1 transactionDidCancel:(id)arg2 error:(id)arg3;
- (_Bool)transactionController:(id)arg1 transactionDidFail:(id)arg2 error:(id)arg3;
- (void)_signalKVSTransactionCompletion:(id)arg1 withError:(id)arg2;
- (void)_signalKVSTransactionCompletion:(id)arg1;
- (id)_synchronouslyRunKVSTransaction:(id)arg1;
- (id)newKVSSyncTransactionWithUpdatedMetadataItemIdentifiers:(id)arg1 processConflicts:(_Bool)arg2;
- (void)_mergeMetadataItemsFromSyncResponse;
- (int)_mergeConflictedItemFromSyncResponse:(id)arg1;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)timeout;
- (void)cancelWithError:(id)arg1;
- (_Bool)_shouldStop;
- (_Bool)_synchronize:(id *)arg1;
- (void)_dataSourceCancelTransaction;
- (void)clearTransactionResponseData;
- (id)initWithDataSource:(id)arg1 bagContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

