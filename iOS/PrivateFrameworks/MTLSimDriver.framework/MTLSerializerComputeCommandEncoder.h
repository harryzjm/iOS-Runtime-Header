//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MTLSimDriver/MTLComputeCommandEncoderSPI-Protocol.h>

@class NSString;
@protocol MTLDevice, MTLSerializerBuffer, MTLSerializerComputePipelineState, MTLSerializerSamplerState, MTLSerializerTexture;

__attribute__((visibility("hidden")))
@interface MTLSerializerComputeCommandEncoder <MTLComputeCommandEncoderSPI>
{
    _Bool hadSplit;
    id <MTLSerializerBuffer> buffers[31];
    id <MTLSerializerTexture> textures[128];
    id <MTLSerializerSamplerState> samplers[16];
    id <MTLSerializerComputePipelineState> pipelineState;
    _Bool _resourcesDirty;
    _Bool needsWrites;
}

@property _Bool needsWrites; // @synthesize needsWrites;
- (void)setIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;
- (void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;
- (unsigned long long)getType;
- (void)memoryBarrierWithScope:(unsigned long long)arg1;
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2;
- (id)newKernelDebugInfo;
- (void)waitForFence:(id)arg1;
- (void)updateFence:(id)arg1;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;
- (void)setStageInRegion:(CDStruct_caaed6bc)arg1;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setComputePipelineState:(id)arg1;
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)dispatchThreads:(CDStruct_da2e99ad)arg1 threadsPerThreadgroup:(CDStruct_da2e99ad)arg2;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(CDStruct_da2e99ad)arg3;
- (void)dispatchThreadgroups:(CDStruct_da2e99ad)arg1 threadsPerThreadgroup:(CDStruct_da2e99ad)arg2;
- (void)flushWrites;
- (_Bool)handleSplits;
- (void)beginSegment:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1 dispatchType:(unsigned long long)arg2;
- (void)split;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long dispatchType;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end
