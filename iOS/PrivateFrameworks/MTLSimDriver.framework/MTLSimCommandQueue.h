//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/_MTLCommandQueue.h>

#import <MTLSimDriver/MTLCommandQueueSPI-Protocol.h>

@class MTLSimBufferStoragePool, MTLSimCommandStoragePool, NSObject, NSString;
@protocol MTLDevice, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MTLSimCommandQueue : _MTLCommandQueue <MTLCommandQueueSPI>
{
    MTLSimCommandStoragePool *commandPool;
    MTLSimBufferStoragePool *bufferPool;
    unsigned int _commandQueueRef;
    id <MTLDevice> _device;
    unsigned long long bufferStorageByteCount;
}

@property(readonly) unsigned long long bufferStorageByteCount; // @synthesize bufferStorageByteCount;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (id)counterInfo;
- (id)getRequestedCounters;
- (int)requestCounters:(id)arg1;
- (id)availableCounters;
- (void)returnBufferStorage:(struct BufferStorageEntry *)arg1;
- (struct BufferStorageEntry *)getBufferStorage;
- (void)returnCommandBufferStorage:(struct StorageEntry *)arg1;
- (struct StorageEntry *)getCommandBufferStorage;
- (void)submitCommandBuffers:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (_Bool)setGPUPriority:(unsigned long long)arg1;
- (void)setCompletionQueue:(id)arg1;
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1;
- (unsigned long long)getGPUPriority;
- (unsigned long long)getBackgroundGPUPriority;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBuffer;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 commandQueueRef:(unsigned int)arg2 descriptor:(id)arg3;
- (id)initWithDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2;

// Remaining properties
@property(nonatomic, getter=isStatEnabled) _Bool StatEnabled;
@property(nonatomic, getter=getStatLocations) unsigned long long StatLocations;
@property(nonatomic, getter=getStatOptions) unsigned long long StatOptions;
@property int backgroundTrackingPID;
@property(readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property(readonly) _Bool commitSynchronously;
@property(readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) _Bool disableCrossQueueHazardTracking;
@property _Bool executionEnabled;
@property(readonly) unsigned long long hash;
@property _Bool isOpenGLQueue;
@property(copy) NSString *label;
@property(readonly) unsigned long long maxCommandBufferCount;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property(readonly) unsigned long long qosLevel;
@property _Bool skipRender;
@property(readonly) Class superclass;

@end
