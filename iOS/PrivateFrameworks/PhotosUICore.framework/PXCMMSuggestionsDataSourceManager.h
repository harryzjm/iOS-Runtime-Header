//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableOrderedSet, NSObject, NSString, PXCMMSuggestionsDataSource, PXCMMSuggestionsDataSourceContext, PXCMMSuggestionsDataSourceState;
@protocol OS_dispatch_queue;

@interface PXCMMSuggestionsDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    _Bool _isLoading;
    _Bool _hasCreatedInitialDataSource;
    PXCMMSuggestionsDataSourceState *__state;
    NSMutableOrderedSet *__remainingAssetCollectionsObjectIDsToFetch;
    PXCMMSuggestionsDataSourceContext *_context;
}

+ (id)keyPathsAffectingCurrentDataSourceManager;
+ (id)mockDataSourceManagerFromRecentLargeMoments;
+ (id)dataSourceManagerWithParticipants:(id)arg1 fetchLimit:(long long)arg2 shouldShowAccepted:(_Bool)arg3 message:(id)arg4 date:(id)arg5 matchingStrategy:(unsigned long long)arg6;
+ (id)dataSourceManager;
+ (id)currentDataSourceManager;
+ (id)emptyDataSourceManager;
+ (id)_fetchResultForTypeGraphWithContext:(id)arg1;
+ (id)_fetchResultForMockRecentLargeMomentsDataSourceManager;
+ (id)_fetchResultForEmptyDataSourceManager;
+ (id)new;
+ (id)mostRecentCreationDate;
- (void).cxx_destruct;
@property(readonly, nonatomic) PXCMMSuggestionsDataSourceContext *context; // @synthesize context=_context;
@property(retain) NSMutableOrderedSet *_remainingAssetCollectionsObjectIDsToFetch; // @synthesize _remainingAssetCollectionsObjectIDsToFetch=__remainingAssetCollectionsObjectIDsToFetch;
@property(retain, nonatomic) PXCMMSuggestionsDataSourceState *_state; // @synthesize _state=__state;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 changedObjects:(id)arg4;
- (void)_workerQueue_fetchRemainingAssetCollectionsInBatchesWithAssetCollections:(id)arg1;
- (void)_startLoadingIfNeeded;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (id)createInitialDataSource;
- (id)assetCollections;
- (id)init;
- (id)initWithContext:(id)arg1 assetCollectionsFetchResult:(id)arg2;
- (id)initWithAssetCollectionsFetchResult:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) PXCMMSuggestionsDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
