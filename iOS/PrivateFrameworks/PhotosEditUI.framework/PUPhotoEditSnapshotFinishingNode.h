//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXRunNode.h>

@class PUEditableMediaProviderAdjustmentDataNode, PUEditableMediaProviderImageDataNode, PUEditableMediaProviderVideoAssetNode, PUPhotoEditBaseMediaNode;

@interface PUPhotoEditSnapshotFinishingNode : PXRunNode
{
    PUEditableMediaProviderAdjustmentDataNode *_adjustmentNode;
    PUPhotoEditBaseMediaNode *_baseMediaNode;
    PUEditableMediaProviderImageDataNode *_currentImageNode;
    PUEditableMediaProviderVideoAssetNode *_currentVideoNode;
    CDUnknownBlockType _completionHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) PUEditableMediaProviderVideoAssetNode *currentVideoNode; // @synthesize currentVideoNode=_currentVideoNode;
@property(readonly, nonatomic) PUEditableMediaProviderImageDataNode *currentImageNode; // @synthesize currentImageNode=_currentImageNode;
@property(readonly, nonatomic) PUPhotoEditBaseMediaNode *baseMediaNode; // @synthesize baseMediaNode=_baseMediaNode;
@property(readonly, nonatomic) PUEditableMediaProviderAdjustmentDataNode *adjustmentNode; // @synthesize adjustmentNode=_adjustmentNode;
- (void).cxx_destruct;
- (void)run;
- (id)initWithAdjustmentNode:(id)arg1 baseMediaNode:(id)arg2 currentImageNode:(id)arg3 currentVideoNode:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

