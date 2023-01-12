//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFXCore/NSObject-Protocol.h>

@class MTLIntersectionFunctionTableDescriptor, MTLVisibleFunctionTableDescriptor, NSArray, NSString;
@protocol MTLComputePipelineState, MTLDevice, MTLFunction, MTLFunctionHandle, MTLIntersectionFunctionTable, MTLVisibleFunctionTable;

@protocol MTLComputePipelineState <NSObject>
- (id <MTLIntersectionFunctionTable>)newIntersectionFunctionTableWithDescriptor:(MTLIntersectionFunctionTableDescriptor *)arg1;
- (id <MTLVisibleFunctionTable>)newVisibleFunctionTableWithDescriptor:(MTLVisibleFunctionTableDescriptor *)arg1;
- (id <MTLComputePipelineState>)newComputePipelineStateWithAdditionalBinaryFunctions:(NSArray *)arg1 error:(id *)arg2;
- (id <MTLFunctionHandle>)functionHandleWithFunction:(id <MTLFunction>)arg1;
@property(nonatomic, readonly) struct MTLResourceID gpuResourceID;
@property(nonatomic, readonly) _Bool supportIndirectCommandBuffers;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;
@property(nonatomic, readonly) long long staticThreadgroupMemoryLength;
@property(nonatomic, readonly) long long threadExecutionWidth;
@property(nonatomic, readonly) long long maxTotalThreadsPerThreadgroup;
@property(nonatomic, readonly) id <MTLDevice> device;
@property(nonatomic, readonly) NSString *label;
@end

