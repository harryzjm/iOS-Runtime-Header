//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetEditOperationPerformer.h>

@class NSString, PEPhotoKitMediaDestination, PHAsset;

__attribute__((visibility("hidden")))
@interface PULivePhotoVariationEditOperationPerformer : PXAssetEditOperationPerformer
{
    CDUnknownBlockType _completionHandler;
    _Bool _didSave;
    PEPhotoKitMediaDestination *_mediaDestination;
    NSString *_sourceEditOperationType;
}

+ (id)_sharedResourceManager;
- (void).cxx_destruct;
- (void)_resourceLoadedWithResult:(id)arg1 editOperationType:(id)arg2;
- (void)_handleDidFinishSavingEditsForAsset:(id)arg1 error:(id)arg2;
- (void)_handleLoadResult:(id)arg1 analysisResult:(id)arg2 editOperationType:(id)arg3;
- (void)_saveAssetEditsWithContentEditingInput:(id)arg1 compositionController:(id)arg2 imageVersion:(long long)arg3 editOperationType:(id)arg4;
- (void)_completeWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_performEditOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performUndo:(CDUnknownBlockType)arg1;
- (void)performAction:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PHAsset *asset;

@end

