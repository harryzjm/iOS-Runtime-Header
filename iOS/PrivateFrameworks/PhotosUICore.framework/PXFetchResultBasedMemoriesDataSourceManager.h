//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableOrderedSet, NSObject, NSString, PHFetchResult, PXMemoriesDataSourceState;
@protocol OS_dispatch_queue;

@interface PXFetchResultBasedMemoriesDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    _Bool _isWorking;
    _Bool _hasCreatedInitialDataSource;
    _Bool _loadFromEnd;
    PXMemoriesDataSourceState *__state;
    NSMutableOrderedSet *__remainingMemoriesToFetch;
}

@property(retain, setter=_setRemainingMemoriesToFetch:) NSMutableOrderedSet *_remainingMemoriesToFetch; // @synthesize _remainingMemoriesToFetch=__remainingMemoriesToFetch;
@property(retain, nonatomic, setter=_setState:) PXMemoriesDataSourceState *_state; // @synthesize _state=__state;
@property(nonatomic) _Bool loadFromEnd; // @synthesize loadFromEnd=_loadFromEnd;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)_createMemoriesDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;
- (void)_workerQueue_fetchRemainingMemoriesInBatchesFromTheEnd:(_Bool)arg1;
- (void)startLoadingIfNeeded;
- (id)createInitialDataSource;
@property(readonly, nonatomic) PHFetchResult *memories;
- (id)initWithMemoriesFetchResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

