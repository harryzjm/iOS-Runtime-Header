//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLBuffer, MTLBufferSPI><MTLResourceSPI, MTLDevice, MTLHeap;

@interface CaptureMTLBuffer : NSObject
{
    id <MTLBufferSPI><MTLResourceSPI> _baseObject;
    id <MTLDevice> _captureDevice;
    id <MTLHeap> _captureHeap;
    id <MTLBuffer> _captureRemoteStorageBuffer;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
}

- (void).cxx_destruct;
- (id)_quicklookData;
- (void)waitUntilComplete;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)removeAllDebugMarkers;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (_Bool)isPurgeable;
- (_Bool)isComplete;
- (_Bool)isAliasable;
- (_Bool)doesAliasResource:(id)arg1;
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (void)didModifyRange:(struct _NSRange)arg1;
- (void)addDebugMarker:(id)arg1 range:(struct _NSRange)arg2;
- (struct __IOSurface *)_aneIOSurface;
@property(readonly) unsigned long long unfilteredResourceOptions;
@property(readonly) unsigned long long storageMode;
@property int responsibleProcess;
@property(readonly) unsigned long long resourceOptions;
@property(readonly, nonatomic) unsigned long long resourceIndex;
@property(nonatomic) unsigned long long parentGPUSize;
@property(nonatomic) unsigned long long parentGPUAddress;
@property(readonly) unsigned long long length;
@property(copy) NSString *label;
@property(readonly) struct __IOSurface *iosurface;
@property(readonly) unsigned long long heapOffset;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) unsigned long long gpuAddress;
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
- (void)makeAliasable;
- (void *)contents;
@property(readonly) id <MTLHeap> heap;
@property(readonly) id <MTLBuffer> baseObject;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 captureBuffer:(id)arg2;
- (id)initWithBaseObject:(id)arg1 captureHeap:(id)arg2;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long protectionOptions;
@property(readonly) Class superclass;

@end

