//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXObservable.h>

@class NSError, NSObject, NSString, PUAssetReference, PUAssetsDataSource, PUCompositeVideoGenerator, PUMergedLivePhotosVideo;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUMergedLivePhotosVideoRequest : PXObservable
{
    unsigned long long _requestLogID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    PUCompositeVideoGenerator *_workQueue_generator;
    long long _stateQueue_state;
    PUMergedLivePhotosVideo *_stateQueue_mergedVideo;
    NSError *_stateQueue_error;
    PUAssetReference *_assetReference;
    PUAssetsDataSource *_assetsDataSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PUAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
@property(readonly, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
- (id)init;
- (void)_stateQueue_signalStateChange;
- (void)_workQueue_finishWithMergedVideo:(id)arg1 error:(id)arg2;
- (void)_workQueue_handleGeneratorDidChangeState;
- (void)_workQueue_generateVideoUsingAssets:(id)arg1;
- (id)_workQueue_fetchMergeableAssets;
- (void)_workQueue_start;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mutableChangeObject;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) PUMergedLivePhotosVideo *mergedVideo;
@property(readonly, nonatomic) long long state;
- (void)cancel;
- (void)start;
- (id)initWithAssetReference:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

