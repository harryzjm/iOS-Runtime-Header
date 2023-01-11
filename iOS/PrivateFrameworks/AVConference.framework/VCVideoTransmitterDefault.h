//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCVideoTransmitterDefault
{
    struct tagHANDLE *_videoTransmitterHandle;
}

+ (double)minKeyFrameGenerationIntervalForMode:(int)arg1;
+ (void)setupBandwidthEstimationOptions:(struct tagBWEOPTION *)arg1 featureString:(id)arg2;
@property(readonly) struct tagHANDLE *videoTransmitterHandle; // @synthesize videoTransmitterHandle=_videoTransmitterHandle;
- (unsigned int)parameterSetForPayload:(int)arg1 pixelFormat:(unsigned int)arg2;
- (void)handleActiveConnectionChange:(id)arg1;
- (_Bool)setEncodingMode:(int)arg1;
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg1;
- (void)collectChannelMetrics:(CDStruct_3ab08b48 *)arg1 interval:(float)arg2;
- (void)setIsServerBasedBandwidthProbingEnabled:(_Bool)arg1;
- (void)computeTimestamp:(unsigned int *)arg1 hostTime:(double *)arg2 forFrame:(struct opaqueCMSampleBuffer *)arg3;
- (void)setFECRedundancyVector:(const CDStruct_cd7ddd1c *)arg1;
- (void)setFECRatio:(double)arg1;
- (void)setStreamIDs:(unsigned short *)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short *)arg3 numOfRepairedStreamIDs:(unsigned char)arg4;
- (void)setKeyFrameOnlyStreamID:(unsigned short)arg1;
- (_Bool)enqueueVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 cameraStatusBits:(unsigned char)arg3;
- (void)setTargetBitrate:(unsigned int)arg1;
- (unsigned int)setTemporaryMaximumBitrate:(unsigned int)arg1;
- (void)generateKeyFrame;
- (void)stopVideo;
- (void)startVideo;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

@end
