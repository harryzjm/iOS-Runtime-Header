//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SCNTextureUIKitSource
{
    _Bool _setup;
    _Bool _windowReady;
    id _source;
    id _uiWindow;
    id _uiView;
    struct CGSize _sizeCache;
    unsigned int _textureID;
    struct __C3DEngineContext *_engineContext;
    struct __C3DTextureSampler *_textureSampler;
}

@property(retain, nonatomic) id source; // @synthesize source=_source;
@property(retain, nonatomic) id uiView; // @synthesize uiView=_uiView;
@property(retain, nonatomic) id uiWindow; // @synthesize uiWindow=_uiWindow;
- (void)_layerTreeDidUpdate;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (struct CGSize)layerSizeInPixels;
- (double)layerContentsScaleFactor;
- (id)layer;
- (float)clearValue;
- (id)layerToFocusForRenderedLayer:(id)arg1;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (void)setup;
- (void)dealloc;

@end
