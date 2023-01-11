//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KeynoteQuicklook/KNAnimationPluginContext-Protocol.h>

@class KNAnimatedBuild, KNAnimationRandomGenerator, NSArray, NSDictionary, NSString, TSDAnimationSet, TSDGLState, TSDMetalContext, TSDMetalTextureRenderer, TSDRep;

@interface KNAnimationPluginContext : NSObject <KNAnimationPluginContext>
{
    _Bool _isSceneRenderingEnabled;
    _Bool _isMotionBlurred;
    _Bool _isPreview;
    _Bool _isMovieExport;
    _Bool _isWarmingUp;
    NSArray *_textures;
    TSDMetalTextureRenderer *_metalTextureRenderer;
    TSDAnimationSet *_animationSet;
    NSArray *_scaledTextures;
    NSArray *_tags;
    unsigned long long _direction;
    double _duration;
    double _percent;
    KNAnimatedBuild *_animatedBuild;
    NSDictionary *_transitionAttributes;
    NSArray *_magicMoveMatches;
    TSDGLState *_GLState;
    TSDMetalContext *_metalContext;
    TSDRep *_rep;
    long long _rendererType;
    KNAnimationRandomGenerator *_randomGenerator;
    struct CGRect _boundingRectOnCanvas;
    struct CGRect _boundingRect;
    struct CGRect _drawableFrame;
    struct CGRect _animationFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KNAnimationRandomGenerator *randomGenerator; // @synthesize randomGenerator=_randomGenerator;
@property(nonatomic) long long rendererType; // @synthesize rendererType=_rendererType;
@property(nonatomic) __weak TSDRep *rep; // @synthesize rep=_rep;
@property(nonatomic) _Bool isWarmingUp; // @synthesize isWarmingUp=_isWarmingUp;
@property(nonatomic) struct CGRect animationFrame; // @synthesize animationFrame=_animationFrame;
@property(nonatomic) struct CGRect drawableFrame; // @synthesize drawableFrame=_drawableFrame;
@property(retain, nonatomic) TSDMetalContext *metalContext; // @synthesize metalContext=_metalContext;
@property(retain, nonatomic) TSDGLState *GLState; // @synthesize GLState=_GLState;
@property(nonatomic) _Bool isMovieExport; // @synthesize isMovieExport=_isMovieExport;
@property(nonatomic) _Bool isPreview; // @synthesize isPreview=_isPreview;
@property(nonatomic) __weak NSArray *magicMoveMatches; // @synthesize magicMoveMatches=_magicMoveMatches;
@property(nonatomic) __weak NSDictionary *transitionAttributes; // @synthesize transitionAttributes=_transitionAttributes;
@property(nonatomic) __weak KNAnimatedBuild *animatedBuild; // @synthesize animatedBuild=_animatedBuild;
@property(nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(nonatomic) struct CGRect boundingRectOnCanvas; // @synthesize boundingRectOnCanvas=_boundingRectOnCanvas;
@property(nonatomic) _Bool isMotionBlurred; // @synthesize isMotionBlurred=_isMotionBlurred;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSArray *scaledTextures; // @synthesize scaledTextures=_scaledTextures;
@property(retain, nonatomic) TSDAnimationSet *animationSet; // @synthesize animationSet=_animationSet;
@property(retain, nonatomic) TSDMetalTextureRenderer *metalTextureRenderer; // @synthesize metalTextureRenderer=_metalTextureRenderer;
@property(retain, nonatomic) NSArray *textures; // @synthesize textures=_textures;
@property(nonatomic) _Bool isSceneRenderingEnabled; // @synthesize isSceneRenderingEnabled=_isSceneRenderingEnabled;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool willRenderWithLiveTextureSources;
@property(readonly, nonatomic) _Bool isMetalRenderer;
@property(readonly, nonatomic) _Bool isOpenGLRenderer;
@property(readonly, nonatomic) _Bool isFrameRenderer;
@property(readonly, nonatomic) _Bool isMagicMove;
@property(readonly, nonatomic) _Bool isTransition;
@property(readonly, nonatomic) _Bool isBuild;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
