//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCNMTLResourceManager;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLTessellator : NSObject
{
    struct __C3DGeometry *_geometry;
    SCNMTLResourceManager *_resourceManager;
    CDStruct_9b587744 _cachedTessellator;
    id <MTLBuffer> _tessellationFactorBuffer;
    id <MTLBuffer> _lastFramePositionBuffer;
}

- (void)subdivisionSurfaceTessellationDraw:(CDStruct_8a6a5118)arg1;
- (void)updateSubdivisionSurfaceTessellator:(CDStruct_9b587744)arg1 parameters:(CDStruct_0b08fa6a)arg2;
- (void)constrainedEdgeLengthTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderContext:(id)arg4;
- (void)updateConstrainedEdgeLengthTessellator:(CDStruct_9b587744)arg1 parameters:(CDStruct_0b08fa6a)arg2;
- (void)screenSpaceAdaptiveTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderContext:(id)arg4;
- (void)updateScreenSpaceAdaptiveTessellator:(CDStruct_9b587744)arg1 parameters:(CDStruct_0b08fa6a)arg2;
- (void)uniformTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderContext:(id)arg4;
- (void)updateUniformTessellator:(CDStruct_9b587744)arg1;
- (void)draw:(CDStruct_8a6a5118)arg1;
- (void)update:(CDStruct_0b08fa6a)arg1;
- (CDUnknownBlockType)newPipelineStateConfiguratorForMeshElement:(id)arg1 patchType:(unsigned char)arg2 device:(id)arg3;
- (unsigned char)pipelineStateHashForMeshElement:(id)arg1 patchType:(unsigned char)arg2;
- (CDStruct_9fd556a9)_pipelineStateHashForMeshElement:(id)arg1 patchType:(unsigned char)arg2;
- (void)dealloc;
- (id)initWithGeometry:(struct __C3DGeometry *)arg1 resourceManager:(id)arg2;

@end

