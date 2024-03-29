//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, MTLDebugInstrumentationData, MTLMeshRenderPipelineDescriptor, MTLRenderPipelineDescriptor, MTLRenderPipelineReflection, MTLTileRenderPipelineDescriptor, NSMapTable, NSString;
@protocol MTLDevice, MTLRenderPipelineState, MTLRenderPipelineStateSPI;

@interface CaptureMTLRenderPipelineState : NSObject
{
    id <MTLRenderPipelineStateSPI> _baseObject;
    CaptureMTLDevice *_captureDevice;
    CaptureMTLRenderPipelineState *_capturePipelineState;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
    NSMapTable *_functionHandleMap;
    MTLRenderPipelineDescriptor *_descriptor;
    MTLRenderPipelineReflection *_reflection;
    MTLTileRenderPipelineDescriptor *_tileDescriptor;
    MTLMeshRenderPipelineDescriptor *_meshDescriptor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) MTLMeshRenderPipelineDescriptor *meshDescriptor; // @synthesize meshDescriptor=_meshDescriptor;
@property(copy, nonatomic) MTLTileRenderPipelineDescriptor *tileDescriptor; // @synthesize tileDescriptor=_tileDescriptor;
@property(retain, nonatomic) MTLRenderPipelineReflection *reflection; // @synthesize reflection=_reflection;
@property(copy, nonatomic) MTLRenderPipelineDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (id)objectFunctionHandleWithFunction:(id)arg1;
- (id)newVertexShaderDebugInfo;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id *)arg2;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 fragmentAdditionalBinaryFunctions:(id)arg2 error:(id *)arg3;
- (id)newFragmentShaderDebugInfo;
- (id)meshFunctionHandleWithFunction:(id)arg1;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;
- (void)dealloc;
@property(readonly) unsigned long long uniqueIdentifier;
@property(readonly) _Bool threadgroupSizeMatchesTileSize;
@property(readonly) long long textureWriteRoundingMode;
@property(readonly) _Bool supportIndirectCommandBuffers;
@property(readonly, nonatomic) unsigned long long resourceIndex;
@property(readonly) unsigned long long objectThreadExecutionWidth;
@property(readonly) unsigned long long meshThreadExecutionWidth;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property(readonly) unsigned long long maxTotalThreadsPerObjectThreadgroup;
@property(readonly) unsigned long long maxTotalThreadsPerMeshThreadgroup;
@property(readonly) unsigned long long maxTotalThreadgroupsPerMeshGrid;
@property(readonly) NSString *label;
@property(readonly) unsigned long long imageblockSampleLength;
@property(readonly) struct MTLResourceID gpuResourceID;
@property(readonly) unsigned long long gpuHandle;
@property(readonly, nonatomic) unsigned long long gpuAddress;
@property(readonly, nonatomic) unsigned int explicitVisibilityGroupID;
@property(readonly) id <MTLDevice> device;
@property(readonly, nonatomic) unsigned long long allocatedSize;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;
- (id)originalObject;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id *)arg2;
- (id)functionHandleWithFunction:(id)arg1 stage:(unsigned long long)arg2;
- (id)fragmentFunctionHandleWithFunction:(id)arg1;
- (id)vertexFunctionHandleWithFunction:(id)arg1;
- (id)tileFunctionHandleWithFunction:(id)arg1;
- (id)newObjectIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newMeshIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1 stage:(unsigned long long)arg2;
- (id)newVisibleFunctionTableFromObjectStageWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableFromMeshStageWithDescriptor:(id)arg1;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1 stage:(unsigned long long)arg2;
- (id)newTileIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newFragmentIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newVertexIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)arg1;
- (_Bool)newFunctionHandle:(out id *)arg1 associatedWithBaseFunctionHandle:(id)arg2 captureFunction:(id)arg3;
- (id)functionHandleMap;
@property(readonly) id <MTLRenderPipelineState> baseObject;
- (void)swapObject:(id)arg1;
- (id)initWithBaseObject:(id)arg1 capturePipelineState:(id)arg2;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *meshDebugInstrumentationData;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *objectDebugInstrumentationData;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *tileDebugInstrumentationData;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;

@end

