//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FPXDomainContext, FPXIndexState, FPXSpotlightIndexer, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPXIndexOneBatchOperation
{
    FPXSpotlightIndexer *_indexer;
    FPXDomainContext *_domainContext;
    FPXIndexState *_indexState;
    _Bool _isInitialIndexing;
    _Bool _hasMoreChanges;
    unsigned long long *_logSection;
    NSObject<OS_dispatch_queue> *_cleanupQueue;
    CDUnknownBlockType _fetchCompletedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType fetchCompletedBlock; // @synthesize fetchCompletedBlock=_fetchCompletedBlock;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)handleInsertedItems:(id)arg1 deletedItems:(id)arg2 needsMoreWork:(_Bool)arg3 state:(id)arg4 error:(id)arg5;
- (void)_handleInsertedItems:(id)arg1 deletedItems:(id)arg2 needsMoreWork:(_Bool)arg3 state:(id)arg4 error:(id)arg5;
- (void)_indexOneChangesBatchFromChangeToken:(id)arg1;
- (void)_indexOnePageFromPage:(id)arg1;
- (id)observerItemID;
- (id)initWithIndexer:(id)arg1 isInitialIndexing:(_Bool)arg2 queue:(id)arg3;

@end
