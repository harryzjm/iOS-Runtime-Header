//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXRunNode.h>

@class PUImageDataRenderNode, PUPhotoEditIrisModel, PUPhotoKitImageDataNode;
@protocol PUVideoURLNode;

@interface PUPhotoKitAdjustmentSaveNode : PXRunNode
{
    _Bool _success;
    PUPhotoKitImageDataNode *_imageDataNode;
    PUImageDataRenderNode *_imageRenderNode;
    id <PUVideoURLNode> _videoNode;
    PUPhotoEditIrisModel *_livePhotoModel;
}

@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, copy, nonatomic) PUPhotoEditIrisModel *livePhotoModel; // @synthesize livePhotoModel=_livePhotoModel;
@property(readonly, nonatomic) id <PUVideoURLNode> videoNode; // @synthesize videoNode=_videoNode;
@property(readonly, nonatomic) PUImageDataRenderNode *imageRenderNode; // @synthesize imageRenderNode=_imageRenderNode;
@property(readonly, nonatomic) PUPhotoKitImageDataNode *imageDataNode; // @synthesize imageDataNode=_imageDataNode;
- (void).cxx_destruct;
- (void)_handleDidCompleteChangeWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)run;
- (id)_exportProperties;
- (long long)_adjustmentBaseVersion;
- (double)_baseDuration;
- (long long)_baseExifOrientation;
- (id)initWithImageDataNode:(id)arg1 imageRenderNode:(id)arg2 videoNode:(id)arg3 livePhotoModel:(id)arg4;

@end

