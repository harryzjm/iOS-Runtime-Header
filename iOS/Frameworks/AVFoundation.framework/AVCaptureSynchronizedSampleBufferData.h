//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCaptureSynchronizedSampleBufferDataInternal;

@interface AVCaptureSynchronizedSampleBufferData
{
    AVCaptureSynchronizedSampleBufferDataInternal *_internal;
}

- (_Bool)hasCorrespondingVisionData;
- (_Bool)hasCorrespondingDepthData;
@property(readonly) long long droppedReason;
@property(readonly) _Bool sampleBufferWasDropped;
@property(readonly) struct opaqueCMSampleBuffer *sampleBuffer;
- (void)dealloc;
- (id)_initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 sampleBufferWasDropped:(_Bool)arg2;

@end

