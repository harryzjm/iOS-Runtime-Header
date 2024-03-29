//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNTextureSource.h"

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface SCNTextureOffscreenRenderingSource : SCNTextureSource
{
    _Bool _usesIOSurface;
    struct CGSize _framebufferSize;
    struct __C3DFramebuffer *_framebuffer;
}

- (void)_unbindFramebuffer:(struct __C3DEngineContext *)arg1;
- (void)_bindFramebuffer:(struct __C3DEngineContext *)arg1;
- (void)_buildMipmaps:(struct __C3DEngineContext *)arg1;
- (struct __C3DTexture *)__prepareFramebufferWithSize:(struct CGSize)arg1 withEngineContext:(struct __C3DEngineContext *)arg2 textureSampler:(struct __C3DTextureSampler *)arg3 needsStencil:(_Bool)arg4;
- (void)_createFramebufferWithEngineContext:(struct __C3DEngineContext *)arg1 size:(struct CGSize)arg2;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (MISSING_TYPE *)textureSize;

@end

