//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLSharedEventListener, NSString;
@protocol MTLCommandQueue, MTLDeserializerObjectDelegate, MTLDevice, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MTLDeserializer : NSObject
{
    NSObject<OS_dispatch_queue> *submissionQueue;
    NSObject<OS_dispatch_queue> *completionQueue;
    id <MTLCommandQueue> commandQueue;
    id <MTLDevice> device;
    id <MTLDeserializerObjectDelegate> _objectDelegate;
    MTLSharedEventListener *eventListener;
    _Bool _generateResourceRefs;
}

@property(readonly) _Bool generateResourceRefs; // @synthesize generateResourceRefs=_generateResourceRefs;
@property(readonly) id <MTLDevice> device; // @synthesize device;
- (id)functionWithFunctionRef:(unsigned long long)arg1;
- (unsigned int)registerCommandQueue:(id)arg1;
- (unsigned int)registerBuffer:(id)arg1;
- (id)getResourceForReference:(unsigned int)arg1;
- (void)decodeSegments:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 into:(id)arg4;
- (void)submitCommandSegmentsTimed:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 submissionCompleted:(CDUnknownBlockType)arg4 commandBufferCompleted:(CDUnknownBlockType)arg5 commandQueueRef:(unsigned int)arg6;
- (void)submitCommandSegments:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 submissionCompleted:(CDUnknownBlockType)arg4 commandBufferCompleted:(CDUnknownBlockType)arg5 commandQueueRef:(unsigned int)arg6;
- (void)submitCommandSegments:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 submissionCompleted:(CDUnknownBlockType)arg4 commandBufferCompleted:(CDUnknownBlockType)arg5;
- (id)decodeSegmentWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(id)arg2 withDecoder:(id)arg3 into:(id)arg4;
- (id)newObjectCommandWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2;
- (void)deleteObjectWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2;
- (void)deleteResource:(unsigned int)arg1;
- (void)notifyListenerForEventWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3 allocator:(id)arg4;
- (void)newTextureWithIOSurface:(struct __IOSurface *)arg1 serializedData:(const char *)arg2 serializedDataSize:(unsigned long long)arg3 allocator:(id)arg4;
- (_Bool)operationWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)operationWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1 dataSize:(unsigned long long)arg2 command:(const CDStruct_c0454aff *)arg3;
- (id)replaceRegion:(const CDStruct_c0454aff *)arg1;
- (void)newSharedEventWithEventPort:(unsigned int)arg1 label:(id)arg2 serializedData:(const char *)arg3 serializedDataSize:(unsigned long long)arg4 allocator:(id)arg5;
- (_Bool)didModifyRange:(CDStruct_9835624e *)arg1 serializedDataSize:(unsigned long long)arg2;
- (_Bool)newSharedEventWithOptions:(CDStruct_d008d4b8 *)arg1 allocator:(id)arg2;
- (_Bool)newSharedEvent:(CDStruct_6238c8e0 *)arg1 allocator:(id)arg2;
- (_Bool)newFence:(CDStruct_6238c8e0 *)arg1 allocator:(id)arg2;
- (_Bool)newFunctionWithSerializedMetallib:(id)arg1 commandData:(const char *)arg2 commandDataSize:(unsigned long long)arg3 overrideTargetTriple:(id)arg4 allocator:(id)arg5;
- (_Bool)newTiledTextureViewWithBuffer:(CDStruct_199767e7 *)arg1 allocator:(id)arg2;
- (_Bool)newTextureViewWithBuffer:(CDStruct_199767e7 *)arg1 allocator:(id)arg2;
- (_Bool)newTextureViewWithSwizzle:(CDStruct_f41d351c *)arg1 allocator:(id)arg2;
- (_Bool)newTextureViewWithTextureType:(CDStruct_9da0e9c0 *)arg1 allocator:(id)arg2;
- (_Bool)newTextureViewWithPixelFormat:(CDStruct_1ab23c75 *)arg1 allocator:(id)arg2;
- (_Bool)makeAliasiableResource:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)heapBufferSizeAndAlign:(CDStruct_5e0ae671 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)heapTextureSizeAndAlign:(CDStruct_d55b6325 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)argumentEncoderSetValues:(CDStruct_091769f4 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)sharedEventWaitSignaledValue:(CDStruct_9835624e *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)sharedEventSetSignaledValue:(CDStruct_d008d4b8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)sharedEventSignaledValue:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)doResourcesAlias:(CDStruct_eb9e20c8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)argumentEncoderConstantAtIndex:(CDStruct_b92aab1b *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)argumentBufferLayoutConstantAtIndex:(CDStruct_d008d4b8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)newArgumentEncoderWithBufferLayout:(CDStruct_c0454aff *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)newArgumentBufferLayoutWithStructType:(CDStruct_d008d4b8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)newRenderPipelineStateWithDescriptor:(CDStruct_c0454aff *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)uniqueIdentifier:(CDStruct_1e94be47 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)newComputePipelineStateWithDescriptor:(CDStruct_c0454aff *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)heapMaxAvailableSizeWithAlignment:(CDStruct_d008d4b8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)computeInfo:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)minimumTextureBufferAlignment:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)minimumLinearTextureAlignment:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)bufferGPUAddress:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)sizeInfoForHeap:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;
- (_Bool)newBufferWithHeap:(CDStruct_e833742d *)arg1 allocator:(id)arg2;
- (_Bool)newTextureWithHeap:(CDStruct_ab6bd9ea *)arg1 allocator:(id)arg2;
- (_Bool)newHeapWithDescriptor:(CDStruct_1ffa15be *)arg1 allocator:(id)arg2;
- (id)newHeapWithDescriptor:(CDStruct_1ffa15be *)arg1;
- (_Bool)newDepthStencilStateWithDescriptor:(CDStruct_db93b3bd *)arg1 allocator:(id)arg2;
- (id)newDepthStencilStateWithDescriptor:(CDStruct_db93b3bd *)arg1;
- (_Bool)newSamplerStateWithDescriptor:(CDStruct_36a1713d *)arg1 allocator:(id)arg2;
- (id)newSamplerStateWithDescriptor:(CDStruct_36a1713d *)arg1;
- (_Bool)newTextureWithDescriptor:(CDStruct_161c8b3b *)arg1 allocator:(id)arg2;
- (id)newTextureWithDescriptor:(CDStruct_161c8b3b *)arg1;
- (void)deleteEventForReference:(unsigned int)arg1;
- (id)getEventForReference:(unsigned int)arg1;
- (unsigned int)registerEventForReference:(unsigned int)arg1 event:(id)arg2;
- (void)deleteHeapForReference:(unsigned int)arg1;
- (id)getHeapForReference:(unsigned int)arg1;
- (unsigned int)registerHeapForReference:(unsigned int)arg1 heap:(id)arg2;
- (void)deleteArgumentEncoderForReference:(unsigned int)arg1;
- (id)getArgumentEncoderForReference:(unsigned int)arg1;
- (unsigned int)registerArgumentEncoderForReference:(unsigned int)arg1 argumentEncoder:(id)arg2;
- (void)deleteArgumentBufferLayoutForReference:(unsigned int)arg1;
- (id)getArgumentBufferLayoutForReference:(unsigned int)arg1;
- (unsigned int)registerArgumentBufferLayoutForReference:(unsigned int)arg1 argumentBufferLayout:(id)arg2;
- (void)deleteFenceForReference:(unsigned int)arg1;
- (id)getFenceForReference:(unsigned int)arg1;
- (unsigned int)registerFenceForReference:(unsigned int)arg1 fence:(id)arg2;
- (void)deleteDepthStencilStateForReference:(unsigned int)arg1;
- (id)getDepthStencilStateForReference:(unsigned int)arg1;
- (unsigned int)registerDepthStencilStateForReference:(unsigned int)arg1 depthStencil:(id)arg2;
- (void)deleteSamplerStateForReference:(unsigned int)arg1;
- (id)getSamplerStateForReference:(unsigned int)arg1;
- (unsigned int)registerSamplerStateForReference:(unsigned int)arg1 sampler:(id)arg2;
- (void)deleteTextureForReference:(unsigned int)arg1;
- (id)getTextureForReference:(unsigned int)arg1;
- (unsigned int)registerTextureForReference:(unsigned int)arg1 texture:(id)arg2;
- (void)deleteBufferForReference:(unsigned int)arg1;
- (id)getBufferForReference:(unsigned int)arg1;
- (unsigned int)registerBufferForReference:(unsigned int)arg1 buffer:(id)arg2;
- (void)deleteRenderPipelineStateForReference:(unsigned int)arg1;
- (id)getRenderPipelineStateForReference:(unsigned int)arg1;
- (unsigned int)registerRenderPipelineStateForReference:(unsigned int)arg1 renderPipeline:(id)arg2;
- (void)deleteComputePipelineStateForReference:(unsigned int)arg1;
- (id)getComputePipelineStateForReference:(unsigned int)arg1;
- (unsigned int)registerComputePipelineStateForReference:(unsigned int)arg1 computePipeline:(id)arg2;
- (void)deleteFunctionForReference:(unsigned int)arg1;
- (id)getFunctionForReference:(unsigned int)arg1;
- (unsigned int)registerFunctionForReference:(unsigned int)arg1 function:(id)arg2;
- (void)deleteCommandQueueForReference:(unsigned int)arg1;
- (id)getCommandQueueForReference:(unsigned int)arg1;
- (unsigned int)registerCommandQueueForReference:(unsigned int)arg1 commandQueue:(id)arg2;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 generateResourceRefs:(_Bool)arg2;
- (id)initWithDevice:(id)arg1 generateResourceRefs:(_Bool)arg2 objectDelegate:(id)arg3 createQueues:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

