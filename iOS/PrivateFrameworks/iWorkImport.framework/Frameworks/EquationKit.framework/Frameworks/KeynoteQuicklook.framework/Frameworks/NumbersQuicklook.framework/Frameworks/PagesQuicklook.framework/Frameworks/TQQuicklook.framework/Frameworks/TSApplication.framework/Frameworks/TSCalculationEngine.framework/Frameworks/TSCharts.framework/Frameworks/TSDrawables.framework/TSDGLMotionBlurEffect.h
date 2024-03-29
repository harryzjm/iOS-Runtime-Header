//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSDGLFrameBuffer, TSDGLShader, TSDGLState;
@protocol TSDAnimationRandomGenerator, TSDGLDataBuffer;

@interface TSDGLMotionBlurEffect : NSObject
{
    struct CGSize _framebufferSize;
    struct CGSize _slideSize;
    TSDGLFrameBuffer *_combinedFramebuffer;
    TSDGLShader *_velocityVisualizerShader;
    TSDGLShader *_velocityCollectionShader;
    TSDGLFrameBuffer *_velocityFramebuffer;
    TSDGLShader *_defaultTextureShader;
    TSDGLFrameBuffer *_colorFramebuffer;
    id <TSDGLDataBuffer> _colorFBODataBuffer;
    id <TSDGLDataBuffer> _velocityFBODataBuffer;
    id <TSDGLDataBuffer> _velocitySquashedFBODataBuffer;
    id <TSDGLDataBuffer> _FBODataBuffer;
    TSDGLShader *_velocityTileMaxVerticalShader;
    TSDGLShader *_velocityTileMaxHorizontalShader;
    TSDGLShader *_velocityNeighborMaxHorizontalShader;
    TSDGLShader *_velocityNeighborMaxVerticalShader;
    int _originalViewport[4];
    id <TSDAnimationRandomGenerator> _randomGenerator;
    _Bool _isSingleObject;
    double _motionBlurStrength;
    long long _debugDrawMode;
    double _framebufferScale;
    TSDGLState *_GLState;
}

@property(retain, nonatomic) TSDGLState *GLState; // @synthesize GLState=_GLState;
@property(nonatomic) double framebufferScale; // @synthesize framebufferScale=_framebufferScale;
@property(nonatomic) long long debugDrawMode; // @synthesize debugDrawMode=_debugDrawMode;
@property(nonatomic) double motionBlurStrength; // @synthesize motionBlurStrength=_motionBlurStrength;
@property(nonatomic) _Bool isSingleObject; // @synthesize isSingleObject=_isSingleObject;
- (void)p_setupVelocityFramebufferIfNecessary;
- (void)p_setupShaders;
- (void)setupMotionBlurEffectIfNecessary;
- (void)p_dilateVelocityBufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_blitIntoVelocityFramebufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_blitIntoColorFramebufferWithCurrentGLFramebuffer:(int)arg1;
- (struct CGSize)p_squashedVelocityFramebufferSize;
- (struct CGSize)p_velocityFramebufferTextureScale;
- (struct CGSize)p_velocityFramebufferSize;
- (void)drawResultWithCurrentGLFramebuffer:(int)arg1;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)bindVelocityFramebuffer;
- (void)bindColorFramebuffer;
- (void)bindColorAndVelocityFramebuffer;
- (void)p_updateMaxVelocityInShadersWithScale:(double)arg1 isColorFBO:(_Bool)arg2;
- (void)updateVelocityScaleInShader:(id)arg1;
- (struct CGSize)velocityScaleForColorFBO:(_Bool)arg1;
- (id)description;
- (void)teardown;
- (void)dealloc;
- (id)initWithFramebufferSize:(struct CGSize)arg1 slideSize:(struct CGSize)arg2 randomGenerator:(id)arg3;

@end

