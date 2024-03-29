//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol MTLBuffer, MTLComputePipelineState, MTLDevice, MTLHeap, MTLIntersectionFunctionTable, MTLIntersectionFunctionTableSPI><MTLResourceSPI, MTLRenderPipelineState;

@interface CaptureMTLIntersectionFunctionTable : NSObject
{
    id <MTLIntersectionFunctionTableSPI><MTLResourceSPI> _baseObject;
    id <MTLDevice> _captureDevice;
    id <MTLBuffer> _captureBuffer;
    id <MTLHeap> _captureHeap;
    id <MTLComputePipelineState> _captureComputePipelineState;
    id <MTLRenderPipelineState> _captureRenderPipelineState;
    NSMutableArray *_functions;
    NSMutableArray *_buffers;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
}

- (void).cxx_destruct;
@property(readonly) NSArray *functionArray; // @synthesize functionArray=_functions;
- (void)waitUntilComplete;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)makeAliasable;
- (_Bool)isPurgeable;
- (_Bool)isComplete;
- (_Bool)isAliasable;
- (_Bool)doesAliasResource:(id)arg1;
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (void)dealloc;
- (unsigned long long)bufferAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)uniqueIdentifier;
@property(readonly) unsigned long long unfilteredResourceOptions;
@property(readonly) unsigned long long storageMode;
@property int responsibleProcess;
@property(readonly) unsigned long long resourceOptions;
- (unsigned long long)resourceIndex;
@property(readonly) unsigned long long protectionOptions;
@property(copy) NSString *label;
@property(readonly) unsigned long long heapOffset;
@property(readonly) id <MTLHeap> heap;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) struct MTLResourceID gpuResourceID;
- (unsigned long long)gpuHandle;
- (void)setGlobalBufferOffset:(unsigned long long)arg1;
- (unsigned long long)globalBufferOffset;
- (void)setGlobalBuffer:(id)arg1;
- (id)globalBuffer;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly) unsigned long long allocationID;
@property(readonly) unsigned long long allocatedSize;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;
- (id)originalObject;
- (void)setVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setOpaqueTriangleIntersectionFunctionWithSignature:(unsigned long long)arg1 withRange:(struct _NSRange)arg2;
- (void)setOpaqueTriangleIntersectionFunctionWithSignature:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setFunctions:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setFunction:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
@property(readonly) id <MTLIntersectionFunctionTable> baseObject;
- (id)initWithBaseObject:(id)arg1 captureRenderPipelineState:(id)arg2 descriptor:(id)arg3;
- (id)initWithBaseObject:(id)arg1 captureComputePipelineState:(id)arg2 descriptor:(id)arg3;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2 descriptor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

