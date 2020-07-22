//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIContext, TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader;

__attribute__((visibility("hidden")))
@interface TSDGLCurvedShadow
{
    TSDGLFrameBuffer *mAlphaFrameBuffer;
    TSDGLDataBuffer *mAlphaDataBuffer;
    TSDGLShader *mAlphaShader;
    TSDGLShader *mCurvedShader;
    TSDGLFrameBuffer *mCurveInterpolationFrameBuffer;
    TSDGLDataBuffer *mCurveInterpolationDataBuffer;
    TSDGLShader *mCurveInterpolationShader;
    char *mBuffer;
    CIContext *mCIContext;
}

- (id)p_blurredImage:(id)arg1 edgeBlurRadius:(double)arg2 middleBlurRadius:(double)arg3 padding:(double)arg4 edgeOpacity:(double)arg5 middleOpacity:(double)arg6;
- (id)p_curvedImageFromImage:(id)arg1 curveAmount:(double)arg2 padding:(double)arg3;
- (id)p_gradientImageWithExtent:(struct CGRect)arg1 middleWhiteValue:(double)arg2 edgeWhiteValue:(double)arg3 includeAlpha:(_Bool)arg4 padding:(double)arg5;
- (id)p_alphaOnlyImageFromImage:(id)arg1;
- (id)p_debugColorOverlayImageFromImage:(id)arg1;
- (id)p_tintedCIImageFromImage:(id)arg1 withColor:(CDStruct_818bb265)arg2;
- (id)p_imageByMultiplyingImage:(id)arg1 withImage:(id)arg2;
- (_Bool)p_shrinkImageIfNecessary:(struct CGImage *)arg1 originalSize:(struct CGSize)arg2 newImage:(struct CGImage **)arg3 newSize:(struct CGSize *)arg4;
- (void)p_setupCIContext;
- (void)drawShadow:(id)arg1 forImage:(struct CGImage *)arg2 inContext:(struct CGContext *)arg3 forSize:(struct CGSize)arg4;
- (void)p_debugLogImage:(id)arg1 name:(id)arg2;
- (double)baseBlurRadiusForCurve:(double)arg1 framebufferSize:(struct CGSize)arg2;
- (void)dealloc;

@end

