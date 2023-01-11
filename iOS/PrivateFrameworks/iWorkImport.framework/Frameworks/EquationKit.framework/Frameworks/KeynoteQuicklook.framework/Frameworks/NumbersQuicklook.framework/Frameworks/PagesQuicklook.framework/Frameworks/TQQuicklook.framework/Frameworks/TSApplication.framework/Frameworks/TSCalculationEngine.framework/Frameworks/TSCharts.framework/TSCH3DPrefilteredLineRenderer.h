//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCH3DOrderedDictionary, TSCH3DSceneRenderPipeline;

@interface TSCH3DPrefilteredLineRenderer : NSObject
{
    tmat4x4_3074befe mModelMatrix;
    tmat3x3_b39cd897 mNormalMatrix;
    tmat4x4_3074befe mProjection;
    tmat4x4_3074befe mNormalizedProjection;
    box_0260e9b3 mViewport;
    TSCH3DOrderedDictionary *mCacheObjects;
    TSCH3DSceneRenderPipeline *mPipeline;
}

+ (id)renderer;
+ (id)renderCacheKey;
- (id).cxx_construct;
@property(readonly, nonatomic) TSCH3DSceneRenderPipeline *pipeline; // @synthesize pipeline=mPipeline;
@property(readonly, nonatomic) box_0260e9b3 viewport; // @synthesize viewport=mViewport;
@property(readonly, nonatomic) tmat4x4_3074befe normalizedProjection; // @synthesize normalizedProjection=mNormalizedProjection;
@property(readonly, nonatomic) tmat4x4_3074befe projection; // @synthesize projection=mProjection;
@property(readonly, nonatomic) tmat3x3_b39cd897 normalMatrix; // @synthesize normalMatrix=mNormalMatrix;
@property(readonly, nonatomic) tmat4x4_3074befe modelMatrix; // @synthesize modelMatrix=mModelMatrix;
- (void)renderLineBufferWithSetting:(id)arg1 vertices:(id)arg2 normals:(id)arg3 diffuseTexcoords:(id)arg4;
- (void)renderWithSetting:(id)arg1 fromVertex:(const struct PrefilteredLineVertexProperties *)arg2 toVertex:(const struct PrefilteredLineVertexProperties *)arg3;
- (_Bool)p_shouldRenderWithSetting:(id)arg1 returningCacheObject:(id *)arg2;
- (void)endWithDidGenerateShaderEffectsBlock:(CDUnknownBlockType)arg1;
- (void)p_setupShaderEffectsForSetting:(id)arg1;
- (_Bool)beginWithPipeline:(id)arg1;
- (id)p_renderCacheIDFromSetting:(id)arg1;
- (id)p_renderCacheKey;
- (void)dealloc;
- (id)init;

@end
