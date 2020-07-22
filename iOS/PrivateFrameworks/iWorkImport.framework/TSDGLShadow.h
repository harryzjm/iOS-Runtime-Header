//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDGLShadow : NSObject
{
}

+ (id)sharedContext;
- (void)createOffscreenRenderBuffer:(struct CGSize)arg1 framebuffer:(id)arg2 requiresDepth:(_Bool)arg3 colorRenderBuffer:(unsigned int *)arg4 depthRenderBuffer:(unsigned int *)arg5;
- (struct CGImage *)newCGImageFromGLBuffer:(char **)arg1;
- (void)setupGLTextureParameters;

@end

