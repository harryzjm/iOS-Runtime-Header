//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSNumber, NSObject, NSString;
@protocol OS_dispatch_queue, VCStreamInputDelegate;

__attribute__((visibility("hidden")))
@interface VCStreamInput
{
    NSObject<OS_dispatch_queue> *_streamInputQueue;
    CDUnknownFunctionPointerType _sampleBufferHandler;
    NSNumber *_streamInputID;
    struct opaqueCMFormatDescription *_format;
    id <VCStreamInputDelegate> _strongDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    _Bool _isStarted;
    CDStruct_1b6d18a9 _lastBufferTime;
    CDStruct_1b6d18a9 _lastAveragedTime;
    _Atomic unsigned int _sampleBufferCount;
    double _estimatedJitter;
    double _lastTransitTime;
    struct opaqueVCRemoteImageQueue *_receiverQueue;
}

@property(readonly, nonatomic) NSNumber *streamInputID; // @synthesize streamInputID=_streamInputID;
- (void)didResumeStreamInputCaptureSource;
- (void)didSuspendStreamInputCaptureSource;
- (void)didStopStreamInputCaptureSource;
- (void)didStartStreamInputCaptureSource;
- (void)thermalLevelDidChange:(int)arg1;
- (_Bool)createRemoteReceiveQueue:(id)arg1;
@property(readonly) NSDictionary *reportingStats;
- (_Bool)isEqualFormat:(struct opaqueCMFormatDescription *)arg1;
- (struct opaqueCMFormatDescription *)streamFormat;
- (void)invalidate;
@property(readonly, nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
- (void)dealloc;
- (id)initWithStreamInputID:(id)arg1 format:(struct opaqueCMFormatDescription *)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 remoteQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

