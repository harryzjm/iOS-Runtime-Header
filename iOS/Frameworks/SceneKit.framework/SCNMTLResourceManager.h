//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTKTextureLoader, NSMutableArray, SCNMTLBufferAllocator, SCNMTLLibraryManager, SCNMTLShadableKey, SCNMTLShaderBindingsGenerator;
@protocol MTLCommandQueue, MTLDepthStencilState, MTLDevice, MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNMTLResourceManager : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    struct __C3DEngineStats *__engineStats;
    SCNMTLLibraryManager *_libraryManager;
    SCNMTLShaderBindingsGenerator *_bindingsGenerator;
    struct __CFDictionary *_availablePipelineStates;
    struct os_unfair_lock_s _availablePipelineStatesLock;
    SCNMTLBufferAllocator *_commonProfileBuffersAllocator;
    CDStruct_670bd187 _availableLightingSystemReflectionProbeTextures;
    CDStruct_670bd187 _availableIrradianceTextures;
    CDStruct_670bd187 _availableRadianceTextures;
    CDStruct_670bd187 _availableImages;
    CDStruct_670bd187 _availableImageProxy;
    CDStruct_670bd187 _availableSamplers;
    CDStruct_670bd187 _availableIESTextures;
    CDStruct_670bd187 _availableBuffers;
    CDStruct_670bd187 _availableMeshes;
    CDStruct_670bd187 _availableMeshSources;
    CDStruct_670bd187 _availableMeshElements;
    CDStruct_670bd187 _availableRasterizerStates;
    CDStruct_670bd187 _availableDeformerStacks;
    CDStruct_670bd187 _availableSkinDeformerReadOnlyBuffers;
    CDStruct_670bd187 _availableMorphDeformerReadOnlyBuffers;
    CDStruct_670bd187 _availableComputePipelines;
    CDStruct_670bd187 _availableComputePipelinesWithStageDescriptor;
    CDStruct_670bd187 _availableColorMatchingComputePipelines;
    CDStruct_670bd187 _availableTessellators;
    CDStruct_670bd187 _availableWireframeMaterials;
    CDStruct_670bd187 _availableOpenSubdivComputeEvaluators;
    CDStruct_670bd187 _availableShadables;
    SCNMTLShadableKey *_availableShadablesSearchKey;
    NSMutableArray *_availableStageDescriptors;
    struct os_unfair_lock_s _stageDescriptorsLock;
    id <MTLTexture> _areaLightPrecomputedDataTexture;
    id <MTLTexture> _specularDFGDiffuseHammonTexture;
    struct __C3DFXMetalProgram *_defaultProgram;
    struct __C3DFXMetalProgram *_defaultProgramForTessellation;
    struct __C3DFXMetalProgram *_isolateProgram;
    id <MTLDepthStencilState> _depthAndStencilStateWithReadWriteDepthDisabled;
    id <MTLTexture> _defaultTexture;
    id <MTLTexture> _defaultTexture3D;
    id <MTLTexture> _defaultCubeTexture;
    id <MTLTexture> _defaultLightingEnvironmentIrradianceTexture;
    id <MTLTexture> _defaultLightingEnvironmentRadianceTexture;
    MTKTextureLoader *_mtkTextureLoader;
}

