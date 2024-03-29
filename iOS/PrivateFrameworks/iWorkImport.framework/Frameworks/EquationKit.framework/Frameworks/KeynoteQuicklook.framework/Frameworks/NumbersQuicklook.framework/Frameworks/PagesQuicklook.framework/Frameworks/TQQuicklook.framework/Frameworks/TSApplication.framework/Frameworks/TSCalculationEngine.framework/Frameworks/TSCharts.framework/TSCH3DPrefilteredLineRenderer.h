//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCH3DOrderedDictionary, TSCH3DSceneRenderPipeline;

@interface TSCH3DPrefilteredLineRenderer : NSObject
{
    tmat4x4_3074befe _modelMatrix;
    tmat3x3_b39cd897 _normalMatrix;
    tmat4x4_3074befe _projection;
    tmat4x4_3074befe _normalizedProjection;
    box_ce64ce81 _viewport;
    TSCH3DOrderedDictionary *_cacheObjects;
    TSCH3DSceneRenderPipeline *_pipeline;
}

+ (id)renderer;
+ (id)renderCacheKey;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) TSCH3DSceneRenderPipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(readonly, nonatomic) box_ce64ce81 viewport; // @synthesize viewport=_viewport;
@property(readonly, nonatomic) tmat4x4_3074befe normalizedProjection; // @synthesize normalizedProjection=_normalizedProjection;
@property(readonly, nonatomic) tmat4x4_3074befe projection; // @synthesize projection=_projection;
@property(readonly, nonatomic) tmat3x3_b39cd897 normalMatrix; // @synthesize normalMatrix=_normalMatrix;
@property(readonly, nonatomic) tmat4x4_3074befe modelMatrix; // @synthesize modelMatrix=_modelMatrix;
- (void)renderLineBufferWithSetting:(id)arg1 vertices:(id)arg2 normals:(id)arg3 diffuseTexcoords:(id)arg4;
- (void)renderWithSetting:(id)arg1 fromVertex:(const void *)arg2 toVertex:(const void *)arg3;
- (_Bool)p_shouldRenderWithSetting:(id)arg1 returningCacheObject:(id *)arg2;
- (void)endWithDidGenerateShaderEffectsBlock:(CDUnknownBlockType)arg1;
- (void)p_setupShaderEffectsForSetting:(id)arg1;
- (_Bool)beginWithPipeline:(id)arg1;
- (id)p_renderCacheIDFromSetting:(id)arg1;
- (id)p_renderCacheKey;
- (void)dealloc;
- (id)init;

@end

