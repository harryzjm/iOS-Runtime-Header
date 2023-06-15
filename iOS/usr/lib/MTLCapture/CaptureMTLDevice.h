//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTResourceDownloader, MTLArchitecture, MTLGPUBVHBuilder, MTLSharedEventListener, MTLTargetDeviceArchitecture, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSString;
@protocol MTLArgumentEncoder, MTLComputePipelineState, MTLDevice, MTLDeviceSPI, MTLFunction, MTLRenderPipelineState, OS_dispatch_group, OS_dispatch_queue;

@interface CaptureMTLDevice : NSObject
{
    id <MTLDeviceSPI> _baseObject;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
    struct apr_pool_t *_harvesterPool;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    long long _onceToken;
    id <MTLFunction> _renderFunctionCopyIndirectCommandBuffer;
    id <MTLFunction> _computeFunctionCopyIndirectCommandBuffer;
    id <MTLRenderPipelineState> _renderPipelineCopyIndirectCommandBuffer;
    id <MTLRenderPipelineState> _renderPipelineCopyBuffer;
    id <MTLComputePipelineState> _computePipelineCopyIndirectCommandBuffer;
    id <MTLComputePipelineState> _computePipelineCopyBuffer;
    GTResourceDownloader *_downloader;
    long long _downloaderOnceToken;
    NSObject<OS_dispatch_queue> *_eventQueue;
    MTLSharedEventListener *_eventListener;
    id <MTLArgumentEncoder> _dummyArgumentEncoder;
    long long _dummyArgEncOnceToken;
    _Bool isArgumentBufferPatchingTypeIndexed[9];
    unsigned long long _dummySamplerIndex;
    unsigned long long _dummyICBIndex;
    unsigned long long _dummyRenderPSOIndex;
    unsigned long long _dummyComputePSOIndex;
    unsigned long long _dummyVisibleFunctionTableIndex;
    unsigned long long _dummyIntersectionFunctionTableIndex;
    struct _opaque_pthread_mutex_t _retainMutex;
    NSMutableArray *_retainObjects;
    NSMapTable *_cachedDepthStencilStateMap;
    NSMapTable *_cachedFunctionMap;
    NSMapTable *_cachedSamplerStateMap;
    struct os_unfair_lock_s _cachedDepthStencilStateLock;
    struct os_unfair_lock_s _cachedFunctionLock;
    struct os_unfair_lock_s _cachedSamplerStateLock;
    _Bool _bufferPinningEnabled;
    _Bool _isBaseObjectDebugDevice;
    _Bool _captureRaytracingEnabled;
    struct GTResourceHarvester *_harvester;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct GTResourceHarvester *harvester; // @synthesize harvester=_harvester;
- (CDStruct_4bcfbbae)heapTextureSizeAndAlignWithDescriptor:(id)arg1;
- (id)newAccelerationStructureWithBuffer:(id)arg1 offset:(unsigned long long)arg2 resourceIndex:(unsigned long long)arg3;
- (id)newAccelerationStructureWithBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (id)newHeapWithDescriptor:(id)arg1;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (void)reserveResourceIndicesForResourceType:(unsigned long long)arg1 indices:(unsigned long long *)arg2 indexCount:(unsigned long long)arg3;
- (id)vendorName;
- (_Bool)validateDynamicLibraryURL:(id)arg1 error:(id *)arg2;
- (_Bool)validateDynamicLibraryDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)validateDynamicLibrary:(id)arg1 state:(_Bool)arg2 error:(id *)arg3;
- (void)unmapShaderSampleBuffer;
- (void)unloadShaderCaches;
- (CDStruct_14f26992)tileSizeWithSparsePageSize:(long long)arg1 textureType:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 sampleCount:(unsigned long long)arg4;
- (_Bool)supportsVertexAmplificationCount:(unsigned long long)arg1;
- (_Bool)supportsTextureWriteRoundingMode:(long long)arg1;
- (_Bool)supportsTextureSampleCount:(unsigned long long)arg1;
- (_Bool)supportsSampleCount:(unsigned long long)arg1;
- (_Bool)supportsRasterizationRateMapWithLayerCount:(unsigned long long)arg1;
- (_Bool)supportsFeatureSet:(unsigned long long)arg1;
- (_Bool)supportsFamily:(long long)arg1;
- (_Bool)supportsCounterSampling:(unsigned long long)arg1;
- (void)startCollectingPipelineDescriptorsUsingPrefixForNames:(id)arg1;
- (void)startCollectingPipelineDescriptors;
- (CDStruct_14f26992)sparseTileSizeWithTextureType:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3 sparsePageSize:(long long)arg4;
- (unsigned long long)sparseTileSizeInBytesForSparsePageSize:(long long)arg1;
- (void)setupMPSFunctionTable:(struct MPSFunctionTable *)arg1;
- (void)setRawBVHBuilderPtr:(id)arg1;
- (void)setIndirectArgumentBufferDecodingData:(id)arg1;
@property(getter=areGPUAssertionsEnabled, setter=setGPUAssertionsEnabled:) _Bool gpuAssertionsEnabled;
- (id)serializeTileRenderPipelineDescriptor:(id)arg1;
- (void)sampleTimestamps:(unsigned long long *)arg1 gpuTimestamp:(unsigned long long *)arg2;
- (unsigned long long)resourcePatchingTypeForResourceType:(unsigned long long)arg1;
- (_Bool)reserveGPUAddressRange:(struct _NSRange)arg1;
- (id)productName;
- (CDStruct_c0454aff)pipelineCacheStats;
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1;
- (id)newTileRenderPipelineDescriptorWithSerializedData:(id)arg1 deserializationContext:(id)arg2;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)newTextureLayoutWithDescriptor:(id)arg1 isHeapOrBufferBacked:(_Bool)arg2;
- (id)newProfileWithExecutionSize:(unsigned long long)arg1;
- (id)newPerformanceStateAssertion:(long long)arg1 error:(id *)arg2;
- (id)newLibraryWithStitchedDescriptorSPI:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithDescriptorSPI:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithData:(id)arg1 error:(id *)arg2;
- (id)newLateEvalEvent;
- (id)newIndirectRenderCommandEncoderWithBuffer:(id)arg1;
- (id)newIndirectComputeCommandEncoderWithBuffer:(id)arg1;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newIndirectArgumentEncoderWithLayout:(id)arg1;
- (id)newIndirectArgumentEncoderWithArguments:(id)arg1;
- (id)newIndirectArgumentBufferLayoutWithStructType:(id)arg1;
- (id)newFence;
- (id)newEvent;
- (id)newDynamicLibraryWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)newDynamicLibraryWithURL:(id)arg1 error:(id *)arg2;
- (id)newDynamicLibraryWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)newDynamicLibraryFromURL:(id)arg1 error:(id *)arg2;
- (id)newDynamicLibrary:(id)arg1 computeDescriptor:(id)arg2 error:(id *)arg3;
- (id)newDagStringWithGraphs:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueue;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 gpuAddress:(unsigned long long)arg3;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newBufferWithIOSurface:(struct __IOSurface *)arg1;
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4 deallocator:(CDUnknownBlockType)arg5;
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4;
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(id)arg2 error:(id *)arg3;
- (id)newBinaryArchiveWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)newArgumentEncoderWithLayout:(id)arg1;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 withDescriptor:(id)arg2;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1;
- (id)newAccelerationStructureWithDescriptor:(id)arg1;
- (unsigned long long)minimumTextureBufferAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (_Bool)mapShaderSampleBufferWithBuffer:(CDStruct_32a7f38a *)arg1 capacity:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (CDStruct_c0454aff)libraryCacheStats;
- (_Bool)isCompatibleWithAccelerationStructure:(CDStruct_c0454aff)arg1;
- (id)indirectArgumentBufferDecodingData;
- (CDStruct_4bcfbbae)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (CDStruct_4bcfbbae)heapAccelerationStructureSizeAndAlignWithSize:(unsigned long long)arg1;
- (CDStruct_4bcfbbae)heapAccelerationStructureSizeAndAlignWithDescriptor:(id)arg1;
- (void *)getShaderCacheKeys;
- (id)getRawBVHBuilderPtr;
- (void)getDefaultSamplePositions:(CDStruct_b2fbf00d *)arg1 count:(unsigned long long)arg2;
- (struct os_unfair_lock_s *)getBVHBuilderLock;
- (id)familyName;
- (id)endCollectingPipelineDescriptors;
- (_Bool)deviceSupportsFeatureSet:(unsigned long long)arg1;
- (_Bool)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1;
- (id)deserializePrimitiveAccelerationStructureFromBytes:(void *)arg1 withDescriptor:(id)arg2;
- (id)deserializeInstanceAccelerationStructureFromBytes:(void *)arg1 primitiveAccelerationStructures:(id)arg2 withDescriptor:(id)arg3;
- (void)deserializeCompileTimeStats:(id)arg1 addToDictionary:(id)arg2;
- (_Bool)copyShaderCacheToPath:(id)arg1;
- (void)convertSparseTileRegions:(const CDStruct_4c83c94d *)arg1 toPixelRegions:(CDStruct_4c83c94d *)arg2 withTileSize:(CDStruct_14f26992)arg3 numRegions:(unsigned long long)arg4;
- (void)convertSparsePixelRegions:(const CDStruct_4c83c94d *)arg1 toTileRegions:(CDStruct_4c83c94d *)arg2 withTileSize:(CDStruct_14f26992)arg3 alignmentMode:(unsigned long long)arg4 numRegions:(unsigned long long)arg5;
- (void)compilerPropagatesThreadPriority:(_Bool)arg1;
- (void)compileVisibleFunction:(id)arg1 withDescriptor:(id)arg2 error:(id *)arg3;
- (CDStruct_14f26992)accelerationStructureSizesWithDescriptor:(id)arg1;
@property(readonly) const struct MTLTargetDeviceArch *targetDeviceInfo;
@property(readonly) MTLTargetDeviceArchitecture *targetDeviceArchitecture;
@property(readonly) _Bool supportPriorityBand;
@property(readonly) unsigned long long sparseTexturesSupport;
@property(readonly) unsigned long long singleFPConfig;
@property(readonly) unsigned long long sharedMemorySize;
@property _Bool shaderDebugInfoCaching;
@property(readonly) _Bool requiresRaytracingEmulation;
@property(readonly) _Bool requiresBFloat16Emulation;
@property(readonly) unsigned long long registryID;
@property(readonly) unsigned long long readWriteTextureSupport;
@property(readonly, getter=areRasterOrderGroupsSupported) _Bool rasterOrderGroupsSupported;
@property(readonly, getter=isQuadDataSharingSupported) _Bool quadDataSharingSupported;
@property(readonly, getter=areProgrammableSamplePositionsSupported) _Bool programmableSamplePositionsSupported;
@property(readonly, getter=isPlacementHeapSupported) _Bool placementHeapSupported;
@property(readonly) NSString *name;
@property(readonly, getter=isMsaa32bSupported) _Bool msaa32bSupported;
@property(readonly) unsigned long long minConstantBufferAlignmentBytes;
@property(readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property(nonatomic) _Bool metalAssertionsEnabled;
@property(readonly) unsigned long long maxVisibilityQueryOffset;
@property(readonly) unsigned long long maxViewportCount;
@property(readonly) unsigned long long maxVertexTextures;
@property(readonly) unsigned long long maxVertexSamplers;
@property(readonly) unsigned long long maxVertexInlineDataSize;
@property(readonly) unsigned long long maxVertexBuffers;
@property(readonly) unsigned long long maxVertexAttributes;
@property(readonly) unsigned long long maxVertexAmplificationFactor;
@property(readonly) unsigned long long maxVertexAmplificationCount;
@property(readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property(readonly) CDStruct_14f26992 maxThreadsPerThreadgroup;
@property(readonly) unsigned long long maxThreadgroupMemoryLength;
@property(readonly) unsigned long long maxTextureWidth3D;
@property(readonly) unsigned long long maxTextureWidth2D;
@property(readonly) unsigned long long maxTextureWidth1D;
@property(readonly) unsigned long long maxTextureLayers;
@property(readonly) unsigned long long maxTextureHeight3D;
@property(readonly) unsigned long long maxTextureHeight2D;
@property(readonly) unsigned long long maxTextureDimensionCube;
@property(readonly) unsigned long long maxTextureDepth3D;
@property(readonly) unsigned long long maxTextureBufferWidth;
@property(readonly) unsigned long long maxTessellationFactor;
@property(readonly) unsigned long long maxRasterizationRateLayerCount;
@property(readonly) float maxPointSize;
@property(readonly) float maxLineWidth;
@property(readonly) unsigned long long maxInterpolatedComponents;
@property(readonly) unsigned long long maxInterpolants;
@property(readonly) unsigned long long maxIndirectTextures;
@property(readonly) unsigned long long maxIndirectSamplersPerDevice;
@property(readonly) unsigned long long maxIndirectSamplers;
@property(readonly) unsigned long long maxIndirectBuffers;
@property(readonly) unsigned long long maxFunctionConstantIndices;
@property(readonly) unsigned long long maxFramebufferStorageBits;
@property(readonly) unsigned long long maxFragmentTextures;
@property(readonly) unsigned long long maxFragmentSamplers;
@property(readonly) unsigned long long maxFragmentInlineDataSize;
@property(readonly) unsigned long long maxFragmentBuffers;
@property(readonly) unsigned long long maxFenceInstances;
@property(readonly) unsigned long long maxCustomSamplePositions;
@property(readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property(readonly) unsigned long long maxComputeThreadgroupMemory;
@property(readonly) unsigned long long maxComputeTextures;
@property(readonly) unsigned long long maxComputeSamplers;
@property(readonly) unsigned long long maxComputeLocalMemorySizes;
@property(readonly) unsigned long long maxComputeInlineDataSize;
@property(readonly) unsigned long long maxComputeBuffers;
@property(readonly) unsigned long long maxComputeAttributes;
@property(readonly) unsigned long long maxColorAttachments;
@property(readonly) unsigned long long maxBufferLength;
@property(readonly) unsigned long long maxArgumentBufferSamplerCount;
@property(readonly) unsigned long long maxAccelerationStructureTraversalDepth;
@property(readonly) unsigned long long linearTextureArrayAlignmentSlice;
@property(readonly) unsigned long long linearTextureArrayAlignmentBytes;
@property(readonly) unsigned long long linearTextureAlignmentBytes;
@property(readonly) const CDStruct_e1c34685 *limits;
@property(readonly, getter=isLargeMRTSupported) _Bool largeMRTSupported;
@property(readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property(readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property(readonly) struct IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities;
@property(readonly) unsigned long long halfFPConfig;
@property(readonly, getter=isFloat32FilteringSupported) _Bool float32FilteringSupported;
@property(readonly) unsigned long long featureProfile;
@property(readonly) unsigned long long doubleFPConfig;
@property(readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property(readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long deviceCreationFlags;
@property(readonly) long long defaultTextureWriteRoundingMode;
@property(readonly) unsigned long long dedicatedMemorySize;
@property(readonly, nonatomic) long long currentPerformanceState;
@property(readonly) unsigned long long currentAllocatedSize;
@property(readonly) NSArray *counterSets;
@property(nonatomic) unsigned long long commandBufferErrorOptions;
@property(readonly) unsigned long long bufferRobustnessSupport;
@property(readonly, getter=areBarycentricCoordsSupported) _Bool barycentricCoordsSupported;
@property(readonly) unsigned long long argumentBuffersSupport;
@property(readonly, getter=isRTZRoundingSupported) _Bool RTZRoundingSupported;
@property(readonly, getter=isRGB10A2GammaSupported) _Bool RGB10A2GammaSupported;
@property(readonly) MTLGPUBVHBuilder *GPUBVHBuilder;
@property(readonly, getter=isFixedLinePointFillDepthGradientSupported) _Bool FixedLinePointFillDepthGradientSupported;
@property(readonly, getter=isCustomBorderColorSupported) _Bool CustomBorderColorSupported;
@property(readonly, getter=isClampToHalfBorderSupported) _Bool ClampToHalfBorderSupported;
@property(readonly, getter=isBCTextureCompressionSupported) _Bool BCTextureCompressionSupported;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;
- (id)originalObject;
- (id)newArgumentEncoderWithBufferBinding:(id)arg1;
- (id)newSharedEventWithOptions:(long long)arg1;
- (id)newEventWithOptions:(long long)arg1;
- (void)deserializeInstanceAccelerationStructure:(id)arg1 fromBytes:(const void *)arg2 primitiveAccelerationStructures:(id)arg3 withDescriptor:(id)arg4;
- (void)deserializePrimitiveAccelerationStructure:(id)arg1 fromBytes:(const void *)arg2 withDescriptor:(id)arg3;
- (void)compileVisibleFunction:(id)arg1 withDescriptor:(id)arg2 destinationBinaryArchive:(id)arg3 error:(id *)arg4;
- (void)newLibraryWithStitchedDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newLibraryWithStitchedDescriptor:(id)arg1 error:(id *)arg2;
- (void)newLibraryWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newDynamicLibrary:(id)arg1 error:(id *)arg2;
- (id)newBufferWithDescriptor:(id)arg1;
@property(readonly) unsigned long long maxAccelerationStructureLevels;
@property(readonly) unsigned long long maxPredicatedNestingDepth;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)loadDynamicLibrariesForFunction:(id)arg1 insertLibraries:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)loadDynamicLibrariesForFunction:(id)arg1 insertLibraries:(id)arg2 error:(id *)arg3;
- (id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id *)arg3;
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(CDUnknownBlockType)arg4;
@property(readonly) unsigned long long sparseTileSizeInBytes;
- (CDStruct_14f26992)sparseTileSizeWithTextureType:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3;
- (id)newRasterizationRateMapWithDescriptor:(id)arg1;
- (id)newFunctionWithGLIR:(void *)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;
- (id)newFunctionWithGLIR:(void *)arg1 functionType:(unsigned long long)arg2;
- (id)newFunctionWithGLESIR:(void *)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;
- (id)newFunctionWithGLESIR:(void *)arg1 functionType:(unsigned long long)arg2;
- (id)newFunctionWithGLCoreIR:(void *)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;
- (id)newFunctionWithGLCoreIR:(void *)arg1 functionType:(unsigned long long)arg2;
@property(readonly) unsigned long long minTilePixels;
@property(readonly) unsigned long long maxTileTextures;
@property(readonly) unsigned long long maxTileSamplers;
@property(readonly) unsigned long long maxTileInlineDataSize;
@property(readonly) unsigned long long maxTileBuffers;
- (id)newPipelineLibraryWithFilePath:(id)arg1 error:(id *)arg2;
- (void)_setDeviceWrapper:(id)arg1;
- (id)_deviceWrapper;
- (id)newResourceGroupFromResources:(const id *)arg1 count:(unsigned long long)arg2;
- (id)newCounterSampleBufferWithDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)supportsPrimitiveType:(unsigned long long)arg1;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id *)arg2;
- (id)newDefaultLibrary;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithMeshDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newRenderPipelineStateWithMeshDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newRenderPipelineStateWithMeshDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newRenderPipelineStateWithMeshDescriptor:(id)arg1 error:(id *)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newLibraryWithURL:(id)arg1 error:(id *)arg2;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id)newLibraryWithFile:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithCIFiltersForComputePipeline:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id)newSharedEventWithMachPort:(unsigned int)arg1;
- (id)newSharedEventWithHandle:(id)arg1;
- (id)newSharedEvent;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id)newArgumentEncoderWithArguments:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) MTLSharedEventListener *captureEventListener;
- (_Bool)captureRaytracingEnabled;
- (_Bool)bufferPinningEnabled;
- (void)purgeDeallocatedObjects;
- (void)deallocateResource:(id)arg1;
- (void)invalidateHarvester;
- (_Bool)newCaptureSamplerState:(out id *)arg1 associatedWithBaseSamplerState:(id)arg2;
- (_Bool)newCaptureDepthStencilState:(out id *)arg1 associatedWithBaseDepthStencilState:(id)arg2;
- (_Bool)newCaptureFunction:(out id *)arg1 associatedWithBaseFunction:(id)arg2 captureLibrary:(id)arg3;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext *)arg2;
@property(readonly) id <MTLDevice> baseObject;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;
@property(readonly, nonatomic) id <MTLComputePipelineState> computePipelineCopyBuffer;
@property(readonly, nonatomic) id <MTLComputePipelineState> computePipelineCopyIndirectCommandBuffer;
@property(readonly, nonatomic) id <MTLFunction> computeFunctionCopyIndirectCommandBuffer;
@property(readonly, nonatomic) id <MTLRenderPipelineState> renderPipelineCopyBuffer;
@property(readonly, nonatomic) id <MTLRenderPipelineState> renderPipelineCopyIndirectCommandBuffer;
@property(readonly, nonatomic) id <MTLFunction> renderFunctionCopyIndirectCommandBuffer;
@property(readonly, nonatomic) GTResourceDownloader *downloader;
- (id)dummyEncodeIntersectionFunctionTableIntoArgumentBufferForResourceIndex:(id)arg1 withDescriptor:(id)arg2;
- (id)dummyEncodeVisibleFunctionTableIntoArgumentBufferForResourceIndex:(id)arg1 withDescriptor:(id)arg2;
- (id)dummyEncodeComputePSOIntoArgumentBufferForResourceIndex:(id)arg1 withDescriptor:(id)arg2;
- (id)dummyEncodeRenderPSOIntoArgumentBufferForResourceIndex:(id)arg1 withMeshDescriptor:(id)arg2;
- (id)dummyEncodeRenderPSOIntoArgumentBufferForResourceIndex:(id)arg1 withDescriptor:(id)arg2;
- (id)dummyEncodeICBIntoArgumentBufferForResourceIndex:(id)arg1 withDescriptor:(id)arg2;
- (id)dummyEncodeSamplerIntoArgumentBufferForResourceIndex:(id)arg1 withDescriptor:(id)arg2;
- (id)dummyEncodeTextureIntoArgumentBufferForResourceIndex:(id)arg1 withDescriptor:(id)arg2;
- (void)_initDummyEncoder;
- (id)dummyArgumentEncoder;
- (void)_initArgumentBufferPatchingTypes;

