//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIRenderTask, NUImageAccumulationNode, NUPurgeableImageAccessGuard, NUPurgeableStoragePool, NURegion;
@protocol NUPurgeableImage, NUPurgeableStorage;

@interface NUImageRenderJob
{
    NUPurgeableImageAccessGuard *_accessRegionGuard;
    NUPurgeableStoragePool *_storagePool;
    id <NUPurgeableStorage> _renderDestination;
    int _renderer;
    NURegion *_regionToRender;
    NURegion *_renderedRegion;
    id <NUPurgeableImage> _renderedImage;
    CIRenderTask *_renderTask;
}

@property(retain, nonatomic) CIRenderTask *renderTask; // @synthesize renderTask=_renderTask;
@property(readonly, nonatomic) id <NUPurgeableImage> renderedImage; // @synthesize renderedImage=_renderedImage;
@property(readonly, nonatomic) NURegion *renderedRegion; // @synthesize renderedRegion=_renderedRegion;
@property(readonly, nonatomic) NURegion *regionToRender; // @synthesize regionToRender=_regionToRender;
- (void).cxx_destruct;
- (void)cleanUp;
- (_Bool)copyStorage:(id)arg1 region:(id)arg2 toImage:(id)arg3 atPoint:(CDStruct_912cb5d2)arg4;
- (_Bool)complete:(out id *)arg1;
- (_Bool)render:(out id *)arg1;
@property(readonly, nonatomic) NUImageAccumulationNode *imageAccumulationNode;
- (_Bool)prepare:(out id *)arg1;
- (_Bool)wantsOutputImage;
- (_Bool)wantsOutputGeometry;
- (id)extentPolicy;
- (id)scalePolicy;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (id)imageRequest;
- (id)imageAccumulationNodeWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2 colorSpace:(id)arg3;
- (id)initWithRequest:(id)arg1;
- (id)initWithImageRequest:(id)arg1;

@end
