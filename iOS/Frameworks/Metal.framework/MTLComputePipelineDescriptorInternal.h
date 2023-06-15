//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLComputePipelineDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor
{
    struct MTLComputePipelineDescriptorPrivate _private;
}

- (id)newPipelineScript;
- (id)newSerializedComputeDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newSerializedComputeData;
- (void)validateWithDevice:(id)arg1;
- (_Bool)validateWithDevice:(id)arg1 error:(id *)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setPluginData:(id)arg1;
- (id)pluginData;
- (id)buffers;
- (const struct MTLComputePipelineDescriptorPrivate *)_descriptorPrivate;
- (void)setProfileControl:(id)arg1;
- (id)profileControl;
- (void)setNeedsCustomBorderColorSamplers:(_Bool)arg1;
- (_Bool)needsCustomBorderColorSamplers;
- (void)setOpenCLModeEnabled:(_Bool)arg1;
- (_Bool)openCLModeEnabled;
- (void)setOpenGLModeEnabled:(_Bool)arg1;
- (_Bool)openGLModeEnabled;
- (void)setResourceIndex:(unsigned long long)arg1;
- (unsigned long long)resourceIndex;
- (void)setForceResourceIndex:(_Bool)arg1;
- (_Bool)forceResourceIndex;
- (long long)textureWriteFPRoundingMode;
- (void)setTextureWriteFPRoundingMode:(long long)arg1;
- (long long)textureWriteRoundingMode;
- (void)setTextureWriteRoundingMode:(long long)arg1;
- (_Bool)supportIndirectCommandBuffers;
- (void)setSupportIndirectCommandBuffers:(_Bool)arg1;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;
- (_Bool)threadGroupSizeIsMultipleOfThreadExecutionWidth;
- (void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(_Bool)arg1;
- (id)pipelineLibrary;
- (void)setPipelineLibrary:(id)arg1;
- (void)setDynamicLibraries:(id)arg1;
- (id)dynamicLibraries;
- (void)setInsertLibraries:(id)arg1;
- (id)insertLibraries;
- (void)setPreloadedLibraries:(id)arg1;
- (id)preloadedLibraries;
- (void)setBinaryLibraries:(id)arg1;
- (id)binaryLibraries;
- (void)setBinaryArchives:(id)arg1;
- (id)binaryArchives;
- (void)setMaxAccelerationStructureTraversalDepth:(unsigned long long)arg1;
- (unsigned long long)maxAccelerationStructureTraversalDepth;
- (void)setMaxCallStackDepth:(unsigned long long)arg1;
- (unsigned long long)maxCallStackDepth;
- (void)setSupportAddingBinaryFunctions:(_Bool)arg1;
- (_Bool)supportAddingBinaryFunctions;
- (void)setLinkedFunctions:(id)arg1;
- (id)linkedFunctions;
- (void)setFunctionPointers:(id)arg1;
- (id)functionPointers;
- (id)gpuCompilerSPIOptions;
- (void)setGpuCompilerSPIOptions:(id)arg1;
- (id)driverCompilerOptions;
- (void)setDriverCompilerOptions:(id)arg1;
- (id)stageInputDescriptor;
- (void)setStageInputDescriptor:(id)arg1;
- (id)computeFunction;
- (void)setComputeFunction:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)reset;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

