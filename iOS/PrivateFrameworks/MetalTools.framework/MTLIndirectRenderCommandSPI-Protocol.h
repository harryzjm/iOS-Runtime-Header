//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLIndirectRenderCommand-Protocol.h>

@class _MTLIndirectDrawArguments, _MTLIndirectDrawIndexedArguments, _MTLIndirectDrawIndexedPatchesArguments, _MTLIndirectDrawPatchesArguments, _MTLIndirectTessellationFactorArguments;
@protocol MTLBuffer;

@protocol MTLIndirectRenderCommandSPI <MTLIndirectRenderCommand>
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (unsigned long long)getOptimizedStatus;
- (void)drawMeshThreads:(CDStruct_14f26992)arg1 threadsPerObjectThreadgroup:(CDStruct_14f26992)arg2 threadsPerMeshThreadgroup:(CDStruct_14f26992)arg3;
- (void)drawMeshThreadgroups:(CDStruct_14f26992)arg1 threadsPerObjectThreadgroup:(CDStruct_14f26992)arg2 threadsPerMeshThreadgroup:(CDStruct_14f26992)arg3;
- (CDStruct_22c8f40a *)drawMeshArguments;
- (void *)getMeshBufferAtIndex:(unsigned long long)arg1;
- (void *)getObjectBufferAtIndex:(unsigned long long)arg1;
- (void)clearBarrier;
- (void)setBarrier;
- (void)setMeshBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setObjectBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (_MTLIndirectTessellationFactorArguments *)getTessellationFactorArguments;
- (_MTLIndirectDrawIndexedPatchesArguments *)drawIndexedPatchesArguments;
- (_MTLIndirectDrawPatchesArguments *)drawPatchesArguments;
- (_MTLIndirectDrawIndexedArguments *)drawIndexedArguments;
- (_MTLIndirectDrawArguments *)drawArguments;
- (unsigned long long)getCommandType;
- (void *)getFragmentBufferAtIndex:(unsigned long long)arg1;
- (void *)getVertexBufferAtIndex:(unsigned long long)arg1;
@end

