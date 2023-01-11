//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KeynoteQuicklook/NSObject-Protocol.h>

@class KNAnimatedBuild, KNAnimationRandomGenerator, NSArray, NSDictionary, TSDAnimationSet, TSDGLState, TSDMetalContext, TSDMetalTextureRenderer;

@protocol KNAnimationPluginContext <NSObject>
@property(readonly, nonatomic) _Bool isWarmingUp;
@property(readonly, nonatomic) TSDGLState *GLState;
@property(readonly, nonatomic) _Bool willRenderWithLiveTextureSources;
@property(readonly, nonatomic) _Bool isMovieExport;
@property(readonly, nonatomic) _Bool isPreview;
@property(readonly, nonatomic) _Bool isSceneRenderingEnabled;
@property(readonly, nonatomic) _Bool isMetalRenderer;
@property(readonly, nonatomic) _Bool isOpenGLRenderer;
@property(readonly, nonatomic) _Bool isFrameRenderer;
@property(readonly, nonatomic) _Bool isMagicMove;
@property(readonly, nonatomic) _Bool isTransition;
@property(readonly, nonatomic) _Bool isBuild;
@property(readonly, nonatomic) NSArray *magicMoveMatches;
@property(readonly, nonatomic) NSDictionary *transitionAttributes;
@property(readonly, nonatomic) KNAnimatedBuild *animatedBuild;
@property(nonatomic) struct CGRect boundingRect;
@property(readonly, nonatomic) struct CGRect boundingRectOnCanvas;
@property(readonly, nonatomic) struct CGRect animationFrame;
@property(readonly, nonatomic) struct CGRect drawableFrame;
@property(readonly, nonatomic) TSDMetalContext *metalContext;
@property(readonly, nonatomic) KNAnimationRandomGenerator *randomGenerator;
@property(readonly, nonatomic) _Bool isMotionBlurred;
@property(readonly, nonatomic) double percent;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned long long direction;
@property(readonly, nonatomic) NSArray *tags;
@property(readonly, nonatomic) NSArray *scaledTextures;
@property(readonly, nonatomic) TSDAnimationSet *animationSet;
@property(readonly, nonatomic) TSDMetalTextureRenderer *metalTextureRenderer;
@property(readonly, nonatomic) NSArray *textures;
@end
