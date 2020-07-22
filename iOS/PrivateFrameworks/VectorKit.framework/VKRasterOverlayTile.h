//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKRasterOverlayTile
{
    struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem>> _renderItem;
    struct unique_ptr<ggl::Textured::Pos2DUVPipelineSetup, std::__1::default_delete<ggl::Textured::Pos2DUVPipelineSetup>> _pipelineSetup;
    struct shared_ptr<md::RasterOverlayData> _overlayData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct Texture2D *gglTexture;
- (struct RenderItem *)setupRenderItemWithRenderState:(struct RenderState *)arg1 pipelineState:(const shared_ptr_74b38e53 *)arg2 mesh:(struct Mesh *)arg3;
- (struct CGContext *)drawContext;
- (_Bool)isEmpty;
@property(readonly, nonatomic) struct RenderItem *renderItem;
- (id)initWithKey:(const struct VKTileKey *)arg1 size:(unsigned long long)arg2 scale:(float)arg3;

@end

