//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSString;
@protocol MTLDevice, MTLHeap, MTLIndirectCommandBuffer, MTLIndirectCommandBufferSPI><MTLResourceSPI;

@interface CaptureMTLIndirectCommandBuffer : NSObject
{
    id <MTLIndirectCommandBufferSPI><MTLResourceSPI> _baseObject;
    CaptureMTLDevice *_captureDevice;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
}

- (void).cxx_destruct;
- (void)waitUntilComplete;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)resetWithRange:(struct _NSRange)arg1;
- (void)makeAliasable;
- (_Bool)isPurgeable;
- (_Bool)isComplete;
- (_Bool)isAliasable;
- (id)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (id)indirectComputeCommandAtIndex:(unsigned long long)arg1;
- (void)getHeader:(void **)arg1 headerSize:(unsigned long long *)arg2;
- (_Bool)doesAliasResource:(id)arg1;
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (void)dealloc;
- (unsigned long long)uniqueIdentifier;
@property(readonly) unsigned long long unfilteredResourceOptions;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long size;
@property int responsibleProcess;
@property(readonly) unsigned long long resourceOptions;
- (unsigned long long)resourceIndex;
@property(copy) NSString *label;
@property(readonly) unsigned long long heapOffset;
@property(readonly) id <MTLHeap> heap;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) struct MTLResourceID gpuResourceID;
- (unsigned long long)gpuHandle;
- (unsigned long long)gpuAddress;
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
@property(readonly) id <MTLIndirectCommandBuffer> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long protectionOptions;
@property(readonly) Class superclass;

@end

