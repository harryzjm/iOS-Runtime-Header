//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLGPUDebugBufferEncoder-Protocol.h>

@class MTLGPUDebugDevice;
@protocol MTLArgumentEncoder, MTLBuffer;

@interface MTLGPUDebugCommandBuffer <MTLGPUDebugBufferEncoder>
{
    struct Options *_options;
    id <MTLArgumentEncoder> _stageArgumentEncoder;
    id <MTLBuffer> _vertexComputeReportBuffer;
    unsigned long long _vertexComputeReportOffset;
    id <MTLBuffer> _fragmentReportBuffer;
    unsigned long long _fragmentReportOffset;
    struct vector<MetalBuffer, std::__1::allocator<MetalBuffer>> _usedBuffers;
    struct MetalBuffer _currentPooledBuffer;
    unsigned long long _currentPooledBufferOffset;
    unsigned int _currentEncoderID;
    unsigned int _currentReportID;
    struct vector<id<MTLBuffer>, std::__1::allocator<id<MTLBuffer>>> _reportBufferList;
    struct vector<ReportBufferEntry, std::__1::allocator<ReportBufferEntry>> _reportEntryList;
    struct vector<NSString *, std::__1::allocator<NSString *>> _encoderLabels;
    struct mutex _allocationLock;
    struct os_unfair_lock_s _tempBufLock;
    _Bool _supportsTileStage;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)preCompletionHandlers;
- (id)blitCommandEncoderWithDescriptor:(id)arg1;
- (id)blitCommandEncoder;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDUnion_c6e49ed4 *)arg1 capacity:(unsigned long long)arg2;
- (id)computeCommandEncoder;
- (id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;
- (id)computeCommandEncoderWithDescriptor:(id)arg1;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (void)_encodeReportBuffer:(id)arg1 type:(unsigned long long)arg2;
- (struct ReportBufferEntry)_allocReportEntryStorageForType:(unsigned long long)arg1;
- (id)_newReportBuffer;
- (id)encodeBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3 resultOffset:(unsigned long long *)arg4;
- (void)endingEncoder:(id)arg1 type:(unsigned long long)arg2;
- (void)beginingEncoder:(id)arg1 type:(unsigned long long)arg2;
- (void)_checkReportBuffers;
- (id)_encoderIdentifierForEncoderIndex:(unsigned int)arg1;
- (id)temporaryBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)temporaryBufferWithLength:(unsigned long long)arg1;
- (pair_eb21f6dd)_temporaryBufferWithLength:(unsigned long long)arg1;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2;

// Remaining properties
@property(readonly) MTLGPUDebugDevice *device; // @dynamic device;

@end
