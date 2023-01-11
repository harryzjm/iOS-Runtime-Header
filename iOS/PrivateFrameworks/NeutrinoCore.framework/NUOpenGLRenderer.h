//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NUGLContext;

@interface NUOpenGLRenderer
{
    NSString *_rendererString;
    NSString *_versionString;
    NUGLContext *_glContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NUGLContext *glContext; // @synthesize glContext=_glContext;
- (id)_textureForSurface:(id)arg1 owner:(id)arg2;
- (id)renderDestinationForSurface:(id)arg1 owner:(id)arg2;
- (id)imageForSurface:(id)arg1 options:(id)arg2 owner:(id)arg3;
- (void)_renderImage:(id)arg1 toTexture:(id)arg2 bounds:(CDStruct_996ac03c)arg3 withColorSpace:(id)arg4;
- (id)name;
- (id)initWithGLContext:(id)arg1 options:(id)arg2;
- (id)initWithCIContext:(id)arg1 priority:(long long)arg2;

@end
