//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetEditOperationPerformer.h>

#import <PhotosUI/PUPhotoEditResourceLoaderDelegate-Protocol.h>

@class NSString, PHAsset, PUPhotoEditResourceLoadResult, PUPhotoEditResourceLoader, PUPhotoKitPhotoEditMediaDestination;

__attribute__((visibility("hidden")))
@interface PULivePhotoVariationEditOperationPerformer : PXAssetEditOperationPerformer <PUPhotoEditResourceLoaderDelegate>
{
    CDUnknownBlockType _completionHandler;
    _Bool _didSave;
    PUPhotoEditResourceLoader *_resourceLoader;
    PUPhotoEditResourceLoadResult *_loadResult;
    PUPhotoKitPhotoEditMediaDestination *_mediaDestination;
}

- (void).cxx_destruct;
- (void)photoEditResourceLoadRequest:(id)arg1 mediaLoadDidFailWithError:(id)arg2;
- (void)photoEditResourceLoadRequest:(id)arg1 didCompleteWithResult:(id)arg2;
- (void)_handleDidFinishSavingEditsForAsset:(id)arg1 error:(id)arg2;
- (void)_handleAnalysisResult:(id)arg1;
- (void)_handleAnalysisCalculatorResponse:(id)arg1;
- (void)_calculateAnalysisResult;
- (void)_completeWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)performEditOperationWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PHAsset *asset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