+ (void)_fillVertexDescriptor:(id)arg1 withSemantic:(BOOL)arg2 inputSet:(long long)arg3 bufferIndex:(long long)arg4 vertexFormat:(unsigned long long)arg5 offset:(unsigned long long)arg6 stride:(unsigned long long)arg7;
+ (void)_fillVertexDescriptor:(id)arg1 withMeshSource:(struct __C3DMeshSource *)arg2 semantic:(BOOL)arg3 inputSet:(long long)arg4 bufferIndex:(long long)arg5;
+ (void)unregisterManagerForDevice:(id)arg1;
- (void)commandBufferDidCompleteWithError:(id)arg1;
- (id)renderResourceForMorpher:(struct __C3DMorpher *)arg1 baseMesh:(struct __C3DMesh *)arg2 dataKind:(unsigned char)arg3 provider:(CDUnknownBlockType)arg4;
- (id)renderResourceForSkinner:(struct __C3DSkinner *)arg1 baseMesh:(struct __C3DMesh *)arg2 dataKind:(unsigned char)arg3 provider:(CDUnknownBlockType)arg4;
- (id)renderResourceForDeformerStack:(struct __C3DDeformerStack *)arg1 node:(struct __C3DNode *)arg2 dataKind:(unsigned char)arg3;
- (void)__updateMutableMesh:(struct __C3DMesh *)arg1 withMetalMesh:(id)arg2;
- (id)_bufferForData:(struct __CFData *)arg1 bytesPerIndex:(unsigned long long)arg2;
- (id)_bufferForMTLBuffer:(void *)arg1;
- (void)_geometryWillDie:(id)arg1;
- (void)_materialWillDie:(id)arg1;
- (void)_passWillDie:(id)arg1;
- (void)_programWillDie:(id)arg1;
- (void)_removeMatchingProgram:(struct __C3DFXMetalProgram *)arg1 pass:(struct __C3DFXPass *)arg2;
- (void)_rasterizerStateDidDie:(const void *)arg1;
- (void)_precomputedLightingEnvironmentWillDie:(id)arg1;
- (void)_imageProxyWillDie:(id)arg1;
- (void)_imageWillDie:(id)arg1;
- (void)_deformerStackDidChange:(id)arg1;
- (void)_deformerStackWillDie:(id)arg1;
- (void)_skinWillDie:(id)arg1;
- (void)_programHashCodeWillDie:(id)arg1;
- (void)_morphWillDie:(id)arg1;
- (void)_meshWillDie:(id)arg1;
- (void)_meshElementWillDie:(id)arg1;
- (void)_meshSourceWillDie:(id)arg1;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)computeEvaluatorWithContext:(struct MTLContext *)arg1 srcDesc:(const struct BufferDescriptor *)arg2 dstDesc:(const struct BufferDescriptor *)arg3 duDesc:(const struct BufferDescriptor *)arg4 dvDesc:(const struct BufferDescriptor *)arg5;
- (void)colorMatchSourceTexture:(id)arg1 sourceColorSpace:(struct CGColorSpace *)arg2 destinationColorSpace:(struct CGColorSpace *)arg3 destinationTexture:(id)arg4 renderContext:(id)arg5;
- (id)iesTextureForProfile:(id)arg1 renderContext:(id)arg2;
- (id)defaultTexture3D;
- (id)defaultCubeTexture;
- (id)defaultTexture;
- (id)renderResourceForImage:(struct __C3DImage *)arg1 sampler:(struct __C3DTextureSampler *)arg2 options:(int)arg3 engineContext:(struct __C3DEngineContext *)arg4 didFallbackToDefaultTexture:(_Bool *)arg5;
- (id)renderResourceForImageProxy:(struct __C3DImageProxy *)arg1 sampler:(struct __C3DTextureSampler *)arg2 engineContext:(struct __C3DEngineContext *)arg3 didFallbackToDefaultTexture:(_Bool *)arg4;
- (id)renderResourceForEffectSlot:(struct __C3DEffectSlot *)arg1 withEngineContext:(struct __C3DEngineContext *)arg2 didFallbackToDefaultTexture:(_Bool *)arg3;
- (id)unstageTexture:(id)arg1 commandBuffer:(id)arg2;
- (id)latlongTextureForCubemap:(id)arg1 pixelFormat:(unsigned long long)arg2 renderContext:(id)arg3 needsMipmap:(_Bool)arg4;
- (id)newCubemapTextureForLatlongTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 engineContext:(struct __C3DEngineContext *)arg3 needsMipmap:(_Bool)arg4;
- (_Bool)_copyImage:(struct __C3DImage *)arg1 toTexture:(id)arg2 desc:(id)arg3 textureOptions:(int)arg4 needsMipMapGeneration:(_Bool)arg5;
- (id)_textureDescriptorFromImage:(struct __C3DImage *)arg1 needsMipMap:(_Bool)arg2 textureOptions:(int)arg3;
- (void)_enqueueCopyFromTexture:(id)arg1 toTexture:(id)arg2 blitEncoder:(struct SCNMTLBlitCommandEncoder *)arg3 generateMipMaps:(_Bool)arg4;
- (id)newTextureUsingMTKTextureLoaderWithData:(id)arg1 options:(id)arg2;
- (id)newTextureUsingMTKTextureLoaderWithURL:(id)arg1 options:(id)arg2;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)copyTextureByConvertingToCubeMapIfApplicable:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 needsMipmap:(_Bool)arg3;
- (id)areaLightPrecomputedDataTexture;
- (id)specularDFGDiffuseHammonTextureWithRenderContext:(id)arg1;
- (id)radianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 commandBuffer:(id)arg3;
- (id)newRadianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 cpuAccessible:(_Bool)arg3 commandBuffer:(id)arg4;
- (void)_bakeSphericalHamonicsBasedIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 renderContext:(id)arg3 applySH:(CDUnknownBlockType)arg4;
- (void)_bakeStochasticIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 mipmapLevelForSampling:(unsigned long long)arg3 renderContext:(id)arg4;
- (id)irradianceTextureForEnvironmentTexture:(id)arg1 renderContext:(id)arg2 applySH:(CDUnknownBlockType)arg3;
- (id)radianceTextureForPrecomputedLightingEnvironment:(id)arg1;
- (id)irradianceTextureForPrecomputedLightingEnvironment:(id)arg1;
- (id)defaultLightingEnvironmentRadianceTexture;
- (id)defaultLightingEnvironmentIrradianceTexture;
- (id)sphericalHarmonicsForEnvironmentTexture:(id)arg1 order:(unsigned long long)arg2 commandBuffer:(id)arg3;
- (id)shFromCPU:(id)arg1 commandBuffer:(id)arg2;
- (_Bool)hasCommonProfilePrecompiledFunctions;
- (void)reloadPipelinesIfNeeded;
- (id)colorMatchingComputePipelineStateForSourceColorSpace:(struct CGColorSpace *)arg1 destinationColorSpace:(struct CGColorSpace *)arg2 renderContext:(id)arg3;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2 constantValues:(id)arg3;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 constantValues:(id)arg2;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2;
- (id)newComputePipelineStateWithFunctionName:(id)arg1;
- (id)getUniqueStageDescriptor:(id)arg1;
- (id)computePipelineStateForKernel:(id)arg1 withStageDescriptor:(id)arg2 stageDescriptorUpdateBlock:(CDUnknownBlockType)arg3 constants:(id)arg4 constantsHash:(id)arg5;
- (id)_computePipelineStateForKernel:(id)arg1 constants:(id)arg2 constantsHash:(id)arg3 threadGroupSizeIsMultipleOfThreadExecutionWidth:(_Bool)arg4;
- (id)computePipelineStateForKernel:(id)arg1 constants:(id)arg2 constantsHash:(id)arg3;
- (id)computePipelineStateForKernel:(id)arg1 threadGroupSizeIsMultipleOfThreadExecutionWidth:(_Bool)arg2;
- (id)computePipelineStateForKernel:(id)arg1;
- (id)newComputePipelineStateForDesc:(CDStruct_3ade659f)arg1 library:(id)arg2;
- (void)_configureComputePipeline:(id)arg1 withDescriptor:(id)arg2;
- (id)_newComputeDescriptorForPipelineDesc:(CDStruct_3ade659f)arg1 library:(id)arg2;
- (id)newRenderPipelineStateWithDesc:(CDStruct_a7d3e8da)arg1;
- (void)_createPipelineStateWithDescriptor:(id)arg1 desc:(CDStruct_a7d3e8da)arg2 pipeline:(id)arg3;
- (struct __C3DFXMetalProgram *)defaultProgramUsingTessellation:(_Bool)arg1;
- (id)renderResourceForProgramDesc:(CDStruct_d1b5de43)arg1 renderPassDescriptor:(id)arg2;

@end

