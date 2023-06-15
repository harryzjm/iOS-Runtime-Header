//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSArray, NSMutableArray, NSString;
@protocol MTLCommandQueue, MTLCommandQueueSPI, MTLDevice, OS_dispatch_queue;

@interface CaptureMTLCommandQueue : NSObject
{
    id <MTLCommandQueueSPI> _baseObject;
    CaptureMTLDevice *_captureDevice;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
    NSMutableArray *_pendingQueue;
    NSObject<OS_dispatch_queue> *_pendingQueueLock;
    id <MTLCommandQueue> _downloadQueue;
    id <MTLCommandQueue> _accelerationStructureDescriptorDownloadQueue;
    _Bool _perfSampleHandlerUsed;
}

- (void).cxx_destruct;
- (id)subdivideCounterList:(id)arg1;
- (void)setSubmissionQueue:(id)arg1;
- (_Bool)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (_Bool)setGPUPriority:(unsigned long long)arg1;
- (void)setCompletionQueue:(id)arg1;
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1;
- (int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2;
- (int)requestCounters:(id)arg1;
- (id)getRequestedCounters;
- (unsigned long long)getGPUPriority;
- (unsigned long long)getBackgroundGPUPriority;
- (void)finish;
- (id)counterInfo;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBufferWithDescriptor:(id)arg1;
- (id)commandBuffer;
- (id)availableCountersAndDict;
- (id)availableCounters;
@property _Bool skipRender;
@property(readonly) unsigned long long qosLevel;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property(readonly) unsigned long long maxCommandBufferCount;
@property(copy) NSString *label;
@property(readonly) _Bool isOpenGLQueue;
@property _Bool executionEnabled;
@property(readonly) _Bool disableCrossQueueHazardTracking;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property(readonly) _Bool commitSynchronously;
@property(readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property int backgroundTrackingPID;
@property(nonatomic, getter=getStatOptions) unsigned long long StatOptions;
@property(nonatomic, getter=getStatLocations) unsigned long long StatLocations;
@property(nonatomic, getter=isStatEnabled) _Bool StatEnabled;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;
- (id)originalObject;
- (void)addPerfSampleHandler:(CDUnknownBlockType)arg1;
@property(readonly) NSArray *enqueuedCommandBuffers;
- (void)commitCommandBuffer:(id)arg1;
- (void)enqueueCommandBuffer:(id)arg1;
- (void)dealloc;
- (void)insertDebugCaptureBoundary;
@property(readonly) id <MTLCommandQueue> baseObject;
@property(readonly) id <MTLCommandQueue> accelerationStructureDescriptorDownloadQueue;
@property(readonly) id <MTLCommandQueue> downloadQueue;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

