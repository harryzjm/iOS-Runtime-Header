//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthExperienceUI/NSObject-Protocol.h>

@class MTLIntersectionFunctionTableDescriptor, MTLRenderPipelineFunctionsDescriptor, MTLVisibleFunctionTableDescriptor, NSString;
@protocol MTLDevice, MTLFunction, MTLFunctionHandle, MTLIntersectionFunctionTable, MTLRenderPipelineState, MTLVisibleFunctionTable;

@protocol MTLRenderPipelineState <NSObject>
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithAdditionalBinaryFunctions:(MTLRenderPipelineFunctionsDescriptor *)arg1 error:(id *)arg2;
- (id <MTLIntersectionFunctionTable>)newIntersectionFunctionTableWithDescriptor:(MTLIntersectionFunctionTableDescriptor *)arg1 stage:(unsigned long long)arg2;
- (id <MTLVisibleFunctionTable>)newVisibleFunctionTableWithDescriptor:(MTLVisibleFunctionTableDescriptor *)arg1 stage:(unsigned long long)arg2;
- (id <MTLFunctionHandle>)functionHandleWithFunction:(id <MTLFunction>)arg1 stage:(unsigned long long)arg2;
@property(nonatomic, readonly) struct MTLResourceID gpuResourceID;
@property(nonatomic, readonly) long long maxTotalThreadgroupsPerMeshGrid;
@property(nonatomic, readonly) long long meshThreadExecutionWidth;
@property(nonatomic, readonly) long long objectThreadExecutionWidth;
@property(nonatomic, readonly) long long maxTotalThreadsPerMeshThreadgroup;
@property(nonatomic, readonly) long long maxTotalThreadsPerObjectThreadgroup;
@property(nonatomic, readonly) _Bool supportIndirectCommandBuffers;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;
@property(nonatomic, readonly) long long imageblockSampleLength;
@property(nonatomic, readonly) _Bool threadgroupSizeMatchesTileSize;
@property(nonatomic, readonly) long long maxTotalThreadsPerThreadgroup;
@property(nonatomic, readonly) id <MTLDevice> device;
@property(nonatomic, readonly) NSString *label;
@end