// Remaining properties
@property(readonly, getter=isAnisoSampleFixSupported) _Bool AnisoSampleFixSupported;
@property(readonly) MTLArchitecture *architecture;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, getter=isDepth24Stencil8PixelFormatSupported) _Bool depth24Stencil8PixelFormatSupported;
@property(readonly) _Bool hasUnifiedMemory;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isHeadless) _Bool headless;
@property(readonly, getter=isLowPower) _Bool lowPower;
@property(readonly) unsigned long long maxConstantBufferArguments;
@property(copy, nonatomic) NSDictionary *pluginData;
@property(readonly) unsigned long long recommendedMaxWorkingSetSize;
@property(readonly, getter=isRemovable) _Bool removable;
@property(readonly) unsigned long long simulatorHostFeatureProfile;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supports2DLinearTexArraySPI;
@property(readonly, nonatomic) _Bool supports32BitFloatFiltering;
@property(readonly, nonatomic) _Bool supports32BitMSAA;
@property(readonly, nonatomic) _Bool supports32bpcMSAATextures;
@property(readonly, nonatomic) _Bool supports3DASTCTextures;
@property(readonly, nonatomic) _Bool supports3DBCTextures;
@property(readonly, nonatomic) _Bool supportsASTCHDRTextureCompression;
@property(readonly, nonatomic) _Bool supportsASTCTextureCompression;
@property(readonly, nonatomic) _Bool supportsAlphaYUVFormats;
@property(readonly, nonatomic) _Bool supportsAnisoSampleFix;
@property(readonly, nonatomic) _Bool supportsArgumentBuffersTier2;
@property(readonly, nonatomic) _Bool supportsArrayOfSamplers;
@property(readonly, nonatomic) _Bool supportsArrayOfTextures;
@property(readonly, nonatomic) _Bool supportsAtomicUlongVoidMinMax;
@property(readonly, nonatomic) _Bool supportsBCTextureCompression;
@property(readonly, nonatomic) _Bool supportsBGR10A2;
@property(readonly, nonatomic) _Bool supportsBaseVertexInstanceDrawing;
@property(readonly, nonatomic) _Bool supportsBfloat16Buffers;
@property(readonly, nonatomic) _Bool supportsBfloat16Format;
@property(readonly, nonatomic) _Bool supportsBinaryArchives;
@property(readonly, nonatomic) _Bool supportsBinaryLibraries;
@property(readonly, nonatomic) _Bool supportsBlackOrWhiteSamplerBorderColors;
@property(readonly, nonatomic) _Bool supportsBufferBoundsChecking;
@property(readonly, nonatomic) _Bool supportsBufferPrefetchStatistics;
@property(readonly, nonatomic) _Bool supportsBufferWithIOSurface;
@property(readonly, nonatomic) _Bool supportsBufferlessClientStorageTexture;
@property(readonly, nonatomic) _Bool supportsCMPIndirectCommandBuffers;
@property(readonly, nonatomic) _Bool supportsCombinedMSAAStoreAndResolveAction;
@property(readonly, nonatomic) _Bool supportsCommandBufferJump;
@property(readonly, nonatomic) _Bool supportsCompressedTextureViewSPI;
@property(readonly, nonatomic) _Bool supportsComputeCompressedTextureWrite;
@property(readonly, nonatomic) _Bool supportsComputeMemoryBarrier;
@property(readonly, nonatomic) _Bool supportsConcurrentComputeDispatch;
@property(readonly, nonatomic) _Bool supportsCountingOcclusionQuery;
@property(readonly, nonatomic) _Bool supportsCustomBorderColor;
@property(readonly, nonatomic) _Bool supportsDeadlineProfile;
@property(readonly, nonatomic) _Bool supportsDepthClipMode;
@property(readonly, nonatomic) _Bool supportsDepthClipModeClampExtended;
@property(readonly, nonatomic) _Bool supportsDevicePartitioning;
@property(readonly, nonatomic) _Bool supportsDynamicAttributeStride;
@property(readonly, nonatomic) _Bool supportsDynamicControlPointCount;
@property(readonly, nonatomic) _Bool supportsDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsExplicitVisibilityGroups;
@property(readonly, nonatomic) _Bool supportsExtendedVertexFormats;
@property(readonly, nonatomic) _Bool supportsExtendedXR10Formats;
@property(readonly, nonatomic) _Bool supportsExtendedYUVFormats;
@property(readonly, nonatomic) _Bool supportsFP32TessFactors;
@property(readonly, nonatomic) _Bool supportsFastMathInfNaNPropagation;
@property(readonly, nonatomic) _Bool supportsFillTexture;
@property(readonly, nonatomic) _Bool supportsFixedLinePointFillDepthGradient;
@property(readonly, nonatomic) _Bool supportsFloat16BCubicFiltering;
@property(readonly, nonatomic) _Bool supportsFloat16InfNanFiltering;
@property(readonly, nonatomic) _Bool supportsForceSeamsOnCubemaps;
@property(readonly, nonatomic) _Bool supportsForkJoin;
@property(readonly, nonatomic) _Bool supportsFragmentBufferWrites;
@property(readonly, nonatomic) _Bool supportsFragmentOnlyEncoders;
@property(readonly, nonatomic) _Bool supportsFunctionPointers;
@property(readonly, nonatomic) _Bool supportsFunctionPointersFromMesh;
@property(readonly, nonatomic) _Bool supportsFunctionPointersFromRender;
@property(readonly, nonatomic) _Bool supportsGFXIndirectCommandBuffers;
@property(readonly, nonatomic) _Bool supportsGPUStatistics;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocation;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocationCompute;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocationRender;
@property(readonly, nonatomic) _Bool supportsHeapAccelerationStructureAllocation;
@property(readonly, nonatomic) _Bool supportsIABHashForTools;
@property(readonly, nonatomic) _Bool supportsImageBlockSampleCoverageControl;
@property(readonly, nonatomic) _Bool supportsImageBlocks;
@property(readonly, nonatomic) _Bool supportsIndirectDrawAndDispatch;
@property(readonly, nonatomic) _Bool supportsIndirectStageInRegion;
@property(readonly, nonatomic) _Bool supportsIndirectTessellation;
@property(readonly, nonatomic) _Bool supportsIndirectTextures;
@property(readonly, nonatomic) _Bool supportsIndirectWritableTextures;
@property(readonly, nonatomic) _Bool supportsInt64;
@property(readonly, nonatomic) _Bool supportsInterchangeTiled;
@property(readonly, nonatomic) _Bool supportsInvariantVertexPosition;
@property(readonly, nonatomic) _Bool supportsLargeFramebufferConfigs;
@property(readonly, nonatomic) _Bool supportsLateEvalEvent;
@property(readonly, nonatomic) _Bool supportsLayeredRendering;
@property(readonly, nonatomic) _Bool supportsLimitedYUVFormats;
@property(readonly, nonatomic) _Bool supportsLinearTexture2DArray;
@property(readonly, nonatomic) _Bool supportsLinearTextureFromSharedBuffer;
@property(readonly, nonatomic) _Bool supportsLossyCompression;
@property(readonly, nonatomic) _Bool supportsMSAADepthResolve;
@property(readonly, nonatomic) _Bool supportsMSAADepthResolveFilter;
@property(readonly, nonatomic) _Bool supportsMSAAStencilResolve;
@property(readonly, nonatomic) _Bool supportsMSAAStencilResolveFilter;
@property(readonly, nonatomic) _Bool supportsMemoryOrderAtomics;
@property(readonly, nonatomic) _Bool supportsMemorylessRenderTargets;
@property(readonly, nonatomic) _Bool supportsMeshShaders;
@property(readonly, nonatomic) _Bool supportsMeshShadersInICB;
@property(readonly, nonatomic) _Bool supportsMipLevelsSmallerThanBlockSize;
@property(readonly, nonatomic) _Bool supportsMirrorClampToEdgeSamplerMode;
@property(readonly, nonatomic) _Bool supportsMutableTier1ArgumentBuffers;
@property(readonly, nonatomic) _Bool supportsNativeHardwareFP16;
@property(readonly, nonatomic) _Bool supportsNonPrivateDepthStencilTextures;
@property(readonly, nonatomic) _Bool supportsNonPrivateMSAATextures;
@property(readonly, nonatomic) _Bool supportsNonSquareTileShaders;
@property(readonly, nonatomic) _Bool supportsNonUniformThreadgroupSize;
@property(readonly, nonatomic) _Bool supportsNonZeroTextureWriteLOD;
@property(readonly, nonatomic) _Bool supportsNorm16BCubicFiltering;
@property(readonly, nonatomic) _Bool supportsOpenCLTextureWriteSwizzles;
@property(readonly, nonatomic) _Bool supportsPacked32TextureBufferWrites;
@property(readonly, nonatomic) _Bool supportsPerformanceStateAssertion;
@property(readonly, nonatomic) _Bool supportsPipelineLibraries;
@property(readonly, nonatomic) _Bool supportsPlacementHeaps;
@property(readonly, nonatomic) _Bool supportsPostDepthCoverage;
@property(readonly, nonatomic) _Bool supportsPrimitiveMotionBlur;
@property(readonly, nonatomic) _Bool supportsPrimitiveRestartOverride;
@property(readonly, nonatomic) _Bool supportsProgrammableBlending;
@property(readonly, nonatomic) _Bool supportsProgrammableSamplePositions;
@property(readonly, nonatomic) _Bool supportsPublicXR10Formats;
@property(readonly, nonatomic) _Bool supportsPullModelInterpolation;
@property(readonly, nonatomic) _Bool supportsQuadGroup;
@property(readonly, nonatomic) _Bool supportsQuadReduction;
@property(readonly, nonatomic) _Bool supportsQuadShufflesAndBroadcast;
@property(readonly, nonatomic) _Bool supportsQueryTextureLOD;
@property(readonly, nonatomic) _Bool supportsRGBA10A2Gamma;
@property(readonly, nonatomic) _Bool supportsRTZRounding;
@property(readonly, nonatomic) _Bool supportsRasterOrderGroups;
@property(readonly, nonatomic) _Bool supportsRasterOrderGroupsColorAttachment;
@property(readonly, nonatomic) _Bool supportsRayTracingAccelerationStructureCPUDeserialization;
@property(readonly, nonatomic) _Bool supportsRayTracingBuffersFromTables;
@property(readonly, nonatomic) _Bool supportsRayTracingCurves;
@property(readonly, nonatomic) _Bool supportsRayTracingExtendedVertexFormats;
@property(readonly, nonatomic) _Bool supportsRayTracingGPUTableUpdateBuffers;
@property(readonly, nonatomic) _Bool supportsRayTracingICBs;
@property(readonly, nonatomic) _Bool supportsRayTracingIndirectInstanceAccelerationStructureBuild;
@property(readonly, nonatomic) _Bool supportsRayTracingMultiLevelInstancing;
@property(readonly, nonatomic) _Bool supportsRayTracingPerPrimitiveData;
@property(readonly, nonatomic) _Bool supportsRayTracingTraversalMetrics;
@property(readonly) _Bool supportsRaytracing;
@property(readonly, nonatomic) _Bool supportsRaytracingFromRender;
@property(readonly, nonatomic) _Bool supportsReadWriteBufferArguments;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureArguments;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureArgumentsTier2;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureCubeArguments;
@property(readonly, nonatomic) _Bool supportsRelaxedTextureViewRequirements;
@property(readonly, nonatomic) _Bool supportsRenderDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsRenderMemoryBarrier;
@property(readonly, nonatomic) _Bool supportsRenderPassWithoutRenderTarget;
@property(readonly, nonatomic) _Bool supportsRenderTargetTextureRotation;
@property(readonly, nonatomic) _Bool supportsRenderTextureWrites;
@property(readonly, nonatomic) _Bool supportsRenderToLinearTextures;
@property(readonly, nonatomic) _Bool supportsSIMDGroup;
@property(readonly, nonatomic) _Bool supportsSIMDGroupMatrix;
@property(readonly, nonatomic) _Bool supportsSIMDReduction;
@property(readonly, nonatomic) _Bool supportsSIMDShuffleAndFill;
@property(readonly, nonatomic) _Bool supportsSIMDShufflesAndBroadcast;
@property(readonly, nonatomic) _Bool supportsSRGBwrites;
@property(readonly, nonatomic) _Bool supportsSamplerAddressModeClampToHalfBorder;
@property(readonly, nonatomic) _Bool supportsSamplerCompareFunction;
@property(readonly, nonatomic) _Bool supportsSeparateDepthStencil;
@property(readonly, nonatomic) _Bool supportsSeparateVisibilityAndShadingRate;
@property(readonly, nonatomic) _Bool supportsSetThreadgroupPackingDisabled;
@property(readonly, nonatomic) _Bool supportsShaderBarycentricCoordinates;
@property(readonly, nonatomic) _Bool supportsShaderLODAverage;
@property(readonly, nonatomic) _Bool supportsShaderMinLODClamp;
@property(readonly, nonatomic) _Bool supportsSharedFunctionTables;
@property(readonly, nonatomic) _Bool supportsSharedStorageHeapResources;
@property(readonly, nonatomic) _Bool supportsSharedStorageTextures;
@property(readonly, nonatomic) _Bool supportsSharedTextureHandles;
@property(readonly, nonatomic) _Bool supportsSparseDepthAttachments;
@property(readonly, nonatomic) _Bool supportsSparseHeaps;
@property(readonly, nonatomic) _Bool supportsSparseTextures;
@property(readonly, nonatomic) _Bool supportsStackOverflowErrorCode;
@property(readonly, nonatomic) _Bool supportsStatefulDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsStencilFeedback;
@property(readonly, nonatomic) _Bool supportsStreamingCodecSignaling;
@property(readonly, nonatomic) _Bool supportsTLS;
@property(readonly, nonatomic) _Bool supportsTessellation;
@property(readonly, nonatomic) _Bool supportsTexture2DMultisampleArray;
@property(readonly, nonatomic) _Bool supportsTextureCubeArray;
@property(readonly, nonatomic) _Bool supportsTextureOutOfBoundsReads;
@property(readonly, nonatomic) _Bool supportsTextureSwizzle;
@property(readonly, nonatomic) _Bool supportsTileShaders;
@property(readonly, nonatomic) _Bool supportsUnalignedVertexFetch;
@property(readonly, nonatomic) _Bool supportsVariableRateRasterization;
@property(readonly, nonatomic) _Bool supportsVertexAmplification;
@property(readonly, nonatomic) _Bool supportsViewportAndScissorArray;
@property(readonly, nonatomic) _Bool supportsWritableArrayOfTextures;
@property(readonly, nonatomic) _Bool supportsYCBCRFormats;
@property(readonly, nonatomic) _Bool supportsYCBCRFormats12;
@property(readonly, nonatomic) _Bool supportsYCBCRFormatsPQ;
@property(readonly, nonatomic) _Bool supportsYCBCRFormatsXR;
@property(readonly, nonatomic) _Bool supportsYCBCRPackedFormats12;
@property(readonly, nonatomic) _Bool supportsYCBCRPackedFormatsPQ;
@property(readonly, nonatomic) _Bool supportsYCBCRPackedFormatsXR;

@end

