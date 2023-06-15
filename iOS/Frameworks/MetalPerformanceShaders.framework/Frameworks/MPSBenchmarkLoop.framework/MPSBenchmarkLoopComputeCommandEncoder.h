//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSCommandBuffer, MPSWorkloadInfoCapture, NSString;
@protocol MTLComputeCommandEncoder, MTLDevice;

@interface MPSBenchmarkLoopComputeCommandEncoder : NSObject
{
    MPSCommandBuffer *_owningMPSCommandBuffer;
    id <MTLComputeCommandEncoder> _originalCommandEncoder;
    void *_mpsDevice;
    MPSWorkloadInfoCapture *_currentWorkloadCapture;
}

@property(nonatomic) MPSWorkloadInfoCapture *currentWorkloadCapture; // @synthesize currentWorkloadCapture=_currentWorkloadCapture;
- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)endEncoding;
- (void)setComputePipelineState:(id)arg1;
- (void)dispatchThreadgroups:(CDStruct_da2e99ad)arg1 threadsPerThreadgroup:(CDStruct_da2e99ad)arg2;
- (void)dispatchThreads:(CDStruct_da2e99ad)arg1 threadsPerThreadgroup:(CDStruct_da2e99ad)arg2;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithMPSCommandBuffer:(id)arg1 commandEncoder:(id)arg2 mpsDevice:(void *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long dispatchType;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

