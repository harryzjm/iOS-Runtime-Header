//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKScene;

__attribute__((visibility("hidden")))
@interface SCNTextureSpriteKitSource
{
    SKScene *_scene;
    double _lastUpdate;
}

@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (double)__updateTextureWithSKScene:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 sampler:(struct __C3DTextureSampler *)arg3;
- (void)__renderSKScene:(id)arg1 withSKSCNRenderer:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 viewport:(double)arg4 atTime: /* Error: Ran out of types for this method. */;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (void)dealloc;

@end

