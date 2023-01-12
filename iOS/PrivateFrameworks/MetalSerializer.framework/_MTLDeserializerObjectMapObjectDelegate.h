//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MTLDeserializerObjectMapObjectDelegate : NSObject
{
    void *_commandQueueMap;
    void *_functionMap;
    void *_computePipelineMap;
    void *_renderPipelineMap;
    void *_bufferMap;
    void *_textureMap;
    void *_samplerMap;
    void *_depthStencilMap;
    void *_fenceMap;
    void *_argumentBufferLayoutMap;
    void *_argumentEncoderMap;
    void *_heapMap;
    void *_eventMap;
    NSObject<OS_dispatch_queue> *_resourceMapQueue;
}

- (id)getResourceForReference:(unsigned int)arg1;
- (void)deleteResourceForReference:(unsigned int)arg1;
- (id)functionWithFunctionRef:(unsigned long long)arg1;
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
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

