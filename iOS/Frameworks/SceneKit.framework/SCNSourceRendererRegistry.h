//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNSourceRendererRegistry : NSObject
{
    struct __CFDictionary *_registry;
}

+ (id)sharedRegistry;
- (void)removeSourceRenderersForSource:(id)arg1;
- (void)endFrameForEngineContext:(struct __C3DEngineContext *)arg1;
- (void)removeSourceRenderersForEngineContext:(struct __C3DEngineContext *)arg1;
- (id)sourceRendererForEngineContext:(struct __C3DEngineContext *)arg1 source:(id)arg2 textureSource:(id)arg3 targetTexture:(id)arg4;
- (void)rendererDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

