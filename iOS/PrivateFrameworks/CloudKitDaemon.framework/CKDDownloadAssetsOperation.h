//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDCancelTokenGroup, NSArray, NSMapTable, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDDownloadAssetsOperation
{
    _Bool _shouldFetchAssetContentInMemory;
    CDUnknownBlockType _downloadPreparationBlock;
    CDUnknownBlockType _downloadProgressBlock;
    CDUnknownBlockType _downloadCommandBlock;
    CDUnknownBlockType _downloadCompletionBlock;
    NSArray *_assetsToDownloadInMemory;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_assetsToDownload;
    NSArray *_packageIndexSets;
    NSMutableArray *_MMCSItemsToDownload;
    NSMutableArray *_MMCSItemsToDownloadInMemory;
    NSMapTable *_downloadTasksByPackages;
    CKDCancelTokenGroup *_cancelTokens;
    unsigned long long _maxPackageDownloadsPerBatch;
}

@property(nonatomic) _Bool shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property(nonatomic) unsigned long long maxPackageDownloadsPerBatch; // @synthesize maxPackageDownloadsPerBatch=_maxPackageDownloadsPerBatch;
@property(retain, nonatomic) CKDCancelTokenGroup *cancelTokens; // @synthesize cancelTokens=_cancelTokens;
@property(retain, nonatomic) NSMapTable *downloadTasksByPackages; // @synthesize downloadTasksByPackages=_downloadTasksByPackages;
@property(retain, nonatomic) NSMutableArray *MMCSItemsToDownloadInMemory; // @synthesize MMCSItemsToDownloadInMemory=_MMCSItemsToDownloadInMemory;
@property(retain, nonatomic) NSMutableArray *MMCSItemsToDownload; // @synthesize MMCSItemsToDownload=_MMCSItemsToDownload;
@property(retain, nonatomic) NSArray *packageIndexSets; // @synthesize packageIndexSets=_packageIndexSets;
@property(retain, nonatomic) NSArray *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSArray *assetsToDownloadInMemory; // @synthesize assetsToDownloadInMemory=_assetsToDownloadInMemory;
@property(copy, nonatomic) CDUnknownBlockType downloadCompletionBlock; // @synthesize downloadCompletionBlock=_downloadCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadCommandBlock; // @synthesize downloadCommandBlock=_downloadCommandBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadProgressBlock; // @synthesize downloadProgressBlock=_downloadProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadPreparationBlock; // @synthesize downloadPreparationBlock=_downloadPreparationBlock;
- (void).cxx_destruct;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)cancel;
- (void)_downloadMMCSItems:(id)arg1 downloadTasksByPackages:(id)arg2 shouldFetchAssetContentInMemory:(_Bool)arg3;
- (_Bool)_download;
- (void)_downloadPackageSectionsWithPendingTasks:(id)arg1 downloadingTasks:(id)arg2 completedTasks:(id)arg3;
- (void)_downloadPackageSectionsWithTask:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_downloadPackageSectionsWithSectionEnumerator:(id)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_downloadPackageSectionAtIndex:(long long)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_didMakeProgressForMMCSSectionItem:(id)arg1 task:(id)arg2;
- (void)_didDownloadMMCSSectionItems:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_didDownloadMMCSSectionItem:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_didCommandForMMCSItem:(id)arg1 command:(id)arg2;
- (void)_didMakeProgressForMMCSItem:(id)arg1 inMemory:(_Bool)arg2;
- (void)_didDownloadMMCSItems:(id)arg1 inMemory:(_Bool)arg2 error:(id)arg3;
- (void)_collectMetricsFromCompletedItemGroupSet:(id)arg1;
- (void)_collectMetricsFromCompletedItemGroup:(id)arg1;
- (void)_collectMetricsFromMMCSOperationMetrics:(id)arg1;
- (void)_didDownloadMMCSItem:(id)arg1 inMemory:(_Bool)arg2 error:(id)arg3;
- (_Bool)_prepareForDownload;
- (void)_didDownloadAsset:(id)arg1 error:(id)arg2;
- (void)_didCommandForAsset:(id)arg1 command:(id)arg2;
- (void)_didMakeProgressForAsset:(id)arg1 progress:(double)arg2;
- (void)_didPrepareAsset:(id)arg1;
- (void)_removeUntrackedMMCSItems:(id)arg1;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)CKStatusReportLogGroups;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

