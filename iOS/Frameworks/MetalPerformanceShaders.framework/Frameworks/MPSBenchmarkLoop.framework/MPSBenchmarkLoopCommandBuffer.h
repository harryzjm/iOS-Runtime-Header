//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MPSCore/MPSCommandBuffer.h>

@class MPSWorkloadInfoCapture;

@interface MPSBenchmarkLoopCommandBuffer : MPSCommandBuffer
{
    MPSWorkloadInfoCapture *_currentWorkloadCapture;
}

@property(nonatomic) MPSWorkloadInfoCapture *currentWorkloadCapture; // @synthesize currentWorkloadCapture=_currentWorkloadCapture;
- (void)dealloc;
- (id)blitCommandEncoder;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (id)computeCommandEncoder;
- (id)initWithCommandBuffer:(id)arg1;

@end

