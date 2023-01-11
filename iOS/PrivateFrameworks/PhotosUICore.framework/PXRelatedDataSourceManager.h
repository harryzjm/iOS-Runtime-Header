//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSObject, PHFetchResult, PXPhotosDetailsContext, PXRelatedDataSource, PXRelatedSettings;
@protocol OS_dispatch_queue;

@interface PXRelatedDataSourceManager
{
    _Bool _didStartLoading;
    _Bool _shouldCancelLoading;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PXRelatedSettings *_settings;
    unsigned long long _fetchLimit;
    unsigned long long _initialBatchSize;
    unsigned long long _loadBatchSize;
    NSDate *_loadStartDate;
    _Bool _didLoadInitialDataSource;
    _Bool _useItemIndexPaths;
    _Bool __canceled;
    unsigned long long __initialBatchSize;
    unsigned long long __loadBatchSize;
    PXPhotosDetailsContext *__context;
    PHFetchResult *__collectionListFetchResult;
    PHFetchResult *__relatedCollections;
    PHFetchResult *__preparedRelatedCollections;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setPreparedRelatedCollections:) PHFetchResult *_preparedRelatedCollections; // @synthesize _preparedRelatedCollections=__preparedRelatedCollections;
@property(retain, nonatomic, setter=_setRelatedCollections:) PHFetchResult *_relatedCollections; // @synthesize _relatedCollections=__relatedCollections;
@property(nonatomic, getter=_isCanceled, setter=_setCanceled:) _Bool _canceled; // @synthesize _canceled=__canceled;
@property(readonly, nonatomic) PHFetchResult *_collectionListFetchResult; // @synthesize _collectionListFetchResult=__collectionListFetchResult;
@property(readonly, nonatomic) PXPhotosDetailsContext *_context; // @synthesize _context=__context;
@property(readonly, nonatomic) _Bool useItemIndexPaths; // @synthesize useItemIndexPaths=_useItemIndexPaths;
@property(nonatomic) unsigned long long loadBatchSize; // @synthesize loadBatchSize=__loadBatchSize;
@property(nonatomic) unsigned long long initialBatchSize; // @synthesize initialBatchSize=__initialBatchSize;
- (id)_referenceAssetForReferenceObject:(id)arg1;
- (id)_keyAssetFetchResultForRelatedCollection:(id)arg1 referenceAsset:(id)arg2;
- (id)_collectionListRelatedToObject:(id)arg1;
- (id)_referenceObjectFromCollectionListFetchResult:(id)arg1;
- (id)_referenceObject;
- (void)_continueBackgroundLoadWithReferenceObject:(id)arg1 relatedCollections:(id)arg2;
- (id)_collectionsRelatedToReferenceObject:(id)arg1;
- (void)_continueBackgroundLoadWithReferenceObject:(id)arg1 attemptIndex:(long long)arg2;
- (void)_startBackgroundLoad;
- (id)createPhotosDataSourceForRelatedEntry:(id)arg1;
- (void)_setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)unregisterChangeObserver:(id)arg1 context:(void *)arg2;
- (void)registerChangeObserver:(id)arg1 context:(void *)arg2;
- (void)cancelLoading;
- (void)startLoading;
- (id)initWithPhotosDetailsContext:(id)arg1 useItemIndexPaths:(_Bool)arg2;
- (id)initWithPhotosDetailsContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) PXRelatedDataSource *dataSource; // @dynamic dataSource;

@end
